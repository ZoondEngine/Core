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

// Function KeyReceiverWidget_BP.KeyReceiverWidget_BP_C.GetBorderColorAndOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UKeyReceiverWidget_BP_C::GetBorderColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyReceiverWidget_BP.KeyReceiverWidget_BP_C.GetBorderColorAndOpacity");

	UKeyReceiverWidget_BP_C_GetBorderColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
