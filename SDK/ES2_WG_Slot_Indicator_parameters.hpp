#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Slot_Indicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Slot_Indicator.WG_Slot_Indicator_C.SetHighlight
struct UWG_Slot_Indicator_C_SetHighlight_Params
{
	bool*                                              On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Slot_Indicator.WG_Slot_Indicator_C.PreConstruct
struct UWG_Slot_Indicator_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Slot_Indicator.WG_Slot_Indicator_C.SetAppearance
struct UWG_Slot_Indicator_C_SetAppearance_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEmpty;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Slot_Indicator.WG_Slot_Indicator_C.ExecuteUbergraph_WG_Slot_Indicator
struct UWG_Slot_Indicator_C_ExecuteUbergraph_WG_Slot_Indicator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
