#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_HUD_Ingame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HUD_Ingame.BP_HUD_Ingame_C
// 0x0118 (0x05F0 - 0x04D8)
class ABP_HUD_Ingame_C : public AESHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Ingame_HUD_C*                            IngameHudWidget;                                          // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      LastHitDamageCauser;                                      // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      LastHitEventInstigator;                                   // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HPShieldAccu;                                             // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HPArmorAccu;                                              // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HPHullAccu;                                               // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastHitLocationWorld;                                     // 0x050C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastHitCritical;                                          // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0519(0x0007) MISSED OFFSET
	class AActor*                                      LastVictim;                                               // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UWG_Mission_Feed_C*                          MissionFeedWidget;                                        // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FHUDTaskData>                        DelayedMissionFeedQueue;                                  // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UUserWidget*                                 DialogWidget;                                             // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UInteractComponentWidget*                    InteractWidget;                                           // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TMap<class UClass*, class UInteractComponentWidget*> InteractWidgets;                                          // 0x0550(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TSoftObjectPtr<class UClass>                       DialogWidgetClass;                                        // 0x05A0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UInteractComponent*                          ShownInteractComponent;                                   // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnIngameWidgetCreated;                                    // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UWG_Interact_Pickup_C*                       InteractPickupWidget;                                     // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  SwitchWeaponSound;                                        // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HUD_Ingame.BP_HUD_Ingame_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void AddLogMessage(struct FHUDMessage* MessageInfo);
	void ShowHitpointNumbers(class AActor** Victim, class AActor** DamageCauser, class AActor** EventInstigator, float* HPShield, float* HPArmor, float* HPHull, bool* IsCriticalHit, struct FVector* HitLocationWorld, bool* ShowEverySecond);
	void AccumulationFinished();
	void PlayerChangedPrimaryWeapon(struct FWeaponInfo* WeaponInfo);
	void DrawAimAssist(struct FVector2D* ScreenPos, struct FVector2D* TargetScreenPos, TEnumAsByte<EMarkerRelation>* Relation, bool* bForHoveredTarget, bool* bNewLock);
	void HideAimAssist(bool* bForHoveredTarget);
	void OnPlayerDealtDamage(bool* bShieldDamage);
	void ReinitHUD();
	void ShowMissionTaskUpdate(struct FHUDTaskData* TaskData);
	void OnAbortedMission(struct FName* MissionID);
	void OnLevelUp(int* NewLevel);
	void ReceiveTick(float* DeltaSeconds);
	void OnHideTopLayerChanged(bool* bHide);
	void OnHideMainLayerChanged(bool* bHide);
	void OnShowInteractWidget(class UInteractComponent** InteractComponent, class UClass** WidgetClass, TEnumAsByte<EInteractWidgetDisplayLocation>* DisplayLocation, struct FVector2D* DisplayOffset);
	void OnHideInteractWidget();
	void OnChangeInteractWidgetVisibility(bool* bVisible);
	void OnEnterOrExitDeviceSelection(bool* bEnter);
	void OnEnterOrExitConsumableSelection(bool* bEnter);
	void ShowXPNumbers(class AActor** Victim, float* XP);
	void DrawLockedTargetIndicator(struct FVector2D* ScreenPos, float* RenderAngle, TEnumAsByte<EMarkerRelation>* Relation);
	void HideLockedTargetIndicator();
	void OnSecondaryWeaponChanged(struct FWeaponInfo* WeaponInfo);
	void ExecuteUbergraph_BP_HUD_Ingame(int* EntryPoint);
	void OnIngameWidgetCreated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
