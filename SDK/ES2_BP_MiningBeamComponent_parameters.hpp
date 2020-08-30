#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MiningBeamComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MiningBeamComponent.BP_MiningBeamComponent_C.StartMining
struct UBP_MiningBeamComponent_C_StartMining_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiningBeamComponent.BP_MiningBeamComponent_C.ReceiveTick
struct UBP_MiningBeamComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiningBeamComponent.BP_MiningBeamComponent_C.StopMining
struct UBP_MiningBeamComponent_C_StopMining_Params
{
};

// Function BP_MiningBeamComponent.BP_MiningBeamComponent_C.ExecuteUbergraph_BP_MiningBeamComponent
struct UBP_MiningBeamComponent_C_ExecuteUbergraph_BP_MiningBeamComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
