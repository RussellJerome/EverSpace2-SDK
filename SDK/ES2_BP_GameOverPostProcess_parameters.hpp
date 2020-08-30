#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_GameOverPostProcess_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GameOverPostProcess.BP_GameOverPostProcess_C.ReceiveTick
struct ABP_GameOverPostProcess_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameOverPostProcess.BP_GameOverPostProcess_C.EnableGameOverEffect
struct ABP_GameOverPostProcess_C_EnableGameOverEffect_Params
{
};

// Function BP_GameOverPostProcess.BP_GameOverPostProcess_C.DisableGameOverEffect
struct ABP_GameOverPostProcess_C_DisableGameOverEffect_Params
{
};

// Function BP_GameOverPostProcess.BP_GameOverPostProcess_C.ExecuteUbergraph_BP_GameOverPostProcess
struct ABP_GameOverPostProcess_C_ExecuteUbergraph_BP_GameOverPostProcess_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
