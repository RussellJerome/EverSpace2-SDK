#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Projectile_Missile_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.UserConstructionScript
struct ABP_Projectile_Missile_Base_C_UserConstructionScript_Params
{
};

// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.OnMissileMissed
struct ABP_Projectile_Missile_Base_C_OnMissileMissed_Params
{
};

// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.DestroyHUDMarkerComponent
struct ABP_Projectile_Missile_Base_C_DestroyHUDMarkerComponent_Params
{
};

// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.OnProjectileDestroyed
struct ABP_Projectile_Missile_Base_C_OnProjectileDestroyed_Params
{
	bool*                                              bLifeTimeExpired;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.ReceiveTick
struct ABP_Projectile_Missile_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.CalcSoundIntervalAndSetPitch
struct ABP_Projectile_Missile_Base_C_CalcSoundIntervalAndSetPitch_Params
{
};

// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.OnBecomeActive
struct ABP_Projectile_Missile_Base_C_OnBecomeActive_Params
{
};

// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.CheckForWarning
struct ABP_Projectile_Missile_Base_C_CheckForWarning_Params
{
};

// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.OnBecomeInactive
struct ABP_Projectile_Missile_Base_C_OnBecomeInactive_Params
{
};

// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.OnSpawnImpact
struct ABP_Projectile_Missile_Base_C_OnSpawnImpact_Params
{
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EWeaponImpact*                                     ImpactType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCriticalHit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotDirection;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     InstigatorActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.ExecuteUbergraph_BP_Projectile_Missile_Base
struct ABP_Projectile_Missile_Base_C_ExecuteUbergraph_BP_Projectile_Missile_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
