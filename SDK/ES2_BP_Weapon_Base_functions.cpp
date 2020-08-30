// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weapon_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_Base.BP_Weapon_Base_C.SetRandomizedFireSounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_Base_C::SetRandomizedFireSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Base.BP_Weapon_Base_C.SetRandomizedFireSounds");

	ABP_Weapon_Base_C_SetRandomizedFireSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_Base.BP_Weapon_Base_C.SetRandomizedEffectsColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_Base_C::SetRandomizedEffectsColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Base.BP_Weapon_Base_C.SetRandomizedEffectsColor");

	ABP_Weapon_Base_C_SetRandomizedEffectsColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_Base.BP_Weapon_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Base.BP_Weapon_Base_C.ReceiveBeginPlay");

	ABP_Weapon_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_Base.BP_Weapon_Base_C.OnWeaponInitFromItem_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Weapon_Base_C::OnWeaponInitFromItem_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Base.BP_Weapon_Base_C.OnWeaponInitFromItem_Event_1");

	ABP_Weapon_Base_C_OnWeaponInitFromItem_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_Base.BP_Weapon_Base_C.OnProjectileFired
// (Event, Public, BlueprintEvent)
// Parameters:
// class AProjectileBase**        Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_Base_C::OnProjectileFired(class AProjectileBase** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Base.BP_Weapon_Base_C.OnProjectileFired");

	ABP_Weapon_Base_C_OnProjectileFired_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_Base.BP_Weapon_Base_C.Firing
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                StartPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                EndPosition                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_Base_C::Firing(struct FVector* StartPosition, struct FVector* EndPosition, class AActor** HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Base.BP_Weapon_Base_C.Firing");

	ABP_Weapon_Base_C_Firing_Params params;
	params.StartPosition = StartPosition;
	params.EndPosition = EndPosition;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_Base.BP_Weapon_Base_C.OnChargeEnd_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_Weapon_Base_C::OnChargeEnd_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Base.BP_Weapon_Base_C.OnChargeEnd_Event");

	ABP_Weapon_Base_C_OnChargeEnd_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_Base.BP_Weapon_Base_C.OnChargeTick_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ChargePercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_Base_C::OnChargeTick_Event(float* ChargePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Base.BP_Weapon_Base_C.OnChargeTick_Event");

	ABP_Weapon_Base_C_OnChargeTick_Event_Params params;
	params.ChargePercent = ChargePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_Base.BP_Weapon_Base_C.ExecuteUbergraph_BP_Weapon_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_Base_C::ExecuteUbergraph_BP_Weapon_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Base.BP_Weapon_Base_C.ExecuteUbergraph_BP_Weapon_Base");

	ABP_Weapon_Base_C_ExecuteUbergraph_BP_Weapon_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
