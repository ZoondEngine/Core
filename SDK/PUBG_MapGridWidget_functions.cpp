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

// Function MapGridWidget.MapGridWidget_C.Get_Replayzone_Brush_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UMapGridWidget_C::Get_Replayzone_Brush_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.Get_Replayzone_Brush_2");

	UMapGridWidget_C_Get_Replayzone_Brush_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapGridWidget.MapGridWidget_C.Get_Replayzone_Brush_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UMapGridWidget_C::Get_Replayzone_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapGridWidget.MapGridWidget_C.Get_Replayzone_Brush_1");

	UMapGridWidget_C_Get_Replayzone_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
