#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Weapon_BeamLaser_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapon_BeamLaser.BP_Weapon_BeamLaser_C
// 0x005C (0x0B70 - 0x0B14)
class ABP_Weapon_BeamLaser_C : public ABP_Weapon_InstantHit_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B14(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B18(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ImpactShield;                                             // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ImpactHull;                                               // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LightDistance;                                            // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ImpactShieldHit;                                          // 0x0B34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0B35(0x000B) MISSED OFFSET
	struct FTransform                                  ImpactTransform;                                          // 0x0B40(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_BeamLaser.BP_Weapon_BeamLaser_C");
		return ptr;
	}


	void OnStopFire();
	void OnSpawnImpact(struct FTransform* SpawnTransform, struct FHitResult* HitInfo, EWeaponImpact* ImpactType, bool* bCriticalHit, struct FVector* ShotDirection, class AActor** InstigatorActor);
	void OnStartFire(struct FVector* StartPosition, struct FVector* EndPosition);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Weapon_BeamLaser(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
