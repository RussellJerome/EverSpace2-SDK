#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_GB_Freighter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GB_Freighter.BP_GB_Freighter_C.SetTurretLevels
struct ABP_GB_Freighter_C_SetTurretLevels_Params
{
};

// Function BP_GB_Freighter.BP_GB_Freighter_C.SetContainerHP
struct ABP_GB_Freighter_C_SetContainerHP_Params
{
};

// Function BP_GB_Freighter.BP_GB_Freighter_C.SetupIgnoreActors
struct ABP_GB_Freighter_C_SetupIgnoreActors_Params
{
};

// Function BP_GB_Freighter.BP_GB_Freighter_C.GetRemainingContainers
struct ABP_GB_Freighter_C_GetRemainingContainers_Params
{
	TArray<class AActor*>                              Containers;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GB_Freighter.BP_GB_Freighter_C.UserConstructionScript
struct ABP_GB_Freighter_C_UserConstructionScript_Params
{
};

// Function BP_GB_Freighter.BP_GB_Freighter_C.ReceiveBeginPlay
struct ABP_GB_Freighter_C_ReceiveBeginPlay_Params
{
};

// Function BP_GB_Freighter.BP_GB_Freighter_C.ContainerDestroyed
struct ABP_GB_Freighter_C_ContainerDestroyed_Params
{
	class UWreckComponent**                            WreckComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_GB_Freighter.BP_GB_Freighter_C.DestroyAfterExploding
struct ABP_GB_Freighter_C_DestroyAfterExploding_Params
{
};

// Function BP_GB_Freighter.BP_GB_Freighter_C.Explode
struct ABP_GB_Freighter_C_Explode_Params
{
};

// Function BP_GB_Freighter.BP_GB_Freighter_C.ExecuteUbergraph_BP_GB_Freighter
struct ABP_GB_Freighter_C_ExecuteUbergraph_BP_GB_Freighter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
