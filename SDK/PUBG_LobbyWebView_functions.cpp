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

// Function LobbyWebView.LobbyWebView_C.WebViewBroadcast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FString                 Parameter                      (Parm, ZeroConstructor)

void ULobbyWebView_C::WebViewBroadcast(const struct FString& EventName, const struct FString& Parameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.WebViewBroadcast");

	ULobbyWebView_C_WebViewBroadcast_Params params;
	params.EventName = EventName;
	params.Parameter = Parameter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewUnload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ViewIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWebView_C::WebViewUnload(int ViewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.WebViewUnload");

	ULobbyWebView_C_WebViewUnload_Params params;
	params.ViewIndex = ViewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            VeiwIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWebView_C::WebViewShow(int VeiwIndex, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.WebViewShow");

	ULobbyWebView_C_WebViewShow_Params params;
	params.VeiwIndex = VeiwIndex;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.HandleEventFromWeb
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCoherentUIGTJSPayload*  payload                        (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWebView_C::HandleEventFromWeb(class UCoherentUIGTJSPayload* payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.HandleEventFromWeb");

	ULobbyWebView_C_HandleEventFromWeb_Params params;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewInputFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ViewIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWebView_C::WebViewInputFocus(int ViewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.WebViewInputFocus");

	ULobbyWebView_C_WebViewInputFocus_Params params;
	params.ViewIndex = ViewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ViewIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 URL                            (Parm, ZeroConstructor)

void ULobbyWebView_C::WebViewLoad(int ViewIndex, const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.WebViewLoad");

	ULobbyWebView_C_WebViewLoad_Params params;
	params.ViewIndex = ViewIndex;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULobbyWebView_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.Construct");

	ULobbyWebView_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWebView_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.Tick");

	ULobbyWebView_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULobbyWebView_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.Destruct");

	ULobbyWebView_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.J_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCoherentUIGTJSPayload*  payload                        (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWebView_C::J_1(class UCoherentUIGTJSPayload* payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.J_1");

	ULobbyWebView_C_J_1_Params params;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature
// (BlueprintEvent)

void ULobbyWebView_C::BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature");

	ULobbyWebView_C_BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.PressAKey
// (BlueprintCallable, BlueprintEvent)

void ULobbyWebView_C::PressAKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.PressAKey");

	ULobbyWebView_C_PressAKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.PressBKey
// (BlueprintCallable, BlueprintEvent)

void ULobbyWebView_C::PressBKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.PressBKey");

	ULobbyWebView_C_PressBKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.ExecuteUbergraph_LobbyWebView
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULobbyWebView_C::ExecuteUbergraph_LobbyWebView(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.ExecuteUbergraph_LobbyWebView");

	ULobbyWebView_C_ExecuteUbergraph_LobbyWebView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
