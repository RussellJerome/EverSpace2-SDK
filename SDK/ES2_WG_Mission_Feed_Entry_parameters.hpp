#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Mission_Feed_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.AreAnyStateChangesDisplayed
struct UWG_Mission_Feed_Entry_C_AreAnyStateChangesDisplayed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.AreAnyNonPermanentObjectivesDisplayed
struct UWG_Mission_Feed_Entry_C_AreAnyNonPermanentObjectivesDisplayed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.EnqueueUpdate
struct UWG_Mission_Feed_Entry_C_EnqueueUpdate_Params
{
	struct FHUDTaskData*                               TaskData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.UpdateOrAddObjectiveLine
struct UWG_Mission_Feed_Entry_C_UpdateOrAddObjectiveLine_Params
{
	struct FHUDTaskData*                               TaskData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.ObjectiveLineExpired
struct UWG_Mission_Feed_Entry_C_ObjectiveLineExpired_Params
{
	class UWG_MissionObjective_Line_C**                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.Tick
struct UWG_Mission_Feed_Entry_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.AddNewMessage
struct UWG_Mission_Feed_Entry_C_AddNewMessage_Params
{
	struct FHUDTaskData*                               TaskData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.ChangeMissionStatusLine
struct UWG_Mission_Feed_Entry_C_ChangeMissionStatusLine_Params
{
	struct FHUDTaskData*                               TaskData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.StatusLineExpired
struct UWG_Mission_Feed_Entry_C_StatusLineExpired_Params
{
	class UWG_Mission_State_Line_C**                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.FadeOutFinished
struct UWG_Mission_Feed_Entry_C_FadeOutFinished_Params
{
};

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.RemoveMission
struct UWG_Mission_Feed_Entry_C_RemoveMission_Params
{
	struct FName*                                      RemoveMissionID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.PlayFadeInIfRequired
struct UWG_Mission_Feed_Entry_C_PlayFadeInIfRequired_Params
{
};

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.ExecuteUbergraph_WG_Mission_Feed_Entry
struct UWG_Mission_Feed_Entry_C_ExecuteUbergraph_WG_Mission_Feed_Entry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.OnRemovePermanentObjective__DelegateSignature
struct UWG_Mission_Feed_Entry_C_OnRemovePermanentObjective__DelegateSignature_Params
{
	class UWG_MissionObjective_Line_C**                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.OnAddNewPermanentObjective__DelegateSignature
struct UWG_Mission_Feed_Entry_C_OnAddNewPermanentObjective__DelegateSignature_Params
{
	class UWG_MissionObjective_Line_C**                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Mission_Feed_Entry.WG_Mission_Feed_Entry_C.OnHideWidget__DelegateSignature
struct UWG_Mission_Feed_Entry_C_OnHideWidget__DelegateSignature_Params
{
	class UWG_Mission_Feed_Entry_C**                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
