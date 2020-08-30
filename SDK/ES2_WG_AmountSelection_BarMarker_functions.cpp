// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_AmountSelection_BarMarker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_AmountSelection_BarMarker_C::SetValue(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.SetValue");

	UWG_AmountSelection_BarMarker_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.ToggleAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          LeftAligned                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_AmountSelection_BarMarker_C::ToggleAlignment(bool* LeftAligned)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.ToggleAlignment");

	UWG_AmountSelection_BarMarker_C_ToggleAlignment_Params params;
	params.LeftAligned = LeftAligned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_AmountSelection_BarMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.Construct");

	UWG_AmountSelection_BarMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_AmountSelection_BarMarker_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.Tick");

	UWG_AmountSelection_BarMarker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void UWG_AmountSelection_BarMarker_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.Deactivate");

	UWG_AmountSelection_BarMarker_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.ExecuteUbergraph_WG_AmountSelection_BarMarker
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_AmountSelection_BarMarker_C::ExecuteUbergraph_WG_AmountSelection_BarMarker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.ExecuteUbergraph_WG_AmountSelection_BarMarker");

	UWG_AmountSelection_BarMarker_C_ExecuteUbergraph_WG_AmountSelection_BarMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
