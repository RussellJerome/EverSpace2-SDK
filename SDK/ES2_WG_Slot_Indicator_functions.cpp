// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Slot_Indicator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Slot_Indicator.WG_Slot_Indicator_C.SetHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Slot_Indicator_C::SetHighlight(bool* On)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Slot_Indicator.WG_Slot_Indicator_C.SetHighlight");

	UWG_Slot_Indicator_C_SetHighlight_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Slot_Indicator.WG_Slot_Indicator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Slot_Indicator_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Slot_Indicator.WG_Slot_Indicator_C.PreConstruct");

	UWG_Slot_Indicator_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Slot_Indicator.WG_Slot_Indicator_C.SetAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEmpty                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Slot_Indicator_C::SetAppearance(struct FLinearColor* Color, bool* IsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Slot_Indicator.WG_Slot_Indicator_C.SetAppearance");

	UWG_Slot_Indicator_C_SetAppearance_Params params;
	params.Color = Color;
	params.IsEmpty = IsEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Slot_Indicator.WG_Slot_Indicator_C.ExecuteUbergraph_WG_Slot_Indicator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Slot_Indicator_C::ExecuteUbergraph_WG_Slot_Indicator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Slot_Indicator.WG_Slot_Indicator_C.ExecuteUbergraph_WG_Slot_Indicator");

	UWG_Slot_Indicator_C_ExecuteUbergraph_WG_Slot_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
