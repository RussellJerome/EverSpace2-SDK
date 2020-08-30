#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_SpeedParticles_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SpeedParticles_Base.BP_SpeedParticles_Base_C.Update
struct ABP_SpeedParticles_Base_C_Update_Params
{
};

// Function BP_SpeedParticles_Base.BP_SpeedParticles_Base_C.UserConstructionScript
struct ABP_SpeedParticles_Base_C_UserConstructionScript_Params
{
};

// Function BP_SpeedParticles_Base.BP_SpeedParticles_Base_C.SetEnabled
struct ABP_SpeedParticles_Base_C_SetEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpeedParticles_Base.BP_SpeedParticles_Base_C.ReceiveTick
struct ABP_SpeedParticles_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpeedParticles_Base.BP_SpeedParticles_Base_C.ExecuteUbergraph_BP_SpeedParticles_Base
struct ABP_SpeedParticles_Base_C_ExecuteUbergraph_BP_SpeedParticles_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
