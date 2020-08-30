#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Projectile_Missile_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C
// 0x003C (0x0AB0 - 0x0A74)
class ABP_Projectile_Missile_Base_C : public ABP_Projectile_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A74(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A78(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        BP_LensFlare;                                             // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             WarningSound;                                             // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ShowWarningsDelay;                                        // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TargetingPlayer;                                          // 0x0AA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AA5(0x0003) MISSED OFFSET
	float                                              WarningTime;                                              // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WarningSoundInterval;                                     // 0x0AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Missile_Base.BP_Projectile_Missile_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnMissileMissed();
	void DestroyHUDMarkerComponent();
	void OnProjectileDestroyed(bool* bLifeTimeExpired);
	void ReceiveTick(float* DeltaSeconds);
	void CalcSoundIntervalAndSetPitch();
	void OnBecomeActive();
	void CheckForWarning();
	void OnBecomeInactive();
	void OnSpawnImpact(struct FTransform* SpawnTransform, struct FHitResult* HitInfo, EWeaponImpact* ImpactType, bool* bCriticalHit, struct FVector* ShotDirection, class AActor** InstigatorActor);
	void ExecuteUbergraph_BP_Projectile_Missile_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
