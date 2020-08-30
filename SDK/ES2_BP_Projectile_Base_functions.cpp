// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Projectile_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Projectile_Base.BP_Projectile_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Base.BP_Projectile_Base_C.UserConstructionScript");

	ABP_Projectile_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Base.BP_Projectile_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Projectile_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Base.BP_Projectile_Base_C.ReceiveBeginPlay");

	ABP_Projectile_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Base.BP_Projectile_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Base.BP_Projectile_Base_C.ReceiveTick");

	ABP_Projectile_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Base.BP_Projectile_Base_C.MakeVulnerable
// (BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Base_C::MakeVulnerable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Base.BP_Projectile_Base_C.MakeVulnerable");

	ABP_Projectile_Base_C_MakeVulnerable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Base.BP_Projectile_Base_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_Base_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Base.BP_Projectile_Base_C.ReceiveAnyDamage");

	ABP_Projectile_Base_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Base.BP_Projectile_Base_C.OnBecomeActive
// (Event, Public, BlueprintEvent)

void ABP_Projectile_Base_C::OnBecomeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Base.BP_Projectile_Base_C.OnBecomeActive");

	ABP_Projectile_Base_C_OnBecomeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Base.BP_Projectile_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_Base_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Base.BP_Projectile_Base_C.ReceiveEndPlay");

	ABP_Projectile_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Base.BP_Projectile_Base_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Projectile_Base_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Base.BP_Projectile_Base_C.ReceiveDestroyed");

	ABP_Projectile_Base_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Base.BP_Projectile_Base_C.OnBecomeInactive
// (Event, Public, BlueprintEvent)

void ABP_Projectile_Base_C::OnBecomeInactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Base.BP_Projectile_Base_C.OnBecomeInactive");

	ABP_Projectile_Base_C_OnBecomeInactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Base.BP_Projectile_Base_C.ProjectileExploded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Projectile_Base_C::ProjectileExploded(struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Base.BP_Projectile_Base_C.ProjectileExploded");

	ABP_Projectile_Base_C_ProjectileExploded_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Base.BP_Projectile_Base_C.OnSpawnImpact
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             SpawnTransform                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EWeaponImpact*                 ImpactType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCriticalHit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotDirection                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 InstigatorActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_Base_C::OnSpawnImpact(struct FTransform* SpawnTransform, struct FHitResult* HitInfo, EWeaponImpact* ImpactType, bool* bCriticalHit, struct FVector* ShotDirection, class AActor** InstigatorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Base.BP_Projectile_Base_C.OnSpawnImpact");

	ABP_Projectile_Base_C_OnSpawnImpact_Params params;
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


// Function BP_Projectile_Base.BP_Projectile_Base_C.ExecuteUbergraph_BP_Projectile_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_Base_C::ExecuteUbergraph_BP_Projectile_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Base.BP_Projectile_Base_C.ExecuteUbergraph_BP_Projectile_Base");

	ABP_Projectile_Base_C_ExecuteUbergraph_BP_Projectile_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
