#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ProximityMine_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProximityMine_Base.BP_ProximityMine_Base_C
// 0x00F8 (0x0428 - 0x0330)
class ABP_ProximityMine_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PushPopComponent_C*                      BP_PushPopComponent;                                      // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TriggeredParticles;                                       // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_DistanceCullComponent_C*                 BP_DistanceCullComponent;                                 // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_Portable_Component_C*                    BP_Portable_Component;                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_CollisionDamageComponent_C*              BP_CollisionDamageComponent;                              // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USaveGameComponent*                          SaveGame;                                                 // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFactionComponent*                           Faction;                                                  // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHealthComponent*                            Health;                                                   // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Collision;                                                // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            HitSphere;                                                // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    GlowParticles;                                            // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DamageRadius;                                             // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            TriggerRadius;                                            // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BaseDamage;                                               // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionDelay;                                           // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  TriggerSound;                                             // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MineLifeSpan;                                             // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArmedDelay;                                               // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Armed;                                                    // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    MineDestroyed;                                            // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              Radius;                                                   // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFactions>                             MineFaction;                                              // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	struct FLinearColor                                HostileColor;                                             // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FriendlyColor;                                            // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ArmingTimer;                                              // 0x0408(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDamageEvent                                DamageEvent;                                              // 0x0410(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                TriggerTimer;                                             // 0x0420(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProximityMine_Base.BP_ProximityMine_Base_C");
		return ptr;
	}


	bool OffsiteSimulate(float* TimePassed);
	bool RestoreState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap);
	bool SaveState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap);
	void SetArmed(bool* Armed);
	void ActorArrayContainsEnemy(TArray<class AActor*>* Actors, bool* EnemyFound);
	void UserConstructionScript();
	void BndEvt__TriggerRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void CheckForOverlaps();
	void ReceiveBeginPlay();
	void TriggerMineExplosion();
	void BndEvt__Health_K2Node_ComponentBoundEvent_507_OnHealthDepletedDelegate__DelegateSignature(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount);
	void MinePickedUp(class AActor** TheActor);
	void MineReleased(class AActor** TheActor);
	void ApplyEMP(class AActor** Instigator);
	void RemoveEMP();
	void Explode();
	void ArmDelayed(float* Delay);
	void ArmAfterDelay();
	void ExecuteUbergraph_BP_ProximityMine_Base(int* EntryPoint);
	void MineDestroyed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
