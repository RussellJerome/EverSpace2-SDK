#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Mission_Activator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Mission_Activator.BP_Mission_Activator_C.ReceiveBeginPlay
struct ABP_Mission_Activator_C_ReceiveBeginPlay_Params
{
};

// Function BP_Mission_Activator.BP_Mission_Activator_C.SpawnOrActivateMission
struct ABP_Mission_Activator_C_SpawnOrActivateMission_Params
{
};

// Function BP_Mission_Activator.BP_Mission_Activator_C.ExecuteUbergraph_BP_Mission_Activator
struct ABP_Mission_Activator_C_ExecuteUbergraph_BP_Mission_Activator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
