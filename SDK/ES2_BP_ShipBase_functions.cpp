// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ShipBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShipBase.BP_ShipBase_C.GetMeshAssetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent**         MeshComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ShipBase_C::GetMeshAssetName(class UMeshComponent** MeshComponent, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.GetMeshAssetName");

	ABP_ShipBase_C_GetMeshAssetName_Params params;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_ShipBase.BP_ShipBase_C.ResetModuleMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::ResetModuleMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.ResetModuleMaterials");

	ABP_ShipBase_C_ResetModuleMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.InitializeEngineVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::InitializeEngineVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.InitializeEngineVFX");

	ABP_ShipBase_C_InitializeEngineVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.UpdateMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::UpdateMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.UpdateMaterials");

	ABP_ShipBase_C_UpdateMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.UpdateShip
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::UpdateShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.UpdateShip");

	ABP_ShipBase_C_UpdateShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.UserConstructionScript");

	ABP_ShipBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.Explode
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.Explode");

	ABP_ShipBase_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.DestructionVFX_BeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::DestructionVFX_BeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.DestructionVFX_BeginPlay");

	ABP_ShipBase_C_DestructionVFX_BeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.UpdateSurfaceDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HitpointDelta                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipBase_C::UpdateSurfaceDamage(class AActor** Actor, float* HitpointDelta, struct FVector* HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.UpdateSurfaceDamage");

	ABP_ShipBase_C_UpdateSurfaceDamage_Params params;
	params.Actor = Actor;
	params.HitpointDelta = HitpointDelta;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.FinalExplosion
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::FinalExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.FinalExplosion");

	ABP_ShipBase_C_FinalExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.DestroyAfterExploding
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::DestroyAfterExploding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.DestroyAfterExploding");

	ABP_ShipBase_C_DestroyAfterExploding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.DestructionVFXTick
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::DestructionVFXTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.DestructionVFXTick");

	ABP_ShipBase_C_DestructionVFXTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.ReceivePointDamage
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

void ABP_ShipBase_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.ReceivePointDamage");

	ABP_ShipBase_C_ReceivePointDamage_Params params;
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


// Function BP_ShipBase.BP_ShipBase_C.SpawnExplosion
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::SpawnExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.SpawnExplosion");

	ABP_ShipBase_C_SpawnExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.Revive
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::Revive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.Revive");

	ABP_ShipBase_C_Revive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.EngineVFX_Tick
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::EngineVFX_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.EngineVFX_Tick");

	ABP_ShipBase_C_EngineVFX_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.EngineVFX_BeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::EngineVFX_BeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.EngineVFX_BeginPlay");

	ABP_ShipBase_C_EngineVFX_BeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.UpdateEngineVFX
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::UpdateEngineVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.UpdateEngineVFX");

	ABP_ShipBase_C_UpdateEngineVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.OnBoostStart
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::OnBoostStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.OnBoostStart");

	ABP_ShipBase_C_OnBoostStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.OnBoostStop
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::OnBoostStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.OnBoostStop");

	ABP_ShipBase_C_OnBoostStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.SetEngineVFXEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipBase_C::SetEngineVFXEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.SetEngineVFXEnabled");

	ABP_ShipBase_C_SetEngineVFXEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.ReceiveTick");

	ABP_ShipBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShipBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.ReceiveBeginPlay");

	ABP_ShipBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipBase_C::BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature");

	ABP_ShipBase_C_BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.HealthDepleted
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::HealthDepleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.HealthDepleted");

	ABP_ShipBase_C_HealthDepleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.ApplyEMP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipBase_C::ApplyEMP(class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.ApplyEMP");

	ABP_ShipBase_C_ApplyEMP_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.RemoveEMP
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::RemoveEMP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.RemoveEMP");

	ABP_ShipBase_C_RemoveEMP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.OnReinitShipColors
// (Event, Public, BlueprintEvent)

void ABP_ShipBase_C::OnReinitShipColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.OnReinitShipColors");

	ABP_ShipBase_C_OnReinitShipColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.ExecuteUbergraph_BP_ShipBase
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipBase_C::ExecuteUbergraph_BP_ShipBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.ExecuteUbergraph_BP_ShipBase");

	ABP_ShipBase_C_ExecuteUbergraph_BP_ShipBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.OnDestroyAfterExplosion__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::OnDestroyAfterExplosion__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.OnDestroyAfterExplosion__DelegateSignature");

	ABP_ShipBase_C_OnDestroyAfterExplosion__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipBase.BP_ShipBase_C.OnShipUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ShipBase_C::OnShipUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipBase.BP_ShipBase_C.OnShipUpdated__DelegateSignature");

	ABP_ShipBase_C_OnShipUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
