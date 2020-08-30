#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_HUD_Ingame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.ReceiveBeginPlay
struct ABP_HUD_Ingame_C_ReceiveBeginPlay_Params
{
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.AddLogMessage
struct ABP_HUD_Ingame_C_AddLogMessage_Params
{
	struct FHUDMessage*                                MessageInfo;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.ShowHitpointNumbers
struct ABP_HUD_Ingame_C_ShowHitpointNumbers_Params
{
	class AActor**                                     Victim;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HPShield;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HPArmor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HPHull;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsCriticalHit;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocationWorld;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowEverySecond;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.AccumulationFinished
struct ABP_HUD_Ingame_C_AccumulationFinished_Params
{
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.PlayerChangedPrimaryWeapon
struct ABP_HUD_Ingame_C_PlayerChangedPrimaryWeapon_Params
{
	struct FWeaponInfo*                                WeaponInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.DrawAimAssist
struct ABP_HUD_Ingame_C_DrawAimAssist_Params
{
	struct FVector2D*                                  ScreenPos;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  TargetScreenPos;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMarkerRelation>*                      Relation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForHoveredTarget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bNewLock;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.HideAimAssist
struct ABP_HUD_Ingame_C_HideAimAssist_Params
{
	bool*                                              bForHoveredTarget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnPlayerDealtDamage
struct ABP_HUD_Ingame_C_OnPlayerDealtDamage_Params
{
	bool*                                              bShieldDamage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.ReinitHUD
struct ABP_HUD_Ingame_C_ReinitHUD_Params
{
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.ShowMissionTaskUpdate
struct ABP_HUD_Ingame_C_ShowMissionTaskUpdate_Params
{
	struct FHUDTaskData*                               TaskData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnAbortedMission
struct ABP_HUD_Ingame_C_OnAbortedMission_Params
{
	struct FName*                                      MissionID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnLevelUp
struct ABP_HUD_Ingame_C_OnLevelUp_Params
{
	int*                                               NewLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.ReceiveTick
struct ABP_HUD_Ingame_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnHideTopLayerChanged
struct ABP_HUD_Ingame_C_OnHideTopLayerChanged_Params
{
	bool*                                              bHide;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnHideMainLayerChanged
struct ABP_HUD_Ingame_C_OnHideMainLayerChanged_Params
{
	bool*                                              bHide;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnShowInteractWidget
struct ABP_HUD_Ingame_C_OnShowInteractWidget_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass**                                     WidgetClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractWidgetDisplayLocation>*       DisplayLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  DisplayOffset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnHideInteractWidget
struct ABP_HUD_Ingame_C_OnHideInteractWidget_Params
{
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnChangeInteractWidgetVisibility
struct ABP_HUD_Ingame_C_OnChangeInteractWidgetVisibility_Params
{
	bool*                                              bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnEnterOrExitDeviceSelection
struct ABP_HUD_Ingame_C_OnEnterOrExitDeviceSelection_Params
{
	bool*                                              bEnter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnEnterOrExitConsumableSelection
struct ABP_HUD_Ingame_C_OnEnterOrExitConsumableSelection_Params
{
	bool*                                              bEnter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.ShowXPNumbers
struct ABP_HUD_Ingame_C_ShowXPNumbers_Params
{
	class AActor**                                     Victim;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.DrawLockedTargetIndicator
struct ABP_HUD_Ingame_C_DrawLockedTargetIndicator_Params
{
	struct FVector2D*                                  ScreenPos;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RenderAngle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMarkerRelation>*                      Relation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.HideLockedTargetIndicator
struct ABP_HUD_Ingame_C_HideLockedTargetIndicator_Params
{
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnSecondaryWeaponChanged
struct ABP_HUD_Ingame_C_OnSecondaryWeaponChanged_Params
{
	struct FWeaponInfo*                                WeaponInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.ExecuteUbergraph_BP_HUD_Ingame
struct ABP_HUD_Ingame_C_ExecuteUbergraph_BP_HUD_Ingame_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HUD_Ingame.BP_HUD_Ingame_C.OnIngameWidgetCreated__DelegateSignature
struct ABP_HUD_Ingame_C_OnIngameWidgetCreated__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
