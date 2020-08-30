#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Forcefield_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Forcefield.BP_Forcefield_C.UserConstructionScript
struct ABP_Forcefield_C_UserConstructionScript_Params
{
};

// Function BP_Forcefield.BP_Forcefield_C.ErosionTimeline__FinishedFunc
struct ABP_Forcefield_C_ErosionTimeline__FinishedFunc_Params
{
};

// Function BP_Forcefield.BP_Forcefield_C.ErosionTimeline__UpdateFunc
struct ABP_Forcefield_C_ErosionTimeline__UpdateFunc_Params
{
};

// Function BP_Forcefield.BP_Forcefield_C.ReceiveBeginPlay
struct ABP_Forcefield_C_ReceiveBeginPlay_Params
{
};

// Function BP_Forcefield.BP_Forcefield_C.GeneratorDestroyed
struct ABP_Forcefield_C_GeneratorDestroyed_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forcefield.BP_Forcefield_C.ExecuteUbergraph_BP_Forcefield
struct ABP_Forcefield_C_ExecuteUbergraph_BP_Forcefield_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
