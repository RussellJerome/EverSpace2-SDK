#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MissionTask_InteractWithActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C
// 0x00C0 (0x0530 - 0x0470)
class ABP_MissionTask_InteractWithActor_C : public ABP_MissionTaskBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       AttributeNumActorsToInteractWith;                         // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttributeNumActorsInteractedWith;                         // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowTargetInHud;                                          // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0489(0x0007) MISSED OFFSET
	class UHUDMarkerComponent*                         HUDMarker;                                                // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       AttributeNameCustomTextAtLocation;                        // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       CustomObjectiveTextAtLocation;                            // 0x04A0(0x0028) (Edit, BlueprintVisible)
	struct FName                                       AttributeNameCustomTextNotAtLocation;                     // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       CustomObjectiveTextNotAtLocation;                         // 0x04C0(0x0028) (Edit, BlueprintVisible)
	bool                                               ShowProgress;                                             // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TurnOffInteract;                                          // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x04DA(0x0006) MISSED OFFSET
	TArray<TSoftObjectPtr<class AActor>>               ActorsToInteractWith_SOFT;                                // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              ActorsToInteractWith;                                     // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	int                                                NumActorsInteractedWith;                                  // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumActorsToInteractWith;                                  // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnInteractWithTaskTarget;                                 // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class USoundBase*                                  InteractSound;                                            // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  InteractHoldStartSound;                                   // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             InteractHoldStartSoundComp;                               // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MissionTask_InteractWithActor.BP_MissionTask_InteractWithActor_C");
		return ptr;
	}


	struct FObjectiveDescription GetObjectiveDescription(struct FTaskSaveGameData* SavedTaskData);
	void ReceiveBeginPlay();
	void OnEnteredStage(int* NewStage);
	void InteractedWithTarget(class UInteractComponent** InteractComponent, class AActor** Actor);
	void HoldStarted(class UInteractComponent** InteractComponent, class AActor** Actor);
	void HoldAborted(class UInteractComponent** InteractComponent, class AActor** Actor);
	void ExecuteUbergraph_BP_MissionTask_InteractWithActor(int* EntryPoint);
	void OnInteractWithTaskTarget__DelegateSignature(int* Progress, class AActor** Actor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
