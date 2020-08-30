#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ItemAttribute_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_ItemAttribute.WG_ItemAttribute_C.GetComparePercent
struct UWG_ItemAttribute_C_GetComparePercent_Params
{
	bool*                                              PositiveChange;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_ItemAttribute.WG_ItemAttribute_C.GetCompareValueText
struct UWG_ItemAttribute_C_GetCompareValueText_Params
{
	float*                                             ValueBase;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ValueCompare;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
	bool                                               PositiveChange;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsZero;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemAttribute.WG_ItemAttribute_C.ResetCompareValue
struct UWG_ItemAttribute_C_ResetCompareValue_Params
{
};

// Function WG_ItemAttribute.WG_ItemAttribute_C.SetCompareValue
struct UWG_ItemAttribute_C_SetCompareValue_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     ValueString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WG_ItemAttribute.WG_ItemAttribute_C.Construct
struct UWG_ItemAttribute_C_Construct_Params
{
};

// Function WG_ItemAttribute.WG_ItemAttribute_C.DescriptionChanged
struct UWG_ItemAttribute_C_DescriptionChanged_Params
{
};

// Function WG_ItemAttribute.WG_ItemAttribute_C.SetDescription
struct UWG_ItemAttribute_C_SetDescription_Params
{
};

// Function WG_ItemAttribute.WG_ItemAttribute_C.SetCompareText
struct UWG_ItemAttribute_C_SetCompareText_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              PositiveChange;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemAttribute.WG_ItemAttribute_C.PreConstruct
struct UWG_ItemAttribute_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemAttribute.WG_ItemAttribute_C.RemoveCompare
struct UWG_ItemAttribute_C_RemoveCompare_Params
{
};

// Function WG_ItemAttribute.WG_ItemAttribute_C.SetShowBonusBulletPoint
struct UWG_ItemAttribute_C_SetShowBonusBulletPoint_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>*                          Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemAttribute.WG_ItemAttribute_C.Init
struct UWG_ItemAttribute_C_Init_Params
{
	TEnumAsByte<EItemAttributeStyle>*                  Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemAttribute**                             ItemAttributeRef;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ItemAttribute.WG_ItemAttribute_C.ExecuteUbergraph_WG_ItemAttribute
struct UWG_ItemAttribute_C_ExecuteUbergraph_WG_ItemAttribute_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
