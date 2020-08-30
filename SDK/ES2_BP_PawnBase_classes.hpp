#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PawnBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PawnBase.BP_PawnBase_C
// 0x012C (0x0A2C - 0x0900)
class ABP_PawnBase_C : public AESPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0900(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CollisionDamageComponent_C*              BP_CollisionDamageComponent;                              // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_DistanceCullComponent_C*                 BP_DistanceCullComponent;                                 // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ShieldSphere;                                             // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CloakFadeTimeline_Alpha_78F0F265421AF3A865934786D9EA46C4; // 0x0920(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CloakFadeTimeline__Direction_78F0F265421AF3A865934786D9EA46C4;// 0x0924(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0925(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CloakFadeTimeline;                                        // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ShieldImpactVFXTimeline_Alpha_9209F1A749D9E38C34DBFBB3877B106B;// 0x0930(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ShieldImpactVFXTimeline__Direction_9209F1A749D9E38C34DBFBB3877B106B;// 0x0934(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0935(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ShieldImpactVFXTimeline;                                  // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ShieldRechargeVFXTimeline_Alpha_077B96A145CA97F3F81DD08E0DB30FF1;// 0x0940(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ShieldRechargeVFXTimeline__Direction_077B96A145CA97F3F81DD08E0DB30FF1;// 0x0944(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0945(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ShieldRechargeVFXTimeline;                                // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ShieldDepleteVFXTimeline_Alpha_5A75195F4D9D65C67BC8E09D75DB2A36;// 0x0950(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ShieldDepleteVFXTimeline__Direction_5A75195F4D9D65C67BC8E09D75DB2A36;// 0x0954(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0955(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ShieldDepleteVFXTimeline;                                 // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ArmorRechargeVFXTimeline_Progress_5FF4782E451BEDD752B451A6E3ECE044;// 0x0960(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ArmorRechargeVFXTimeline__Direction_5FF4782E451BEDD752B451A6E3ECE044;// 0x0964(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0965(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ArmorRechargeVFXTimeline;                                 // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ExplosionClass;                                           // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ULightComponent*>                     SocketLights;                                             // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                SocketLightsColor;                                        // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnSocketLights;                                        // 0x0998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0999(0x0003) MISSED OFFSET
	float                                              SocketLightIntensityBase;                                 // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnHeadlights;                                          // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HeadlightsActive;                                         // 0x09A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x09A2(0x0006) MISSED OFFSET
	TArray<class ABP_PawnHeadlight_C*>                 Headlights;                                               // 0x09A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnMaterials;                                            // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMeshComponent*>                      PawnMeshes;                                               // 0x09C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    ShieldMaterial;                                           // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirDragCoefficient;                                       // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x09E4(0x0004) MISSED OFFSET
	TArray<class UMeshComponent*>                      ArmorVFXMeshes;                                           // 0x09E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    ArmorVFXMaterial;                                         // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnArmorRechargeVFXFinished;                               // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               FadeCloakEffects;                                         // 0x0A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0A11(0x0007) MISSED OFFSET
	TArray<class UMeshComponent*>                      CloakEffectMeshes;                                        // 0x0A18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ConditionEMPKinematicModeHandle;                          // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PawnBase.BP_PawnBase_C");
		return ptr;
	}


	void GetPawnLocalSpaceBounds(struct FBoxSphereBounds* LocalSpaceBounds);
	void AddStaticMeshComponent(class UStaticMesh** StaticMesh, struct FTransform* Transform, class UStaticMeshComponent** Component);
	void AddSkeletalMeshComponent(class USkeletalMesh** SkeletalMesh, struct FTransform* Transform, class USkeletalMeshComponent** Component);
	void CalculateShieldImpactLocation(struct FVector* ShotDirection, struct FVector* ImpactWorldLocation, struct FVector* ImpactWorldNormal);
	void ApplyTurningBoost();
	void CollectPawnMaterials();
	void UserConstructionScript();
	void ShieldImpactVFXTimeline__FinishedFunc();
	void ShieldImpactVFXTimeline__UpdateFunc();
	void ArmorRechargeVFXTimeline__FinishedFunc();
	void ArmorRechargeVFXTimeline__UpdateFunc();
	void ShieldDepleteVFXTimeline__FinishedFunc();
	void ShieldDepleteVFXTimeline__UpdateFunc();
	void ShieldRechargeVFXTimeline__FinishedFunc();
	void ShieldRechargeVFXTimeline__UpdateFunc();
	void CloakFadeTimeline__FinishedFunc();
	void CloakFadeTimeline__UpdateFunc();
	void EffectsBeginPlay();
	void EffectsTick(float* DeltaSeconds);
	void VFX_UpdateSocketLights();
	void VFX_UpdateHeadlights();
	void VFX_ToggleHeadlights(bool* On);
	void VFX_UpdateShield();
	void VFX_ShieldTick();
	void VFX_ShieldImpact(struct FVector* ShotDirection);
	void VFX_ArmorRecharge();
	void BndEvt__Shield_K2Node_ComponentBoundEvent_0_OnShieldDepletedDelegate__DelegateSignature(class AActor** Actor);
	void BndEvt__Shield_K2Node_ComponentBoundEvent_1_OnShieldChargingDelegate__DelegateSignature(class AActor** Actor);
	void CloakFadeEffect(bool* FadeIn);
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount);
	void ReceiveBeginPlay();
	void OnAiJump();
	void InitializePhysics();
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo);
	void ApplyEMP(class AActor** Instigator);
	void RemoveEMP();
	void OnRecveivedAIEvent(TEnumAsByte<EAIEvent>* EventId, class APawn** ControlledPawn);
	void ExecuteUbergraph_BP_PawnBase(int* EntryPoint);
	void OnArmorRechargeVFXFinished__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
