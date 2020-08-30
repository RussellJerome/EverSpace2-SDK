#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Projectile_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Projectile_Base.BP_Projectile_Base_C.UserConstructionScript
struct ABP_Projectile_Base_C_UserConstructionScript_Params
{
};

// Function BP_Projectile_Base.BP_Projectile_Base_C.ReceiveBeginPlay
struct ABP_Projectile_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Projectile_Base.BP_Projectile_Base_C.ReceiveTick
struct ABP_Projectile_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Projectile_Base.BP_Projectile_Base_C.MakeVulnerable
struct ABP_Projectile_Base_C_MakeVulnerable_Params
{
};

// Function BP_Projectile_Base.BP_Projectile_Base_C.ReceiveAnyDamage
struct ABP_Projectile_Base_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Projectile_Base.BP_Projectile_Base_C.OnBecomeActive
struct ABP_Projectile_Base_C_OnBecomeActive_Params
{
};

// Function BP_Projectile_Base.BP_Projectile_Base_C.ReceiveEndPlay
struct ABP_Projectile_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Projectile_Base.BP_Projectile_Base_C.ReceiveDestroyed
struct ABP_Projectile_Base_C_ReceiveDestroyed_Params
{
};

// Function BP_Projectile_Base.BP_Projectile_Base_C.OnBecomeInactive
struct ABP_Projectile_Base_C_OnBecomeInactive_Params
{
};

// Function BP_Projectile_Base.BP_Projectile_Base_C.ProjectileExploded
struct ABP_Projectile_Base_C_ProjectileExploded_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Projectile_Base.BP_Projectile_Base_C.OnSpawnImpact
struct ABP_Projectile_Base_C_OnSpawnImpact_Params
{
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EWeaponImpact*                                     ImpactType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCriticalHit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotDirection;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     InstigatorActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Projectile_Base.BP_Projectile_Base_C.ExecuteUbergraph_BP_Projectile_Base
struct ABP_Projectile_Base_C_ExecuteUbergraph_BP_Projectile_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
