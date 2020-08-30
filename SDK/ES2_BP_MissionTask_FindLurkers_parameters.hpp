#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MissionTask_FindLurkers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.GetObjectiveDescription
struct ABP_MissionTask_FindLurkers_C_GetObjectiveDescription_Params
{
	struct FTaskSaveGameData*                          SavedTaskData;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FObjectiveDescription                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.ActivateLurkerGroup
struct ABP_MissionTask_FindLurkers_C_ActivateLurkerGroup_Params
{
	int*                                               Index_LurkerGroup;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.ApproachedLurkerGroup
struct ABP_MissionTask_FindLurkers_C_ApproachedLurkerGroup_Params
{
	class AActor**                                     OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.ReceiveBeginPlay
struct ABP_MissionTask_FindLurkers_C_ReceiveBeginPlay_Params
{
};

// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.ActivateAllLurkers
struct ABP_MissionTask_FindLurkers_C_ActivateAllLurkers_Params
{
};

// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.OnTakeAnyDamage_Event_1
struct ABP_MissionTask_FindLurkers_C_OnTakeAnyDamage_Event_1_Params
{
	class AActor**                                     DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.KilledAllLurkers
struct ABP_MissionTask_FindLurkers_C_KilledAllLurkers_Params
{
};

// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.OnTaskProgressed_Event_1
struct ABP_MissionTask_FindLurkers_C_OnTaskProgressed_Event_1_Params
{
	int*                                               Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.ExecuteUbergraph_BP_MissionTask_FindLurkers
struct ABP_MissionTask_FindLurkers_C_ExecuteUbergraph_BP_MissionTask_FindLurkers_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionTask_FindLurkers.BP_MissionTask_FindLurkers_C.OnLurkerGroupWoken__DelegateSignature
struct ABP_MissionTask_FindLurkers_C_OnLurkerGroupWoken__DelegateSignature_Params
{
	int*                                               LurkerGroupIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
