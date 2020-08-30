#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ShipBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ShipBase.BP_ShipBase_C.GetMeshAssetName
struct ABP_ShipBase_C_GetMeshAssetName_Params
{
	class UMeshComponent**                             MeshComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShipBase.BP_ShipBase_C.ResetModuleMaterials
struct ABP_ShipBase_C_ResetModuleMaterials_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.InitializeEngineVFX
struct ABP_ShipBase_C_InitializeEngineVFX_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.UpdateMaterials
struct ABP_ShipBase_C_UpdateMaterials_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.UpdateShip
struct ABP_ShipBase_C_UpdateShip_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.UserConstructionScript
struct ABP_ShipBase_C_UserConstructionScript_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.Explode
struct ABP_ShipBase_C_Explode_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.DestructionVFX_BeginPlay
struct ABP_ShipBase_C_DestructionVFX_BeginPlay_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.UpdateSurfaceDamage
struct ABP_ShipBase_C_UpdateSurfaceDamage_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HitpointDelta;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShipBase.BP_ShipBase_C.FinalExplosion
struct ABP_ShipBase_C_FinalExplosion_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.DestroyAfterExploding
struct ABP_ShipBase_C_DestroyAfterExploding_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.DestructionVFXTick
struct ABP_ShipBase_C_DestructionVFXTick_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.ReceivePointDamage
struct ABP_ShipBase_C_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ShipBase.BP_ShipBase_C.SpawnExplosion
struct ABP_ShipBase_C_SpawnExplosion_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.Revive
struct ABP_ShipBase_C_Revive_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.EngineVFX_Tick
struct ABP_ShipBase_C_EngineVFX_Tick_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.EngineVFX_BeginPlay
struct ABP_ShipBase_C_EngineVFX_BeginPlay_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.UpdateEngineVFX
struct ABP_ShipBase_C_UpdateEngineVFX_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.OnBoostStart
struct ABP_ShipBase_C_OnBoostStart_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.OnBoostStop
struct ABP_ShipBase_C_OnBoostStop_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.SetEngineVFXEnabled
struct ABP_ShipBase_C_SetEngineVFXEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShipBase.BP_ShipBase_C.ReceiveTick
struct ABP_ShipBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShipBase.BP_ShipBase_C.ReceiveBeginPlay
struct ABP_ShipBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature
struct ABP_ShipBase_C_BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShipBase.BP_ShipBase_C.HealthDepleted
struct ABP_ShipBase_C_HealthDepleted_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.ApplyEMP
struct ABP_ShipBase_C_ApplyEMP_Params
{
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShipBase.BP_ShipBase_C.RemoveEMP
struct ABP_ShipBase_C_RemoveEMP_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.OnReinitShipColors
struct ABP_ShipBase_C_OnReinitShipColors_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.ExecuteUbergraph_BP_ShipBase
struct ABP_ShipBase_C_ExecuteUbergraph_BP_ShipBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShipBase.BP_ShipBase_C.OnDestroyAfterExplosion__DelegateSignature
struct ABP_ShipBase_C_OnDestroyAfterExplosion__DelegateSignature_Params
{
};

// Function BP_ShipBase.BP_ShipBase_C.OnShipUpdated__DelegateSignature
struct ABP_ShipBase_C_OnShipUpdated__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
