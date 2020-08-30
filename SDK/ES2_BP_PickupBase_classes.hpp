#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PickupBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PickupBase.BP_PickupBase_C
// 0x0060 (0x0498 - 0x0438)
class ABP_PickupBase_C : public APickupBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_TractorBeam;                                            // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Pickup_Glow;                                            // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_DistanceCullComponent_C*                 BP_DistanceCullComponent;                                 // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_HighlightComponent_C*                    BP_HighlightComponent;                                    // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsBeingPulled;                                            // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableGlowEffect;                                         // 0x0461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0462(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    TractorBeamParticles;                                     // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FBoxSphereBounds                            PullingActorBounds;                                       // 0x0470(0x001C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	class AActor*                                      PullingActor;                                             // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PickupBase.BP_PickupBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void PickedUp(class APickupBase** PickupBaseActor, int* Amount, bool* bPickedUpEntirely);
	void ReceiveBeginPlay();
	void InitTractorBeam(class APickupBase** PickupBaseActor, class AActor** ActorThatPulls);
	void UpdateTractorBeam(class APickupBase** PickupBaseActor, class AActor** ActorThatPulls, float* DeltaTime);
	void UpdateTractorBeamParticles();
	void DisableTractorBeam(class APickupBase** PickupBaseActor, class AActor** ActorThatPulls);
	void InitGlowEffect();
	void OnInteracted(class UInteractComponent** InteractComponent, class AActor** Actor);
	void ExecuteUbergraph_BP_PickupBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
