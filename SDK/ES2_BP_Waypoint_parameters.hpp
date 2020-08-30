#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Waypoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Waypoint.BP_Waypoint_C.UpdateEditorPreview
struct ABP_Waypoint_C_UpdateEditorPreview_Params
{
	bool*                                              UpdatePredecessors;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Waypoint.BP_Waypoint_C.UserConstructionScript
struct ABP_Waypoint_C_UserConstructionScript_Params
{
};

// Function BP_Waypoint.BP_Waypoint_C.CustomEvent
struct ABP_Waypoint_C_CustomEvent_Params
{
};

// Function BP_Waypoint.BP_Waypoint_C.ReceiveBeginPlay
struct ABP_Waypoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_Waypoint.BP_Waypoint_C.ExecuteUbergraph_BP_Waypoint
struct ABP_Waypoint_C_ExecuteUbergraph_BP_Waypoint_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
