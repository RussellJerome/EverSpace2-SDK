#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Condition_Utility_KinematicMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Condition_Utility_KinematicMode.BP_Condition_Utility_KinematicMode_C.ReceiveBeginPlay
struct UBP_Condition_Utility_KinematicMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_Condition_Utility_KinematicMode.BP_Condition_Utility_KinematicMode_C.ReceiveEndPlay
struct UBP_Condition_Utility_KinematicMode_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Condition_Utility_KinematicMode.BP_Condition_Utility_KinematicMode_C.ExecuteUbergraph_BP_Condition_Utility_KinematicMode
struct UBP_Condition_Utility_KinematicMode_C_ExecuteUbergraph_BP_Condition_Utility_KinematicMode_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
