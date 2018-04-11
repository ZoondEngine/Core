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

// Function QualitySettingsWidget.QualitySettingsWidget_C.GetbIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UQualitySettingsWidget_C::GetbIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.GetbIsEnabled_1");

	UQualitySettingsWidget_C_GetbIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.SettingDefautl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQualitySettingsWidget_C::SettingDefautl()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.SettingDefautl");

	UQualitySettingsWidget_C_SettingDefautl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.UpdateOtionStringByUserStting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EQualityType                   Selection                      (Parm, ZeroConstructor, IsPlainOldData)

void UQualitySettingsWidget_C::UpdateOtionStringByUserStting(EQualityType Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.UpdateOtionStringByUserStting");

	UQualitySettingsWidget_C_UpdateOtionStringByUserStting_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.UpdateMainOptionStringByComboBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQualitySettingsWidget_C::UpdateMainOptionStringByComboBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.UpdateMainOptionStringByComboBox");

	UQualitySettingsWidget_C_UpdateMainOptionStringByComboBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.GetComboBox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EQualityType                   Selection                      (Parm, ZeroConstructor, IsPlainOldData)
// class UQualityComboBox_C*      ComboBox                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQualitySettingsWidget_C::GetComboBox(EQualityType Selection, class UQualityComboBox_C** ComboBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.GetComboBox");

	UQualitySettingsWidget_C_GetComboBox_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComboBox != nullptr)
		*ComboBox = params.ComboBox;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.SetQualityLevelByComboBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EQualityType                   QualityType                    (Parm, ZeroConstructor, IsPlainOldData)

void UQualitySettingsWidget_C::SetQualityLevelByComboBox(EQualityType QualityType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.SetQualityLevelByComboBox");

	UQualitySettingsWidget_C_SetQualityLevelByComboBox_Params params;
	params.QualityType = QualityType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.GetQualityLevelByComboBox
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EQualityType                   QualityType                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            QualityLevel                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQualitySettingsWidget_C::GetQualityLevelByComboBox(EQualityType QualityType, int* QualityLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.GetQualityLevelByComboBox");

	UQualitySettingsWidget_C_GetQualityLevelByComboBox_Params params;
	params.QualityType = QualityType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QualityLevel != nullptr)
		*QualityLevel = params.QualityLevel;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UQualitySettingsWidget_C::IsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.IsChanged");

	UQualitySettingsWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.GetScreenScaleValue_Slider
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ScreenScale                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQualitySettingsWidget_C::GetScreenScaleValue_Slider(float* ScreenScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.GetScreenScaleValue_Slider");

	UQualitySettingsWidget_C_GetScreenScaleValue_Slider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenScale != nullptr)
		*ScreenScale = params.ScreenScale;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.InitQualitySettingsWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UQualitySettingsWidget_C::InitQualitySettingsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.InitQualitySettingsWidget");

	UQualitySettingsWidget_C_InitQualitySettingsWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UQualitySettingsWidget_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.OnApply");

	UQualitySettingsWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__MainQualityComboBox_K2Node_ComponentBoundEvent_663_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UQualitySettingsWidget_C::BndEvt__MainQualityComboBox_K2Node_ComponentBoundEvent_663_OnSelectionChanged__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__MainQualityComboBox_K2Node_ComponentBoundEvent_663_OnSelectionChanged__DelegateSignature");

	UQualitySettingsWidget_C_BndEvt__MainQualityComboBox_K2Node_ComponentBoundEvent_663_OnSelectionChanged__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQualitySettingsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.Construct");

	UQualitySettingsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_2029_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UQualitySettingsWidget_C::BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_2029_OnSelectionChanged__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_2029_OnSelectionChanged__DelegateSignature");

	UQualitySettingsWidget_C_BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_2029_OnSelectionChanged__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__AnitiAliasingComboBox_K2Node_ComponentBoundEvent_2255_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UQualitySettingsWidget_C::BndEvt__AnitiAliasingComboBox_K2Node_ComponentBoundEvent_2255_OnSelectionChanged__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__AnitiAliasingComboBox_K2Node_ComponentBoundEvent_2255_OnSelectionChanged__DelegateSignature");

	UQualitySettingsWidget_C_BndEvt__AnitiAliasingComboBox_K2Node_ComponentBoundEvent_2255_OnSelectionChanged__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__PostProcessComboBox_K2Node_ComponentBoundEvent_2259_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UQualitySettingsWidget_C::BndEvt__PostProcessComboBox_K2Node_ComponentBoundEvent_2259_OnSelectionChanged__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__PostProcessComboBox_K2Node_ComponentBoundEvent_2259_OnSelectionChanged__DelegateSignature");

	UQualitySettingsWidget_C_BndEvt__PostProcessComboBox_K2Node_ComponentBoundEvent_2259_OnSelectionChanged__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_2264_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UQualitySettingsWidget_C::BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_2264_OnSelectionChanged__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_2264_OnSelectionChanged__DelegateSignature");

	UQualitySettingsWidget_C_BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_2264_OnSelectionChanged__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__TextureComboBox_K2Node_ComponentBoundEvent_2270_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UQualitySettingsWidget_C::BndEvt__TextureComboBox_K2Node_ComponentBoundEvent_2270_OnSelectionChanged__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__TextureComboBox_K2Node_ComponentBoundEvent_2270_OnSelectionChanged__DelegateSignature");

	UQualitySettingsWidget_C_BndEvt__TextureComboBox_K2Node_ComponentBoundEvent_2270_OnSelectionChanged__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__EffectComboBox_K2Node_ComponentBoundEvent_2277_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UQualitySettingsWidget_C::BndEvt__EffectComboBox_K2Node_ComponentBoundEvent_2277_OnSelectionChanged__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__EffectComboBox_K2Node_ComponentBoundEvent_2277_OnSelectionChanged__DelegateSignature");

	UQualitySettingsWidget_C_BndEvt__EffectComboBox_K2Node_ComponentBoundEvent_2277_OnSelectionChanged__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__FoliageComboBox_K2Node_ComponentBoundEvent_2285_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (Parm, ZeroConstructor, IsPlainOldData)

void UQualitySettingsWidget_C::BndEvt__FoliageComboBox_K2Node_ComponentBoundEvent_2285_OnSelectionChanged__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.BndEvt__FoliageComboBox_K2Node_ComponentBoundEvent_2285_OnSelectionChanged__DelegateSignature");

	UQualitySettingsWidget_C_BndEvt__FoliageComboBox_K2Node_ComponentBoundEvent_2285_OnSelectionChanged__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UQualitySettingsWidget_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.OnReset");

	UQualitySettingsWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UQualitySettingsWidget_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.OnDefault");

	UQualitySettingsWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySettingsWidget.QualitySettingsWidget_C.ExecuteUbergraph_QualitySettingsWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UQualitySettingsWidget_C::ExecuteUbergraph_QualitySettingsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySettingsWidget.QualitySettingsWidget_C.ExecuteUbergraph_QualitySettingsWidget");

	UQualitySettingsWidget_C_ExecuteUbergraph_QualitySettingsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
