#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Mission_Feed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Mission_Feed.WG_Mission_Feed_C.ShouldShowTask
struct UWG_Mission_Feed_C_ShouldShowTask_Params
{
	struct FHUDTaskData*                               TaskData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Mission_Feed.WG_Mission_Feed_C.EnqueueUpdate
struct UWG_Mission_Feed_C_EnqueueUpdate_Params
{
	struct FHUDTaskData*                               TaskData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Mission_Feed.WG_Mission_Feed_C.MissionWidgetExpired
struct UWG_Mission_Feed_C_MissionWidgetExpired_Params
{
	class UWG_Mission_Feed_Entry_C**                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Mission_Feed.WG_Mission_Feed_C.RemoveMission
struct UWG_Mission_Feed_C_RemoveMission_Params
{
	struct FName*                                      RemoveMissionID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Mission_Feed.WG_Mission_Feed_C.AddNewPermanentObjective
struct UWG_Mission_Feed_C_AddNewPermanentObjective_Params
{
	class UWG_MissionObjective_Line_C**                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Mission_Feed.WG_Mission_Feed_C.RemovePermanentObjective
struct UWG_Mission_Feed_C_RemovePermanentObjective_Params
{
	class UWG_MissionObjective_Line_C**                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Mission_Feed.WG_Mission_Feed_C.ExecuteUbergraph_WG_Mission_Feed
struct UWG_Mission_Feed_C_ExecuteUbergraph_WG_Mission_Feed_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
