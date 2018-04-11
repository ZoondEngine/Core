// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyViewMode.LobbyViewMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALobbyViewMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyViewMode.LobbyViewMode_C.UserConstructionScript");

	ALobbyViewMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyViewMode.LobbyViewMode_C.SetViewModeAbleActor
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ALobbyViewMode_C::SetViewModeAbleActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyViewMode.LobbyViewMode_C.SetViewModeAbleActor");

	ALobbyViewMode_C_SetViewModeAbleActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyViewMode.LobbyViewMode_C.AddYaw
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALobbyViewMode_C::AddYaw(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyViewMode.LobbyViewMode_C.AddYaw");

	ALobbyViewMode_C_AddYaw_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyViewMode.LobbyViewMode_C.AddPitch
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALobbyViewMode_C::AddPitch(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyViewMode.LobbyViewMode_C.AddPitch");

	ALobbyViewMode_C_AddPitch_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyViewMode.LobbyViewMode_C.AddRoll
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALobbyViewMode_C::AddRoll(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyViewMode.LobbyViewMode_C.AddRoll");

	ALobbyViewMode_C_AddRoll_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyViewMode.LobbyViewMode_C.AddViewDistance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ALobbyViewMode_C::AddViewDistance(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyViewMode.LobbyViewMode_C.AddViewDistance");

	ALobbyViewMode_C_AddViewDistance_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyViewMode.LobbyViewMode_C.ExecuteUbergraph_LobbyViewMode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALobbyViewMode_C::ExecuteUbergraph_LobbyViewMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyViewMode.LobbyViewMode_C.ExecuteUbergraph_LobbyViewMode");

	ALobbyViewMode_C_ExecuteUbergraph_LobbyViewMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
