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

// Function GamepadOptionWidget.GamepadOptionWidget_C.ClearGuide
// (Public, BlueprintCallable, BlueprintEvent)

void UGamepadOptionWidget_C::ClearGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.ClearGuide");

	UGamepadOptionWidget_C_ClearGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.OnPrepass_LTorRTVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UGamepadOptionWidget_C::OnPrepass_LTorRTVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.OnPrepass_LTorRTVisibility");

	UGamepadOptionWidget_C_OnPrepass_LTorRTVisibility_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UGamepadOptionWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.OnKeyDown");

	UGamepadOptionWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.On_GuideLayer_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UGamepadOptionWidget_C::On_GuideLayer_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.On_GuideLayer_Prepass_1");

	UGamepadOptionWidget_C_On_GuideLayer_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.On_CONTROL_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UGamepadOptionWidget_C::On_CONTROL_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.On_CONTROL_Prepass_1");

	UGamepadOptionWidget_C_On_CONTROL_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.PrevOrNextPage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNext                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FEventReply             Reply                          (Parm, OutParm)

void UGamepadOptionWidget_C::PrevOrNextPage(bool bNext, struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.PrevOrNextPage");

	UGamepadOptionWidget_C_PrevOrNextPage_Params params;
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UGamepadOptionWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.OnFocusReceived");

	UGamepadOptionWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.ProcessKeyDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// struct FEventReply             Replay                         (Parm, OutParm)

void UGamepadOptionWidget_C::ProcessKeyDown(const struct FKey& Key, struct FEventReply* Replay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.ProcessKeyDown");

	UGamepadOptionWidget_C_ProcessKeyDown_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Replay != nullptr)
		*Replay = params.Replay;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGamepadOptionWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.Destruct");

	UGamepadOptionWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UGamepadOptionWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.Tick");

	UGamepadOptionWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.ExecuteUbergraph_GamepadOptionWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGamepadOptionWidget_C::ExecuteUbergraph_GamepadOptionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.ExecuteUbergraph_GamepadOptionWidget");

	UGamepadOptionWidget_C_ExecuteUbergraph_GamepadOptionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
