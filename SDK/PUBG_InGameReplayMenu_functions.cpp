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

// Function InGameReplayMenu.InGameReplayMenu_C.SetHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslHUD*                 inHUD                          (Parm, ZeroConstructor, IsPlainOldData)

void UInGameReplayMenu_C::SetHUD(class ATslHUD* inHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameReplayMenu.InGameReplayMenu_C.SetHUD");

	UInGameReplayMenu_C_SetHUD_Params params;
	params.inHUD = inHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.GotoReplayList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 ButtonID                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameReplayMenu_C::GotoReplayList(EPopupButtonID ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameReplayMenu.InGameReplayMenu_C.GotoReplayList");

	UInGameReplayMenu_C_GotoReplayList_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.QuitReplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 ButtonID                       (Parm, ZeroConstructor, IsPlainOldData)

void UInGameReplayMenu_C::QuitReplay(EPopupButtonID ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameReplayMenu.InGameReplayMenu_C.QuitReplay");

	UInGameReplayMenu_C_QuitReplay_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.BndEvt__Button_ReplayList_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameReplayMenu_C::BndEvt__Button_ReplayList_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameReplayMenu.InGameReplayMenu_C.BndEvt__Button_ReplayList_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature");

	UInGameReplayMenu_C_BndEvt__Button_ReplayList_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_228_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameReplayMenu_C::BndEvt__Button_Exit_K2Node_ComponentBoundEvent_228_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameReplayMenu.InGameReplayMenu_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_228_OnButtonClickedEvent__DelegateSignature");

	UInGameReplayMenu_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_228_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameReplayMenu_C::BndEvt__Button_Resume_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameReplayMenu.InGameReplayMenu_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature");

	UInGameReplayMenu_C_BndEvt__Button_Resume_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.HidePopupWidgetForReplay
// (BlueprintCallable, BlueprintEvent)

void UInGameReplayMenu_C::HidePopupWidgetForReplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameReplayMenu.InGameReplayMenu_C.HidePopupWidgetForReplay");

	UInGameReplayMenu_C_HidePopupWidgetForReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.OpenReplayListMap
// (BlueprintCallable, BlueprintEvent)

void UInGameReplayMenu_C::OpenReplayListMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameReplayMenu.InGameReplayMenu_C.OpenReplayListMap");

	UInGameReplayMenu_C_OpenReplayListMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameReplayMenu.InGameReplayMenu_C.ExecuteUbergraph_InGameReplayMenu
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInGameReplayMenu_C::ExecuteUbergraph_InGameReplayMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameReplayMenu.InGameReplayMenu_C.ExecuteUbergraph_InGameReplayMenu");

	UInGameReplayMenu_C_ExecuteUbergraph_InGameReplayMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
