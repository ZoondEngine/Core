#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.IsFocusable
struct UItemListWidget_Gamepad_C_IsFocusable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.InputLB
struct UItemListWidget_Gamepad_C_InputLB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.InputLT
struct UItemListWidget_Gamepad_C_InputLT_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.InputRB
struct UItemListWidget_Gamepad_C_InputRB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.InputRT
struct UItemListWidget_Gamepad_C_InputRT_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GetFocusingChildWidget
struct UItemListWidget_Gamepad_C_GetFocusingChildWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.InputA
struct UItemListWidget_Gamepad_C_InputA_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.InputB
struct UItemListWidget_Gamepad_C_InputB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.InputX
struct UItemListWidget_Gamepad_C_InputX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.InputY
struct UItemListWidget_Gamepad_C_InputY_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GetDownWidget
struct UItemListWidget_Gamepad_C_GetDownWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GetLeftWidget
struct UItemListWidget_Gamepad_C_GetLeftWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GetRightWidget
struct UItemListWidget_Gamepad_C_GetRightWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GetUpWidget
struct UItemListWidget_Gamepad_C_GetUpWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Down
struct UItemListWidget_Gamepad_C_Down_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.IsFocus
struct UItemListWidget_Gamepad_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Left
struct UItemListWidget_Gamepad_C_Left_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Right
struct UItemListWidget_Gamepad_C_Right_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.SetFocus
struct UItemListWidget_Gamepad_C_SetFocus_Params
{
	bool                                               NewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Up
struct UItemListWidget_Gamepad_C_Up_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GetFocusSlotOffsetByIndexAndInnerFocus
struct UItemListWidget_Gamepad_C_GetFocusSlotOffsetByIndexAndInnerFocus_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUpper;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InnerFocusIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutOffset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GetFocusSlotOffsetByIndex
struct UItemListWidget_Gamepad_C_GetFocusSlotOffsetByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUpper;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutOffset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.On_Bottom_Prepass_1
struct UItemListWidget_Gamepad_C_On_Bottom_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.On_Top_Prepass_1
struct UItemListWidget_Gamepad_C_On_Top_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GetFocusSlotOffset
struct UItemListWidget_Gamepad_C_GetFocusSlotOffset_Params
{
	bool                                               bIsUpper;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutOffset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnQuickScrollingDown
struct UItemListWidget_Gamepad_C_OnQuickScrollingDown_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnQuickScrollingUp
struct UItemListWidget_Gamepad_C_OnQuickScrollingUp_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.SpawnItemSlots
struct UItemListWidget_Gamepad_C_SpawnItemSlots_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.ProcessScroll
struct UItemListWidget_Gamepad_C_ProcessScroll_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Gamepad_FinalizeWidget
struct UItemListWidget_Gamepad_C_Gamepad_FinalizeWidget_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnWidgetMoveDown
struct UItemListWidget_Gamepad_C_OnWidgetMoveDown_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnWidgetMoveUp
struct UItemListWidget_Gamepad_C_OnWidgetMoveUp_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnSlotScrollDownReleased
struct UItemListWidget_Gamepad_C_OnSlotScrollDownReleased_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnSlotScrollDownPressed
struct UItemListWidget_Gamepad_C_OnSlotScrollDownPressed_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnSlotScrollUpReleased
struct UItemListWidget_Gamepad_C_OnSlotScrollUpReleased_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnSlotScrollUpPressed
struct UItemListWidget_Gamepad_C_OnSlotScrollUpPressed_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Gamepad_SpawntemExplorer
struct UItemListWidget_Gamepad_C_Gamepad_SpawntemExplorer_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Gamepad_SetupInput
struct UItemListWidget_Gamepad_C_Gamepad_SetupInput_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Gamepad_InitWidget
struct UItemListWidget_Gamepad_C_Gamepad_InitWidget_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GetScrollAccelation
struct UItemListWidget_Gamepad_C_GetScrollAccelation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GetMaxScroll
struct UItemListWidget_Gamepad_C_GetMaxScroll_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnChildWidgetRefreshFocus
struct UItemListWidget_Gamepad_C_OnChildWidgetRefreshFocus_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.On_FocusColor_Prepass_1
struct UItemListWidget_Gamepad_C_On_FocusColor_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.UpdateOffset_XBoxOne_Up
struct UItemListWidget_Gamepad_C_UpdateOffset_XBoxOne_Up_Params
{
	float                                              AdditionalOffset;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.UpdateOffset_XBoxOne_Down
struct UItemListWidget_Gamepad_C_UpdateOffset_XBoxOne_Down_Params
{
	float                                              AdditionalOffset;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GetSelectWidget
struct UItemListWidget_Gamepad_C_GetSelectWidget_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.isEmptyList
struct UItemListWidget_Gamepad_C_isEmptyList_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.RefreshList_Inventory
struct UItemListWidget_Gamepad_C_RefreshList_Inventory_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GetSlotItem
struct UItemListWidget_Gamepad_C_GetSlotItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotInterface>             Item_SlotInterface;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UItemSlotWidget_Gamepad_C*                   ItemSlotWidget;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsNew;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.RefreshList_Visinity
struct UItemListWidget_Gamepad_C_RefreshList_Visinity_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnDrop
struct UItemListWidget_Gamepad_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GetContentCount
struct UItemListWidget_Gamepad_C_GetContentCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GetWeightPercent
struct UItemListWidget_Gamepad_C_GetWeightPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.GetWeightText
struct UItemListWidget_Gamepad_C_GetWeightText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.RefreshList
struct UItemListWidget_Gamepad_C_RefreshList_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.CreateBackgroundSlots
struct UItemListWidget_Gamepad_C_CreateBackgroundSlots_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Construct
struct UItemListWidget_Gamepad_C_Construct_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnSlotFocus
struct UItemListWidget_Gamepad_C_OnSlotFocus_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnRefreshList
struct UItemListWidget_Gamepad_C_OnRefreshList_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnDragEnter
struct UItemListWidget_Gamepad_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnDragLeave
struct UItemListWidget_Gamepad_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Destruct
struct UItemListWidget_Gamepad_C_Destruct_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.Tick
struct UItemListWidget_Gamepad_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.CustomEvent_1
struct UItemListWidget_Gamepad_C_CustomEvent_1_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnRefreshFocus
struct UItemListWidget_Gamepad_C_OnRefreshFocus_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnSlotScrollMoving
struct UItemListWidget_Gamepad_C_OnSlotScrollMoving_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.ExecuteUbergraph_ItemListWidget_Gamepad
struct UItemListWidget_Gamepad_C_ExecuteUbergraph_ItemListWidget_Gamepad_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.RefreshFocus__DelegateSignature
struct UItemListWidget_Gamepad_C_RefreshFocus__DelegateSignature_Params
{
};

// Function ItemListWidget_Gamepad.ItemListWidget_Gamepad_C.OnChildSlotFocus__DelegateSignature
struct UItemListWidget_Gamepad_C_OnChildSlotFocus__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
