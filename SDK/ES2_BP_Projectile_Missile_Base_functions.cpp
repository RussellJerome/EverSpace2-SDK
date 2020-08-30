// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Projectile_Missile_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Missile_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.UserConstructionScript");

	ABP_Projectile_Missile_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.OnMissileMissed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Missile_Base_C::OnMissileMissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.OnMissileMissed");

	ABP_Projectile_Missile_Base_C_OnMissileMissed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.DestroyHUDMarkerComponent
// (BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Missile_Base_C::DestroyHUDMarkerComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.DestroyHUDMarkerComponent");

	ABP_Projectile_Missile_Base_C_DestroyHUDMarkerComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.OnProjectileDestroyed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bLifeTimeExpired               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_Missile_Base_C::OnProjectileDestroyed(bool* bLifeTimeExpired)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.OnProjectileDestroyed");

	ABP_Projectile_Missile_Base_C_OnProjectileDestroyed_Params params;
	params.bLifeTimeExpired = bLifeTimeExpired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_Missile_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.ReceiveTick");

	ABP_Projectile_Missile_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.CalcSoundIntervalAndSetPitch
// (BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Missile_Base_C::CalcSoundIntervalAndSetPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.CalcSoundIntervalAndSetPitch");

	ABP_Projectile_Missile_Base_C_CalcSoundIntervalAndSetPitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.OnBecomeActive
// (Event, Public, BlueprintEvent)

void ABP_Projectile_Missile_Base_C::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.OnBecomeActive");

	ABP_Projectile_Missile_Base_C_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.CheckForWarning
// (BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Missile_Base_C::CheckForWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.CheckForWarning");

	ABP_Projectile_Missile_Base_C_CheckForWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.OnBecomeInactive
// (Event, Public, BlueprintEvent)

void ABP_Projectile_Missile_Base_C::OnBecomeInactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.OnBecomeInactive");

	ABP_Projectile_Missile_Base_C_OnBecomeInactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.OnSpawnImpact
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             SpawnTransform                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EWeaponImpact*                 ImpactType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCriticalHit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotDirection                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 InstigatorActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_Missile_Base_C::OnSpawnImpact(struct FTransform* SpawnTransform, struct FHitResult* HitInfo, EWeaponImpact* ImpactType, bool* bCriticalHit, struct FVector* ShotDirection, class AActor** InstigatorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.OnSpawnImpact");

	ABP_Projectile_Missile_Base_C_OnSpawnImpact_Params params;
	params.SpawnTransform = SpawnTransform;
	params.HitInfo = HitInfo;
	params.ImpactType = ImpactType;
	params.bCriticalHit = bCriticalHit;
	params.ShotDirection = ShotDirection;
	params.InstigatorActor = InstigatorActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.ExecuteUbergraph_BP_Projectile_Missile_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_Missile_Base_C::ExecuteUbergraph_BP_Projectile_Missile_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C.ExecuteUbergraph_BP_Projectile_Missile_Base");

	ABP_Projectile_Missile_Base_C_ExecuteUbergraph_BP_Projectile_Missile_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
