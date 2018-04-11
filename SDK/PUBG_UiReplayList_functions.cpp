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

// Function UiReplayList.UiReplayList_C.ChangeCloseButtonForTest
// (Public, BlueprintCallable, BlueprintEvent)

void UUiReplayList_C::ChangeCloseButtonForTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.ChangeCloseButtonForTest");

	UUiReplayList_C_ChangeCloseButtonForTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.ResetRecorderStatistics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUiReplayList_C::ResetRecorderStatistics()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.ResetRecorderStatistics");

	UUiReplayList_C_ResetRecorderStatistics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.ResetSummary
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUiReplayList_C::ResetSummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.ResetSummary");

	UUiReplayList_C_ResetSummary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.CheckReplayBusyStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsReplayBusy                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUiReplayList_C::CheckReplayBusyStatus(bool* bIsReplayBusy)
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.CheckReplayBusyStatus");

	UUiReplayList_C_CheckReplayBusyStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsReplayBusy != nullptr)
		*bIsReplayBusy = params.bIsReplayBusy;
}


// Function UiReplayList.UiReplayList_C.UpdateRecorderStatistics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTslReplaySummary       inReplaySummary                (Parm)

void UUiReplayList_C::UpdateRecorderStatistics(const struct FTslReplaySummary& inReplaySummary)
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.UpdateRecorderStatistics");

	UUiReplayList_C_UpdateRecorderStatistics_Params params;
	params.inReplaySummary = inReplaySummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.UpdateTeamText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTslReplaySummary       inReplaySummary                (Parm)

void UUiReplayList_C::UpdateTeamText(const struct FTslReplaySummary& inReplaySummary)
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.UpdateTeamText");

	UUiReplayList_C_UpdateTeamText_Params params;
	params.inReplaySummary = inReplaySummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.SetShouldKeep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldKeep                    (Parm, ZeroConstructor, IsPlainOldData)

void UUiReplayList_C::SetShouldKeep(bool bShouldKeep)
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.SetShouldKeep");

	UUiReplayList_C_SetShouldKeep_Params params;
	params.bShouldKeep = bShouldKeep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.UpdateReplaySummary
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTslReplaySummary       ReplaySummary                  (Parm)

void UUiReplayList_C::UpdateReplaySummary(const struct FTslReplaySummary& ReplaySummary)
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.UpdateReplaySummary");

	UUiReplayList_C_UpdateReplaySummary_Params params;
	params.ReplaySummary = ReplaySummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.SetReplayItemToProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RegionOrLocal                  (Parm, ZeroConstructor)
// struct FReplayItem             inReplayItem                   (Parm)

void UUiReplayList_C::SetReplayItemToProcess(const struct FString& RegionOrLocal, const struct FReplayItem& inReplayItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.SetReplayItemToProcess");

	UUiReplayList_C_SetReplayItemToProcess_Params params;
	params.RegionOrLocal = RegionOrLocal;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.HidePageWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UUiReplayList_C::HidePageWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.HidePageWidget");

	UUiReplayList_C_HidePageWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.ShowPageWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUiReplayList_C::ShowPageWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.ShowPageWidget");

	UUiReplayList_C_ShowPageWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.ClearReplayList
// (Public, BlueprintCallable, BlueprintEvent)

void UUiReplayList_C::ClearReplayList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.ClearReplayList");

	UUiReplayList_C_ClearReplayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UUiReplayList_C_BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature");

	UUiReplayList_C_BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature");

	UUiReplayList_C_BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature");

	UUiReplayList_C_BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature");

	UUiReplayList_C_BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature");

	UUiReplayList_C_BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature");

	UUiReplayList_C_BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UUiReplayList_C_BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUiReplayList_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.Tick");

	UUiReplayList_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUiReplayList_C::BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature");

	UUiReplayList_C_BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUiReplayList_C::BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature");

	UUiReplayList_C_BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUiReplayList_C::BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature");

	UUiReplayList_C_BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUiReplayList_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature");

	UUiReplayList_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature");

	UUiReplayList_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature");

	UUiReplayList_C_BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUiReplayList_C::BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature");

	UUiReplayList_C_BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.OnKeepAndDeleteOldestReplaysDoneEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Remains                        (Parm, ZeroConstructor, IsPlainOldData)

void UUiReplayList_C::OnKeepAndDeleteOldestReplaysDoneEvent(int Remains)
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.OnKeepAndDeleteOldestReplaysDoneEvent");

	UUiReplayList_C_OnKeepAndDeleteOldestReplaysDoneEvent_Params params;
	params.Remains = Remains;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.OnGetReplaySummaryEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTslReplaySummary       ReplaySummary                  (Parm)

void UUiReplayList_C::OnGetReplaySummaryEvent(const struct FTslReplaySummary& ReplaySummary)
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.OnGetReplaySummaryEvent");

	UUiReplayList_C_OnGetReplaySummaryEvent_Params params;
	params.ReplaySummary = ReplaySummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUiReplayList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.Construct");

	UUiReplayList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.ExecuteUbergraph_UiReplayList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUiReplayList_C::ExecuteUbergraph_UiReplayList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.ExecuteUbergraph_UiReplayList");

	UUiReplayList_C_ExecuteUbergraph_UiReplayList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.DeleteReplayEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUiReplayList_C::DeleteReplayEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.DeleteReplayEvent__DelegateSignature");

	UUiReplayList_C_DeleteReplayEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.QuitApplicationEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUiReplayList_C::QuitApplicationEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.QuitApplicationEvent__DelegateSignature");

	UUiReplayList_C_QuitApplicationEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.GoPageEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUiReplayList_C::GoPageEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.GoPageEvent__DelegateSignature");

	UUiReplayList_C_GoPageEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.PrevPageEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUiReplayList_C::PrevPageEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.PrevPageEvent__DelegateSignature");

	UUiReplayList_C_PrevPageEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.NextPageEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUiReplayList_C::NextPageEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.NextPageEvent__DelegateSignature");

	UUiReplayList_C_NextPageEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UiReplayList.UiReplayList_C.UpdateReplayList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RegionOrLocal                  (Parm, ZeroConstructor)

void UUiReplayList_C::UpdateReplayList__DelegateSignature(const struct FString& RegionOrLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function UiReplayList.UiReplayList_C.UpdateReplayList__DelegateSignature");

	UUiReplayList_C_UpdateReplayList__DelegateSignature_Params params;
	params.RegionOrLocal = RegionOrLocal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
