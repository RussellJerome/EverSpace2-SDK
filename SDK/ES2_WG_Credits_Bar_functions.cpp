// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Credits_Bar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Credits_Bar.WG_Credits_Bar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Credits_Bar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Credits_Bar.WG_Credits_Bar_C.Construct");

	UWG_Credits_Bar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Credits_Bar.WG_Credits_Bar_C.SetCredits
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           credits                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Colorize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Credits_Bar_C::SetCredits(int* credits, bool* Colorize, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Credits_Bar.WG_Credits_Bar_C.SetCredits");

	UWG_Credits_Bar_C_SetCredits_Params params;
	params.credits = credits;
	params.Colorize = Colorize;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Credits_Bar.WG_Credits_Bar_C.CreditsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewCredits                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           CreditsDelta                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Credits_Bar_C::CreditsChanged(int* NewCredits, int* CreditsDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Credits_Bar.WG_Credits_Bar_C.CreditsChanged");

	UWG_Credits_Bar_C_CreditsChanged_Params params;
	params.NewCredits = NewCredits;
	params.CreditsDelta = CreditsDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Credits_Bar.WG_Credits_Bar_C.ExecuteUbergraph_WG_Credits_Bar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Credits_Bar_C::ExecuteUbergraph_WG_Credits_Bar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Credits_Bar.WG_Credits_Bar_C.ExecuteUbergraph_WG_Credits_Bar");

	UWG_Credits_Bar_C_ExecuteUbergraph_WG_Credits_Bar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
