#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Ingame_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnPaint
struct UWG_Ingame_HUD_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_ChooseDeviceIcon_Visibility_1
struct UWG_Ingame_HUD_C_Get_ChooseDeviceIcon_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_UseDeviceActionButton_Visibility_1
struct UWG_Ingame_HUD_C_Get_UseDeviceActionButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_ArmorBar_Percent_1
struct UWG_Ingame_HUD_C_Get_ArmorBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_TxtDebugSpeed_Text_1
struct UWG_Ingame_HUD_C_Get_TxtDebugSpeed_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_TxtDebugSpeed_Visibility_1
struct UWG_Ingame_HUD_C_Get_TxtDebugSpeed_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.HideWarning
struct UWG_Ingame_HUD_C_HideWarning_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ShowWarning
struct UWG_Ingame_HUD_C_ShowWarning_Params
{
	struct FText*                                      WarningText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_Text_Health_Text_1
struct UWG_Ingame_HUD_C_Get_Text_Health_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_Text_Energy_Text_1
struct UWG_Ingame_HUD_C_Get_Text_Energy_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_Text_Energy_ColorAndOpacity_1
struct UWG_Ingame_HUD_C_Get_Text_Energy_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_TextShield_Text_1
struct UWG_Ingame_HUD_C_Get_TextShield_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_EnergyBar_Percent_1
struct UWG_Ingame_HUD_C_Get_EnergyBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_HealthBar_Percent_1
struct UWG_Ingame_HUD_C_Get_HealthBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Get_ShieldBar_Percent_1
struct UWG_Ingame_HUD_C_Get_ShieldBar_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Construct
struct UWG_Ingame_HUD_C_Construct_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.Tick
struct UWG_Ingame_HUD_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.AddLogMessage
struct UWG_Ingame_HUD_C_AddLogMessage_Params
{
	struct FHUDMessage*                                MessageInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.SetCrosshairTexture
struct UWG_Ingame_HUD_C_SetCrosshairTexture_Params
{
	struct FName*                                      WeaponCategory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.PreConstruct
struct UWG_Ingame_HUD_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.HideAimAssist
struct UWG_Ingame_HUD_C_HideAimAssist_Params
{
	bool*                                              ForHoverdTarget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.DrawAimAssist
struct UWG_Ingame_HUD_C_DrawAimAssist_Params
{
	struct FVector2D*                                  ScreenPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  TargetScreenPosition;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMarkerRelation>*                      Relation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForHoveredTarget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              NewLock;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ShowHitIndicator
struct UWG_Ingame_HUD_C_ShowHitIndicator_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.DebugShowMusicInfo
struct UWG_Ingame_HUD_C_DebugShowMusicInfo_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.DebugHideMusicInfo
struct UWG_Ingame_HUD_C_DebugHideMusicInfo_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ReInit
struct UWG_Ingame_HUD_C_ReInit_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.SequenceFinished
struct UWG_Ingame_HUD_C_SequenceFinished_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.SuppressorAdded
struct UWG_Ingame_HUD_C_SuppressorAdded_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.AllSuppressorsDestroyed
struct UWG_Ingame_HUD_C_AllSuppressorsDestroyed_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.SequenceStarted
struct UWG_Ingame_HUD_C_SequenceStarted_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ChangeHUDVisibility
struct UWG_Ingame_HUD_C_ChangeHUDVisibility_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.AddHitpointsToHUDElements
struct UWG_Ingame_HUD_C_AddHitpointsToHUDElements_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ApplyGamepadOrMouseLayout
struct UWG_Ingame_HUD_C_ApplyGamepadOrMouseLayout_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.WeaponsReadyChanged
struct UWG_Ingame_HUD_C_WeaponsReadyChanged_Params
{
	bool*                                              Ready;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ToggleTestLayerVisibility
struct UWG_Ingame_HUD_C_ToggleTestLayerVisibility_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnPauseModeChanged
struct UWG_Ingame_HUD_C_OnPauseModeChanged_Params
{
	bool*                                              bPaused;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.PlayerUsedDevice
struct UWG_Ingame_HUD_C_PlayerUsedDevice_Params
{
	class ADeviceBase**                                Device;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.EnterOrExitDeviceSelection
struct UWG_Ingame_HUD_C_EnterOrExitDeviceSelection_Params
{
	bool*                                              bEnter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.EnterOrExitConsumableSelection
struct UWG_Ingame_HUD_C_EnterOrExitConsumableSelection_Params
{
	bool*                                              bEnter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.GamepadModeChanged
struct UWG_Ingame_HUD_C_GamepadModeChanged_Params
{
	bool*                                              bNewGamepadMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.PlayerCanceledDeviceUsage
struct UWG_Ingame_HUD_C_PlayerCanceledDeviceUsage_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.PlayerCanceledConsumableUsage
struct UWG_Ingame_HUD_C_PlayerCanceledConsumableUsage_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ShowDeviceWheel
struct UWG_Ingame_HUD_C_ShowDeviceWheel_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.CruiseModeCanBeUsed
struct UWG_Ingame_HUD_C_CruiseModeCanBeUsed_Params
{
	bool*                                              bCanBeUsed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ShowLevelUp
struct UWG_Ingame_HUD_C_ShowLevelUp_Params
{
	int*                                               NewLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.CustomEvent
struct UWG_Ingame_HUD_C_CustomEvent_Params
{
	bool*                                              bCanBeUsed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.DrawLockedTargetArrow
struct UWG_Ingame_HUD_C_DrawLockedTargetArrow_Params
{
	struct FVector2D*                                  ScreenPos;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RenderAngle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMarkerRelation>*                      Relation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.HideLockedTargetArrow
struct UWG_Ingame_HUD_C_HideLockedTargetArrow_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnCruiseModeChargeStart
struct UWG_Ingame_HUD_C_OnCruiseModeChargeStart_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnCruiseModeCanBeUsedChange
struct UWG_Ingame_HUD_C_OnCruiseModeCanBeUsedChange_Params
{
	bool*                                              bCanBeUsed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnCruiseModeReady
struct UWG_Ingame_HUD_C_OnCruiseModeReady_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnCruiseModeChargeEnd
struct UWG_Ingame_HUD_C_OnCruiseModeChargeEnd_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnJumpChargeStarted
struct UWG_Ingame_HUD_C_OnJumpChargeStarted_Params
{
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnJumpChargeAborted
struct UWG_Ingame_HUD_C_OnJumpChargeAborted_Params
{
	TEnumAsByte<EJumpAbortType>*                       AbortedType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.OnJumpDriveCanBeUsedChange
struct UWG_Ingame_HUD_C_OnJumpDriveCanBeUsedChange_Params
{
	bool*                                              bCanBeUsed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.PlayerStartedUsingConsumable
struct UWG_Ingame_HUD_C_PlayerStartedUsingConsumable_Params
{
	class UItem**                                      ConsumableItem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AConsumableBase**                            DefaultConsumable;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Ingame_HUD.WG_Ingame_HUD_C.ExecuteUbergraph_WG_Ingame_HUD
struct UWG_Ingame_HUD_C_ExecuteUbergraph_WG_Ingame_HUD_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
