#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ConditionEffect_OutgoingDamageIncrease_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C
// 0x0047 (0x03C8 - 0x0381)
class ABP_ConditionEffect_OutgoingDamageIncrease_C : public ABP_ConditionEffect_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMeshComponent*>                      WeaponShellMeshes;                                        // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    WeaponShellMaterial;                                      // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            Particles;                                                // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMeshComponent*>                      WeaponMeshes;                                             // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C");
		return ptr;
	}


	void AddStaticMeshComponent(class UStaticMesh** StaticMesh, struct FTransform* Transform, class UStaticMeshComponent** Component);
	void AddSkeletalMeshComponent(class USkeletalMesh** SkeletalMesh, struct FTransform* Transform, class USkeletalMeshComponent** Component);
	void ReceiveBeginPlay();
	void Update();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void WeaponChangedCallback(struct FWeaponInfo* WeaponInfo);
	void ShipUpdatedCallback();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_ConditionEffect_OutgoingDamageIncrease(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
