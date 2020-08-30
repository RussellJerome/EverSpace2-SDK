// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_HUD_Bar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_HUD_Bar.WG_HUD_Bar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_Bar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Bar.WG_HUD_Bar_C.PreConstruct");

	UWG_HUD_Bar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_Bar.WG_HUD_Bar_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_Bar_C::SetPercent(float* InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Bar.WG_HUD_Bar_C.SetPercent");

	UWG_HUD_Bar_C_SetPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_Bar.WG_HUD_Bar_C.SetFillColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           FillColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_Bar_C::SetFillColor(struct FLinearColor* FillColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Bar.WG_HUD_Bar_C.SetFillColor");

	UWG_HUD_Bar_C_SetFillColor_Params params;
	params.FillColor = FillColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_Bar.WG_HUD_Bar_C.ExecuteUbergraph_WG_HUD_Bar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_Bar_C::ExecuteUbergraph_WG_HUD_Bar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_Bar.WG_HUD_Bar_C.ExecuteUbergraph_WG_HUD_Bar");

	UWG_HUD_Bar_C_ExecuteUbergraph_WG_HUD_Bar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
