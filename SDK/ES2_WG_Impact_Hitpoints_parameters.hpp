#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Impact_Hitpoints_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Impact_Hitpoints.WG_Impact_Hitpoints_C.Construct
struct UWG_Impact_Hitpoints_C_Construct_Params
{
};

// Function WG_Impact_Hitpoints.WG_Impact_Hitpoints_C.Finished
struct UWG_Impact_Hitpoints_C_Finished_Params
{
};

// Function WG_Impact_Hitpoints.WG_Impact_Hitpoints_C.Tick
struct UWG_Impact_Hitpoints_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Impact_Hitpoints.WG_Impact_Hitpoints_C.UpdateWidgetPosition
struct UWG_Impact_Hitpoints_C_UpdateWidgetPosition_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Impact_Hitpoints.WG_Impact_Hitpoints_C.ExecuteUbergraph_WG_Impact_Hitpoints
struct UWG_Impact_Hitpoints_C_ExecuteUbergraph_WG_Impact_Hitpoints_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
