#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Inventory_Headline_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Inventory_Headline.WG_Inventory_Headline_C.PreConstruct
struct UWG_Inventory_Headline_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Headline.WG_Inventory_Headline_C.Construct
struct UWG_Inventory_Headline_C_Construct_Params
{
};

// Function WG_Inventory_Headline.WG_Inventory_Headline_C.SetText
struct UWG_Inventory_Headline_C_SetText_Params
{
	struct FText*                                      Caption;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Inventory_Headline.WG_Inventory_Headline_C.SetHighlightState
struct UWG_Inventory_Headline_C_SetHighlightState_Params
{
	bool*                                              State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Inventory_Headline.WG_Inventory_Headline_C.ExecuteUbergraph_WG_Inventory_Headline
struct UWG_Inventory_Headline_C_ExecuteUbergraph_WG_Inventory_Headline_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
