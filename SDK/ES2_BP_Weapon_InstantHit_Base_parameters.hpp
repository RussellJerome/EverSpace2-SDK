#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weapon_InstantHit_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.Firing
struct ABP_Weapon_InstantHit_Base_C_Firing_Params
{
	struct FVector*                                    StartPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    EndPosition;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.OnSpawnImpact
struct ABP_Weapon_InstantHit_Base_C_OnSpawnImpact_Params
{
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EWeaponImpact*                                     ImpactType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCriticalHit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotDirection;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     InstigatorActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.ReceiveBeginPlay
struct ABP_Weapon_InstantHit_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.OnStartFire
struct ABP_Weapon_InstantHit_Base_C_OnStartFire_Params
{
	struct FVector*                                    StartPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    EndPosition;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.OnWeaponInitFromItem_Event_1
struct ABP_Weapon_InstantHit_Base_C_OnWeaponInitFromItem_Event_1_Params
{
};

// Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.ExecuteUbergraph_BP_Weapon_InstantHit_Base
struct ABP_Weapon_InstantHit_Base_C_ExecuteUbergraph_BP_Weapon_InstantHit_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
