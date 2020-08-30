// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Slot_Indication_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Slot_Indication.WG_Slot_Indication_C.SetHighlightIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Slot_Indication_C::SetHighlightIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Slot_Indication.WG_Slot_Indication_C.SetHighlightIndex");

	UWG_Slot_Indication_C_SetHighlightIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Slot_Indication.WG_Slot_Indication_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         GapWidth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InitialGap                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsStyleDetailed                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Slot_Indication_C::Init(int* Count, float* GapWidth, bool* InitialGap, bool* IsStyleDetailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Slot_Indication.WG_Slot_Indication_C.Init");

	UWG_Slot_Indication_C_Init_Params params;
	params.Count = Count;
	params.GapWidth = GapWidth;
	params.InitialGap = InitialGap;
	params.IsStyleDetailed = IsStyleDetailed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Slot_Indication.WG_Slot_Indication_C.SetAppearanceOfIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEmpty                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Slot_Indication_C::SetAppearanceOfIndex(int* Index, struct FLinearColor* Color, bool* IsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Slot_Indication.WG_Slot_Indication_C.SetAppearanceOfIndex");

	UWG_Slot_Indication_C_SetAppearanceOfIndex_Params params;
	params.Index = Index;
	params.Color = Color;
	params.IsEmpty = IsEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Slot_Indication.WG_Slot_Indication_C.ExecuteUbergraph_WG_Slot_Indication
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Slot_Indication_C::ExecuteUbergraph_WG_Slot_Indication(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Slot_Indication.WG_Slot_Indication_C.ExecuteUbergraph_WG_Slot_Indication");

	UWG_Slot_Indication_C_ExecuteUbergraph_WG_Slot_Indication_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
