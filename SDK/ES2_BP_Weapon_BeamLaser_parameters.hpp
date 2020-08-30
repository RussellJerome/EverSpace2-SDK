#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weapon_BeamLaser_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Weapon_BeamLaser.BP_Weapon_BeamLaser_C.OnStopFire
struct ABP_Weapon_BeamLaser_C_OnStopFire_Params
{
};

// Function BP_Weapon_BeamLaser.BP_Weapon_BeamLaser_C.OnSpawnImpact
struct ABP_Weapon_BeamLaser_C_OnSpawnImpact_Params
{
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EWeaponImpact*                                     ImpactType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCriticalHit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotDirection;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     InstigatorActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_BeamLaser.BP_Weapon_BeamLaser_C.OnStartFire
struct ABP_Weapon_BeamLaser_C_OnStartFire_Params
{
	struct FVector*                                    StartPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    EndPosition;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_BeamLaser.BP_Weapon_BeamLaser_C.ReceiveBeginPlay
struct ABP_Weapon_BeamLaser_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_BeamLaser.BP_Weapon_BeamLaser_C.ExecuteUbergraph_BP_Weapon_BeamLaser
struct ABP_Weapon_BeamLaser_C_ExecuteUbergraph_BP_Weapon_BeamLaser_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
