#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PawnBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PawnBase.BP_PawnBase_C.GetPawnLocalSpaceBounds
struct ABP_PawnBase_C_GetPawnLocalSpaceBounds_Params
{
	struct FBoxSphereBounds                            LocalSpaceBounds;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.AddStaticMeshComponent
struct ABP_PawnBase_C_AddStaticMeshComponent_Params
{
	class UStaticMesh**                                StaticMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UStaticMeshComponent*                        Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.AddSkeletalMeshComponent
struct ABP_PawnBase_C_AddSkeletalMeshComponent_Params
{
	class USkeletalMesh**                              SkeletalMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class USkeletalMeshComponent*                      Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.CalculateShieldImpactLocation
struct ABP_PawnBase_C_CalculateShieldImpactLocation_Params
{
	struct FVector*                                    ShotDirection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactWorldLocation;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactWorldNormal;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.ApplyTurningBoost
struct ABP_PawnBase_C_ApplyTurningBoost_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.CollectPawnMaterials
struct ABP_PawnBase_C_CollectPawnMaterials_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.UserConstructionScript
struct ABP_PawnBase_C_UserConstructionScript_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.ShieldImpactVFXTimeline__FinishedFunc
struct ABP_PawnBase_C_ShieldImpactVFXTimeline__FinishedFunc_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.ShieldImpactVFXTimeline__UpdateFunc
struct ABP_PawnBase_C_ShieldImpactVFXTimeline__UpdateFunc_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.ArmorRechargeVFXTimeline__FinishedFunc
struct ABP_PawnBase_C_ArmorRechargeVFXTimeline__FinishedFunc_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.ArmorRechargeVFXTimeline__UpdateFunc
struct ABP_PawnBase_C_ArmorRechargeVFXTimeline__UpdateFunc_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.ShieldDepleteVFXTimeline__FinishedFunc
struct ABP_PawnBase_C_ShieldDepleteVFXTimeline__FinishedFunc_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.ShieldDepleteVFXTimeline__UpdateFunc
struct ABP_PawnBase_C_ShieldDepleteVFXTimeline__UpdateFunc_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.ShieldRechargeVFXTimeline__FinishedFunc
struct ABP_PawnBase_C_ShieldRechargeVFXTimeline__FinishedFunc_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.ShieldRechargeVFXTimeline__UpdateFunc
struct ABP_PawnBase_C_ShieldRechargeVFXTimeline__UpdateFunc_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.CloakFadeTimeline__FinishedFunc
struct ABP_PawnBase_C_CloakFadeTimeline__FinishedFunc_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.CloakFadeTimeline__UpdateFunc
struct ABP_PawnBase_C_CloakFadeTimeline__UpdateFunc_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.EffectsBeginPlay
struct ABP_PawnBase_C_EffectsBeginPlay_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.EffectsTick
struct ABP_PawnBase_C_EffectsTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.VFX_UpdateSocketLights
struct ABP_PawnBase_C_VFX_UpdateSocketLights_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.VFX_UpdateHeadlights
struct ABP_PawnBase_C_VFX_UpdateHeadlights_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.VFX_ToggleHeadlights
struct ABP_PawnBase_C_VFX_ToggleHeadlights_Params
{
	bool*                                              On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.VFX_UpdateShield
struct ABP_PawnBase_C_VFX_UpdateShield_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.VFX_ShieldTick
struct ABP_PawnBase_C_VFX_ShieldTick_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.VFX_ShieldImpact
struct ABP_PawnBase_C_VFX_ShieldImpact_Params
{
	struct FVector*                                    ShotDirection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.VFX_ArmorRecharge
struct ABP_PawnBase_C_VFX_ArmorRecharge_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.BndEvt__Shield_K2Node_ComponentBoundEvent_0_OnShieldDepletedDelegate__DelegateSignature
struct ABP_PawnBase_C_BndEvt__Shield_K2Node_ComponentBoundEvent_0_OnShieldDepletedDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.BndEvt__Shield_K2Node_ComponentBoundEvent_1_OnShieldChargingDelegate__DelegateSignature
struct ABP_PawnBase_C_BndEvt__Shield_K2Node_ComponentBoundEvent_1_OnShieldChargingDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.CloakFadeEffect
struct ABP_PawnBase_C_CloakFadeEffect_Params
{
	bool*                                              FadeIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.ReceiveTick
struct ABP_PawnBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature
struct ABP_PawnBase_C_BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.ReceiveBeginPlay
struct ABP_PawnBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.OnAiJump
struct ABP_PawnBase_C_OnAiJump_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.InitializePhysics
struct ABP_PawnBase_C_InitializePhysics_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.ReceivePointDamage
struct ABP_PawnBase_C_ReceivePointDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotFromDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.ApplyEMP
struct ABP_PawnBase_C_ApplyEMP_Params
{
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.RemoveEMP
struct ABP_PawnBase_C_RemoveEMP_Params
{
};

// Function BP_PawnBase.BP_PawnBase_C.OnRecveivedAIEvent
struct ABP_PawnBase_C_OnRecveivedAIEvent_Params
{
	TEnumAsByte<EAIEvent>*                             EventId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.ExecuteUbergraph_BP_PawnBase
struct ABP_PawnBase_C_ExecuteUbergraph_BP_PawnBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PawnBase.BP_PawnBase_C.OnArmorRechargeVFXFinished__DelegateSignature
struct ABP_PawnBase_C_OnArmorRechargeVFXFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
