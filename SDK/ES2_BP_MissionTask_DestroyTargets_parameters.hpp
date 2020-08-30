#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MissionTask_DestroyTargets_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.GetObjectiveDescription
struct ABP_MissionTask_DestroyTargets_C_GetObjectiveDescription_Params
{
	struct FTaskSaveGameData*                          SavedTaskData;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FObjectiveDescription                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.ReceiveBeginPlay
struct ABP_MissionTask_DestroyTargets_C_ReceiveBeginPlay_Params
{
};

// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.TargetEliminated
struct ABP_MissionTask_DestroyTargets_C_TargetEliminated_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.CheckSuccess
struct ABP_MissionTask_DestroyTargets_C_CheckSuccess_Params
{
};

// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.KilledSubPawns
struct ABP_MissionTask_DestroyTargets_C_KilledSubPawns_Params
{
};

// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.OnSubPawnsSpawned_Event
struct ABP_MissionTask_DestroyTargets_C_OnSubPawnsSpawned_Event_Params
{
	TArray<class AActor*>*                             SubPawns;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.ExecuteUbergraph_BP_MissionTask_DestroyTargets
struct ABP_MissionTask_DestroyTargets_C_ExecuteUbergraph_BP_MissionTask_DestroyTargets_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTask_DestroyTargets.BP_MissionTask_DestroyTargets_C.OnTargetDestroyed__DelegateSignature
struct ABP_MissionTask_DestroyTargets_C_OnTargetDestroyed__DelegateSignature_Params
{
	class ABP_MissionTask_DestroyTargets_C**           MissionTask;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
