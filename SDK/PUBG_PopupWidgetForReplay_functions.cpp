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

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Get_TextCancel_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPopupWidgetForReplay_C::Get_TextCancel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Get_TextCancel_Text_1");

	UPopupWidgetForReplay_C_Get_TextCancel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.SetPopup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupStyle                    PopupStyle                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         PressedDelegate                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPopupWidgetForReplay_C::SetPopup(EPopupStyle PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.SetPopup");

	UPopupWidgetForReplay_C_SetPopup_Params params;
	params.PopupStyle = PopupStyle;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPopupWidgetForReplay_C::BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature");

	UPopupWidgetForReplay_C_BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPopupWidgetForReplay_C::BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature");

	UPopupWidgetForReplay_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPopupWidgetForReplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Construct");

	UPopupWidgetForReplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Custom Event_1
// (BlueprintCallable, BlueprintEvent)

void UPopupWidgetForReplay_C::Custom_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Custom Event_1");

	UPopupWidgetForReplay_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPopupWidgetForReplay_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Destruct");

	UPopupWidgetForReplay_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.XBoxOneOk
// (BlueprintCallable, BlueprintEvent)

void UPopupWidgetForReplay_C::XBoxOneOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.XBoxOneOk");

	UPopupWidgetForReplay_C_XBoxOneOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.ExecuteUbergraph_PopupWidgetForReplay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPopupWidgetForReplay_C::ExecuteUbergraph_PopupWidgetForReplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.ExecuteUbergraph_PopupWidgetForReplay");

	UPopupWidgetForReplay_C_ExecuteUbergraph_PopupWidgetForReplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.HideMyself__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPopupWidgetForReplay_C::HideMyself__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.HideMyself__DelegateSignature");

	UPopupWidgetForReplay_C_HideMyself__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.ButtonClickDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void UPopupWidgetForReplay_C::ButtonClickDispatcher__DelegateSignature(EPopupButtonID NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.ButtonClickDispatcher__DelegateSignature");

	UPopupWidgetForReplay_C_ButtonClickDispatcher__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
