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

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotItem");

	UBigEquipmentSlotWidget_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotContainer");

	UBigEquipmentSlotWidget_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.IsFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBigEquipmentSlotWidget_C::IsFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.IsFocus");

	UBigEquipmentSlotWidget_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.SetFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewFocus                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBigEquipmentSlotWidget_C::SetFocus(bool* NewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.SetFocus");

	UBigEquipmentSlotWidget_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.On_FocusColorBG_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_C::On_FocusColorBG_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.On_FocusColorBG_Prepass_1");

	UBigEquipmentSlotWidget_C_On_FocusColorBG_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetItem_Bp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem*                   Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_C::GetItem_Bp(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetItem_Bp");

	UBigEquipmentSlotWidget_C_GetItem_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetDurability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Durability                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_C::GetDurability(float* Durability)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetDurability");

	UBigEquipmentSlotWidget_C_GetDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Durability != nullptr)
		*Durability = params.Durability;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurationNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_C::UpdateDurationNumber(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurationNumber");

	UBigEquipmentSlotWidget_C_UpdateDurationNumber_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurabilityGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_C::UpdateDurabilityGauge(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurabilityGauge");

	UBigEquipmentSlotWidget_C_UpdateDurabilityGauge_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurabilityVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_C::UpdateDurabilityVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurabilityVisibility");

	UBigEquipmentSlotWidget_C_UpdateDurabilityVisibility_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBigEquipmentSlotWidget_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnPreviewMouseButtonDown");

	UBigEquipmentSlotWidget_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.HaveDurability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_C::HaveDurability(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.HaveDurability");

	UBigEquipmentSlotWidget_C_HaveDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetDurabilityPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DurabilityPercent              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_C::GetDurabilityPercent(float* DurabilityPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetDurabilityPercent");

	UBigEquipmentSlotWidget_C_GetDurabilityPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DurabilityPercent != nullptr)
		*DurabilityPercent = params.DurabilityPercent;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnDragDetected");

	UBigEquipmentSlotWidget_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBigEquipmentSlotWidget_C::GetSlotName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotName");

	UBigEquipmentSlotWidget_C_GetSlotName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnUpdateItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_C::OnUpdateItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnUpdateItem");

	UBigEquipmentSlotWidget_C_OnUpdateItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBigEquipmentSlotWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.Construct");

	UBigEquipmentSlotWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.ExecuteUbergraph_BigEquipmentSlotWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBigEquipmentSlotWidget_C::ExecuteUbergraph_BigEquipmentSlotWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.ExecuteUbergraph_BigEquipmentSlotWidget");

	UBigEquipmentSlotWidget_C_ExecuteUbergraph_BigEquipmentSlotWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
