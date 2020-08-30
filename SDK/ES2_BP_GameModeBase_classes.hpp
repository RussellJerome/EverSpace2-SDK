#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_GameModeBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameModeBase.BP_GameModeBase_C
// 0x0059 (0x04E1 - 0x0488)
class ABP_GameModeBase_C : public AESGameModeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        ChildActorPilotAudioManager;                              // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RendererNearClipPlane;                                    // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	TArray<struct FName>                               GamescomTutorialTokens;                                   // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                GamescomTutorialIndex;                                    // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	struct FTimerHandle                                TutorialTimer;                                            // 0x04B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EPlayerShip_CameraViews>               CameraViewOnPlayerDeath;                                  // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	class UWG_Tutorial_Message_C*                      CurrentTutorialWidget;                                    // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class APawn*                                       PlayerPawnBeforeDeath;                                    // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       GameOverPawn;                                             // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPlayerShip_CameraViews>               CameraViewOnSequenceStarted;                              // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameModeBase.BP_GameModeBase_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void TriggerFadeIn(struct FLinearColor* Color, float* Duration);
	void TriggerFadeOut(struct FLinearColor* Color, float* Duration);
	void CheckForTutorialMessages();
	void ClosedEvent(class UWG_Tutorial_Message_C** TutorialMessage);
	void OnPlayerHealthDepleted(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount);
	void HandlePlayerRevive();
	void ReviveRequest();
	void LoadCheckpointRequest();
	void LoadMainMenuRequest();
	void OnPlayerDockedToStation_Event_1(class AActor** DockableStationActor);
	void OnPlayerLeftStation_Event_1(class AActor** DockableStationActor);
	void ShowHowToJumpMessage();
	void JumpDriveMessageShown(class UWG_Tutorial_Message_C** TutorialMessage);
	void OnLeftLocationBounds();
	void FadedOut(class UWG_Fullscreen_Fade_C** Widget);
	void OnSkippableSequenceStarted();
	void OnSkippableSequenceFinished();
	void ExecuteUbergraph_BP_GameModeBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
