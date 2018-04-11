#pragma once
#include <Windows.h>
#include <Winternl.h>
#include <TlHelp32.h>
#include <Psapi.h>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

#pragma comment (lib, "ntdll.lib")

#define ThreadQuerySetWin32StartAddress 9

#ifndef MAKEULONGLONG
#define MAKEULONGLONG(ldw, hdw) ((ULONGLONG(hdw) << 32) | ((ldw) & 0xFFFFFFFF))
#endif

#ifndef MAXULONGLONG
#define MAXULONGLONG ((ULONGLONG)~((ULONGLONG)0))
#endif

#define SHARED_MEM_SIZE 4096
#define PADDING_IN_XMEM 8
//#define SMNAME "Global\\SJ2Mem" // Obfuscated further in code
//#define MUTEXNAME "Global\\SJ2Mtx" // Obfuscated further in code

using namespace std;

struct UNUSED_XMEM {
	MEMORY_BASIC_INFORMATION regionInfo;
	void* start = nullptr;
	SIZE_T size = NULL;
};

struct SJORDER {
	DWORD64 exec = 1; // Least significant byte used to release the spinlock
	DWORD order = 0; // 0: Read, 1: Write
	NTSTATUS status = 0xFFFFFFFF; // TODO: Remove, finally I don't want to get the return
	HANDLE hProcess = NULL;
	DWORD64 lpBaseAddress = NULL;
	SIZE_T nSize = 0;
	SIZE_T* nBytesReadOrWritten = 0; // TODO: Remove, finally I don't want the number of bytes read/written
}; // Important: Must be 8 bytes aligned, otherwise garbage data is added in the structure

struct SJCFG {
	SIZE_T remoteExecMemSize = NULL;
	void* remoteExecMem = nullptr;
	SIZE_T sharedMemSize = NULL;
	void* ptrRemoteSharedMem = nullptr;
};

// Prototypes
vector<DWORD> GetTIDChronologically(DWORD pid);
vector<DWORD> GetThreadsOfPID(DWORD dwOwnerPID);
vector<DWORD> GetPIDs(wstring targetProcessName);
vector<UNUSED_XMEM> FindExecutableMemory(const HANDLE hProcess, bool onlyInBase = false);
void* GetBaseAddress(const HANDLE hProcess);
DWORD GetSyscallId(string strModule, string strProcName);
map<DWORD, DWORD64> GetThreadsStartAddresses(vector<DWORD> tids);
map<wstring, DWORD64> GetModulesNamesAndBaseAddresses(DWORD pid);
map<DWORD, wstring> GetTIDsModuleStartAddr(DWORD pid);
bool Start();
bool ConnectSharedMem();
bool PushShellcode(void* shellcode, SIZE_T size);
bool ExecWithThreadHiJacking(SIZE_T shellcodeSize = NULL, bool thenRestore = true);
void CleanUp();
bool Setup();
bool SetPrivilege(LPCWSTR lpszPrivilege, BOOL bEnablePrivilege = TRUE);

// Globals
string sharedMemName = ""; // Obfuscated further in code
DWORD pivotPID = NULL;
HANDLE hSharedMem = NULL;
HANDLE hProcess = NULL;
void* remoteExecMem = nullptr;
SIZE_T remoteExecMemSize = 0;
DWORD targetTID = NULL;
HANDLE hThread = NULL;
SIZE_T sharedMemSize = SHARED_MEM_SIZE;
SIZE_T usableSharedMemSize = NULL;
void* ptrRemoteSharedMem = nullptr;
void* ptrLocalSharedMem = nullptr;
HANDLE hLocalSharedMem = NULL;
HANDLE hGateKeeperProcess = NULL;

bool Setup() {
	string e = ""; // TODO: Randomise names instead of this bad obfuscation (need to be unique per each system reboot)
	string mutexNoStr = e + 'G' + 'l' + 'o' + 'b' + 'a' + 'l' + '\\' + 'S' + 'J' + '2' + 'M' + 't' + 'x';
	HANDLE hMutex = CreateMutexA(NULL, TRUE, mutexNoStr.c_str());
	if (GetLastError() == ERROR_ALREADY_EXISTS)
		exit(EXIT_FAILURE); // Security: An instance of either the installer or the client is already running, terminate now

							// ADVICE: Add here checks to make sure all anti-cheats are turned off, otherwise you might fire up the installer that does shady stuff while being watched!

	if (!SetPrivilege((LPCWSTR)SE_DEBUG_NAME)) // Getting permissions
		return false;

	// Getting LSASS's PID
	wstring we = L"";
	wstring lsassNoStr = we + L'l' + L's' + L'a' + L's' + L's' + L'.' + L'e' + L'x' + L'e';
	vector<DWORD> pidsLsass = GetPIDs(lsassNoStr);
	if (pidsLsass.empty())
		return false;
	sort(pidsLsass.begin(), pidsLsass.end()); // In case there is several lsass.exe running (?) take the first one (based on PID)
	pivotPID = pidsLsass[0];
	if (!pivotPID)
		return false;

	// Check for already existing installations
	sharedMemName = e + 'G' + 'l' + 'o' + 'b' + 'a' + 'l' + '\\' + 'S' + 'J' + '2' + 'M' + 'e' + 'm';
	hSharedMem = OpenFileMappingA(FILE_MAP_ALL_ACCESS, FALSE, sharedMemName.c_str());
	if (hSharedMem)
		return true; // Already installed

					 // Attachment to process: Get PID and OpenProcess
	hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_OPERATION | PROCESS_VM_READ | PROCESS_VM_WRITE, FALSE, pivotPID);
	if (!hProcess)
		return false;

	// Getting executable memory
	vector<UNUSED_XMEM> availableXMem = FindExecutableMemory(hProcess);
	if (availableXMem.empty() || availableXMem[0].start == nullptr || availableXMem[0].size == NULL)
		return false; // No executable memory
	if (availableXMem[0].size <= PADDING_IN_XMEM)
		return false; // Executable memory smaller or equal to demanded padding
	remoteExecMem = (void*)((DWORD64)availableXMem[0].start + PADDING_IN_XMEM);
	remoteExecMemSize = availableXMem[0].size - PADDING_IN_XMEM;

	// Attaching to thread for thread hijacking, auto finds usable thread
	map<DWORD, wstring> tidsStartModules = GetTIDsModuleStartAddr(pivotPID);
	vector<wstring> preferedTIDsModules;
	wstring dllNoStr = we + L'.' + L'd' + L'l' + L'l';
	wstring samsrvNoStr = we + L's' + L'a' + L'm' + L's' + L'r' + L'v' + dllNoStr;
	wstring msvcrtNoStr = we + L'm' + L's' + L'v' + L'c' + L'r' + L't' + dllNoStr;
	wstring crypt32NoStr = we + L'c' + L'r' + L'y' + L'p' + L't' + L'3' + L'2' + dllNoStr;
	preferedTIDsModules.push_back(samsrvNoStr);
	preferedTIDsModules.push_back(msvcrtNoStr);
	preferedTIDsModules.push_back(crypt32NoStr);
	wstring modName = L"";
	for (int i(0); i < preferedTIDsModules.size(); ++i) {
		for (auto const& thisTid : tidsStartModules) {
			DWORD tid = thisTid.first;
			modName = thisTid.second;
			if (modName == preferedTIDsModules[i]) {
				targetTID = tid;
				break;
			}
		}
		if (targetTID)
			break;
	}
	if (!targetTID)
		return false; // Could not find any of the threads starting in one of the target modules

					  /*
					  // If the thread used is not the one started in samsrv.dll, we'll have to wait for the thread to wake up...
					  wcout << "Using thread " << dec << targetTID << " (started in " << modName << ")" << endl;
					  if (modName != samsrvNoStr)
					  cout << "This thread is most of the time dormant, it may take 1-10 minutes..." << endl;
					  */

	hThread = OpenThread(THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT | THREAD_SET_CONTEXT, FALSE, targetTID);
	if (!hThread)
		return false; // Couldn't open thread

					  // Creating shared memory
	hLocalSharedMem = CreateFileMappingA(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE | SEC_COMMIT | SEC_NOCACHE, 0, sharedMemSize, sharedMemName.c_str());
	if (!hLocalSharedMem)
		return false;
	ptrLocalSharedMem = MapViewOfFile(hLocalSharedMem, FILE_MAP_ALL_ACCESS, 0, 0, sharedMemSize);
	if (!ptrLocalSharedMem)
		return false;
	usableSharedMemSize = sharedMemSize - sizeof(SJCFG);

	// Duplicate the handle to shared memory in explorer.exe so a handle keep existing which allows easy reconnection (using OpenFileMapping)
	wstring exeNoStr = we + L'.' + L'e' + L'x' + L'e';
	wstring explorerNoStr = we + L'e' + L'x' + L'p' + L'l' + L'o' + L'r' + L'e' + L'r' + exeNoStr;
	vector<DWORD> explorerPIDs = GetPIDs(explorerNoStr);
	if (explorerPIDs.empty())
		return false;
	hGateKeeperProcess = OpenProcess(PROCESS_DUP_HANDLE, FALSE, explorerPIDs[0]);
	if (!hGateKeeperProcess)
		return false;
	HANDLE hGateKeeper = NULL;
	if (!DuplicateHandle(GetCurrentProcess(), hLocalSharedMem, hGateKeeperProcess, &hGateKeeper, NULL, FALSE, DUPLICATE_SAME_ACCESS))
		return false;
	CloseHandle(hGateKeeperProcess);

	// Connecting shared memory in pivot process
	if (!ConnectSharedMem())
		return false;
	CloseHandle(hLocalSharedMem); // Close handle to shared memory

								  // Starting bypass
	if (!Start())
		return false;

	// Clean-up, closing now unnecessary handles and other potential detection vectors
	CloseHandle(hProcess);
	CloseHandle(hThread);

	// Pushes useful information into shared memory, in case the bypass has to reconnect
	CONTEXT contextEmpty;
	SecureZeroMemory(&contextEmpty, sizeof(contextEmpty));
	SJCFG cfgBackup;
	cfgBackup.ptrRemoteSharedMem = ptrRemoteSharedMem;
	cfgBackup.sharedMemSize = sharedMemSize;
	cfgBackup.remoteExecMem = remoteExecMem;
	cfgBackup.remoteExecMemSize = remoteExecMemSize;
	void* endOfUsableLocalSharedMem = (void*)((DWORD64)ptrLocalSharedMem + sharedMemSize - sizeof(SJORDER));
	void* backupAddrInSharedMem = (void*)((DWORD64)endOfUsableLocalSharedMem - sizeof(SJCFG));
	CopyMemory(backupAddrInSharedMem, &cfgBackup, sizeof(cfgBackup));

	CleanUp();
	return true;
}

vector<DWORD> GetPIDs(wstring targetProcessName) {
	vector<DWORD> pids;
	if (targetProcessName == L"")
		return pids;
	HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	PROCESSENTRY32W entry;
	entry.dwSize = sizeof entry;
	if (!Process32FirstW(snap, &entry))
		return pids;
	do {
		if (wstring(entry.szExeFile) == targetProcessName) {
			pids.emplace_back(entry.th32ProcessID);
		}
	} while (Process32NextW(snap, &entry));
	return pids;
}

vector<UNUSED_XMEM> FindExecutableMemory(const HANDLE hProcess, bool onlyInBase) {
	MEMORY_BASIC_INFORMATION memInfo;
	vector<MEMORY_BASIC_INFORMATION> memInfos;
	vector<MEMORY_BASIC_INFORMATION> execMemInfos;
	vector<UNUSED_XMEM> freeXMems;
	void* baseAddr = nullptr;

	if (onlyInBase)
		baseAddr = GetBaseAddress(hProcess);

	// Getting all MEMORY_BASIC_INFORMATION of the target process
	unsigned char* addr = NULL;
	for (addr = NULL; VirtualQueryEx(hProcess, addr, &memInfo, sizeof(memInfo)) == sizeof(memInfo); addr += memInfo.RegionSize)
		if (!onlyInBase || (onlyInBase && memInfo.AllocationBase == baseAddr))
			memInfos.push_back(memInfo);
	if (memInfos.empty())
		return freeXMems;

	// Filtering only executable memory regions
	for (int i(0); i < memInfos.size(); ++i) {
		DWORD prot = memInfos[i].Protect;
		if (prot == PAGE_EXECUTE || prot == PAGE_EXECUTE_READ || prot == PAGE_EXECUTE_READWRITE || prot == PAGE_EXECUTE_WRITECOPY)
			execMemInfos.push_back(memInfos[i]);
	}
	if (execMemInfos.empty())
		return freeXMems;

	// Duplicating memory locally for analysis, finding unused memory at the end of executable regions
	for (int i(0); i < execMemInfos.size(); ++i) {
		// Getting local buffer
		void* localMemCopy = VirtualAlloc(NULL, execMemInfos[i].RegionSize, MEM_COMMIT, PAGE_READWRITE);
		if (localMemCopy == NULL)
			continue; // Error, no local buffer

					  // Copying executable memory content locally
		SIZE_T bytesRead = 0;
		if (!ReadProcessMemory(hProcess, execMemInfos[i].BaseAddress, localMemCopy, execMemInfos[i].RegionSize, &bytesRead)) {
			// Error while copying the executable memory content to local process for analysis
			VirtualFree(localMemCopy, execMemInfos[i].RegionSize, MEM_RELEASE);
			continue;
		}

		// Analysing unused executable memory size and location locally
		BYTE currentByte = 0;
		SIZE_T unusedSize = 0;
		DWORD64 analysingByteAddr = (DWORD64)localMemCopy + execMemInfos[i].RegionSize - 1;
		while (analysingByteAddr >= (DWORD64)localMemCopy) {
			CopyMemory(&currentByte, (void*)analysingByteAddr, sizeof(BYTE));
			if (currentByte != 0)
				break;
			++unusedSize;
			--analysingByteAddr; // Next byte
		}
		if (unusedSize == 0) {
			// No unused bytes
			VirtualFree(localMemCopy, execMemInfos[i].RegionSize, MEM_RELEASE);
			continue;
		}

		// Found unused executable memory, pushing it into the result vector
		UNUSED_XMEM unusedXMem;
		unusedXMem.regionInfo = execMemInfos[i];
		unusedXMem.size = unusedSize;
		unusedXMem.start = (void*)((DWORD64)execMemInfos[i].BaseAddress + execMemInfos[i].RegionSize - unusedSize);
		freeXMems.push_back(unusedXMem);

		// Clean-up
		VirtualFree(localMemCopy, execMemInfos[i].RegionSize, MEM_RELEASE);
	}

	return freeXMems;
}

void* GetBaseAddress(const HANDLE hProcess) {
	if (hProcess == NULL)
		return NULL;
	HMODULE lphModule[1024];
	DWORD lpcbNeeded(NULL);
	if (!EnumProcessModules(hProcess, lphModule, sizeof(lphModule), &lpcbNeeded))
		return NULL; // Impossible to read modules (hProcess requires PROCESS_QUERY_INFORMATION | PROCESS_VM_READ)
	return lphModule[0]; // Module 0 is the EXE itself, returning its address
}

bool ConnectSharedMem() {
	// Getting function addresses
	FARPROC addrOpenFileMappingA = GetProcAddress(GetModuleHandle(TEXT("kernel32.dll")), "OpenFileMappingA");
	FARPROC addrMapViewOfFile = GetProcAddress(GetModuleHandle(TEXT("kernel32.dll")), "MapViewOfFile");
	FARPROC addrCloseHandle = GetProcAddress(GetModuleHandle(TEXT("kernel32.dll")), "CloseHandle");
	if (!addrOpenFileMappingA || !addrMapViewOfFile || !addrCloseHandle)
		return false;

	// Get RW memory to assemble full shellcode from parts
	void* rwMemory = VirtualAlloc(NULL, 4096, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	if (rwMemory == nullptr)
		return false;
	DWORD64 addrEndOfShellCode = (DWORD64)rwMemory;

	UCHAR x64OpenFileMappingA[] = {
		0x48, 0xc7, 0xc1, 0x1f, 0, 0x0f, 0,	// mov rcx, dwDesiredAccess			+0 (FILE_MAP_ALL_ACCESS = 0xf001f @ +3)
		0x48, 0x31, 0xd2,					// xor rdx, rdx						+7 (bInheritHandle = FALSE)
		0x49, 0xb8, 0, 0, 0, 0, 0, 0, 0, 0,	// mov r8, &lpName					+10 (&lpName +12)
		0x4d, 0x31, 0xc9,					// xor r9, r9						+20
		0x48, 0xb8, 0, 0, 0, 0, 0, 0, 0, 0, // mov rax, addrOpenFileMappingA	+23 (addrOpenFileMappingA +25)
		0x48, 0x83, 0xec, 0x20,				// sub rsp, 0x20					+33
		0xff, 0xd0,							// call rax							+37
		0x48, 0x83, 0xc4, 0x20,				// add rsp, 0x20					+39
		0x49, 0x89, 0xc7					// mov r15, rax						+43
	};
	*(DWORD64*)((PUCHAR)x64OpenFileMappingA + 25) = (DWORD64)(ULONG_PTR)addrOpenFileMappingA;
	CopyMemory((void*)addrEndOfShellCode, x64OpenFileMappingA, sizeof(x64OpenFileMappingA));
	addrEndOfShellCode += sizeof(x64OpenFileMappingA);

	UCHAR x64MapViewOfFile[] = {
		0x48, 0x89, 0xc1,					// mov rcx, rax						+0
		0x48, 0xc7, 0xc2, 0x1f, 0, 0x0f, 0,	// mov rdx, dwDesiredAccess			+3 (FILE_MAP_ALL_ACCESS = 0xf001f @ +6)
		0x4d, 0x31, 0xc0,					// xor r8, r8						+10
		0x4d, 0x31, 0xc9,					// xor r9, r9						+13
		0x48, 0xb8, 0, 0, 0, 0, 0, 0, 0, 0, // mov rax, dwNumberOfBytesToMap	+16 (dwNumberOfBytesToMap +18)
		0x50,								// push rax							+26
		0x48, 0xb8, 0, 0, 0, 0, 0, 0, 0, 0,	// mov rax, addrMapViewOfFile		+27 (addrMapViewOfFile +29)
		0x48, 0x83, 0xec, 0x20,				// sub rsp, 0x20					+37
		0xff, 0xd0,							// call rax							+41
		0x48, 0x83, 0xc4, 0x28,				// add rsp, 0x28					+43
		0x49, 0x89, 0xc6,					// mov r14, rax						+47
											// Writing to shared memory the virtual address in pivot process
											0x4d, 0x89, 0x36					// mov [r14], r14					+50
	};
	*(SIZE_T*)((PUCHAR)x64MapViewOfFile + 18) = (SIZE_T)(ULONG_PTR)sharedMemSize;
	*(DWORD64*)((PUCHAR)x64MapViewOfFile + 29) = (DWORD64)(ULONG_PTR)addrMapViewOfFile;
	CopyMemory((void*)addrEndOfShellCode, x64MapViewOfFile, sizeof(x64MapViewOfFile));
	addrEndOfShellCode += sizeof(x64MapViewOfFile);

	UCHAR x64CloseHandle[] = {
		0x4C, 0x89, 0xF9,					// mov rcx, r15						+0
		0x48, 0xb8, 0, 0, 0, 0, 0, 0, 0, 0,	// mov rax, addrCloseHandle			+3 (addrCloseHandle +5)
		0x48, 0x83, 0xec, 0x20,				// sub rsp, 0x20					+13
		0xff, 0xd0,							// call rax							+17
		0x48, 0x83, 0xc4, 0x20				// add rsp, 0x20					+19
	};
	*(DWORD64*)((PUCHAR)x64CloseHandle + 5) = (DWORD64)(ULONG_PTR)addrCloseHandle;
	CopyMemory((void*)addrEndOfShellCode, x64CloseHandle, sizeof(x64CloseHandle));
	addrEndOfShellCode += sizeof(x64CloseHandle);

	UCHAR x64InfiniteLoop[] = { 0xEB, 0xFE }; // nop + jmp rel8 -2
	CopyMemory((void*)addrEndOfShellCode, x64InfiniteLoop, sizeof(x64InfiniteLoop));
	addrEndOfShellCode += sizeof(x64InfiniteLoop);

	UCHAR lpNameBuffer[30];
	SecureZeroMemory(lpNameBuffer, sizeof(lpNameBuffer));
	CopyMemory(lpNameBuffer, sharedMemName.c_str(), sharedMemName.size());
	CopyMemory((void*)addrEndOfShellCode, lpNameBuffer, sizeof(lpNameBuffer));
	addrEndOfShellCode += sizeof(lpNameBuffer);

	// Calculating full size of shellcode
	SIZE_T fullShellcodeSize = addrEndOfShellCode - (DWORD64)rwMemory;

	// Placing pointer to the buffer integrated with the shellcode containing the name
	DWORD64 lpNameInRemoteExecMemory = (DWORD64)remoteExecMem + fullShellcodeSize - sizeof(lpNameBuffer);
	CopyMemory((void*)((DWORD64)rwMemory + 12), &lpNameInRemoteExecMemory, sizeof(lpNameInRemoteExecMemory));

	bool pushShellcodeStatus = PushShellcode(rwMemory, fullShellcodeSize);
	VirtualFree(rwMemory, 0, MEM_RELEASE);
	if (!pushShellcodeStatus)
		return false;

	if (!ExecWithThreadHiJacking(fullShellcodeSize - sizeof(lpNameBuffer), false)) // The shellcode ends before since the end is just memory
		return false;

	CopyMemory(&ptrRemoteSharedMem, ptrLocalSharedMem, sizeof(void*));
	if (ptrRemoteSharedMem == nullptr)
		return false;
	else
		return true;
}

bool Start() {
	// Pushing control structure into shared memory
	SJORDER controlStruct;
	void* controlLocalAddr = (void*)((DWORD64)ptrLocalSharedMem + sharedMemSize - sizeof(controlStruct));
	CopyMemory(controlLocalAddr, &controlStruct, sizeof(controlStruct));
	void* controlRemoteAddr = (void*)((DWORD64)ptrRemoteSharedMem + sharedMemSize - sizeof(controlStruct));

	// Getting function addresses
	string e = "";
	string ntrvmNoStr = e + 'N' + 't' + 'R' + 'e' + 'a' + 'd' + 'V' + 'i' + 'r' + 't' + 'u' + 'a' + 'l' + 'M' + 'e' + 'm' + 'o' + 'r' + 'y';
	string ntwvmNoStr = e + 'N' + 't' + 'W' + 'r' + 'i' + 't' + 'e' + 'V' + 'i' + 'r' + 't' + 'u' + 'a' + 'l' + 'M' + 'e' + 'm' + 'o' + 'r' + 'y';
	DWORD syscallIndexZwRVM = GetSyscallId("ntdll.dll", ntrvmNoStr);
	DWORD syscallIndexZwWVM = GetSyscallId("ntdll.dll", ntwvmNoStr);
	if (!syscallIndexZwRVM || !syscallIndexZwWVM)
		return false;

	// Get RW memory to assemble full shellcode from parts
	void* rwMemory = VirtualAlloc(NULL, 4096, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	if (rwMemory == nullptr)
		return false;
	DWORD64 addrEndOfShellCode = (DWORD64)rwMemory;

	UCHAR x64Spinlock[] = {
		0xA0, 0, 0, 0, 0, 0, 0, 0, 0,	// mov al, [&exec]
		0x3c, 0,						// cmp al, 0
		0xF3, 0x90,						// pause (signals the CPU that we are in a spinlock)
		0x75, 0xF1						// jnz -14
	};
	*(DWORD64*)((PUCHAR)x64Spinlock + 1) = (DWORD64)(ULONG_PTR)controlRemoteAddr;
	CopyMemory((void*)addrEndOfShellCode, x64Spinlock, sizeof(x64Spinlock));
	addrEndOfShellCode += sizeof(x64Spinlock);

	// Do not retrieve nbr of bytes read/written (otherwise mov rax, ptr)
	UCHAR x64ZeroRax[] = { 0x48, 0x31, 0xC0 }; // xor rax, rax
	CopyMemory((void*)addrEndOfShellCode, x64ZeroRax, sizeof(x64ZeroRax));
	addrEndOfShellCode += sizeof(x64ZeroRax);

	UCHAR x64ZwRWVM[] = {
		// Preparing argument passing to NtRVM/NtWVM
		0x50,								// push rax						+0 (NumberOfBytesRead, optional)
		0x48, 0x83, 0xec, 0x28,				// sub rsp, 0x28				+1 (+8 normally the return address pushed by NtRVM call)
		0x48, 0xa1, 0, 0, 0, 0, 0, 0, 0, 0,	// mov rax, [&hProcess]			+5 (&hProcess +7)
		0x48, 0x89, 0xc1,					// mov rcx, rax					+15
		0x48, 0xa1, 0, 0, 0, 0, 0, 0, 0, 0,	// mov rax, [&lpBaseAddress]	+18 (&lpBaseAddress +20)
		0x48, 0x89, 0xc2,					// mov rdx, rax					+28
		0x48, 0xb8, 0, 0, 0, 0, 0, 0, 0, 0,	// mov rax, [&lpBuffer]			+31 (&lpBuffer +33)
		0x49, 0x89, 0xc0,					// mov r8, rax					+41
		0x48, 0xa1, 0, 0, 0, 0, 0, 0, 0, 0,	// mov rax, [&nSize]			+44 (&nSize +46)
		0x49, 0x89, 0xc1,					// mov r9, rax					+54
											// Loading function pointer accordingly to current order
											0xa0, 0, 0, 0, 0, 0, 0, 0, 0,		// mov al, [&order]				+57 (&order +58)
											0x3c, 0x0,							// cmp al, 0x0					+66
											0x49, 0x89, 0xCA,					// mov r10, rcx					+68
											0x75, 0x9,							// jne +9						+71
											0xb8, 0, 0, 0, 0,					// mov eax, WZWVM_SYSCALLID		+73 (WZWVM_SYSCALLID +74)
											0x0f, 0x05,							// syscall						+78
											0xeb, 0x7,							// jmp +7						+80
											0xb8, 0, 0, 0, 0,					// mov eax, WZRVM_SYSCALLID		+82 (WZRVM_SYSCALLID +83)
											0x0f, 0x05,							// syscall						+87
											0x48, 0x83, 0xC4, 0x30				// add rsp, 0x30				+89
	};
	*(DWORD64*)((PUCHAR)x64ZwRWVM + 7) = (DWORD64)(ULONG_PTR)((DWORD64)controlRemoteAddr + 16);
	*(DWORD64*)((PUCHAR)x64ZwRWVM + 20) = (DWORD64)(ULONG_PTR)((DWORD64)controlRemoteAddr + 24);
	*(DWORD64*)((PUCHAR)x64ZwRWVM + 33) = (DWORD64)(ULONG_PTR)ptrRemoteSharedMem;
	*(DWORD64*)((PUCHAR)x64ZwRWVM + 46) = (DWORD64)(ULONG_PTR)((DWORD64)controlRemoteAddr + 32);
	*(DWORD64*)((PUCHAR)x64ZwRWVM + 58) = (DWORD64)(ULONG_PTR)((DWORD64)controlRemoteAddr + 8);
	*(DWORD*)((PUCHAR)x64ZwRWVM + 74) = (DWORD)(ULONG_PTR)syscallIndexZwRVM;
	*(DWORD*)((PUCHAR)x64ZwRWVM + 83) = (DWORD)(ULONG_PTR)syscallIndexZwWVM;
	CopyMemory((void*)addrEndOfShellCode, x64ZwRWVM, sizeof(x64ZwRWVM));
	addrEndOfShellCode += sizeof(x64ZwRWVM);

	UCHAR x64ToggleSpinlock[] = {
		0xB0, 1,												// mov al, 1
		0xA2, 0, 0, 0, 0, 0, 0, 0, 0							// mov [&exec], al
	};
	*(DWORD64*)((PUCHAR)x64ToggleSpinlock + 3) = (DWORD64)(ULONG_PTR)controlRemoteAddr;
	CopyMemory((void*)addrEndOfShellCode, x64ToggleSpinlock, sizeof(x64ToggleSpinlock));
	addrEndOfShellCode += sizeof(x64ToggleSpinlock);

	// End of cycle, jump back to start
	UCHAR x64AbsoluteJump[] = {
		0x48, 0xb8,	0, 0, 0, 0, 0, 0, 0, 0,	// mov rax, m_remoteExecMem		+0 (m_remoteExecMem +2)
		0xff, 0xe0							// jmp rax						+10
	};
	*(DWORD64*)((PUCHAR)x64AbsoluteJump + 2) = (DWORD64)(ULONG_PTR)remoteExecMem;
	CopyMemory((void*)addrEndOfShellCode, x64AbsoluteJump, sizeof(x64AbsoluteJump));
	addrEndOfShellCode += sizeof(x64AbsoluteJump);

	SIZE_T fullShellcodeSize = addrEndOfShellCode - (DWORD64)rwMemory;
	bool pushShellcodeStatus = PushShellcode(rwMemory, fullShellcodeSize);
	VirtualFree(rwMemory, 0, MEM_RELEASE);
	if (!pushShellcodeStatus)
		return false;

	if (!ExecWithThreadHiJacking())
		return false;
	else
		return true;
}

bool PushShellcode(void* shellcode, SIZE_T size) {
	if (size > remoteExecMemSize)
		return false; // Not enough executable memory available
	SIZE_T bytesWritten = 0;
	BOOL wpmStatus = WriteProcessMemory(hProcess, remoteExecMem, shellcode, size, &bytesWritten);
	if (wpmStatus = FALSE)
		return false;
	else
		return true;
}

bool ExecWithThreadHiJacking(SIZE_T shellcodeSize, bool thenRestore) {
	// Preparing for thread hijacking
	CONTEXT tcInitial;
	CONTEXT tcHiJack;
	CONTEXT tcCurrent;
	SecureZeroMemory(&tcInitial, sizeof(CONTEXT));
	tcInitial.ContextFlags = CONTEXT_ALL;

	// Suspend thread and send it executing our shellcode
	DWORD suspendCount = SuspendThread(hThread);
	if (suspendCount > 0) // The thread was already suspended
		for (int i(0); i < suspendCount; ++i)
			ResumeThread(hThread);
	GetThreadContext(hThread, &tcInitial);
	CopyMemory(&tcHiJack, &tcInitial, sizeof(CONTEXT)); // Faster than another call to GetThreadContext
	CopyMemory(&tcCurrent, &tcInitial, sizeof(CONTEXT));
	tcHiJack.Rip = (DWORD64)remoteExecMem;
	SetThreadContext(hThread, &tcHiJack);
	ResumeThread(hThread);

	if (shellcodeSize == NULL)
		return true; // Permanent thread hijack, do not wait for any execution completion

					 // Check the thread context to know when done executing (RIP should be at memory address + size of shellcode - 2 in the infinite loop jmp rel8 -2)
	DWORD64 addrEndOfExec = (DWORD64)remoteExecMem + shellcodeSize - 2;
	do {
		GetThreadContext(hThread, &tcCurrent);
	} while (tcCurrent.Rip != addrEndOfExec);

	if (thenRestore) {
		// Execution finished, resuming previous operations
		SuspendThread(hThread);
		SetThreadContext(hThread, &tcInitial);
		ResumeThread(hThread);
	}

	return true;
}

vector<DWORD> GetTIDChronologically(DWORD pid) {
	map<ULONGLONG, DWORD> tidsWithStartTimes;
	vector<DWORD> tids;

	if (pid == NULL)
		return tids;

	DWORD dwMainThreadID = NULL;
	ULONGLONG ullMinCreateTime = MAXULONGLONG;
	HANDLE hThreadSnap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
	if (hThreadSnap != INVALID_HANDLE_VALUE) {
		THREADENTRY32 th32;
		th32.dwSize = sizeof(THREADENTRY32);
		BOOL bOK = TRUE;
		for (bOK = Thread32First(hThreadSnap, &th32); bOK; bOK = Thread32Next(hThreadSnap, &th32)) {
			if (th32.th32OwnerProcessID == pid) {
				HANDLE hThread = OpenThread(THREAD_QUERY_INFORMATION, FALSE, th32.th32ThreadID);
				if (hThread) {
					FILETIME afTimes[4] = { 0 };
					if (GetThreadTimes(hThread, &afTimes[0], &afTimes[1], &afTimes[2], &afTimes[3])) {
						ULONGLONG ullTest = MAKEULONGLONG(afTimes[0].dwLowDateTime, afTimes[0].dwHighDateTime);
						tidsWithStartTimes[ullTest] = th32.th32ThreadID;
					}
					CloseHandle(hThread);
				}
			}
		}
		CloseHandle(hThreadSnap);
	}

	for (auto const& thread : tidsWithStartTimes) // maps are natively ordered by key
		tids.push_back(thread.second);

	return tids;
}

vector<DWORD> GetThreadsOfPID(DWORD dwOwnerPID) {
	vector<DWORD> threadIDs;
	HANDLE hThreadSnap = INVALID_HANDLE_VALUE;
	THREADENTRY32 te32;

	hThreadSnap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
	if (hThreadSnap == INVALID_HANDLE_VALUE)
		return threadIDs;
	te32.dwSize = sizeof(THREADENTRY32);

	if (!Thread32First(hThreadSnap, &te32)) {
		CloseHandle(hThreadSnap);
		return threadIDs;
	}

	do {
		if (te32.th32OwnerProcessID == dwOwnerPID)
			threadIDs.push_back(te32.th32ThreadID);
	} while (Thread32Next(hThreadSnap, &te32));
	return threadIDs;
}

DWORD GetSyscallId(string strModule, string strProcName) {
	FARPROC pFunction = GetProcAddress(GetModuleHandleA(strModule.c_str()), strProcName.c_str());

	BYTE x64PreSyscallOpcodes[] = {
		0x4C, 0x8B, 0xD1,	// mov r10, rcx;
		0xB8				// mov eax, XXh ; Syscall ID
	};

	for (int i = 0; i < 4; ++i)
		if (*(BYTE*)((DWORD64)pFunction + i) != x64PreSyscallOpcodes[i])
			return 0; // The function has been tampered with already...

	DWORD sysCallIndex = *(DWORD*)((DWORD64)pFunction + 4);
	return sysCallIndex;
}

map<DWORD, DWORD64> GetThreadsStartAddresses(vector<DWORD> tids) {
	map<DWORD, DWORD64> tidsStartAddresses;

	if (tids.empty())
		return tidsStartAddresses;

	for (int i(0); i < tids.size(); ++i) {
		HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, FALSE, tids[i]);
		PVOID startAddress = NULL;
		ULONG returnLength = NULL;
		NTSTATUS NtQIT = NtQueryInformationThread(hThread, (THREADINFOCLASS)ThreadQuerySetWin32StartAddress, &startAddress, sizeof(startAddress), &returnLength);
		CloseHandle(hThread);
		if (tids[i] && startAddress)
			tidsStartAddresses[tids[i]] = (DWORD64)startAddress;
	}

	return tidsStartAddresses;
}

map<wstring, DWORD64> GetModulesNamesAndBaseAddresses(DWORD pid) {
	map<wstring, DWORD64> modsStartAddrs;

	if (!pid)
		return modsStartAddrs;

	HMODULE hMods[1024];
	DWORD cbNeeded;
	unsigned int i;

	HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, pid);
	if (!hProcess)
		return modsStartAddrs;

	// Get a list of all the modules in this process
	if (!EnumProcessModules(hProcess, hMods, sizeof(hMods), &cbNeeded)) {
		CloseHandle(hProcess);
		return modsStartAddrs;
	}

	// Get each module's infos
	for (i = 0; i < (cbNeeded / sizeof(HMODULE)); i++) {
		TCHAR szModName[MAX_PATH];
		if (!GetModuleFileNameEx(hProcess, hMods[i], szModName, sizeof(szModName) / sizeof(TCHAR))) // Get the full path to the module's file
			continue;
		wstring modName = (wstring)szModName;
		int pos = modName.find_last_of(L"\\");
		modName = modName.substr(pos + 1, modName.length());

		MODULEINFO modInfo;
		if (!GetModuleInformation(hProcess, hMods[i], &modInfo, sizeof(modInfo)))
			continue;

		DWORD64 baseAddr = (DWORD64)modInfo.lpBaseOfDll;
		modsStartAddrs[modName] = baseAddr;
	}

	// Release the handle to the process
	CloseHandle(hProcess);
	return modsStartAddrs;
}

map<DWORD, wstring> GetTIDsModuleStartAddr(DWORD pid) {
	map<DWORD, wstring> tidsStartModule;

	map<wstring, DWORD64> modsStartAddrs = GetModulesNamesAndBaseAddresses(pid);
	if (modsStartAddrs.empty())
		return tidsStartModule;

	vector<DWORD> tids = GetTIDChronologically(pid);
	if (tids.empty())
		return tidsStartModule;

	map<DWORD, DWORD64> tidsStartAddresses = GetThreadsStartAddresses(tids);
	if (tidsStartAddresses.empty())
		return tidsStartModule;

	for (auto const& thisTid : tidsStartAddresses) {
		DWORD tid = thisTid.first;
		DWORD64 startAddress = thisTid.second;
		DWORD64 nearestModuleAtLowerAddrBase = 0;
		wstring nearestModuleAtLowerAddrName = L"";
		for (auto const& thisModule : modsStartAddrs) {
			wstring moduleName = thisModule.first;
			DWORD64 moduleBase = thisModule.second;
			if (moduleBase > startAddress)
				continue;
			if (moduleBase > nearestModuleAtLowerAddrBase) {
				nearestModuleAtLowerAddrBase = moduleBase;
				nearestModuleAtLowerAddrName = moduleName;
			}
		}
		if (nearestModuleAtLowerAddrBase > 0 && nearestModuleAtLowerAddrName != L"")
			tidsStartModule[tid] = nearestModuleAtLowerAddrName;
	}

	return tidsStartModule;
}

void CleanUp() {
	if (hSharedMem)
		CloseHandle(hSharedMem);
	if (hProcess)
		CloseHandle(hProcess);
	if (hThread)
		CloseHandle(hThread);
	if (hLocalSharedMem)
		CloseHandle(hLocalSharedMem);
	if (ptrLocalSharedMem)
		UnmapViewOfFile(ptrLocalSharedMem);
	if (hGateKeeperProcess)
		CloseHandle(hGateKeeperProcess);
}

bool SetPrivilege(LPCWSTR lpszPrivilege, BOOL bEnablePrivilege) {
	TOKEN_PRIVILEGES priv = { 0,0,0,0 };
	HANDLE hToken = NULL;
	LUID luid = { 0,0 };
	if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES, &hToken)) {
		if (hToken)
			CloseHandle(hToken);
		return false;
	}
	if (!LookupPrivilegeValueW(0, lpszPrivilege, &luid)) {
		if (hToken)
			CloseHandle(hToken);
		return false;
	}
	priv.PrivilegeCount = 1;
	priv.Privileges[0].Luid = luid;
	priv.Privileges[0].Attributes = bEnablePrivilege ? SE_PRIVILEGE_ENABLED : SE_PRIVILEGE_REMOVED;
	if (!AdjustTokenPrivileges(hToken, false, &priv, 0, 0, 0)) {
		if (hToken)
			CloseHandle(hToken);
		return false;
	}
	if (hToken)
		CloseHandle(hToken);
	return true;
}