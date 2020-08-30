// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weapon_InstantHit_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.Firing
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                StartPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                EndPosition                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_InstantHit_Base_C::Firing(struct FVector* StartPosition, struct FVector* EndPosition, class AActor** HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.Firing");

	ABP_Weapon_InstantHit_Base_C_Firing_Params params;
	params.StartPosition = StartPosition;
	params.EndPosition = EndPosition;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.OnSpawnImpact
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             SpawnTransform                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EWeaponImpact*                 ImpactType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCriticalHit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotDirection                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 InstigatorActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_InstantHit_Base_C::OnSpawnImpact(struct FTransform* SpawnTransform, struct FHitResult* HitInfo, EWeaponImpact* ImpactType, bool* bCriticalHit, struct FVector* ShotDirection, class AActor** InstigatorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.OnSpawnImpact");

	ABP_Weapon_InstantHit_Base_C_OnSpawnImpact_Params params;
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


// Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_InstantHit_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.ReceiveBeginPlay");

	ABP_Weapon_InstantHit_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.OnStartFire
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                StartPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                EndPosition                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_InstantHit_Base_C::OnStartFire(struct FVector* StartPosition, struct FVector* EndPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.OnStartFire");

	ABP_Weapon_InstantHit_Base_C_OnStartFire_Params params;
	params.StartPosition = StartPosition;
	params.EndPosition = EndPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.OnWeaponInitFromItem_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Weapon_InstantHit_Base_C::OnWeaponInitFromItem_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.OnWeaponInitFromItem_Event_1");

	ABP_Weapon_InstantHit_Base_C_OnWeaponInitFromItem_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.ExecuteUbergraph_BP_Weapon_InstantHit_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_InstantHit_Base_C::ExecuteUbergraph_BP_Weapon_InstantHit_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C.ExecuteUbergraph_BP_Weapon_InstantHit_Base");

	ABP_Weapon_InstantHit_Base_C_ExecuteUbergraph_BP_Weapon_InstantHit_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
