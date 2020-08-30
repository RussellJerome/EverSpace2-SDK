// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weakspot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weakspot.BP_Weakspot_C.OffsiteSimulate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TimePassed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weakspot_C::OffsiteSimulate(float* TimePassed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.OffsiteSimulate");

	ABP_Weakspot_C_OffsiteSimulate_Params params;
	params.TimePassed = TimePassed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weakspot.BP_Weakspot_C.RestoreState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weakspot_C::RestoreState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.RestoreState");

	ABP_Weakspot_C_RestoreState_Params params;
	params.GenericSaveDataMap = GenericSaveDataMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weakspot.BP_Weakspot_C.SaveState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer> GenericSaveDataMap             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weakspot_C::SaveState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.SaveState");

	ABP_Weakspot_C_SaveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenericSaveDataMap != nullptr)
		*GenericSaveDataMap = params.GenericSaveDataMap;

	return params.ReturnValue;
}


// Function BP_Weakspot.BP_Weakspot_C.GetAverageBoundsOrigin
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AverageOrigin                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Weakspot_C::GetAverageBoundsOrigin(struct FVector* AverageOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.GetAverageBoundsOrigin");

	ABP_Weakspot_C_GetAverageBoundsOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AverageOrigin != nullptr)
		*AverageOrigin = params.AverageOrigin;
}


// Function BP_Weakspot.BP_Weakspot_C.SafeGetControlledPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AController**            Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Pawn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Weakspot_C::SafeGetControlledPawn(class AController** Controller, class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.SafeGetControlledPawn");

	ABP_Weakspot_C_SafeGetControlledPawn_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pawn != nullptr)
		*Pawn = params.Pawn;
}


// Function BP_Weakspot.BP_Weakspot_C.IsDestroyed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Destroyed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Weakspot_C::IsDestroyed(bool* Destroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.IsDestroyed");

	ABP_Weakspot_C_IsDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destroyed != nullptr)
		*Destroyed = params.Destroyed;
}


// Function BP_Weakspot.BP_Weakspot_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Weakspot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.UserConstructionScript");

	ABP_Weakspot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weakspot.BP_Weakspot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Weakspot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.ReceiveBeginPlay");

	ABP_Weakspot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weakspot.BP_Weakspot_C.BndEvt__Health_K2Node_ComponentBoundEvent_153_OnHealthDepletedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weakspot_C::BndEvt__Health_K2Node_ComponentBoundEvent_153_OnHealthDepletedDelegate__DelegateSignature(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.BndEvt__Health_K2Node_ComponentBoundEvent_153_OnHealthDepletedDelegate__DelegateSignature");

	ABP_Weakspot_C_BndEvt__Health_K2Node_ComponentBoundEvent_153_OnHealthDepletedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weakspot.BP_Weakspot_C.Explode
// (BlueprintCallable, BlueprintEvent)

void ABP_Weakspot_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.Explode");

	ABP_Weakspot_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weakspot.BP_Weakspot_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Weakspot_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.ReceivePointDamage");

	ABP_Weakspot_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weakspot.BP_Weakspot_C.ReceiveRadialDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weakspot_C::ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.ReceiveRadialDamage");

	ABP_Weakspot_C_ReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weakspot.BP_Weakspot_C.DestroyWeakspot
// (BlueprintCallable, BlueprintEvent)

void ABP_Weakspot_C::DestroyWeakspot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.DestroyWeakspot");

	ABP_Weakspot_C_DestroyWeakspot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weakspot.BP_Weakspot_C.SetDestructionDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DestructionDamage              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weakspot_C::SetDestructionDamage(float* DestructionDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.SetDestructionDamage");

	ABP_Weakspot_C_SetDestructionDamage_Params params;
	params.DestructionDamage = DestructionDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weakspot.BP_Weakspot_C.ExecuteUbergraph_BP_Weakspot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weakspot_C::ExecuteUbergraph_BP_Weakspot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.ExecuteUbergraph_BP_Weakspot");

	ABP_Weakspot_C_ExecuteUbergraph_BP_Weakspot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weakspot.BP_Weakspot_C.DestroyedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Weakspot_C::DestroyedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weakspot.BP_Weakspot_C.DestroyedDispatcher__DelegateSignature");

	ABP_Weakspot_C_DestroyedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
