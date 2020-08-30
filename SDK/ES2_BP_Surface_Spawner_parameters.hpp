#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Surface_Spawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Surface_Spawner.BP_Surface_Spawner_C.ForceSpawn
struct ABP_Surface_Spawner_C_ForceSpawn_Params
{
};

// Function BP_Surface_Spawner.BP_Surface_Spawner_C.SpawnClass
struct ABP_Surface_Spawner_C_SpawnClass_Params
{
	class UClass**                                     ClassToSpawnOverride;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpawnGroup>*                          ConcreteSpawnGroup;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSpawnParameter*                            SpawnParameter;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FRandomStream                               R;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Surface_Spawner.BP_Surface_Spawner_C.UserConstructionScript
struct ABP_Surface_Spawner_C_UserConstructionScript_Params
{
};

// Function BP_Surface_Spawner.BP_Surface_Spawner_C.ReceiveBeginPlay
struct ABP_Surface_Spawner_C_ReceiveBeginPlay_Params
{
};

// Function BP_Surface_Spawner.BP_Surface_Spawner_C.ExecuteUbergraph_BP_Surface_Spawner
struct ABP_Surface_Spawner_C_ExecuteUbergraph_BP_Surface_Spawner_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Surface_Spawner.BP_Surface_Spawner_C.OnActorSpawned__DelegateSignature
struct ABP_Surface_Spawner_C_OnActorSpawned__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
