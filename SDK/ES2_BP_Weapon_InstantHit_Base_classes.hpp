#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weapon_InstantHit_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C
// 0x0054 (0x0B14 - 0x0AC0)
class ABP_Weapon_InstantHit_Base_C : public ABP_Weapon_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    BeamParticleSystem;                                       // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_PawnBase_C*                              TargetPawn;                                               // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartPosition;                                            // 0x0AE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EndPosition;                                              // 0x0AEC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EndPositionIncludingShieldOffset;                         // 0x0AF8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B04(0x0004) MISSED OFFSET
	class UParticleSystem*                             SingleHitParticleSystem;                                  // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactScale;                                              // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_InstantHit_Base.BP_Weapon_InstantHit_Base_C");
		return ptr;
	}


	void Firing(struct FVector* StartPosition, struct FVector* EndPosition, class AActor** HitActor);
	void OnSpawnImpact(struct FTransform* SpawnTransform, struct FHitResult* HitInfo, EWeaponImpact* ImpactType, bool* bCriticalHit, struct FVector* ShotDirection, class AActor** InstigatorActor);
	void ReceiveBeginPlay();
	void OnStartFire(struct FVector* StartPosition, struct FVector* EndPosition);
	void OnWeaponInitFromItem_Event_1();
	void ExecuteUbergraph_BP_Weapon_InstantHit_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
