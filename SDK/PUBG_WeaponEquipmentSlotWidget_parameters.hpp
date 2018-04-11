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

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetSlotItem
struct UWeaponEquipmentSlotWidget_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetSlotContainer
struct UWeaponEquipmentSlotWidget_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsClearSkinMode
struct UWeaponEquipmentSlotWidget_C_IsClearSkinMode_Params
{
	bool                                               bIsClearSkinMode;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsApplySkinMode
struct UWeaponEquipmentSlotWidget_C_IsApplySkinMode_Params
{
	bool                                               bIsApplySkinMode;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.SetGamepadSelfPutAttachmentFocus
struct UWeaponEquipmentSlotWidget_C_SetGamepadSelfPutAttachmentFocus_Params
{
	bool                                               bFocus;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.InputB
struct UWeaponEquipmentSlotWidget_C_InputB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnChildSlotRefreshFocus
struct UWeaponEquipmentSlotWidget_C_OnChildSlotRefreshFocus_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetFocusingChildWidget
struct UWeaponEquipmentSlotWidget_C_GetFocusingChildWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Up
struct UWeaponEquipmentSlotWidget_C_Up_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Right
struct UWeaponEquipmentSlotWidget_C_Right_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Down
struct UWeaponEquipmentSlotWidget_C_Down_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Left
struct UWeaponEquipmentSlotWidget_C_Left_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetChildRightFocusableWidget
struct UWeaponEquipmentSlotWidget_C_GetChildRightFocusableWidget_Params
{
	class UUserWidget*                                 RightWidget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetChildLeftFocusableWidget
struct UWeaponEquipmentSlotWidget_C_GetChildLeftFocusableWidget_Params
{
	class UUserWidget*                                 LeftWidget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetChildDownFocusableWidget
struct UWeaponEquipmentSlotWidget_C_GetChildDownFocusableWidget_Params
{
	class UUserWidget*                                 DownWidget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetChildUpFocusableWidget
struct UWeaponEquipmentSlotWidget_C_GetChildUpFocusableWidget_Params
{
	class UUserWidget*                                 UpWidget;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsFocusable
struct UWeaponEquipmentSlotWidget_C_IsFocusable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.FindFirstFocusableWidget
struct UWeaponEquipmentSlotWidget_C_FindFirstFocusableWidget_Params
{
	class UUserWidget*                                 FocusableWidget;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsFocus
struct UWeaponEquipmentSlotWidget_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.SetFocus
struct UWeaponEquipmentSlotWidget_C_SetFocus_Params
{
	bool*                                              NewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_FocusColorBG_Prepass_1
struct UWeaponEquipmentSlotWidget_C_On_FocusColorBG_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.InputA
struct UWeaponEquipmentSlotWidget_C_InputA_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnSpawnActorInSceneCaptureWorld
struct UWeaponEquipmentSlotWidget_C_OnSpawnActorInSceneCaptureWorld_Params
{
	class AActor*                                      SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetDragDroppingEquipableItem
struct UWeaponEquipmentSlotWidget_C_GetDragDroppingEquipableItem_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.FindEquipableWeaponPosition
struct UWeaponEquipmentSlotWidget_C_FindEquipableWeaponPosition_Params
{
	struct FEquipPosition                              WeaponPosition;                                           // (Parm, OutParm)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.UpdateWeaponGunInfo
struct UWeaponEquipmentSlotWidget_C_UpdateWeaponGunInfo_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_AmmoIcon_Prepass_1
struct UWeaponEquipmentSlotWidget_C_On_AmmoIcon_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetAmmoName
struct UWeaponEquipmentSlotWidget_C_GetAmmoName_Params
{
	struct FText                                       ItemName;                                                 // (Parm, OutParm)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetAmmoIcon
struct UWeaponEquipmentSlotWidget_C_GetAmmoIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetHandOnUnLoadedAmmoCount
struct UWeaponEquipmentSlotWidget_C_GetHandOnUnLoadedAmmoCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetHandOnLoadedAmmoCount
struct UWeaponEquipmentSlotWidget_C_GetHandOnLoadedAmmoCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_AmmoName_Prepass_1
struct UWeaponEquipmentSlotWidget_C_On_AmmoName_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_AmmoInfoLayer_Prepass_1
struct UWeaponEquipmentSlotWidget_C_On_AmmoInfoLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1
struct UWeaponEquipmentSlotWidget_C_On_WeaponHandsOnUnloadedAmmoCount_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1
struct UWeaponEquipmentSlotWidget_C_On_WeaponHandsOnLoadedAmmoCount_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_WeaponName_Prepass_1
struct UWeaponEquipmentSlotWidget_C_On_WeaponName_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_KeyName_Prepass_1
struct UWeaponEquipmentSlotWidget_C_On_KeyName_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnUpdateWeapon
struct UWeaponEquipmentSlotWidget_C_OnUpdateWeapon_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.On_WeaponCaptureImage_Prepass_1
struct UWeaponEquipmentSlotWidget_C_On_WeaponCaptureImage_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetItem_Bp
struct UWeaponEquipmentSlotWidget_C_GetItem_Bp_Params
{
	class UItem*                                       Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsAttachmentSlotMouseOver
struct UWeaponEquipmentSlotWidget_C_IsAttachmentSlotMouseOver_Params
{
	bool                                               MouseOver;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsSlotMouseOver_Bp
struct UWeaponEquipmentSlotWidget_C_IsSlotMouseOver_Bp_Params
{
	bool                                               IsMouseOver;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsSlotSubOn_Bp
struct UWeaponEquipmentSlotWidget_C_IsSlotSubOn_Bp_Params
{
	bool                                               SubOn;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.IsSlotOn_Bp
struct UWeaponEquipmentSlotWidget_C_IsSlotOn_Bp_Params
{
	bool                                               IsOn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDrop
struct UWeaponEquipmentSlotWidget_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetWeaponSlotEquipId
struct UWeaponEquipmentSlotWidget_C_GetWeaponSlotEquipId_Params
{
	EEquipSlotID                                       EquipSlotID;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.MainPrepass_1
struct UWeaponEquipmentSlotWidget_C_MainPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.InitializeWeaponEquipSlot
struct UWeaponEquipmentSlotWidget_C_InitializeWeaponEquipSlot_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.RefreshAttachmentSlot
struct UWeaponEquipmentSlotWidget_C_RefreshAttachmentSlot_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnMouseButtonUp
struct UWeaponEquipmentSlotWidget_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragDetected
struct UWeaponEquipmentSlotWidget_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnMouseButtonDown
struct UWeaponEquipmentSlotWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetSlotVisibility
struct UWeaponEquipmentSlotWidget_C_GetSlotVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetWeaponIcon
struct UWeaponEquipmentSlotWidget_C_GetWeaponIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.GetWeaponInfoText
struct UWeaponEquipmentSlotWidget_C_GetWeaponInfoText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Construct
struct UWeaponEquipmentSlotWidget_C_Construct_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnUpdateEquip
struct UWeaponEquipmentSlotWidget_C_OnUpdateEquip_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragEnter
struct UWeaponEquipmentSlotWidget_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragLeave
struct UWeaponEquipmentSlotWidget_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragSlotEnter
struct UWeaponEquipmentSlotWidget_C_OnDragSlotEnter_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragSlotLeave
struct UWeaponEquipmentSlotWidget_C_OnDragSlotLeave_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnMouseEnter
struct UWeaponEquipmentSlotWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnMouseLeave
struct UWeaponEquipmentSlotWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnUpdateItem
struct UWeaponEquipmentSlotWidget_C_OnUpdateItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.UpdateDragDropObject
struct UWeaponEquipmentSlotWidget_C_UpdateDragDropObject_Params
{
	class UTslItemDragDropOperation_C**                DragDropObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.SetInventory
struct UWeaponEquipmentSlotWidget_C_SetInventory_Params
{
	class UInventoryWidget_C**                         InventoryWidget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__UpperRail_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_BndEvt__UpperRail_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Muzzle_K2Node_ComponentBoundEvent_16_RefreshFocus__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_BndEvt__Muzzle_K2Node_ComponentBoundEvent_16_RefreshFocus__DelegateSignature_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__LowerRail_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_BndEvt__LowerRail_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Magazine_K2Node_ComponentBoundEvent_23_RefreshFocus__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_BndEvt__Magazine_K2Node_ComponentBoundEvent_23_RefreshFocus__DelegateSignature_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Stock_K2Node_ComponentBoundEvent_28_RefreshFocus__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_BndEvt__Stock_K2Node_ComponentBoundEvent_28_RefreshFocus__DelegateSignature_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.WidgetInputBPressed
struct UWeaponEquipmentSlotWidget_C_WidgetInputBPressed_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnWidgetInputBReleased
struct UWeaponEquipmentSlotWidget_C_OnWidgetInputBReleased_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.Tick
struct UWeaponEquipmentSlotWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnSlotMoveUp
struct UWeaponEquipmentSlotWidget_C_OnSlotMoveUp_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnSlotMoveDown
struct UWeaponEquipmentSlotWidget_C_OnSlotMoveDown_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.SlotMoveLeft
struct UWeaponEquipmentSlotWidget_C_SlotMoveLeft_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnSlotMoveRight
struct UWeaponEquipmentSlotWidget_C_OnSlotMoveRight_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.CustomEvent_1
struct UWeaponEquipmentSlotWidget_C_CustomEvent_1_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnWidgetInputX
struct UWeaponEquipmentSlotWidget_C_OnWidgetInputX_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.CustomEvent_2
struct UWeaponEquipmentSlotWidget_C_CustomEvent_2_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnInputWidgetInputB
struct UWeaponEquipmentSlotWidget_C_OnInputWidgetInputB_Params
{
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__UpperRail_K2Node_ComponentBoundEvent_12_OnLeaveSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_BndEvt__UpperRail_K2Node_ComponentBoundEvent_12_OnLeaveSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Muzzle_K2Node_ComponentBoundEvent_25_OnLeaveSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_BndEvt__Muzzle_K2Node_ComponentBoundEvent_25_OnLeaveSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__LowerRail_K2Node_ComponentBoundEvent_45_OnLeaveSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_BndEvt__LowerRail_K2Node_ComponentBoundEvent_45_OnLeaveSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Magazine_K2Node_ComponentBoundEvent_65_OnLeaveSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_BndEvt__Magazine_K2Node_ComponentBoundEvent_65_OnLeaveSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Stock_K2Node_ComponentBoundEvent_86_OnLeaveSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_BndEvt__Stock_K2Node_ComponentBoundEvent_86_OnLeaveSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__UpperRail_K2Node_ComponentBoundEvent_177_OnEnterSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_BndEvt__UpperRail_K2Node_ComponentBoundEvent_177_OnEnterSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Muzzle_K2Node_ComponentBoundEvent_192_OnEnterSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_BndEvt__Muzzle_K2Node_ComponentBoundEvent_192_OnEnterSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__LowerRail_K2Node_ComponentBoundEvent_212_OnEnterSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_BndEvt__LowerRail_K2Node_ComponentBoundEvent_212_OnEnterSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Magazine_K2Node_ComponentBoundEvent_239_OnEnterSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_BndEvt__Magazine_K2Node_ComponentBoundEvent_239_OnEnterSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.BndEvt__Stock_K2Node_ComponentBoundEvent_261_OnEnterSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_BndEvt__Stock_K2Node_ComponentBoundEvent_261_OnEnterSlot__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.ExecuteUbergraph_WeaponEquipmentSlotWidget
struct UWeaponEquipmentSlotWidget_C_ExecuteUbergraph_WeaponEquipmentSlotWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragLeaveWeaponSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_OnDragLeaveWeaponSlot__DelegateSignature_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnDragEnterWeaponSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_OnDragEnterWeaponSlot__DelegateSignature_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget.WeaponEquipmentSlotWidget_C.OnReleased__DelegateSignature
struct UWeaponEquipmentSlotWidget_C_OnReleased__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
