// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ItemAttribute_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_ItemAttribute.WG_ItemAttribute_C.GetComparePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          PositiveChange                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWG_ItemAttribute_C::GetComparePercent(bool* PositiveChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute.WG_ItemAttribute_C.GetComparePercent");

	UWG_ItemAttribute_C_GetComparePercent_Params params;
	params.PositiveChange = PositiveChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ItemAttribute.WG_ItemAttribute_C.GetCompareValueText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ValueBase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ValueCompare                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)
// bool                           PositiveChange                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsZero                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_ItemAttribute_C::GetCompareValueText(float* ValueBase, float* ValueCompare, struct FText* Result, bool* PositiveChange, bool* IsZero)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute.WG_ItemAttribute_C.GetCompareValueText");

	UWG_ItemAttribute_C_GetCompareValueText_Params params;
	params.ValueBase = ValueBase;
	params.ValueCompare = ValueCompare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (PositiveChange != nullptr)
		*PositiveChange = params.PositiveChange;
	if (IsZero != nullptr)
		*IsZero = params.IsZero;
}


// Function WG_ItemAttribute.WG_ItemAttribute_C.ResetCompareValue
// (BlueprintCallable, BlueprintEvent)

void UWG_ItemAttribute_C::ResetCompareValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute.WG_ItemAttribute_C.ResetCompareValue");

	UWG_ItemAttribute_C_ResetCompareValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemAttribute.WG_ItemAttribute_C.SetCompareValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 ValueString                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWG_ItemAttribute_C::SetCompareValue(float* Value, class FString* ValueString)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute.WG_ItemAttribute_C.SetCompareValue");

	UWG_ItemAttribute_C_SetCompareValue_Params params;
	params.Value = Value;
	params.ValueString = ValueString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemAttribute.WG_ItemAttribute_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_ItemAttribute_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute.WG_ItemAttribute_C.Construct");

	UWG_ItemAttribute_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemAttribute.WG_ItemAttribute_C.DescriptionChanged
// (BlueprintCallable, BlueprintEvent)

void UWG_ItemAttribute_C::DescriptionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute.WG_ItemAttribute_C.DescriptionChanged");

	UWG_ItemAttribute_C_DescriptionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemAttribute.WG_ItemAttribute_C.SetDescription
// (BlueprintCallable, BlueprintEvent)

void UWG_ItemAttribute_C::SetDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute.WG_ItemAttribute_C.SetDescription");

	UWG_ItemAttribute_C_SetDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemAttribute.WG_ItemAttribute_C.SetCompareText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          PositiveChange                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemAttribute_C::SetCompareText(struct FText* InText, bool* PositiveChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute.WG_ItemAttribute_C.SetCompareText");

	UWG_ItemAttribute_C_SetCompareText_Params params;
	params.InText = InText;
	params.PositiveChange = PositiveChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemAttribute.WG_ItemAttribute_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemAttribute_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute.WG_ItemAttribute_C.PreConstruct");

	UWG_ItemAttribute_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemAttribute.WG_ItemAttribute_C.RemoveCompare
// (BlueprintCallable, BlueprintEvent)

void UWG_ItemAttribute_C::RemoveCompare()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute.WG_ItemAttribute_C.RemoveCompare");

	UWG_ItemAttribute_C_RemoveCompare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemAttribute.WG_ItemAttribute_C.SetShowBonusBulletPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EItemRarity>*      Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemAttribute_C::SetShowBonusBulletPoint(bool* Show, TEnumAsByte<EItemRarity>* Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute.WG_ItemAttribute_C.SetShowBonusBulletPoint");

	UWG_ItemAttribute_C_SetShowBonusBulletPoint_Params params;
	params.Show = Show;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemAttribute.WG_ItemAttribute_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EItemAttributeStyle>* Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemAttribute**         ItemAttributeRef               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemAttribute_C::Init(TEnumAsByte<EItemAttributeStyle>* Style, class UItemAttribute** ItemAttributeRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute.WG_ItemAttribute_C.Init");

	UWG_ItemAttribute_C_Init_Params params;
	params.Style = Style;
	params.ItemAttributeRef = ItemAttributeRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemAttribute.WG_ItemAttribute_C.ExecuteUbergraph_WG_ItemAttribute
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemAttribute_C::ExecuteUbergraph_WG_ItemAttribute(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute.WG_ItemAttribute_C.ExecuteUbergraph_WG_ItemAttribute");

	UWG_ItemAttribute_C_ExecuteUbergraph_WG_ItemAttribute_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
