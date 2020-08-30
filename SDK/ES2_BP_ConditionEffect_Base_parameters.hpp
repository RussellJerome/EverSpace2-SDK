#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ConditionEffect_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ConditionEffect_Base.BP_ConditionEffect_Base_C.UpdateTargetActorBounds
struct ABP_ConditionEffect_Base_C_UpdateTargetActorBounds_Params
{
};

// Function BP_ConditionEffect_Base.BP_ConditionEffect_Base_C.ReceiveBeginPlay
struct ABP_ConditionEffect_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_ConditionEffect_Base.BP_ConditionEffect_Base_C.ReceiveTick
struct ABP_ConditionEffect_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConditionEffect_Base.BP_ConditionEffect_Base_C.DestroyEffect
struct ABP_ConditionEffect_Base_C_DestroyEffect_Params
{
	class AActor**                                     DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConditionEffect_Base.BP_ConditionEffect_Base_C.ExecuteUbergraph_BP_ConditionEffect_Base
struct ABP_ConditionEffect_Base_C_ExecuteUbergraph_BP_ConditionEffect_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
