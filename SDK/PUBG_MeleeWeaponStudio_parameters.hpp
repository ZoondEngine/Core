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

// Function MeleeWeaponStudio.MeleeWeaponStudio_C.OnLoaded
struct AMeleeWeaponStudio_C_OnLoaded_Params
{
};

// Function MeleeWeaponStudio.MeleeWeaponStudio_C.UserConstructionScript
struct AMeleeWeaponStudio_C_UserConstructionScript_Params
{
};

// Function MeleeWeaponStudio.MeleeWeaponStudio_C.SetItem
struct AMeleeWeaponStudio_C_SetItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MeleeWeaponStudio.MeleeWeaponStudio_C.ExecuteUbergraph_MeleeWeaponStudio
struct AMeleeWeaponStudio_C_ExecuteUbergraph_MeleeWeaponStudio_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
