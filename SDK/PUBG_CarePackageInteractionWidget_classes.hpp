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

// WidgetBlueprintGeneratedClass CarePackageInteractionWidget.CarePackageInteractionWidget_C
// 0x0019 (0x0259 - 0x0240)
class UCarePackageInteractionWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	class UWidgetSwitcher*                             InteractionInputMethodSwitcher;                           // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      KeyImage;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               IsCanShowCarePackageList;                                 // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CarePackageInteractionWidget.CarePackageInteractionWidget_C");
		return ptr;
	}


	void ShowCarePackageInteractionWidget(bool IsShow);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Construct();
	void BndEvt__Vanishing_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void CustomTick();
	void TimerCheckCarePackage();
	void ExecuteUbergraph_CarePackageInteractionWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
