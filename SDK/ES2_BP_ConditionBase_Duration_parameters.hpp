#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ConditionBase_Duration_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ConditionBase_Duration.BP_ConditionBase_Duration_C.CalcIntensity
struct UBP_ConditionBase_Duration_C_CalcIntensity_Params
{
	class AActor**                                     UnsafeInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InstigatorLevel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ConditionBase_Duration.BP_ConditionBase_Duration_C.OnTokenCountChanged
struct UBP_ConditionBase_Duration_C_OnTokenCountChanged_Params
{
	int*                                               TokenCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentIntensity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RemainingTotalSeconds;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConditionBase_Duration.BP_ConditionBase_Duration_C.TickDurationCondition
struct UBP_ConditionBase_Duration_C_TickDurationCondition_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentIntensity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     CurrentUnsafeInstigator;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RemainingTotalSeconds;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConditionBase_Duration.BP_ConditionBase_Duration_C.InitCondition
struct UBP_ConditionBase_Duration_C_InitCondition_Params
{
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InstigatorLevel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConditionBase_Duration.BP_ConditionBase_Duration_C.ExecuteUbergraph_BP_ConditionBase_Duration
struct UBP_ConditionBase_Duration_C_ExecuteUbergraph_BP_ConditionBase_Duration_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
