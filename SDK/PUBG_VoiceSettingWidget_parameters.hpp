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

// Function VoiceSettingWidget.VoiceSettingWidget_C.GetVoiceChannelByOption
struct UVoiceSettingWidget_C_GetVoiceChannelByOption_Params
{
	bool                                               GlobalChannel;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               TeamChannel;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.GetMyVoiceByOption
struct UVoiceSettingWidget_C_GetMyVoiceByOption_Params
{
	bool                                               bIsMuted;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePushToTalk;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.GetVoiceChannelOptionString
struct UVoiceSettingWidget_C_GetVoiceChannelOptionString_Params
{
	struct FString                                     OptionString;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.GetMyVoiceOptionString
struct UVoiceSettingWidget_C_GetMyVoiceOptionString_Params
{
	struct FString                                     OptionString;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.IsChanged
struct UVoiceSettingWidget_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.UpdateVoiceSettingWidget
struct UVoiceSettingWidget_C_UpdateVoiceSettingWidget_Params
{
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.Construct
struct UVoiceSettingWidget_C_Construct_Params
{
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.OnApply
struct UVoiceSettingWidget_C_OnApply_Params
{
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.OnDefault
struct UVoiceSettingWidget_C_OnDefault_Params
{
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.OnReset
struct UVoiceSettingWidget_C_OnReset_Params
{
};

// Function VoiceSettingWidget.VoiceSettingWidget_C.ExecuteUbergraph_VoiceSettingWidget
struct UVoiceSettingWidget_C_ExecuteUbergraph_VoiceSettingWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
