// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weapon_MineLauncher_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_MineLauncher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C.ReceiveBeginPlay");

	ABP_Weapon_MineLauncher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C.ManualProjectileSpawning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                StartPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ProjectileVelocity             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ShieldDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HullDamage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ChargePercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MineLauncher_C::ManualProjectileSpawning(struct FVector* StartPosition, struct FVector* ProjectileVelocity, float* ShieldDamage, float* HullDamage, float* ChargePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C.ManualProjectileSpawning");

	ABP_Weapon_MineLauncher_C_ManualProjectileSpawning_Params params;
	params.StartPosition = StartPosition;
	params.ProjectileVelocity = ProjectileVelocity;
	params.ShieldDamage = ShieldDamage;
	params.HullDamage = HullDamage;
	params.ChargePercent = ChargePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C.EnableMineCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_Weapon_MineLauncher_C::EnableMineCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C.EnableMineCollision");

	ABP_Weapon_MineLauncher_C_EnableMineCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C.EnableMinePortable
// (BlueprintCallable, BlueprintEvent)

void ABP_Weapon_MineLauncher_C::EnableMinePortable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C.EnableMinePortable");

	ABP_Weapon_MineLauncher_C_EnableMinePortable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C.ExecuteUbergraph_BP_Weapon_MineLauncher
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_MineLauncher_C::ExecuteUbergraph_BP_Weapon_MineLauncher(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MineLauncher.BP_Weapon_MineLauncher_C.ExecuteUbergraph_BP_Weapon_MineLauncher");

	ABP_Weapon_MineLauncher_C_ExecuteUbergraph_BP_Weapon_MineLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
