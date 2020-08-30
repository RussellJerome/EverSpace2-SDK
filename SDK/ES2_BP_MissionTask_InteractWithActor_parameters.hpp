#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MissionTask_InteractWithActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.GetObjectiveDescription
struct ABP_MissionTask_InteractWithActor_C_GetObjectiveDescription_Params
{
	struct FTaskSaveGameData*                          SavedTaskData;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FObjectiveDescription                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.ReceiveBeginPlay
struct ABP_MissionTask_InteractWithActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.OnEnteredStage
struct ABP_MissionTask_InteractWithActor_C_OnEnteredStage_Params
{
	int*                                               NewStage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.InteractedWithTarget
struct ABP_MissionTask_InteractWithActor_C_InteractedWithTarget_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.HoldStarted
struct ABP_MissionTask_InteractWithActor_C_HoldStarted_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.HoldAborted
struct ABP_MissionTask_InteractWithActor_C_HoldAborted_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.ExecuteUbergraph_BP_MissionTask_InteractWithActor
struct ABP_MissionTask_InteractWithActor_C_ExecuteUbergraph_BP_MissionTask_InteractWithActor_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C.OnInteractWithTaskTarget__DelegateSignature
struct ABP_MissionTask_InteractWithActor_C_OnInteractWithTaskTarget__DelegateSignature_Params
{
	int*                                               Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
