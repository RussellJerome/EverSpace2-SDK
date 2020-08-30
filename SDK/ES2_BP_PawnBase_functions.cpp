// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PawnBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PawnBase.BP_PawnBase_C.GetPawnLocalSpaceBounds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBoxSphereBounds        LocalSpaceBounds               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PawnBase_C::GetPawnLocalSpaceBounds(struct FBoxSphereBounds* LocalSpaceBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.GetPawnLocalSpaceBounds");

	ABP_PawnBase_C_GetPawnLocalSpaceBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalSpaceBounds != nullptr)
		*LocalSpaceBounds = params.LocalSpaceBounds;
}


// Function BP_PawnBase.BP_PawnBase_C.AddStaticMeshComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh**            StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UStaticMeshComponent*    Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_PawnBase_C::AddStaticMeshComponent(class UStaticMesh** StaticMesh, struct FTransform* Transform, class UStaticMeshComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.AddStaticMeshComponent");

	ABP_PawnBase_C_AddStaticMeshComponent_Params params;
	params.StaticMesh = StaticMesh;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BP_PawnBase.BP_PawnBase_C.AddSkeletalMeshComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh**          SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class USkeletalMeshComponent*  Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_PawnBase_C::AddSkeletalMeshComponent(class USkeletalMesh** SkeletalMesh, struct FTransform* Transform, class USkeletalMeshComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.AddSkeletalMeshComponent");

	ABP_PawnBase_C_AddSkeletalMeshComponent_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BP_PawnBase.BP_PawnBase_C.CalculateShieldImpactLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                ShotDirection                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactWorldLocation            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactWorldNormal              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PawnBase_C::CalculateShieldImpactLocation(struct FVector* ShotDirection, struct FVector* ImpactWorldLocation, struct FVector* ImpactWorldNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.CalculateShieldImpactLocation");

	ABP_PawnBase_C_CalculateShieldImpactLocation_Params params;
	params.ShotDirection = ShotDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ImpactWorldLocation != nullptr)
		*ImpactWorldLocation = params.ImpactWorldLocation;
	if (ImpactWorldNormal != nullptr)
		*ImpactWorldNormal = params.ImpactWorldNormal;
}


// Function BP_PawnBase.BP_PawnBase_C.ApplyTurningBoost
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PawnBase_C::ApplyTurningBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.ApplyTurningBoost");

	ABP_PawnBase_C_ApplyTurningBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.CollectPawnMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PawnBase_C::CollectPawnMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.CollectPawnMaterials");

	ABP_PawnBase_C_CollectPawnMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PawnBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.UserConstructionScript");

	ABP_PawnBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.ShieldImpactVFXTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PawnBase_C::ShieldImpactVFXTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.ShieldImpactVFXTimeline__FinishedFunc");

	ABP_PawnBase_C_ShieldImpactVFXTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.ShieldImpactVFXTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PawnBase_C::ShieldImpactVFXTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.ShieldImpactVFXTimeline__UpdateFunc");

	ABP_PawnBase_C_ShieldImpactVFXTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.ArmorRechargeVFXTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PawnBase_C::ArmorRechargeVFXTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.ArmorRechargeVFXTimeline__FinishedFunc");

	ABP_PawnBase_C_ArmorRechargeVFXTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.ArmorRechargeVFXTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PawnBase_C::ArmorRechargeVFXTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.ArmorRechargeVFXTimeline__UpdateFunc");

	ABP_PawnBase_C_ArmorRechargeVFXTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.ShieldDepleteVFXTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PawnBase_C::ShieldDepleteVFXTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.ShieldDepleteVFXTimeline__FinishedFunc");

	ABP_PawnBase_C_ShieldDepleteVFXTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.ShieldDepleteVFXTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PawnBase_C::ShieldDepleteVFXTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.ShieldDepleteVFXTimeline__UpdateFunc");

	ABP_PawnBase_C_ShieldDepleteVFXTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.ShieldRechargeVFXTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PawnBase_C::ShieldRechargeVFXTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.ShieldRechargeVFXTimeline__FinishedFunc");

	ABP_PawnBase_C_ShieldRechargeVFXTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.ShieldRechargeVFXTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PawnBase_C::ShieldRechargeVFXTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.ShieldRechargeVFXTimeline__UpdateFunc");

	ABP_PawnBase_C_ShieldRechargeVFXTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.CloakFadeTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PawnBase_C::CloakFadeTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.CloakFadeTimeline__FinishedFunc");

	ABP_PawnBase_C_CloakFadeTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.CloakFadeTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PawnBase_C::CloakFadeTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.CloakFadeTimeline__UpdateFunc");

	ABP_PawnBase_C_CloakFadeTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.EffectsBeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_PawnBase_C::EffectsBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.EffectsBeginPlay");

	ABP_PawnBase_C_EffectsBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.EffectsTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PawnBase_C::EffectsTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.EffectsTick");

	ABP_PawnBase_C_EffectsTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.VFX_UpdateSocketLights
// (BlueprintCallable, BlueprintEvent)

void ABP_PawnBase_C::VFX_UpdateSocketLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.VFX_UpdateSocketLights");

	ABP_PawnBase_C_VFX_UpdateSocketLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.VFX_UpdateHeadlights
// (BlueprintCallable, BlueprintEvent)

void ABP_PawnBase_C::VFX_UpdateHeadlights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.VFX_UpdateHeadlights");

	ABP_PawnBase_C_VFX_UpdateHeadlights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.VFX_ToggleHeadlights
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PawnBase_C::VFX_ToggleHeadlights(bool* On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.VFX_ToggleHeadlights");

	ABP_PawnBase_C_VFX_ToggleHeadlights_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.VFX_UpdateShield
// (BlueprintCallable, BlueprintEvent)

void ABP_PawnBase_C::VFX_UpdateShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.VFX_UpdateShield");

	ABP_PawnBase_C_VFX_UpdateShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.VFX_ShieldTick
// (BlueprintCallable, BlueprintEvent)

void ABP_PawnBase_C::VFX_ShieldTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.VFX_ShieldTick");

	ABP_PawnBase_C_VFX_ShieldTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.VFX_ShieldImpact
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                ShotDirection                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PawnBase_C::VFX_ShieldImpact(struct FVector* ShotDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.VFX_ShieldImpact");

	ABP_PawnBase_C_VFX_ShieldImpact_Params params;
	params.ShotDirection = ShotDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.VFX_ArmorRecharge
// (BlueprintCallable, BlueprintEvent)

void ABP_PawnBase_C::VFX_ArmorRecharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.VFX_ArmorRecharge");

	ABP_PawnBase_C_VFX_ArmorRecharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.BndEvt__Shield_K2Node_ComponentBoundEvent_0_OnShieldDepletedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PawnBase_C::BndEvt__Shield_K2Node_ComponentBoundEvent_0_OnShieldDepletedDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.BndEvt__Shield_K2Node_ComponentBoundEvent_0_OnShieldDepletedDelegate__DelegateSignature");

	ABP_PawnBase_C_BndEvt__Shield_K2Node_ComponentBoundEvent_0_OnShieldDepletedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.BndEvt__Shield_K2Node_ComponentBoundEvent_1_OnShieldChargingDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PawnBase_C::BndEvt__Shield_K2Node_ComponentBoundEvent_1_OnShieldChargingDelegate__DelegateSignature(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.BndEvt__Shield_K2Node_ComponentBoundEvent_1_OnShieldChargingDelegate__DelegateSignature");

	ABP_PawnBase_C_BndEvt__Shield_K2Node_ComponentBoundEvent_1_OnShieldChargingDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.CloakFadeEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FadeIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PawnBase_C::CloakFadeEffect(bool* FadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.CloakFadeEffect");

	ABP_PawnBase_C_CloakFadeEffect_Params params;
	params.FadeIn = FadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PawnBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.ReceiveTick");

	ABP_PawnBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PawnBase_C::BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature");

	ABP_PawnBase_C_BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PawnBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.ReceiveBeginPlay");

	ABP_PawnBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.OnAiJump
// (Event, Public, BlueprintEvent)

void ABP_PawnBase_C::OnAiJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.OnAiJump");

	ABP_PawnBase_C_OnAiJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.InitializePhysics
// (BlueprintCallable, BlueprintEvent)

void ABP_PawnBase_C::InitializePhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.InitializePhysics");

	ABP_PawnBase_C_InitializePhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.ReceivePointDamage
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

void ABP_PawnBase_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.ReceivePointDamage");

	ABP_PawnBase_C_ReceivePointDamage_Params params;
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


// Function BP_PawnBase.BP_PawnBase_C.ApplyEMP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PawnBase_C::ApplyEMP(class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.ApplyEMP");

	ABP_PawnBase_C_ApplyEMP_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.RemoveEMP
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PawnBase_C::RemoveEMP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.RemoveEMP");

	ABP_PawnBase_C_RemoveEMP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.OnRecveivedAIEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAIEvent>*         EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PawnBase_C::OnRecveivedAIEvent(TEnumAsByte<EAIEvent>* EventId, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.OnRecveivedAIEvent");

	ABP_PawnBase_C_OnRecveivedAIEvent_Params params;
	params.EventId = EventId;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.ExecuteUbergraph_BP_PawnBase
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PawnBase_C::ExecuteUbergraph_BP_PawnBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.ExecuteUbergraph_BP_PawnBase");

	ABP_PawnBase_C_ExecuteUbergraph_BP_PawnBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PawnBase.BP_PawnBase_C.OnArmorRechargeVFXFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PawnBase_C::OnArmorRechargeVFXFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PawnBase.BP_PawnBase_C.OnArmorRechargeVFXFinished__DelegateSignature");

	ABP_PawnBase_C_OnArmorRechargeVFXFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
