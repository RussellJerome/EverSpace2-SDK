#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MarkerDetails_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetIcon
struct UWG_MarkerDetails_Icon_C_SetIcon_Params
{
	class UObject**                                    Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetLevel
struct UWG_MarkerDetails_Icon_C_SetLevel_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetShowMissionIndicator
struct UWG_MarkerDetails_Icon_C_SetShowMissionIndicator_Params
{
	bool*                                              bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetOuterBorderColor
struct UWG_MarkerDetails_Icon_C_SetOuterBorderColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetBackgroundColor
struct UWG_MarkerDetails_Icon_C_SetBackgroundColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.SetInnerBorderColor
struct UWG_MarkerDetails_Icon_C_SetInnerBorderColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.InitColors
struct UWG_MarkerDetails_Icon_C_InitColors_Params
{
	TEnumAsByte<EMarkerRelation>*                      Relation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Deadly;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>*                          ItemRarity;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MarkerDetails_Icon.WG_MarkerDetails_Icon_C.ExecuteUbergraph_WG_MarkerDetails_Icon
struct UWG_MarkerDetails_Icon_C_ExecuteUbergraph_WG_MarkerDetails_Icon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
