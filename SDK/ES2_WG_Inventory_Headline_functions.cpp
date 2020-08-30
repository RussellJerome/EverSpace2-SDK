// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Inventory_Headline_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Inventory_Headline.WG_Inventory_Headline_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Headline_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Headline.WG_Inventory_Headline_C.PreConstruct");

	UWG_Inventory_Headline_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Headline.WG_Inventory_Headline_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Inventory_Headline_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Headline.WG_Inventory_Headline_C.Construct");

	UWG_Inventory_Headline_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Headline.WG_Inventory_Headline_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Caption                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Inventory_Headline_C::SetText(struct FText* Caption)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Headline.WG_Inventory_Headline_C.SetText");

	UWG_Inventory_Headline_C_SetText_Params params;
	params.Caption = Caption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Headline.WG_Inventory_Headline_C.SetHighlightState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Headline_C::SetHighlightState(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Headline.WG_Inventory_Headline_C.SetHighlightState");

	UWG_Inventory_Headline_C_SetHighlightState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Headline.WG_Inventory_Headline_C.ExecuteUbergraph_WG_Inventory_Headline
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Headline_C::ExecuteUbergraph_WG_Inventory_Headline(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Headline.WG_Inventory_Headline_C.ExecuteUbergraph_WG_Inventory_Headline");

	UWG_Inventory_Headline_C_ExecuteUbergraph_WG_Inventory_Headline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
