// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MarkerDetails_Icon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MarkerDetails_Icon_C::SetIcon(class UObject** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetIcon");

	UWG_MarkerDetails_Icon_C_SetIcon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MarkerDetails_Icon_C::SetLevel(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetLevel");

	UWG_MarkerDetails_Icon_C_SetLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetShowMissionIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MarkerDetails_Icon_C::SetShowMissionIndicator(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetShowMissionIndicator");

	UWG_MarkerDetails_Icon_C_SetShowMissionIndicator_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetOuterBorderColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MarkerDetails_Icon_C::SetOuterBorderColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetOuterBorderColor");

	UWG_MarkerDetails_Icon_C_SetOuterBorderColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetBackgroundColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MarkerDetails_Icon_C::SetBackgroundColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetBackgroundColor");

	UWG_MarkerDetails_Icon_C_SetBackgroundColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetInnerBorderColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MarkerDetails_Icon_C::SetInnerBorderColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetInnerBorderColor");

	UWG_MarkerDetails_Icon_C_SetInnerBorderColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.InitColors
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMarkerRelation>*  Relation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Deadly                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EItemRarity>*      ItemRarity                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MarkerDetails_Icon_C::InitColors(TEnumAsByte<EMarkerRelation>* Relation, bool* Deadly, TEnumAsByte<EItemRarity>* ItemRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.InitColors");

	UWG_MarkerDetails_Icon_C_InitColors_Params params;
	params.Relation = Relation;
	params.Deadly = Deadly;
	params.ItemRarity = ItemRarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.ExecuteUbergraph_WG_MarkerDetails_Icon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MarkerDetails_Icon_C::ExecuteUbergraph_WG_MarkerDetails_Icon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.ExecuteUbergraph_WG_MarkerDetails_Icon");

	UWG_MarkerDetails_Icon_C_ExecuteUbergraph_WG_MarkerDetails_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
