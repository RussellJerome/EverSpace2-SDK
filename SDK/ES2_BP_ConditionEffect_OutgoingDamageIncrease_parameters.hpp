#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ConditionEffect_OutgoingDamageIncrease_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.AddStaticMeshComponent
struct ABP_ConditionEffect_OutgoingDamageIncrease_C_AddStaticMeshComponent_Params
{
	class UStaticMesh**                                StaticMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UStaticMeshComponent*                        Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.AddSkeletalMeshComponent
struct ABP_ConditionEffect_OutgoingDamageIncrease_C_AddSkeletalMeshComponent_Params
{
	class USkeletalMesh**                              SkeletalMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class USkeletalMeshComponent*                      Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.ReceiveBeginPlay
struct ABP_ConditionEffect_OutgoingDamageIncrease_C_ReceiveBeginPlay_Params
{
};

// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.Update
struct ABP_ConditionEffect_OutgoingDamageIncrease_C_Update_Params
{
};

// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.ReceiveEndPlay
struct ABP_ConditionEffect_OutgoingDamageIncrease_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.WeaponChangedCallback
struct ABP_ConditionEffect_OutgoingDamageIncrease_C_WeaponChangedCallback_Params
{
	struct FWeaponInfo*                                WeaponInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.ShipUpdatedCallback
struct ABP_ConditionEffect_OutgoingDamageIncrease_C_ShipUpdatedCallback_Params
{
};

// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.ReceiveTick
struct ABP_ConditionEffect_OutgoingDamageIncrease_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.ExecuteUbergraph_BP_ConditionEffect_OutgoingDamageIncrease
struct ABP_ConditionEffect_OutgoingDamageIncrease_C_ExecuteUbergraph_BP_ConditionEffect_OutgoingDamageIncrease_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
