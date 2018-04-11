#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyWidgetMain.LobbyWidgetMain_C.SendGameStateChangingToWeb
struct ULobbyWidgetMain_C_SendGameStateChangingToWeb_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InName2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWidgetMain.LobbyWidgetMain_C.GameStateChanging
struct ULobbyWidgetMain_C_GameStateChanging_Params
{
	struct FName*                                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyWidgetMain.LobbyWidgetMain_C.ExecuteUbergraph_LobbyWidgetMain
struct ULobbyWidgetMain_C_ExecuteUbergraph_LobbyWidgetMain_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
