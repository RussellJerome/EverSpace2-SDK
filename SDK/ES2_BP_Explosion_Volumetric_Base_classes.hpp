#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Explosion_Volumetric_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C
// 0x0078 (0x03A8 - 0x0330)
class ABP_Explosion_Volumetric_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoundsSphereVolume;                                       // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SubExplosionDelayMax;                                     // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DurationLeft;                                             // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ColorMin;                                                 // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorMax;                                                 // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorBias;                                                // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    FinalExplosion;                                           // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                FinalExplosionCount;                                      // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     InitialExplosionLocation;                                 // 0x038C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMeshComponent*>                      OwnerMeshes;                                              // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C");
		return ptr;
	}


	void GetSubExplosionLocation(struct FVector* Location, struct FVector* Normal, bool* Success);
	void SubExplosion(struct FVector* Location, struct FVector* Normal);
	void ReceiveBeginPlay();
	void SpawnSubExplosion();
	void SpawnFinalExplosion();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_Explosion_Volumetric_Base(int* EntryPoint);
	void FinalExplosion__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
