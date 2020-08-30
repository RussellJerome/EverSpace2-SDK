#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_VolumetricFogField_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VolumetricFogField.BP_VolumetricFogField_C.UpdateLight
struct ABP_VolumetricFogField_C_UpdateLight_Params
{
};

// Function BP_VolumetricFogField.BP_VolumetricFogField_C.UpdateFogField
struct ABP_VolumetricFogField_C_UpdateFogField_Params
{
};

// Function BP_VolumetricFogField.BP_VolumetricFogField_C.UserConstructionScript
struct ABP_VolumetricFogField_C_UserConstructionScript_Params
{
};

// Function BP_VolumetricFogField.BP_VolumetricFogField_C.ReceiveTick
struct ABP_VolumetricFogField_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VolumetricFogField.BP_VolumetricFogField_C.ReceiveBeginPlay
struct ABP_VolumetricFogField_C_ReceiveBeginPlay_Params
{
};

// Function BP_VolumetricFogField.BP_VolumetricFogField_C.ExecuteUbergraph_BP_VolumetricFogField
struct ABP_VolumetricFogField_C_ExecuteUbergraph_BP_VolumetricFogField_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
