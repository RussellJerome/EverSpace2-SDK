#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Condition_Debuff_EMP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Condition_Debuff_EMP.BP_Condition_Debuff_EMP_C.CheckPreconditions
struct UBP_Condition_Debuff_EMP_C_CheckPreconditions_Params
{
	class AActor**                                     Candidate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Condition_Debuff_EMP.BP_Condition_Debuff_EMP_C.ReceiveEndPlay
struct UBP_Condition_Debuff_EMP_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Condition_Debuff_EMP.BP_Condition_Debuff_EMP_C.InitCondition
struct UBP_Condition_Debuff_EMP_C_InitCondition_Params
{
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InstigatorLevel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Condition_Debuff_EMP.BP_Condition_Debuff_EMP_C.ExecuteUbergraph_BP_Condition_Debuff_EMP
struct UBP_Condition_Debuff_EMP_C_ExecuteUbergraph_BP_Condition_Debuff_EMP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
