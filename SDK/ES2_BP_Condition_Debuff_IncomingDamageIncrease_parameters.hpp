#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Condition_Debuff_IncomingDamageIncrease_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Condition_Debuff_IncomingDamageIncrease.BP_Condition_Debuff_IncomingDamageIncrease_C.CalcIntensity
struct UBP_Condition_Debuff_IncomingDamageIncrease_C_CalcIntensity_Params
{
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InstigatorLevel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Condition_Debuff_IncomingDamageIncrease.BP_Condition_Debuff_IncomingDamageIncrease_C.OnTokenCountChanged
struct UBP_Condition_Debuff_IncomingDamageIncrease_C_OnTokenCountChanged_Params
{
	int*                                               TokenCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CombinedIntensity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Condition_Debuff_IncomingDamageIncrease.BP_Condition_Debuff_IncomingDamageIncrease_C.ReceiveEndPlay
struct UBP_Condition_Debuff_IncomingDamageIncrease_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Condition_Debuff_IncomingDamageIncrease.BP_Condition_Debuff_IncomingDamageIncrease_C.InitCondition
struct UBP_Condition_Debuff_IncomingDamageIncrease_C_InitCondition_Params
{
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InstigatorLevel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Condition_Debuff_IncomingDamageIncrease.BP_Condition_Debuff_IncomingDamageIncrease_C.ExecuteUbergraph_BP_Condition_Debuff_IncomingDamageIncrease
struct UBP_Condition_Debuff_IncomingDamageIncrease_C_ExecuteUbergraph_BP_Condition_Debuff_IncomingDamageIncrease_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
