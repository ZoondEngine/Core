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

// Function TslLobby_cus.TslLobby_cus_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATslLobby_cus_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslLobby_cus.TslLobby_cus_C.ReceiveBeginPlay");

	ATslLobby_cus_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslLobby_cus.TslLobby_cus_C.ExecuteUbergraph_TslLobby_cus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATslLobby_cus_C::ExecuteUbergraph_TslLobby_cus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslLobby_cus.TslLobby_cus_C.ExecuteUbergraph_TslLobby_cus");

	ATslLobby_cus_C_ExecuteUbergraph_TslLobby_cus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
