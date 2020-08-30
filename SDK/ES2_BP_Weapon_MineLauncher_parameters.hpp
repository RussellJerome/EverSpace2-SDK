#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weapon_MineLauncher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C.ReceiveBeginPlay
struct ABP_Weapon_MineLauncher_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C.ManualProjectileSpawning
struct ABP_Weapon_MineLauncher_C_ManualProjectileSpawning_Params
{
	struct FVector*                                    StartPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ProjectileVelocity;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ShieldDamage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HullDamage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ChargePercent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C.EnableMineCollision
struct ABP_Weapon_MineLauncher_C_EnableMineCollision_Params
{
};

// Function BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C.EnableMinePortable
struct ABP_Weapon_MineLauncher_C_EnableMinePortable_Params
{
};

// Function BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C.ExecuteUbergraph_BP_Weapon_MineLauncher
struct ABP_Weapon_MineLauncher_C_ExecuteUbergraph_BP_Weapon_MineLauncher_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
