#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ConditionBase_Intensity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.CalcIntensity
struct UBP_ConditionBase_Intensity_C_CalcIntensity_Params
{
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InstigatorLevel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.OnTokenCountChanged
struct UBP_ConditionBase_Intensity_C_OnTokenCountChanged_Params
{
	int*                                               TokenCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CombinedIntensity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.TickIntensityCondition
struct UBP_ConditionBase_Intensity_C_TickIntensityCondition_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CombinedIntensity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.TickPerInstigator
struct UBP_ConditionBase_Intensity_C_TickPerInstigator_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UnsafeInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InstigatorIntensity;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.InitCondition
struct UBP_ConditionBase_Intensity_C_InitCondition_Params
{
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InstigatorLevel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.ExecuteUbergraph_BP_ConditionBase_Intensity
struct UBP_ConditionBase_Intensity_C_ExecuteUbergraph_BP_ConditionBase_Intensity_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
