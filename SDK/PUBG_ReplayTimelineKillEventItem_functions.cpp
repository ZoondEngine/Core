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

// Function ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UReplayTimelineKillEventItem_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.OnPrepass_1");

	UReplayTimelineKillEventItem_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UReplayTimelineKillEventItem_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.OnMouseButtonDown_1");

	UReplayTimelineKillEventItem_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.GetToolTipText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UReplayTimelineKillEventItem_C::GetToolTipText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimelineKillEventItem.ReplayTimelineKillEventItem_C.GetToolTipText");

	UReplayTimelineKillEventItem_C_GetToolTipText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
