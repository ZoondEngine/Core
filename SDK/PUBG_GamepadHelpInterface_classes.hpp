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

// BlueprintGeneratedClass GamepadHelpInterface.GamepadHelpInterface_C
// 0x0000 (0x0028 - 0x0028)
class UGamepadHelpInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GamepadHelpInterface.GamepadHelpInterface_C");
		return ptr;
	}


	void GetGamePadHelpWidgetClass(class UClass** GuideClass);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
