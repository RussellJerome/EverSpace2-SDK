#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ShipBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipBase.BP_ShipBase_C
// 0x01D0 (0x0BFC - 0x0A2C)
class ABP_ShipBase_C : public ABP_PawnBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A2C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             BoostSound;                                               // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             EngineSound;                                              // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  EngineEffectBaseMaterials;                                // 0x0A48(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FTransform>                          EngineSockets;                                            // 0x0A58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            EngineParticles;                                          // 0x0A68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTransform>                          BoosterSockets;                                           // 0x0A78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            BoosterParticles;                                         // 0x0A88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                EngineColor;                                              // 0x0A98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BoosterColor;                                             // 0x0AA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EngineVFXEnabled;                                         // 0x0AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AB9(0x0003) MISSED OFFSET
	int                                                ExplosionTrailsMin;                                       // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionTrailsMax;                                       // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EngineVFXOpacityExponent;                                 // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0ACC(0x0004) MISSED OFFSET
	class USoundBase*                                  EngineSoundCue;                                           // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  BoostSoundCue;                                            // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EngineTrails;                                             // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0AE1(0x0003) MISSED OFFSET
	float                                              TailspinProbability;                                      // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TailspinDurationMin;                                      // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TailspinDurationMax;                                      // 0x0AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VisualDamage;                                             // 0x0AF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TailspinWhenExploding;                                    // 0x0AF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0AF2(0x0006) MISSED OFFSET
	struct FDataTableRowHandle                         DebugViewColorSet;                                        // 0x0AF8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BoostVolumeMultiplier;                                    // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrungeAmount;                                             // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      UniqueTexturesPath;                                       // 0x0B10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      UniqueTexturesSuffix;                                     // 0x0B20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               LoadUniqueTextures;                                       // 0x0B30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MassiveExplosion;                                         // 0x0B31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0B32(0x0002) MISSED OFFSET
	struct FVector                                     MassiveExplosionSwerve;                                   // 0x0B34(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Exploding;                                                // 0x0B40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0B41(0x0003) MISSED OFFSET
	struct FVector                                     LastImpactLocation;                                       // 0x0B44(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_Explosion_Base_C*                        ExplosionActor;                                           // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ApplyBoostAndEngineVolumeMultiplier;                      // 0x0B58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0B59(0x0007) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            EngineVFXMaterials;                                       // 0x0B60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              BankingStiffness;                                         // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxBankingAngleYawFactor;                                 // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxBankingAngleStrafe;                                    // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BankingFactorGlobal;                                      // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EngineVFXEnabledStack;                                    // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0B84(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnShipUpdated;                                            // 0x0B88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector                                     EngineVFXThrustAmount;                                    // 0x0B98(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EngineVFXBoostAmount;                                     // 0x0BA4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                KineamticModeHandle;                                      // 0x0BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0BB4(0x0004) MISSED OFFSET
	class ABP_FireSmoke_C*                             FireSmokeRef;                                             // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionInheritVelocityScale;                            // 0x0BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0BC4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDestroyAfterExplosion;                                  // 0x0BC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector                                     LastForwardVector;                                        // 0x0BD8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SteeringOffset;                                           // 0x0BE4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   EngineVFXOpacity;                                         // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EngineVFXTrailOpacity;                                    // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipBase.BP_ShipBase_C");
		return ptr;
	}


	void GetMeshAssetName(class UMeshComponent** MeshComponent, struct FName* Name);
	void ResetModuleMaterials();
	void InitializeEngineVFX();
	void UpdateMaterials();
	void UpdateShip();
	void UserConstructionScript();
	void Explode();
	void DestructionVFX_BeginPlay();
	void UpdateSurfaceDamage(class AActor** Actor, float* HitpointDelta, struct FVector* HitDirection);
	void FinalExplosion();
	void DestroyAfterExploding();
	void DestructionVFXTick();
	void ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo);
	void SpawnExplosion();
	void Revive();
	void EngineVFX_Tick();
	void EngineVFX_BeginPlay();
	void UpdateEngineVFX();
	void OnBoostStart();
	void OnBoostStop();
	void SetEngineVFXEnabled(bool* Enabled);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount);
	void HealthDepleted();
	void ApplyEMP(class AActor** Instigator);
	void RemoveEMP();
	void OnReinitShipColors();
	void ExecuteUbergraph_BP_ShipBase(int* EntryPoint);
	void OnDestroyAfterExplosion__DelegateSignature();
	void OnShipUpdated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
