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

// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetItemDetailedName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UEquipableItem*          NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm, OutParm)

void UItemToolTipWidget_Bp_C::GetItemDetailedName(class UEquipableItem* NewParam, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetItemDetailedName");

	UItemToolTipWidget_Bp_C_GetItemDetailedName_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.On_MagazineIcon_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::On_MagazineIcon_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.On_MagazineIcon_Prepass_1");

	UItemToolTipWidget_Bp_C_On_MagazineIcon_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetFiringRate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmmoClip                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          FullReloadingTime              (Parm, ZeroConstructor, IsPlainOldData)
// float                          FringRate                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetFiringRate(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, int AmmoClip, float FullReloadingTime, float* FringRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetFiringRate");

	UItemToolTipWidget_Bp_C_GetFiringRate_Params params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;
	params.AmmoClip = AmmoClip;
	params.FullReloadingTime = FullReloadingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FringRate != nullptr)
		*FringRate = params.FringRate;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetShooterWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UEquipableItem*          EquipableItem                  (Parm, ZeroConstructor, IsPlainOldData)
// class ATslWeapon*              ShooterWeapon                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetShooterWeapon(class UEquipableItem* EquipableItem, class ATslWeapon** ShooterWeapon, class ATslWeapon_Trajectory** ShooterWeapon_Trajectory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetShooterWeapon");

	UItemToolTipWidget_Bp_C_GetShooterWeapon_Params params;
	params.EquipableItem = EquipableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShooterWeapon != nullptr)
		*ShooterWeapon = params.ShooterWeapon;
	if (ShooterWeapon_Trajectory != nullptr)
		*ShooterWeapon_Trajectory = params.ShooterWeapon_Trajectory;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.OnUpdateEquipmentSlotItemToolTip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipableItem*          EquipableItem                  (Parm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::OnUpdateEquipmentSlotItemToolTip(class UEquipableItem* EquipableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.OnUpdateEquipmentSlotItemToolTip");

	UItemToolTipWidget_Bp_C_OnUpdateEquipmentSlotItemToolTip_Params params;
	params.EquipableItem = EquipableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.OnUpdateVicinityOrInventorySlotItemToolTip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipableItem*          EquipableItem                  (Parm, ZeroConstructor, IsPlainOldData)
// class UEquipableItem*          EquipmentSlotItem              (Parm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::OnUpdateVicinityOrInventorySlotItemToolTip(class UEquipableItem* EquipableItem, class UEquipableItem* EquipmentSlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.OnUpdateVicinityOrInventorySlotItemToolTip");

	UItemToolTipWidget_Bp_C_OnUpdateVicinityOrInventorySlotItemToolTip_Params params;
	params.EquipableItem = EquipableItem;
	params.EquipmentSlotItem = EquipmentSlotItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UItemToolTipWidget_Bp_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.Clear");

	UItemToolTipWidget_Bp_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetAttachedAmmo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWeaponItem*             WeaponItem                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmmoClip                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetAttachedAmmo(class UWeaponItem* WeaponItem, int* AmmoClip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetAttachedAmmo");

	UItemToolTipWidget_Bp_C_GetAttachedAmmo_Params params;
	params.WeaponItem = WeaponItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoClip != nullptr)
		*AmmoClip = params.AmmoClip;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeaponItem*             WeaponItem                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmmoClip                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetAmmo(class UWeaponItem* WeaponItem, int* AmmoClip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetAmmo");

	UItemToolTipWidget_Bp_C_GetAmmo_Params params;
	params.WeaponItem = WeaponItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoClip != nullptr)
		*AmmoClip = params.AmmoClip;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetAttachedStability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Accuracy                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetAttachedStability(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, float* Accuracy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetAttachedStability");

	UItemToolTipWidget_Bp_C_GetAttachedStability_Params params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accuracy != nullptr)
		*Accuracy = params.Accuracy;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetStability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Accuracy                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetStability(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, float* Accuracy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetStability");

	UItemToolTipWidget_Bp_C_GetStability_Params params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accuracy != nullptr)
		*Accuracy = params.Accuracy;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetWeaponEffectiveRange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslWeapon_Trajectory*   ShooterWeapon_Trajectory       (Parm, ZeroConstructor, IsPlainOldData)
// float                          EffectRange                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetWeaponEffectiveRange(class ATslWeapon_Trajectory* ShooterWeapon_Trajectory, float* EffectRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetWeaponEffectiveRange");

	UItemToolTipWidget_Bp_C_GetWeaponEffectiveRange_Params params;
	params.ShooterWeapon_Trajectory = ShooterWeapon_Trajectory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EffectRange != nullptr)
		*EffectRange = params.EffectRange;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetWeaponPower
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslWeapon*              ShooterWeapon                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::GetWeaponPower(class ATslWeapon* ShooterWeapon, float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.GetWeaponPower");

	UItemToolTipWidget_Bp_C_GetWeaponPower_Params params;
	params.ShooterWeapon = ShooterWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void UItemToolTipWidget_Bp_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.FadeIn");

	UItemToolTipWidget_Bp_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateDefaultInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::UpdateDefaultInfo(const TScriptInterface<class USlotInterface>& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateDefaultInfo");

	UItemToolTipWidget_Bp_C_UpdateDefaultInfo_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.SetItemByInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::SetItemByInterface(const TScriptInterface<class USlotInterface>& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.SetItemByInterface");

	UItemToolTipWidget_Bp_C_SetItemByInterface_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateItemDetailInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem*                   Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::UpdateItemDetailInfo(class UItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateItemDetailInfo");

	UItemToolTipWidget_Bp_C_UpdateItemDetailInfo_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemToolTipWidget_Bp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.Construct");

	UItemToolTipWidget_Bp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateSlotInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UItemToolTipWidget_Bp_C::UpdateSlotInfo(TScriptInterface<class USlotInterface>* SlotInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateSlotInfo");

	UItemToolTipWidget_Bp_C_UpdateSlotInfo_Params params;
	params.SlotInterface = SlotInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateEquipmentSlotItemToolTip
// (Event, Public, BlueprintEvent)
// Parameters:
// class UEquipableItem**         EquipableItem                  (Parm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::UpdateEquipmentSlotItemToolTip(class UEquipableItem** EquipableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateEquipmentSlotItemToolTip");

	UItemToolTipWidget_Bp_C_UpdateEquipmentSlotItemToolTip_Params params;
	params.EquipableItem = EquipableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateVicinityOrInventorySlotItemToolTip
// (Event, Public, BlueprintEvent)
// Parameters:
// class UEquipableItem**         EquipableItem                  (Parm, ZeroConstructor, IsPlainOldData)
// class UEquipableItem**         EquipmentSlotItem              (Parm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::UpdateVicinityOrInventorySlotItemToolTip(class UEquipableItem** EquipableItem, class UEquipableItem** EquipmentSlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.UpdateVicinityOrInventorySlotItemToolTip");

	UItemToolTipWidget_Bp_C_UpdateVicinityOrInventorySlotItemToolTip_Params params;
	params.EquipableItem = EquipableItem;
	params.EquipmentSlotItem = EquipmentSlotItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.Tick");

	UItemToolTipWidget_Bp_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.ExecuteUbergraph_ItemToolTipWidget_Bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemToolTipWidget_Bp_C::ExecuteUbergraph_ItemToolTipWidget_Bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemToolTipWidget_Bp.ItemToolTipWidget_Bp_C.ExecuteUbergraph_ItemToolTipWidget_Bp");

	UItemToolTipWidget_Bp_C_ExecuteUbergraph_ItemToolTipWidget_Bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
