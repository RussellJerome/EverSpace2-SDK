// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Fullscreen_Fade_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.FadeOut
// (BlueprintCallable, BlueprintEvent)

void UWG_Fullscreen_Fade_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.FadeOut");

	UWG_Fullscreen_Fade_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.FadeIn
// (BlueprintCallable, BlueprintEvent)

void UWG_Fullscreen_Fade_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.FadeIn");

	UWG_Fullscreen_Fade_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Fullscreen_Fade_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.Construct");

	UWG_Fullscreen_Fade_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.ExecuteUbergraph_WG_Fullscreen_Fade
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Fullscreen_Fade_C::ExecuteUbergraph_WG_Fullscreen_Fade(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.ExecuteUbergraph_WG_Fullscreen_Fade");

	UWG_Fullscreen_Fade_C_ExecuteUbergraph_WG_Fullscreen_Fade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.OnFadedOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Fullscreen_Fade_C**  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Fullscreen_Fade_C::OnFadedOut__DelegateSignature(class UWG_Fullscreen_Fade_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.OnFadedOut__DelegateSignature");

	UWG_Fullscreen_Fade_C_OnFadedOut__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.OnFadedIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_Fullscreen_Fade_C::OnFadedIn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.OnFadedIn__DelegateSignature");

	UWG_Fullscreen_Fade_C_OnFadedIn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
