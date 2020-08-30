#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_EnvironmentGenerator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.UpdateFog
struct ABP_EnvironmentGenerator_C_UpdateFog_Params
{
	struct FSTRCT_FogSettings*                         FogSettings;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.CreatePlanet
struct ABP_EnvironmentGenerator_C_CreatePlanet_Params
{
	struct FSTRCT_PlanetInstance*                      PlanetData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.ProcessSpaceObjects
struct ABP_EnvironmentGenerator_C_ProcessSpaceObjects_Params
{
};

// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.UpdateEnviroment
struct ABP_EnvironmentGenerator_C_UpdateEnviroment_Params
{
};

// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.UserConstructionScript
struct ABP_EnvironmentGenerator_C_UserConstructionScript_Params
{
};

// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.InitializeEnvironment
struct ABP_EnvironmentGenerator_C_InitializeEnvironment_Params
{
};

// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.ReceiveBeginPlay
struct ABP_EnvironmentGenerator_C_ReceiveBeginPlay_Params
{
};

// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.UpdateMPC
struct ABP_EnvironmentGenerator_C_UpdateMPC_Params
{
};

// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.ReceiveTick
struct ABP_EnvironmentGenerator_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.ExecuteUbergraph_BP_EnvironmentGenerator
struct ABP_EnvironmentGenerator_C_ExecuteUbergraph_BP_EnvironmentGenerator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
