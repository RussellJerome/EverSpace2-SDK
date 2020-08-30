#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PlayerController_TravelMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.SetSpeedLimitFactor
struct ABP_PlayerController_TravelMode_C_SetSpeedLimitFactor_Params
{
	float*                                             MaxSpeedFactor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.WayObstructedByPlanet
struct ABP_PlayerController_TravelMode_C_WayObstructedByPlanet_Params
{
	class AActor**                                     Ship;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_TravelMode_Planet_C**                    Planet;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Obstructed;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.WayObstructedByPlanet_Old
struct ABP_PlayerController_TravelMode_C_WayObstructedByPlanet_Old_Params
{
	class AActor**                                     Ship;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_TravelMode_Planet_C**                    Planet;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Obstructed;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.FlyAroundPlanetOld
struct ABP_PlayerController_TravelMode_C_FlyAroundPlanetOld_Params
{
	struct FVector*                                    Ship;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Destination;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PlanetCenter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OrbitRadiusUu;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.PlayerEnteredMassVolume
struct ABP_PlayerController_TravelMode_C_PlayerEnteredMassVolume_Params
{
	class ABP_TravelMode_SpaceObject_Base_C**          SpaceObject;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DeathZone;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.PlayerLeftMassVolume
struct ABP_PlayerController_TravelMode_C_PlayerLeftMassVolume_Params
{
	class ABP_TravelMode_SpaceObject_Base_C**          SpaceObject;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.ReceiveTick
struct ABP_PlayerController_TravelMode_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.FadedOut
struct ABP_PlayerController_TravelMode_C_FadedOut_Params
{
	class UWG_Fullscreen_Fade_C**                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.OnProcessPlayerInput
struct ABP_PlayerController_TravelMode_C_OnProcessPlayerInput_Params
{
};

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.ReceiveBeginPlay
struct ABP_PlayerController_TravelMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.RecheckProximity
struct ABP_PlayerController_TravelMode_C_RecheckProximity_Params
{
};

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.ReviveRequest
struct ABP_PlayerController_TravelMode_C_ReviveRequest_Params
{
};

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.LoadCheckpointRequest
struct ABP_PlayerController_TravelMode_C_LoadCheckpointRequest_Params
{
};

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.LoadMainMenuRequest
struct ABP_PlayerController_TravelMode_C_LoadMainMenuRequest_Params
{
};

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.ExecuteUbergraph_BP_PlayerController_TravelMode
struct ABP_PlayerController_TravelMode_C_ExecuteUbergraph_BP_PlayerController_TravelMode_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
