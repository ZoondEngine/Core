#include "Utils.h"
#include "overlay.h"
#include "Headers.h"
#include "SDK.hpp"

//definitions
namespace global
{
	DWORD_PTR pUWorld = 0;
	DWORD_PTR pGameInstance = 0;
	DWORD_PTR pLocalPlayerArray = 0;
	DWORD_PTR pLocalPlayer = 0;
	DWORD_PTR pViewportClient = 0;
	FCameraCacheEntry cameracache = { NULL };
	HANDLE HProcess = nullptr;
}

namespace Ptr
{
	uint64_t uWorld = 0;
	uint64_t level = 0;
	uint64_t gameInstance = 0;
	uint64_t localPlayer = 0;
	uint64_t playerController = 0;
	uint64_t playerCameraManager = 0;
	uint64_t viewportClient = 0;
	uint64_t pWorld = 0;
	uint64_t actor = 0;
	uint64_t actorList = 0;
	uint32_t actorCount = 0;
	uint64_t localPlayerActor = 0;
	uint64_t gNames = 0;
}

namespace PlayerHooks
{
	bool ShowPlayer         = false;
	bool ShowPlayerName     = false;
	bool ShowPlayerHP       = false;
	bool ShowPlayerBox      = false;
	bool ShowPlayerDistance = false;
}
namespace VehicleHooks
{
	bool ShowVehicle = false;
}
namespace LootHooks
{
	bool ShowAllLoot     = false;
	bool Show1LvlLoot    = false;
	bool Show2LvlLoot    = false;
	bool Show3LvlLoot    = false;
	bool ShowAttachLoot  = false;
	bool ShowMedicalLoot = false;
}
namespace AimHooks
{
	bool AimEnable       = false;
	bool InvisibleAim    = false;
	int  AimIndex        = 1;
	int  AimSmooth       = 0;
	int  AimDistance     = 0;
}
namespace MiscHooks
{
	bool ShowRadar = false;
}

void ESP()
{
    #pragma region Vehicle hooks
	if (GetAsyncKeyState(VK_NUMPAD0) & 1) //VehicleHooks::ShowVehicle
	{
		if (VehicleHooks::ShowVehicle)
		{
			VehicleHooks::ShowVehicle = false;
			//DrawLine("[VH]ShowVehicle -> Disabled", Colors.Red);
		}
		else
		{
			VehicleHooks::ShowVehicle = true;
			//DrawLine("[VH]ShowVehicle -> Enabled", Colors.Green);
		}
	}
    #pragma endregion

	#pragma region Player hooks
	
	//PlayerHooks::ShowPlayer
	if (GetAsyncKeyState(VK_NUMPAD1) & 1) 
	{
		if (PlayerHooks::ShowPlayer)
		{
			cout << "NUMPAD1 Enabled" << endl;
			PlayerHooks::ShowPlayer = false;
			DrawString(0, 0, D3DCOLOR_ARGB(0, 0, 255, 120), pFont, "[PH]ShowPlayer -> Disabled");
		}
		else
		{
			cout << "NUMPAD1 Disabled" << endl;
			PlayerHooks::ShowPlayer = true;
			DrawString(0, 0, D3DCOLOR_ARGB(0, 0, 255, 120), pFont, "[PH]ShowPlayer -> Enabled");
		}
	}

	//PlayerHooks::ShowPlayerBox
	if (GetAsyncKeyState(VK_NUMPAD2) & 1)
	{
		if (PlayerHooks::ShowPlayerBox)
		{
			PlayerHooks::ShowPlayerBox = false;
			//DrawLine("[PH]ShowPlayerBox -> Disabled", Colors.Red);
		}
		else
		{
			PlayerHooks::ShowPlayerBox = true;
			//DrawLine("[PH]ShowPlayerBox -> Enabled", Colors.Green);
		}
	}

	// PlayerHooks::ShowPlayerHP
	if (GetAsyncKeyState(VK_NUMPAD3) & 1)
	{
		if (PlayerHooks::ShowPlayerHP)
		{
			PlayerHooks::ShowPlayerHP = false;
			//DrawLine("[PH]ShowPlayerHP -> Disabled", Colors.Red);
		}
		else
		{
			PlayerHooks::ShowPlayerHP = true;
			//DrawLine("[PH]ShowPlayerHP -> Enabled", Colors.Green);
		}
	}

	// PlayerHooks::ShowPlayerName
	if (GetAsyncKeyState(VK_NUMPAD4) & 1)
	{
		if (PlayerHooks::ShowPlayerName)
		{
			PlayerHooks::ShowPlayerName = false;
			//DrawLine("[PH]ShowPlayerName -> Disabled", Colors.Red);
		}
		else
		{
			PlayerHooks::ShowPlayerName = true;
			//DrawLine("[PH]ShowPlayerName -> Enabled", Colors.Green);
		}
	}

	// PlayerHooks::ShowPlayerDistance
	if (GetAsyncKeyState(VK_NUMPAD5) & 1)
	{
		if (PlayerHooks::ShowPlayerDistance)
		{
			PlayerHooks::ShowPlayerDistance = false;
			//DrawLine("[PH]ShowPlayerDistance -> Disabled", Colors.Red);
		}
		else
		{
			PlayerHooks::ShowPlayerDistance = true;
			//DrawLine("[PH]ShowPlayerDistance -> Enabled", Colors.Green);
		}
	}

	#pragma endregion

	#pragma region Loot hooks

	// LootHooks::Show1LvlLoot
	if (GetAsyncKeyState(VK_F1) & 1)
	{
		if (LootHooks::Show1LvlLoot)
		{
			LootHooks::Show1LvlLoot = false;
			//DrawLine("[LH]Show1LvlLoot -> Disabled", Colors.Red);
		}
		else
		{
			LootHooks::Show1LvlLoot = true;
			//DrawLine("[LH]Show1LvlLoot -> Enabled", Colors.Green);
		}
	}

	// LootHooks::Show2LvlLoot
	if (GetAsyncKeyState(VK_F2) & 1)
	{
		if (LootHooks::Show2LvlLoot)
		{
			LootHooks::Show2LvlLoot = false;
			//DrawLine("[LH]Show2LvlLoot -> Disabled", Colors.Red);
		}
		else
		{
			LootHooks::Show2LvlLoot = true;
			//DrawLine("[LH]Show2LvlLoot -> Enabled", Colors.Green);
		}
	}

	// LootHooks::Show3LvlLoot
	if (GetAsyncKeyState(VK_F3) & 1)
	{
		if (LootHooks::Show3LvlLoot)
		{
			LootHooks::Show3LvlLoot = false;
			//DrawLine("[LH]Show3LvlLoot -> Disabled", Colors.Red);
		}
		else
		{
			LootHooks::Show3LvlLoot = true;
			//DrawLine("[LH]Show3LvlLoot -> Enabled", Colors.Green);
		}
	}

	// LootHooks::ShowAllLoot
	if (GetAsyncKeyState(VK_F4) & 1)
	{
		if (LootHooks::ShowAllLoot)
		{
			LootHooks::ShowAllLoot = false;
			//DrawLine("[LH]ShowAllLoot -> Disabled", Colors.Red);
		}
		else
		{
			LootHooks::ShowAllLoot = true;
			//DrawLine("[LH]ShowAllLoot -> Enabled", Colors.Green);
		}
	}

	// LootHooks::ShowAttachLoot
	if (GetAsyncKeyState(VK_F5) & 1)
	{
		if (LootHooks::ShowAttachLoot)
		{
			LootHooks::ShowAttachLoot = false;
			//DrawLine("[LH]ShowAttachLoot -> Disabled", Colors.Red);
		}
		else
		{
			LootHooks::ShowAttachLoot = true;
			//DrawLine("[LH]ShowAttachLoot -> Enabled", Colors.Green);
		}
	}

	// LootHooks::ShowMedicalLoot
	if (GetAsyncKeyState(VK_F6) & 1)
	{
		if (LootHooks::ShowMedicalLoot)
		{
			LootHooks::ShowMedicalLoot = false;
			//DrawLine("[LH]ShowMedicalLoot -> Disabled", Colors.Red);
		}
		else
		{
			LootHooks::ShowMedicalLoot = true;
			//DrawLine("[LH]ShowMedicalLoot -> Enabled", Colors.Green);
		}
	}

	#pragma endregion

	#pragma region Aim hooks

	//AimHooks::AimEnable
	if (GetAsyncKeyState(VK_F9) & 1)
	{
		if (AimHooks::AimEnable)
		{
			AimHooks::AimEnable = false;
			//DrawLine("[AH]Aimbot -> Disabled", Colors.Red);
		}
		else
		{
			AimHooks::AimEnable = true;
			//DrawLine("[AH]Aimbot -> Enabled", Colors.Green);
		}
	}

	//AimHooks::InvisibleAim
	if (GetAsyncKeyState(VK_F10) & 1)
	{
		if (AimHooks::InvisibleAim)
		{
			AimHooks::InvisibleAim = false;
			//DrawLine("[AH]InvisibleAim -> Disabled", Colors.Red);
		}
		else
		{
			AimHooks::InvisibleAim = true;
			//DrawLine("[AH]InvisibleAim -> Enabled", Colors.Green);
		}
	}

	//AimHooks::AimDistance UP M
	if (GetAsyncKeyState(VK_UP) & 1)
	{
		if (AimHooks::AimDistance == 1000)
		{
			AimHooks::AimDistance = 0;
			//DrawLine("[AH]AimDistance == 0", Colors.Green);
		}
		else
		{
			std::string value = "[AH]AimDistance == ";
			value += std::to_string(AimHooks::AimDistance);

			AimHooks::AimDistance += 100;
			//DrawLine(value, Colors.Green);
		}
	}

	//AimHooks::AimDistance DOWN M
	if (GetAsyncKeyState(VK_DOWN) & 1)
	{
		if (AimHooks::AimDistance == 0)
		{
			AimHooks::AimDistance = 0;
			//DrawLine("[AH]AimDistance == 0", Colors.Green);
		}
		else
		{
			std::string value = "[AH]AimDistance == ";
			value += std::to_string(AimHooks::AimDistance);

			AimHooks::AimDistance -= 100;
			//DrawLine(value, Colors.Green);
		}
	}

	//AimHooks::AimIndex
	if (GetAsyncKeyState(VK_LEFT) & 1)
	{
		if (AimHooks::AimIndex == 3)
		{
			AimHooks::AimIndex = 1;
			//DrawLine("[AH]AimIndex == 0", Colors.Green);
		}
		else
		{
			std::string value = "[AH]AimIndex == ";
			//value += std::to_string(GetNameIndexById(AimHooks::AimIndex));

			AimHooks::AimDistance++;
			//DrawLine(value, Colors.Green);
		}
	}

	//AimHooks::AimSmooth
	if (GetAsyncKeyState(VK_RIGHT) & 1)
	{
		if (AimHooks::AimSmooth == 3)
		{
			AimHooks::AimSmooth = 0;
			//DrawLine("[AH]AimSmooth == 0", Colors.Green);
		}
		else
		{
			std::string value = "[AH]AimSmooth == ";
			value += std::to_string(AimHooks::AimSmooth);

			AimHooks::AimSmooth++;
			//DrawLine(value, Colors.Green);
		}
	}

	#pragma endregion

	#pragma region Misc hooks
	if (GetAsyncKeyState(VK_HOME) & 1)
	{
		if (MiscHooks::ShowRadar)
		{
			MiscHooks::ShowRadar = false;
			//DrawLine("[MH]ShowRadar -> Disabled", Colors.Red);
		}
		else 
		{
			MiscHooks::ShowRadar = true;
			//DrawLine("[MH]ShowRadar -> Enabled", Colors.Green);
		}
	}
	#pragma endregion

	UpdateAddresses();
	wchar_t entityname[64] = { NULL };
	DWORD_PTR enlist = GetEntityList();
	int entitycount = mem->read<int>(mem->read<DWORD_PTR>(global::pUWorld + 0x30, 0x8) + 0xA8, 0x4);
	float health = 0.f;
	float distance = 0.f;
	DWORD color = 0;
	Vector3 local = GetLocalPlayerPos();
	
	for (int i = 0; i < entitycount; i++)
	{
		ZeroMemory(entityname, sizeof(entityname));
		auto entity = mem->read<DWORD_PTR>(enlist + (i * 0x8), 0x8);
		if (!entity)
			continue;
		if (entity == mem->read<DWORD_PTR>(mem->read<DWORD_PTR>(global::pLocalPlayer + 0x30, 0x8) + 0x418, 0x8))
			continue;
		
		int id = mem->read<int>(entity + 0x18, 0x4);
		if (PlayerHooks::ShowPlayer && (id ==  ActorIds[0] || id == ActorIds[1] || id == ActorIds[2] || id == ActorIds[3]))
		{
			//ShowPlayer();

			health = GetActorHealth(entity);
			if (health > 0.f)
			{
				Vector3 pos = GetActorPos(entity);
				Vector3 spos = WorldToScreen(pos, global::cameracache);
				distance = local.Distance(pos) / 100.f;
				if (distance > 400.f)
					continue;
				if (distance <= 150.f)
					color = D3DCOLOR_ARGB(255, 255, 0, 0); //color red, if less than 150m
				else if (distance > 150.f && distance <= 300.f)
					color = D3DCOLOR_ARGB(255, 255, 255, 0); //color yellow, if less than 300m and greater than 150m
				else
					color = D3DCOLOR_ARGB(255, 0, 255, 0); //color green, if greater than 300m
				DrawString((int)spos.x, (int)spos.y, color, pFont, "[Health: %0.2f]", health);
				auto mesh = mem->read<DWORD_PTR>(entity + 0x400, 0x8);
				if (!mesh && distance > 110.f)
					continue;
				DrawSkeleton(mesh); //draw skeleton, is distance is less than equal to 110m
			}
		}

		if (PlayerHooks::ShowPlayerBox && (id == ActorIds[0] || id == ActorIds[1] || id == ActorIds[2] || id == ActorIds[3]))
		{

		}
		
		//vehicle esp
		if (VehicleHooks::ShowVehicle)
		{
			//ShowVehicle(entity, local);

			if (isUaz(id))
				DrawVehicle(entity, local, "UAZ\nDistance: %0.2f");
			else if (isDacia(id))
				DrawVehicle(entity, local, "Dacia\nDistance: %0.2f");
			else if (isBike(id))
				DrawVehicle(entity, local, "Motorbike\nDistance: %0.2f");
			else if (isBuggy(id))
				DrawVehicle(entity, local, "Boogy\nDistance: %0.2f");
			else if (isBoat(id))
				DrawVehicle(entity, local, "Boat\nDistance: %0.2f");
		}


		if (LootHooks::ShowAllLoot && (id == itemtype[0] || id == itemtype[1]))
		{
			DWORD_PTR DroppedItemGroupArray = mem->read<DWORD_PTR>(entity + 0x2D8, 0x8);
			int count = mem->read<int>(entity + 0x2E0, 0x4);

			if (!count)
				continue;
			for (int j = 0; j < count; j++)
			{
				DWORD_PTR pADroppedItemGroup = mem->read<DWORD_PTR>(DroppedItemGroupArray + j * 0x10, 0x8);
				Vector3 relative = mem->read<Vector3>(pADroppedItemGroup + 0x1E0, 0xC);
				Vector3 screenloc = WorldToScreen(GetActorPos(entity) + relative, global::cameracache);
				DWORD_PTR pUItem = mem->read<DWORD_PTR>(pADroppedItemGroup + 0x448, 0x8);
				DWORD_PTR pUItemFString = mem->read<DWORD_PTR>(pUItem + 0x40, 0x8);
				DWORD_PTR pItemName = mem->read<DWORD_PTR>(pUItemFString + 0x28, 0x8);

				ZeroMemory(entityname, sizeof(entityname));
				if(mem->read_size(pItemName, entityname, sizeof(entityname)))
					DrawString(screenloc.x, screenloc.y, D3DCOLOR_ARGB(255, 255, 144, 0), pFont, "%ws", entityname);
			}
		}
	}
}

//prevent memory leaks
void Shutdown()
{
	if (!mem)
		return;
	mem->Close();
	delete mem;
	mem = nullptr;
}

//render function
void render()
{
	//Draw company line
	DrawString(0, 0, D3DCOLOR_ARGB(0, 0, 255, 120), pFont, "ZEngine Dev");

	// clear the window alpha
	d3ddev->Clear(0, NULL, D3DCLEAR_TARGET, D3DCOLOR_ARGB(0, 0, 0, 0), 1.0f, 0);

	d3ddev->BeginScene();    // begins the 3D scene

	//calculate and and draw esp stuff
	ESP();


	d3ddev->EndScene();    // ends the 3D scene

	d3ddev->Present(NULL, NULL, NULL, NULL);   // displays the created frame on the screen
}

LRESULT __stdcall WindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_PAINT:
		render();
		break;
	case WM_CREATE:
		DwmExtendFrameIntoClientArea(hWnd, &margin);
		break;

	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	}

	return DefWindowProc(hWnd, message, wParam, lParam);
}


//set up overlay window
void SetupWindow()
{
	RECT rc;
	
	while(!twnd)
		twnd = FindWindow(L"UnrealWindow", 0);
	if (twnd != NULL) 
	{
		GetWindowRect(twnd, &rc);
		cout << "[DEBUG] >> Window founded: 0x" << hex << twnd << endl;
		s_width = rc.right - rc.left;
		s_height = rc.bottom - rc.top;
	}
	else
	{
		cout << "Closing..." << GetLastError() << endl;
		Sleep(3000);
		Shutdown();
		ExitProcess(0);
	}
	WNDCLASSEX wc;

	ZeroMemory(&wc, sizeof(WNDCLASSEX));

	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.lpfnWndProc = WindowProc;
	wc.hInstance = GetModuleHandle(0);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)RGB(0, 0, 0);
	wc.lpszClassName = L"zestdfx";
	RegisterClassEx(&wc);

	hWnd = CreateWindowEx(WS_EX_LAYERED | WS_EX_TRANSPARENT, wc.lpszClassName, L"", WS_POPUP, rc.left, rc.top, s_width, s_height, NULL, NULL, wc.hInstance, NULL);

	SetLayeredWindowAttributes(hWnd, RGB(0, 0, 0), 0, ULW_COLORKEY);
	SetLayeredWindowAttributes(hWnd, 0, 255, LWA_ALPHA);
	
	ShowWindow(hWnd, SW_SHOW);
	initD3D(hWnd);
}

WPARAM MainLoop()
{
	MSG msg;
	RECT rc;
	
	while (TRUE)
	{
		ZeroMemory(&msg, sizeof(MSG));
		if(PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}

		if (msg.message == WM_QUIT)
			exit(0);
		twnd = NULL;
		twnd = FindWindow(L"UnrealWindow", 0);
		if (!twnd)
		{
			cout << "shutting" << endl;
			Shutdown();
			ExitProcess(0);
		}
		ZeroMemory(&rc, sizeof(RECT));
		GetWindowRect(twnd, &rc);
		s_width = rc.right - rc.left;
		s_height = rc.bottom - rc.top;
		MoveWindow(hWnd, rc.left, rc.top, s_width, s_height, true);
		
		//render your esp
		render();
		
		Sleep(5);
	}
	return msg.wParam;
}

bool Attach(WCHAR* processName)
{
	HANDLE SearchHandle = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
	PROCESSENTRY32 PubgEntry;
	PubgEntry.dwSize = sizeof(PubgEntry);

	do {
		if (wcscmp(PubgEntry.szExeFile, processName) == 0) {
			DWORD pid = PubgEntry.th32ProcessID;
			CloseHandle(SearchHandle);
			global::HProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);

			return true;
		}
	} while (Process32Next(SearchHandle, &PubgEntry));

	return false;
}

int main(int argc, char* argv[])
{
	while (true)
	{
		if (Attach(L"TslGame.exe") == true)
		{
			cout << "[SUCCESS] >>  TslGame process: 0x" << hex << global::HProcess << endl;
			break;
		}
		else
		{
			cout << "[DEBUG] >> Waiting for a process ... " << endl;
			Sleep(10000);
		}
	}

	cout << hex << uppercase;
	mem = new CMem(global::HProcess);
	atexit(Shutdown);
	SetupWindow();
	CacheNames();
	//esp stuff
	uint32_t ret = (uint32_t)MainLoop();
	cin.get();
    return ret;
}