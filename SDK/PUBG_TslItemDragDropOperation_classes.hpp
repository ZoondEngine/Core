#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TslItemDragDropOperation.TslItemDragDropOperation_C
// 0x0080 (0x0108 - 0x0088)
class UTslItemDragDropOperation_C : public UDragDropOperation
{
public:
	class UItem*                                       DragDroppingItem;                                         // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MouseOverWeaponSlotIndex;                                 // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UEquipableItem*                              DragDroppingEquipableItem;                                // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeaponItem*                                 DragDroppingWeaponItem;                                   // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UThrowableItem*                              DragDroppingThrowableItem;                                // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MouseOverAttachmentWeaponSlotIndex;                       // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeaponAttachmentSlotID                            MouseOverAttachmentSlotId;                                // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	class UAttachableItem*                             DragDroppingAttachableItem;                               // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMouseOverVicinity;                                     // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMouseOverInventory;                                    // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMouseOverEquipment;                                    // 0x00C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMouseOverWeaponEquipment;                              // 0x00C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMouseOverAttachmentSlot;                               // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	TScriptInterface<class USlotContainerInterface>    Container;                                                // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotInterface>             Slot;                                                     // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DragDroppingWeaponIndex;                                  // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EEquipSlotID                                       MouseOverSlotId;                                          // 0x00EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	TArray<TScriptInterface<class USlotContainerInterface>> OtherContainerStack;                                      // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       ActionName;                                               // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TslItemDragDropOperation.TslItemDragDropOperation_C");
		return ptr;
	}


	void IsDragDroppingItemAttachment(bool* IsAttachment);
	void IsDragDroppingItemWeapon(bool* IsWeapon);
	void IsInEquipment(bool* NewParam);
	void GetCurrentOtherContainer(TScriptInterface<class USlotContainerInterface>* OtherContainer);
	void LeaveOtherContainer();
	void EnterOtherContainer(const TScriptInterface<class USlotContainerInterface>& NewOtherContainer);
	void IsEnableAction(bool* IsEnableAction);
	void GetActionName(struct FName* ActionName);
	void GetOptions(struct FString* Options);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
