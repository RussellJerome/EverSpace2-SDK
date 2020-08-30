#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Skybox_Sun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Skybox_Sun.BP_Skybox_Sun_C.UpdateSkybox
struct ABP_Skybox_Sun_C_UpdateSkybox_Params
{
};

// Function BP_Skybox_Sun.BP_Skybox_Sun_C.UpdateMPC
struct ABP_Skybox_Sun_C_UpdateMPC_Params
{
};

// Function BP_Skybox_Sun.BP_Skybox_Sun_C.UpdateSun
struct ABP_Skybox_Sun_C_UpdateSun_Params
{
};

// Function BP_Skybox_Sun.BP_Skybox_Sun_C.UserConstructionScript
struct ABP_Skybox_Sun_C_UserConstructionScript_Params
{
};

// Function BP_Skybox_Sun.BP_Skybox_Sun_C.SetMeshMobility
struct ABP_Skybox_Sun_C_SetMeshMobility_Params
{
	TEnumAsByte<EComponentMobility>*                   Mobility;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Skybox_Sun.BP_Skybox_Sun_C.ReceiveBeginPlay
struct ABP_Skybox_Sun_C_ReceiveBeginPlay_Params
{
};

// Function BP_Skybox_Sun.BP_Skybox_Sun_C.InitLensFlare
struct ABP_Skybox_Sun_C_InitLensFlare_Params
{
	class ABP_LensFlare_C**                            LensFlare;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Skybox_Sun.BP_Skybox_Sun_C.HandleGraphicsSettingsChanged
struct ABP_Skybox_Sun_C_HandleGraphicsSettingsChanged_Params
{
};

// Function BP_Skybox_Sun.BP_Skybox_Sun_C.ExecuteUbergraph_BP_Skybox_Sun
struct ABP_Skybox_Sun_C_ExecuteUbergraph_BP_Skybox_Sun_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Skybox_Sun.BP_Skybox_Sun_C.SunChanged__DelegateSignature
struct ABP_Skybox_Sun_C_SunChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
