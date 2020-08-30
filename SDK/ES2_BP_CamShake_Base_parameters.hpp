#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_CamShake_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CamShake_Base.BP_CamShake_Base_C.ScaleLocOsc
struct UBP_CamShake_Base_C_ScaleLocOsc_Params
{
	struct FVOscillator*                               SourceOsc;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector*                                    NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CamShake_Base.BP_CamShake_Base_C.ReceivePlayShake
struct UBP_CamShake_Base_C_ReceivePlayShake_Params
{
	float*                                             Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CamShake_Base.BP_CamShake_Base_C.ExecuteUbergraph_BP_CamShake_Base
struct UBP_CamShake_Base_C_ExecuteUbergraph_BP_CamShake_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
