#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MeshField_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MeshField_Base.BP_MeshField_Base_C.ProcessExclusionSpheres
struct ABP_MeshField_Base_C_ProcessExclusionSpheres_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MeshField_Base.BP_MeshField_Base_C.DestroyDynamicComponents
struct ABP_MeshField_Base_C_DestroyDynamicComponents_Params
{
};

// Function BP_MeshField_Base.BP_MeshField_Base_C.UpdateMeshField
struct ABP_MeshField_Base_C_UpdateMeshField_Params
{
};

// Function BP_MeshField_Base.BP_MeshField_Base_C.CheckLocationForPrimitiveOverlaps
struct ABP_MeshField_Base_C_CheckLocationForPrimitiveOverlaps_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MeshField_Base.BP_MeshField_Base_C.GetWeightedMeshIndex
struct ABP_MeshField_Base_C_GetWeightedMeshIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MeshField_Base.BP_MeshField_Base_C.MakeTransform
struct ABP_MeshField_Base_C_MakeTransform_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MeshField_Base.BP_MeshField_Base_C.GetSphereTransforms
struct ABP_MeshField_Base_C_GetSphereTransforms_Params
{
};

// Function BP_MeshField_Base.BP_MeshField_Base_C.GetSplineTransforms
struct ABP_MeshField_Base_C_GetSplineTransforms_Params
{
};

// Function BP_MeshField_Base.BP_MeshField_Base_C.UserConstructionScript
struct ABP_MeshField_Base_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
