// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_XP_Level_Credits_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_XP_Level_Credits_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.Construct");

	UWG_XP_Level_Credits_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.OnPlayerXPChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         XPDelta                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaAsRatio                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_XP_Level_Credits_C::OnPlayerXPChanged_Event(float* XPDelta, float* DeltaAsRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.OnPlayerXPChanged_Event");

	UWG_XP_Level_Credits_C_OnPlayerXPChanged_Event_Params params;
	params.XPDelta = XPDelta;
	params.DeltaAsRatio = DeltaAsRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.OnPlayerCreditsChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewCredits                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           CreditsDelta                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_XP_Level_Credits_C::OnPlayerCreditsChanged_Event(int* NewCredits, int* CreditsDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.OnPlayerCreditsChanged_Event");

	UWG_XP_Level_Credits_C_OnPlayerCreditsChanged_Event_Params params;
	params.NewCredits = NewCredits;
	params.CreditsDelta = CreditsDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.OnPlayerLevelUp_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_XP_Level_Credits_C::OnPlayerLevelUp_Event(int* NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.OnPlayerLevelUp_Event");

	UWG_XP_Level_Credits_C_OnPlayerLevelUp_Event_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.SetCanPlayCreditsGainAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCanPlay                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_XP_Level_Credits_C::SetCanPlayCreditsGainAnimation(bool* bCanPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.SetCanPlayCreditsGainAnimation");

	UWG_XP_Level_Credits_C_SetCanPlayCreditsGainAnimation_Params params;
	params.bCanPlay = bCanPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.ExecuteUbergraph_WG_XP_Level_Credits
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_XP_Level_Credits_C::ExecuteUbergraph_WG_XP_Level_Credits(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.ExecuteUbergraph_WG_XP_Level_Credits");

	UWG_XP_Level_Credits_C_ExecuteUbergraph_WG_XP_Level_Credits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
