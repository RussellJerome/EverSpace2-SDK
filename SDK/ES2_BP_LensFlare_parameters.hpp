#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_LensFlare_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LensFlare.BP_LensFlare_C.SunDistanceFade
struct ABP_LensFlare_C_SunDistanceFade_Params
{
	class UPrimitiveComponent**                        TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScreenRadius;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LensFlare.BP_LensFlare_C.Update
struct ABP_LensFlare_C_Update_Params
{
};

// Function BP_LensFlare.BP_LensFlare_C.UserConstructionScript
struct ABP_LensFlare_C_UserConstructionScript_Params
{
};

// Function BP_LensFlare.BP_LensFlare_C.ReceiveTick
struct ABP_LensFlare_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LensFlare.BP_LensFlare_C.ReceiveBeginPlay
struct ABP_LensFlare_C_ReceiveBeginPlay_Params
{
};

// Function BP_LensFlare.BP_LensFlare_C.UpdateScreenSizePercentage
struct ABP_LensFlare_C_UpdateScreenSizePercentage_Params
{
};

// Function BP_LensFlare.BP_LensFlare_C.ExecuteUbergraph_BP_LensFlare
struct ABP_LensFlare_C_ExecuteUbergraph_BP_LensFlare_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
