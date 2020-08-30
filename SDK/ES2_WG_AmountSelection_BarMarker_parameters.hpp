#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_AmountSelection_BarMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.SetValue
struct UWG_AmountSelection_BarMarker_C_SetValue_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.ToggleAlignment
struct UWG_AmountSelection_BarMarker_C_ToggleAlignment_Params
{
	bool*                                              LeftAligned;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.Construct
struct UWG_AmountSelection_BarMarker_C_Construct_Params
{
};

// Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.Tick
struct UWG_AmountSelection_BarMarker_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.Deactivate
struct UWG_AmountSelection_BarMarker_C_Deactivate_Params
{
};

// Function WG_AmountSelection_BarMarker.WG_AmountSelection_BarMarker_C.ExecuteUbergraph_WG_AmountSelection_BarMarker
struct UWG_AmountSelection_BarMarker_C_ExecuteUbergraph_WG_AmountSelection_BarMarker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
