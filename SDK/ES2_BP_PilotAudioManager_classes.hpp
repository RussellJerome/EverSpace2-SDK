#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PilotAudioManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PilotAudioManager.BP_PilotAudioManager_C
// 0x00CC (0x03FC - 0x0330)
class ABP_PilotAudioManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                TimerHandleReOpenGate;                                    // 0x0340(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                TimerHandleRefreshAudiblePilots;                          // 0x0348(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              AudiblePilots;                                            // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class APawn*                                       PlayerPawn;                                               // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerHearingRange;                                       // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CommunicationRange;                                       // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RefreshAudiblePilotsTime;                                 // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayNextDelayMin;                                         // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayNextDelayMax;                                         // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	TSoftObjectPtr<class USoundCue>                    SoundSoftObjectRef;                                       // 0x0380(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<TEnumAsByte<EAIEvent>, float>                 PlayProbabilities;                                        // 0x03A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              PlayDeathSoundProbability;                                // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PilotAudioManager.BP_PilotAudioManager_C");
		return ptr;
	}


	bool HasFriendWithinRange(class AActor** Actor, TArray<class AActor*>* AllOtherActors);
	void OnLoaded_C56595344E8A525161631BAC2E7FF39D(class UObject** Loaded);
	void ReceiveBeginPlay();
	void RefreshAudiblePilots();
	void PlayPilotDialogue(class AESPawn** Pawn, TEnumAsByte<EAIEvent>* AIEvent, bool* bDeathSound);
	void RefreshAudiblePilotsAndOpenGate();
	void IPlayPilotDialogue(class AESPawn** Pawn, TEnumAsByte<EAIEvent>* AIEvent, bool* bDeathSound);
	void ExecuteUbergraph_BP_PilotAudioManager(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
