#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weapon_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Weapon_Base.BP_Weapon_Base_C.SetRandomizedFireSounds
struct ABP_Weapon_Base_C_SetRandomizedFireSounds_Params
{
};

// Function BP_Weapon_Base.BP_Weapon_Base_C.SetRandomizedEffectsColor
struct ABP_Weapon_Base_C_SetRandomizedEffectsColor_Params
{
};

// Function BP_Weapon_Base.BP_Weapon_Base_C.ReceiveBeginPlay
struct ABP_Weapon_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_Base.BP_Weapon_Base_C.OnWeaponInitFromItem_Event_1
struct ABP_Weapon_Base_C_OnWeaponInitFromItem_Event_1_Params
{
};

// Function BP_Weapon_Base.BP_Weapon_Base_C.OnProjectileFired
struct ABP_Weapon_Base_C_OnProjectileFired_Params
{
	class AProjectileBase**                            Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_Base.BP_Weapon_Base_C.Firing
struct ABP_Weapon_Base_C_Firing_Params
{
	struct FVector*                                    StartPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    EndPosition;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_Base.BP_Weapon_Base_C.OnChargeEnd_Event
struct ABP_Weapon_Base_C_OnChargeEnd_Event_Params
{
};

// Function BP_Weapon_Base.BP_Weapon_Base_C.OnChargeTick_Event
struct ABP_Weapon_Base_C_OnChargeTick_Event_Params
{
	float*                                             ChargePercent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_Base.BP_Weapon_Base_C.ExecuteUbergraph_BP_Weapon_Base
struct ABP_Weapon_Base_C_ExecuteUbergraph_BP_Weapon_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
