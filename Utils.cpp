#include "Utils.h"
#include "overlay.h"
#include <vector>
#include <list>
#include <iostream>
#include <string>

using namespace std;
typedef uint64_t(*decrypt_func)(uint64_t);

struct tsl {
	decrypt_func func;
};

int tsl_init(struct tsl *tsl);
void tsl_finit(struct tsl *tsl);
uint64_t tsl_decrypt_world(struct tsl *tsl, uint64_t world);
uint64_t tsl_decrypt_actor(struct tsl *tsl, uint64_t actor);
uint64_t tsl_decrypt_prop(struct tsl *tsl, uint64_t prop);

int tsl_init(struct tsl *tsl) {
	tsl->func = (decrypt_func)VirtualAlloc(NULL, 0x400, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	if (tsl->func == NULL) {
		return 0;
	}
	return 1;
}

void tsl_finit(struct tsl *tsl) {
	if (tsl->func != NULL) {
		VirtualFree(tsl->func, 0, MEM_RELEASE);
		tsl->func = NULL;
	}
}

// ida

#define BYTEn(x, n) (*((BYTE *)&(x) + n))
#define WORDn(x, n) (*((WORD *)&(x) + n))
#define DWORDn(x, n) (*((DWORD *)&(x) + n))

#define IDA_LOBYTE(x) BYTEn(x, 0)
#define IDA_LOWORD(x) WORDn(x, 0)
#define IDA_LODWORD(x) WORDn(x, 0)
#define IDA_HIBYTE(x) BYTEn(x, 1)
#define IDA_HIWORD(x) WORDn(x, 1)
#define IDA_HIDWORD(x) DWORDn(x, 1)

#define BYTE1(x) BYTEn(x, 1)
#define BYTE2(x) BYTEn(x, 2)
#define WORD1(x) WORDn(x, 1)
#define DWORD1(x) DWORDn(x, 1)

// rotate

static uint8_t rol1(uint8_t x, unsigned int count) {
	count %= 8;
	return (x << count) | (x >> (8 - count));
}

static uint16_t rol2(uint16_t x, unsigned int count) {
	count %= 16;
	return (x << count) | (x >> (16 - count));
}

static uint32_t rol4(uint32_t x, unsigned int count) {
	count %= 32;
	return (x << count) | (x >> (32 - count));
}

static uint64_t rol8(uint64_t x, unsigned int count) {
	count %= 64;
	return (x << count) | (x >> (64 - count));
}

static uint8_t ror1(uint8_t x, unsigned int count) {
	count %= 8;
	return (x << (8 - count)) | (x >> count);
}

static uint16_t ror2(uint16_t x, unsigned int count) {
	count %= 16;
	return (x << (16 - count)) | (x >> count);
}

static uint32_t ror4(uint32_t x, unsigned int count) {
	count %= 32;
	return (x << (32 - count)) | (x >> count);
}

static uint64_t ror8(uint64_t x, unsigned int count) {
	count %= 64;
	return (x << (64 - count)) | (x >> count);
}

// macro

// bool read_size(uint64_t src, void *dest, size_t size)
#define READ(src, dest, size) mem->read_size(src, dest, size)
// template<typename T> T read(uint64_t addr)
#define READ32(addr) mem->read<uint32_t>(addr)
#define READ64(addr) mem->read<uint64_t>(addr)

#define GET_ADDR(addr) (mem->GetBase() + addr)

// credit: DirtyFrank

static uint32_t get_func_len(struct tsl *tsl, uint64_t func, uint8_t start, uint32_t end) {
	uint8_t buf[0x80];
	if (READ(func, buf, sizeof(buf))) {
		if (buf[0] == start) {
			uint32_t len = 0;
			for (; len < (sizeof(buf) - sizeof(end)); len++) {
				if (*(uint32_t *)(buf + len) == end) {
					return len;
				}
			}
		}
	}
	return 0;
}

static int make_decrypt_func(struct tsl *tsl, uint64_t func) {
	uint64_t x = (func + 14) + READ32(func + 10, sizeof(DWORD));
	uint32_t len = get_func_len(tsl, x, 0x48, 0xccccccc3);
	if (!len || len > 0xf) {
		return 0;
	}
	if (!READ(func, tsl->func, 9) ||
		!READ(x, (char *)tsl->func + 9, len) ||
		!READ(func + 14, (char *)tsl->func + 9 + len, 0x50)) {
		return 0;
	}
	return 1;
}

// exports

#define TABLE 0x3c71120

struct uint128_t {
	uint64_t low;
	uint64_t high;
};

uint64_t tsl_decrypt_world(struct tsl *tsl, uint64_t world) {
	struct uint128_t xmm;
	if (!READ(world, &xmm, 16)) {
		return 0;
	}
	uint32_t key = (uint32_t)xmm.low;
	uint16_t x;
	uint16_t y;
	x = ror2(key + 85, -85);
	y = x ^ (ror2(IDA_HIWORD(key) - 95, 95) + 55643);
	uint64_t func = READ64(GET_ADDR(TABLE) + 0x8 * ((ror1((x ^ (ror2(IDA_HIWORD(key) - 95, 95) + 91)) + 125, -125) ^ (ror1(BYTE1(y), 77) + 138)) % 128));
	if (!make_decrypt_func(tsl, func)) {
		return 0;
	}
	uint64_t ret = tsl->func(key ^ rol8(xmm.high - key, key & 7));
	memset(tsl->func, 0, 0x400);

	cout << "World decrypted: 0x" << hex << ror8(ret, -17) << endl;

	return ror8(ret, -17);
}

uint64_t tsl_decrypt_actor(struct tsl *tsl, uint64_t actor) {
	struct uint128_t xmm;
	if (!READ(actor, &xmm, 16)) {
		return 0;
	}
	uint32_t key = (uint32_t)xmm.low;
	uint64_t func = READ64(GET_ADDR(TABLE) + 0x8 * ((rol1(((BYTE2(key) + 84) ^ rol2(key + 102, 102)) - 106, -106) ^ (ror1(((uint16_t)((WORD1(key) - 114 + 25286) ^ rol2(key + 102, 102)) >> 8) - 10, 10) + 244)) % 128));
	if (!make_decrypt_func(tsl, func)) {
		return 0;
	}
	uint64_t ret = tsl->func(ror8(xmm.high, key & 7) + key);
	memset(tsl->func, 0, 0x400);
	return ror8(ret, -82);
}

uint64_t tsl_decrypt_prop(struct tsl *tsl, uint64_t prop) {
	struct uint128_t xmm;
	if (!READ(prop, &xmm, 16)) {
		return 0;
	}
	uint32_t key = (uint32_t)xmm.low;
	uint16_t x;
	uint16_t y;
	uint16_t z;
	uint16_t w;
	uint8_t q;
	uint8_t e;
	uint32_t r; // uint8_t
	uint64_t t;
	if (key & 1) {
		x = rol2(key, 31);
	}
	else {
		x = ror2(key, 31);
	}
	y = key >> 16;
	if (key & 0x10000) {
		z = rol2(y, -125);
	}
	else {
		z = ror2(y, -125);
	}
	w = x ^ (z + 54543);
	q = x ^ (z + 15);
	if (w & 1) {
		e = rol1(q, -105);
	}
	else {
		e = ror1(q, -105);
	}
	r = e ^ ((uint8_t)~(~BYTE1(w) + 7) + 34);
	if (key & 2) {
		t = xmm.high - key;
	}
	else {
		t = key + xmm.high;
	}
	uint64_t func = READ64(GET_ADDR(TABLE) + 0x8 * (r % 128));
	if (!make_decrypt_func(tsl, func)) {
		return 0;
	}
	uint64_t ret = tsl->func(~t);
	memset(tsl->func, 0, 0x400);
	return ror8(ret, -45);
}


//defining data
int s_width = 1920;
int s_height = 1080;
LPDIRECT3D9 d3d;
LPDIRECT3DDEVICE9 d3ddev;
HWND hWnd;
HWND twnd;
MARGINS  margin = { 0,0,s_width,s_height };
LPD3DXFONT pFont;
ID3DXLine* d3dLine;
CMem* mem;
struct tsl tsl;

list<int> upper_part = { Bones::neck_01, Bones::Head, Bones::forehead };
list<int> right_arm = { Bones::neck_01, Bones::upperarm_r, Bones::lowerarm_r, Bones::hand_r };
list<int> left_arm = { Bones::neck_01, Bones::upperarm_l, Bones::lowerarm_l, Bones::hand_l };
list<int> spine = { Bones::neck_01, Bones::spine_01, Bones::spine_02, Bones::pelvis };

list<int> lower_right = { Bones::pelvis, Bones::thigh_r, Bones::calf_r, Bones::foot_r };
list<int> lower_left = { Bones::pelvis, Bones::thigh_l, Bones::calf_l, Bones::foot_l };

list<list<int>> skeleton = { upper_part, right_arm, left_arm, spine, lower_right, lower_left };

int ActorIds[4];
int uaz[3];
int dacia[4];
int motorbike[5];
int buggy[3];
int boat = 0;
int itemtype[2];

D3DXMATRIX Matrix(Vector3 rot, Vector3 origin = Vector3(0, 0, 0))
{
	float radPitch = (rot.x * float(M_PI) / 180.f);
	float radYaw = (rot.y * float(M_PI) / 180.f);
	float radRoll = (rot.z * float(M_PI) / 180.f);

	float SP = sinf(radPitch);
	float CP = cosf(radPitch);
	float SY = sinf(radYaw);
	float CY = cosf(radYaw);
	float SR = sinf(radRoll);
	float CR = cosf(radRoll);

	D3DMATRIX matrix;
	matrix.m[0][0] = CP * CY;
	matrix.m[0][1] = CP * SY;
	matrix.m[0][2] = SP;
	matrix.m[0][3] = 0.f;

	matrix.m[1][0] = SR * SP * CY - CR * SY;
	matrix.m[1][1] = SR * SP * SY + CR * CY;
	matrix.m[1][2] = -SR * CP;
	matrix.m[1][3] = 0.f;

	matrix.m[2][0] = -(CR * SP * CY + SR * SY);
	matrix.m[2][1] = CY * SR - CR * SP * SY;
	matrix.m[2][2] = CR * CP;
	matrix.m[2][3] = 0.f;

	matrix.m[3][0] = origin.x;
	matrix.m[3][1] = origin.y;
	matrix.m[3][2] = origin.z;
	matrix.m[3][3] = 1.f;

	return matrix;
}

Vector3 WorldToScreen(Vector3 WorldLocation, FCameraCacheEntry CameraCacheL)
{
	Vector3 Screenlocation = Vector3(0, 0, 0);

	auto POV = CameraCacheL.POV;
	Vector3 Rotation = POV.Rotation; // FRotator

	D3DMATRIX tempMatrix = Matrix(Rotation); // Matrix

	Vector3 vAxisX, vAxisY, vAxisZ;

	vAxisX = Vector3(tempMatrix.m[0][0], tempMatrix.m[0][1], tempMatrix.m[0][2]);
	vAxisY = Vector3(tempMatrix.m[1][0], tempMatrix.m[1][1], tempMatrix.m[1][2]);
	vAxisZ = Vector3(tempMatrix.m[2][0], tempMatrix.m[2][1], tempMatrix.m[2][2]);

	Vector3 vDelta = WorldLocation - POV.Location;
	Vector3 vTransformed = Vector3(vDelta.Dot(vAxisY), vDelta.Dot(vAxisZ), vDelta.Dot(vAxisX));

	if (vTransformed.z < 1.f)
		vTransformed.z = 1.f;

	float FovAngle = POV.FOV;
	float ScreenCenterX = s_width / 2.0f;
	float ScreenCenterY = s_height / 2.0f;

	Screenlocation.x = ScreenCenterX + vTransformed.x * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;
	Screenlocation.y = ScreenCenterY - vTransformed.y * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;

	return Screenlocation;
}

void UpdateAddresses()
{
	if (!mem)
		return;

	if (!tsl_init(&tsl)) {
		// what?
	}

	Ptr::uWorld = tsl_decrypt_world(&tsl, mem->GetBase() + 0x41ceb30);
	cout << "uWorld: 0x" << hex << Ptr::uWorld << endl;

	Ptr::level = tsl_decrypt_prop(&tsl, Ptr::uWorld + 0x30);
	cout << "level: 0x" << hex << Ptr::level << endl;

	Ptr::gameInstance = READ64(Ptr::uWorld + 0x148);
	cout << "gInstance: 0x" << hex << Ptr::gameInstance << endl;

	Ptr::localPlayer = tsl_decrypt_prop(&tsl, READ64(Ptr::gameInstance + 0x38));
	cout << "localPlayer: 0x" << hex << Ptr::localPlayer << endl;

	Ptr::playerController = tsl_decrypt_prop(&tsl, Ptr::localPlayer + 0x30);
	Ptr::playerCameraManager = READ64(Ptr::playerController + 0x498);
	Ptr::viewportClient = READ64(Ptr::localPlayer + 0x60);
	Ptr::pWorld = READ64(Ptr::viewportClient + 0x80);

	Ptr::actor = tsl_decrypt_actor(&tsl, Ptr::level + 0xa0);
	Ptr::actorList = READ64(Ptr::actor);
	Ptr::actorCount = READ32(Ptr::actor + 0x8);

	Ptr::localPlayerActor = tsl_decrypt_prop(&tsl, Ptr::playerController + 0x470);

	Ptr::gNames = READ64(mem->GetBase() + 0x3f67a28);

	tsl_finit(&tsl);
}

Vector3 GetLocalPlayerPos()
{
	Vector3 pos;
	if (!mem)
		return pos;
	pos = mem->read<Vector3>(global::pLocalPlayer + 0x70, 0xC);

	return pos;
}

Vector3 GetActorPos(DWORD_PTR entity)
{
	Vector3 pos;
	if (!mem)
		return pos;
	auto rootcomp = mem->read<DWORD_PTR>(entity + 0x180, 8);
	pos = mem->read<Vector3>((DWORD_PTR)rootcomp + 0x174, 0xC);

	return pos;
}

float GetLocalPlayerHealth()
{
	if (!mem)
		return 0.f;
	auto playercontroller = mem->read<DWORD_PTR>(global::pLocalPlayer + 0x30, 8);
	auto pawn = mem->read<DWORD_PTR>(playercontroller + 0x418, 8);
	return mem->read<float>(pawn + 0x107C, 0x4);
}

float GetActorHealth(DWORD_PTR pAActor)
{
	if (!mem)
		return 0.f;
	return mem->read<float>(pAActor + 0x107C, 0x4);
}

DWORD_PTR GetEntityList()
{
	if (!mem)
		return 0;
	return mem->read<DWORD_PTR>(mem->read<DWORD_PTR>(global::pUWorld + 0x30, 0x8) + 0xA0, 0x8);
}

FCameraCacheEntry GetCameraCache()
{
	FCameraCacheEntry cce;
	if (!mem)
		return cce;
	auto playercontroller = mem->read<DWORD_PTR>(global::pLocalPlayer + 0x30, 8);
	cce = mem->read<FCameraCacheEntry>(mem->read<DWORD_PTR>(playercontroller + 0x438, 0x8) + 0x410, sizeof(FCameraCacheEntry));
	return cce;
}


std::string GetNameFromId(int ID)
{
	DWORD_PTR fNamePtr = mem->read<DWORD_PTR>(mem->read<DWORD_PTR>(mem->GetBase() + 0x36DA610, 0x8) + int(ID / 0x4000) * 8, 8);
	DWORD_PTR fName = mem->read<DWORD_PTR>(fNamePtr + 8 * int(ID % 0x4000), 8);
	char name[64] = { NULL };
	if (ReadProcessMemory(mem->GetHandle(), (LPVOID)(fName + 16), name, sizeof(name) - 2, NULL) != 0)
		return std::string(name);
	return std::string("NULL");
}

void CacheNames()
{
	string name = "";
	for (int i = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0; i < 200000; i++)
	{
		if (c1 == 4 && c2 == 3 && c3 == 4 && c4 == 5 && c5 == 3 && boat != 0 && c6 == 2)
		{
			cout << "IDs retrieved" << endl;
			return;
		}
		name = GetNameFromId(i);
		if (name == "PlayerFemale_A" || name == "PlayerFemale_A_C" || name == "PlayerMale_A" || name == "PlayerMale_A_C")
		{
			cout << name << " " << i << endl;
			ActorIds[c1++] = i;
		}
		if (name == "Uaz_A_01_C" || name == "Uaz_B_01_C" || name == "Uaz_C_01_C")
		{
			uaz[c2++] = i;
			cout << name << " " << i << endl;
		}
		if (name == "Dacia_A_01_C" || name == "Dacia_A_02_C" || name == "Dacia_A_03_C" || name == "Dacia_A_04_C")
		{
			dacia[c3++] = i;
			cout << name << " " << i << endl;
		}
		if (name == "ABP_Motorbike_03_C" || name == "ABP_Motorbike_04_C" || name == "ABP_Motorbike_03_C" || name == "ABP_Motorbike_04_C" || name == "ABP_Motorbike_03_Sidecart_C" || name == "BP_Motorbike_04_SideCar_C" || name == "BP_Motorbike_04_C")
		{
			cout << name << " " << i << endl;
			motorbike[c4++] = i;
		}
		if (name == "Buggy_A_01_C" || name == "Buggy_A_02_C" || name == "Buggy_A_03_C")
		{
			cout << name << " " << i << endl;
			buggy[c5++] = i;
		}
		if (name == "Boat_PG117_C")
		{
			cout << name << " " << i << endl;
			boat = i;
		}
		if (name == "DroppedItemInteractionComponent" || name == "DroppedItemGroup")
		{
			cout << name << " " << i << endl;
			itemtype[c6++] = i;
		}
	}
}

int isUaz(int id)
{
	for (int i = 0; i < 3; i++)
		if (id == uaz[i])
			return 1;
	return 0;
}

int isDacia(int id)
{
	for (int i = 0; i < 4; i++)
		if (id == dacia[i])
			return 1;
	return 0;
}

int isBuggy(int id)
{
	for (int i = 0; i < 3; i++)
		if (id == buggy[i])
			return 1;
	return 0;
}

int isBike(int id)
{
	for (int i = 0; i < 5; i++)
		if (id == motorbike[i])
			return 1;
	return 0;
}

int isBoat(int id)
{
	return id == boat;
}

void DrawVehicle(DWORD_PTR entity, Vector3 local, const char* txt)
{
	Vector3 pos = GetActorPos(entity);
	Vector3 spos = WorldToScreen(pos, global::cameracache);
	DrawString((int)spos.x, (int)spos.y, D3DCOLOR_ARGB(255, 160, 32, 240), pFont, txt, local.Distance(pos) / 100.f);
}

D3DMATRIX MatrixMultiplication(D3DMATRIX pM1, D3DMATRIX pM2)
{
	D3DMATRIX pOut;
	pOut._11 = pM1._11 * pM2._11 + pM1._12 * pM2._21 + pM1._13 * pM2._31 + pM1._14 * pM2._41;
	pOut._12 = pM1._11 * pM2._12 + pM1._12 * pM2._22 + pM1._13 * pM2._32 + pM1._14 * pM2._42;
	pOut._13 = pM1._11 * pM2._13 + pM1._12 * pM2._23 + pM1._13 * pM2._33 + pM1._14 * pM2._43;
	pOut._14 = pM1._11 * pM2._14 + pM1._12 * pM2._24 + pM1._13 * pM2._34 + pM1._14 * pM2._44;
	pOut._21 = pM1._21 * pM2._11 + pM1._22 * pM2._21 + pM1._23 * pM2._31 + pM1._24 * pM2._41;
	pOut._22 = pM1._21 * pM2._12 + pM1._22 * pM2._22 + pM1._23 * pM2._32 + pM1._24 * pM2._42;
	pOut._23 = pM1._21 * pM2._13 + pM1._22 * pM2._23 + pM1._23 * pM2._33 + pM1._24 * pM2._43;
	pOut._24 = pM1._21 * pM2._14 + pM1._22 * pM2._24 + pM1._23 * pM2._34 + pM1._24 * pM2._44;
	pOut._31 = pM1._31 * pM2._11 + pM1._32 * pM2._21 + pM1._33 * pM2._31 + pM1._34 * pM2._41;
	pOut._32 = pM1._31 * pM2._12 + pM1._32 * pM2._22 + pM1._33 * pM2._32 + pM1._34 * pM2._42;
	pOut._33 = pM1._31 * pM2._13 + pM1._32 * pM2._23 + pM1._33 * pM2._33 + pM1._34 * pM2._43;
	pOut._34 = pM1._31 * pM2._14 + pM1._32 * pM2._24 + pM1._33 * pM2._34 + pM1._34 * pM2._44;
	pOut._41 = pM1._41 * pM2._11 + pM1._42 * pM2._21 + pM1._43 * pM2._31 + pM1._44 * pM2._41;
	pOut._42 = pM1._41 * pM2._12 + pM1._42 * pM2._22 + pM1._43 * pM2._32 + pM1._44 * pM2._42;
	pOut._43 = pM1._41 * pM2._13 + pM1._42 * pM2._23 + pM1._43 * pM2._33 + pM1._44 * pM2._43;
	pOut._44 = pM1._41 * pM2._14 + pM1._42 * pM2._24 + pM1._43 * pM2._34 + pM1._44 * pM2._44;

	return pOut;
}


FTransform GetBoneIndex(DWORD_PTR mesh, int index)
{
	DWORD_PTR bonearray = mem->read<DWORD_PTR>(mesh + 0x790, 0x8);

	return mem->read<FTransform>(bonearray + (index * 0x30), sizeof(FTransform));
}

Vector3 GetBoneWithRotation(DWORD_PTR mesh, int id)
{
	FTransform bone = GetBoneIndex(mesh, id);

	FTransform ComponentToWorld = mem->read<FTransform>(mesh + 0x190, sizeof(FTransform));
	D3DMATRIX Matrix;
	Matrix = MatrixMultiplication(bone.ToMatrixWithScale(), ComponentToWorld.ToMatrixWithScale());
	return Vector3(Matrix._41, Matrix._42, Matrix._43);
}

void DrawSkeleton(DWORD_PTR mesh)
{
	Vector3 neckpos = GetBoneWithRotation(mesh, Bones::neck_01);
	Vector3 pelvispos = GetBoneWithRotation(mesh, Bones::pelvis);
	Vector3 previous(0, 0, 0);
	Vector3 current, p1, c1;
	for (auto a : skeleton)
	{
		previous = Vector3(0, 0, 0);
		for (int bone : a)
		{
			current = bone == Bones::neck_01 ? neckpos : (bone == Bones::pelvis ? pelvispos : GetBoneWithRotation(mesh, bone));
			if (previous.x == 0.f)
			{
				previous = current;
				continue;
			}
			p1 = WorldToScreen(previous, global::cameracache);
			c1 = WorldToScreen(current, global::cameracache);
			DrawLine(p1.x, p1.y, c1.x, c1.y, D3DCOLOR_ARGB(255, 153, 249, 9));
			previous = current;
		}
	}
}
