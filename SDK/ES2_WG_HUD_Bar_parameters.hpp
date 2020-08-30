#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_HUD_Bar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_HUD_Bar.WG_HUD_Bar_C.PreConstruct
struct UWG_HUD_Bar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_Bar.WG_HUD_Bar_C.SetPercent
struct UWG_HUD_Bar_C_SetPercent_Params
{
	float*                                             InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_Bar.WG_HUD_Bar_C.SetFillColor
struct UWG_HUD_Bar_C_SetFillColor_Params
{
	struct FLinearColor*                               FillColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_Bar.WG_HUD_Bar_C.ExecuteUbergraph_WG_HUD_Bar
struct UWG_HUD_Bar_C_ExecuteUbergraph_WG_HUD_Bar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
