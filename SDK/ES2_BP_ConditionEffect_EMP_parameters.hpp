#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ConditionEffect_EMP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ConditionEffect_EMP.BP_ConditionEffect_EMP_C.ReceiveBeginPlay
struct ABP_ConditionEffect_EMP_C_ReceiveBeginPlay_Params
{
};

// Function BP_ConditionEffect_EMP.BP_ConditionEffect_EMP_C.ReceiveTick
struct ABP_ConditionEffect_EMP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConditionEffect_EMP.BP_ConditionEffect_EMP_C.ExecuteUbergraph_BP_ConditionEffect_EMP
struct ABP_ConditionEffect_EMP_C_ExecuteUbergraph_BP_ConditionEffect_EMP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
