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

// Function ListBaseGroupWidget.ListBaseGroupWidget_C.GetChilderenCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UListBaseGroupWidget_C::GetChilderenCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ListBaseGroupWidget.ListBaseGroupWidget_C.GetChilderenCount");

	UListBaseGroupWidget_C_GetChilderenCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function ListBaseGroupWidget.ListBaseGroupWidget_C.AddChild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Content                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UListBaseGroupWidget_C::AddChild(class UWidget** Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function ListBaseGroupWidget.ListBaseGroupWidget_C.AddChild");

	UListBaseGroupWidget_C_AddChild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;
}


// Function ListBaseGroupWidget.ListBaseGroupWidget_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UListBaseGroupWidget_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function ListBaseGroupWidget.ListBaseGroupWidget_C.Clear");

	UListBaseGroupWidget_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ListBaseGroupWidget.ListBaseGroupWidget_C.On_List_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UListBaseGroupWidget_C::On_List_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ListBaseGroupWidget.ListBaseGroupWidget_C.On_List_Prepass_1");

	UListBaseGroupWidget_C_On_List_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ListBaseGroupWidget.ListBaseGroupWidget_C.AddCategoryGroup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCategoryGroupWidget_C*  CategoryGroup                  (Parm, ZeroConstructor, IsPlainOldData)

void UListBaseGroupWidget_C::AddCategoryGroup(class UCategoryGroupWidget_C* CategoryGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function ListBaseGroupWidget.ListBaseGroupWidget_C.AddCategoryGroup");

	UListBaseGroupWidget_C_AddCategoryGroup_Params params;
	params.CategoryGroup = CategoryGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
