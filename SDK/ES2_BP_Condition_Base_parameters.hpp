#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Condition_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Condition_Base.BP_Condition_Base_C.ReceiveBeginPlay
struct UBP_Condition_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Condition_Base.BP_Condition_Base_C.DestroyEffect
struct UBP_Condition_Base_C_DestroyEffect_Params
{
	class UConditionBaseComponent**                    ConditionComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Condition_Base.BP_Condition_Base_C.ReceiveTick
struct UBP_Condition_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Condition_Base.BP_Condition_Base_C.ConditionAdded
struct UBP_Condition_Base_C_ConditionAdded_Params
{
	class UConditionBaseComponent**                    ConditionComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Condition_Base.BP_Condition_Base_C.ReceiveEndPlay
struct UBP_Condition_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Condition_Base.BP_Condition_Base_C.ExecuteUbergraph_BP_Condition_Base
struct UBP_Condition_Base_C_ExecuteUbergraph_BP_Condition_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
