#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_AddMeshComponentInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_AddMeshComponentInterface.BPI_AddMeshComponentInterface_C.AddSkeletalMeshComponent
struct UBPI_AddMeshComponentInterface_C_AddSkeletalMeshComponent_Params
{
	class USkeletalMesh**                              SkeletalMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class USkeletalMeshComponent*                      Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_AddMeshComponentInterface.BPI_AddMeshComponentInterface_C.AddStaticMeshComponent
struct UBPI_AddMeshComponentInterface_C_AddStaticMeshComponent_Params
{
	class UStaticMesh**                                StaticMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UStaticMeshComponent*                        Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
