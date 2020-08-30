#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Warship_DroneSpawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.OffsiteSimulate
struct ABP_Warship_DroneSpawner_C_OffsiteSimulate_Params
{
	float*                                             TimePassed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.RestoreState
struct ABP_Warship_DroneSpawner_C_RestoreState_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.SaveState
struct ABP_Warship_DroneSpawner_C_SaveState_Params
{
	TMap<struct FName, struct FGenericSaveDataBuffer>  GenericSaveDataMap;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.IsDroneAlive
struct ABP_Warship_DroneSpawner_C_IsDroneAlive_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.UserConstructionScript
struct ABP_Warship_DroneSpawner_C_UserConstructionScript_Params
{
};

// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.SpawnDrone
struct ABP_Warship_DroneSpawner_C_SpawnDrone_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.ReceiveBeginPlay
struct ABP_Warship_DroneSpawner_C_ReceiveBeginPlay_Params
{
};

// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.TryToSpawnDrone
struct ABP_Warship_DroneSpawner_C_TryToSpawnDrone_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.ExecuteUbergraph_BP_Warship_DroneSpawner
struct ABP_Warship_DroneSpawner_C_ExecuteUbergraph_BP_Warship_DroneSpawner_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
