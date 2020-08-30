// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ButtonHighlightGlimmer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_ButtonHighlightGlimmer.WG_ButtonHighlightGlimmer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_ButtonHighlightGlimmer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ButtonHighlightGlimmer.WG_ButtonHighlightGlimmer_C.Construct");

	UWG_ButtonHighlightGlimmer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ButtonHighlightGlimmer.WG_ButtonHighlightGlimmer_C.EnableGlimmer
// (BlueprintCallable, BlueprintEvent)

void UWG_ButtonHighlightGlimmer_C::EnableGlimmer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ButtonHighlightGlimmer.WG_ButtonHighlightGlimmer_C.EnableGlimmer");

	UWG_ButtonHighlightGlimmer_C_EnableGlimmer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ButtonHighlightGlimmer.WG_ButtonHighlightGlimmer_C.DisableGlimmer
// (BlueprintCallable, BlueprintEvent)

void UWG_ButtonHighlightGlimmer_C::DisableGlimmer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ButtonHighlightGlimmer.WG_ButtonHighlightGlimmer_C.DisableGlimmer");

	UWG_ButtonHighlightGlimmer_C_DisableGlimmer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ButtonHighlightGlimmer.WG_ButtonHighlightGlimmer_C.FadeOutFinished
// (BlueprintCallable, BlueprintEvent)

void UWG_ButtonHighlightGlimmer_C::FadeOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ButtonHighlightGlimmer.WG_ButtonHighlightGlimmer_C.FadeOutFinished");

	UWG_ButtonHighlightGlimmer_C_FadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ButtonHighlightGlimmer.WG_ButtonHighlightGlimmer_C.ExecuteUbergraph_WG_ButtonHighlightGlimmer
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ButtonHighlightGlimmer_C::ExecuteUbergraph_WG_ButtonHighlightGlimmer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ButtonHighlightGlimmer.WG_ButtonHighlightGlimmer_C.ExecuteUbergraph_WG_ButtonHighlightGlimmer");

	UWG_ButtonHighlightGlimmer_C_ExecuteUbergraph_WG_ButtonHighlightGlimmer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
