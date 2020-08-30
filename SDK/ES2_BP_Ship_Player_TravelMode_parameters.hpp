#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Ship_Player_TravelMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.SetWorldOrigin
struct ABP_Ship_Player_TravelMode_C_SetWorldOrigin_Params
{
	struct FVector*                                    NewOrigin;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.JumpDriveEnterTravelModeTimeline__FinishedFunc
struct ABP_Ship_Player_TravelMode_C_JumpDriveEnterTravelModeTimeline__FinishedFunc_Params
{
};

// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.JumpDriveEnterTravelModeTimeline__UpdateFunc
struct ABP_Ship_Player_TravelMode_C_JumpDriveEnterTravelModeTimeline__UpdateFunc_Params
{
};

// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.ReceiveBeginPlay
struct ABP_Ship_Player_TravelMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.ReceiveTick
struct ABP_Ship_Player_TravelMode_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.RecenterOrigin
struct ABP_Ship_Player_TravelMode_C_RecenterOrigin_Params
{
};

// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.JumpDriveVFXBeginPlay
struct ABP_Ship_Player_TravelMode_C_JumpDriveVFXBeginPlay_Params
{
};

// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.PlanetProximityEffectTick
struct ABP_Ship_Player_TravelMode_C_PlanetProximityEffectTick_Params
{
	float*                                             Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.PostProcessInput
struct ABP_Ship_Player_TravelMode_C_PostProcessInput_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bGamePaused;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.ExecuteUbergraph_BP_Ship_Player_TravelMode
struct ABP_Ship_Player_TravelMode_C_ExecuteUbergraph_BP_Ship_Player_TravelMode_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
