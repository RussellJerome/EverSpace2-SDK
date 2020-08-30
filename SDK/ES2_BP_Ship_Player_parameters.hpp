#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Ship_Player_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Ship_Player.BP_Ship_Player_C.IGetCameraView
struct ABP_Ship_Player_C_IGetCameraView_Params
{
	TEnumAsByte<EPlayerShip_CameraViews>               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.SetDeathCam
struct ABP_Ship_Player_C_SetDeathCam_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.TickItemEffects
struct ABP_Ship_Player_C_TickItemEffects_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.SetFreeLookRotation
struct ABP_Ship_Player_C_SetFreeLookRotation_Params
{
	class USceneComponent**                            Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             PitchInput;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YawInput;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RollInput;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.SetCameraActive
struct ABP_Ship_Player_C_SetCameraActive_Params
{
	class UCameraComponent**                           Camera;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.CameraRotationLag
struct ABP_Ship_Player_C_CameraRotationLag_Params
{
	class USceneComponent**                            Pivot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent**                            ReferenceComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.UserConstructionScript
struct ABP_Ship_Player_C_UserConstructionScript_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.JumpInVFXTimeline__FinishedFunc
struct ABP_Ship_Player_C_JumpInVFXTimeline__FinishedFunc_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.JumpInVFXTimeline__UpdateFunc
struct ABP_Ship_Player_C_JumpInVFXTimeline__UpdateFunc_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.JumpAwayTimeline__FinishedFunc
struct ABP_Ship_Player_C_JumpAwayTimeline__FinishedFunc_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.JumpAwayTimeline__UpdateFunc
struct ABP_Ship_Player_C_JumpAwayTimeline__UpdateFunc_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.JumpAwayTimeline__ScreenFade__EventFunc
struct ABP_Ship_Player_C_JumpAwayTimeline__ScreenFade__EventFunc_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.ISetCameraVFXFOVOffset
struct ABP_Ship_Player_C_ISetCameraVFXFOVOffset_Params
{
	float*                                             Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.DamageIndicator_BeginPlay
struct ABP_Ship_Player_C_DamageIndicator_BeginPlay_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.DamageIndicator_Tick
struct ABP_Ship_Player_C_DamageIndicator_Tick_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.ShieldDamageIndicator
struct ABP_Ship_Player_C_ShieldDamageIndicator_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HitpointDelta;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.ArmorDamageIndicator
struct ABP_Ship_Player_C_ArmorDamageIndicator_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HitpointDelta;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.HullDamageIndicator
struct ABP_Ship_Player_C_HullDamageIndicator_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HitpointDelta;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.ShowDamageIndicator
struct ABP_Ship_Player_C_ShowDamageIndicator_Params
{
	class UMaterialInstanceDynamic**                   Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DamageDirection;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.JumpDriveVFXBeginPlay
struct ABP_Ship_Player_C_JumpDriveVFXBeginPlay_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.JumpDriveVFXTick
struct ABP_Ship_Player_C_JumpDriveVFXTick_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.JumpChargeStarted
struct ABP_Ship_Player_C_JumpChargeStarted_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.JumpChargeTicked
struct ABP_Ship_Player_C_JumpChargeTicked_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EJumpAbortType>*                       AbortedType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.JumpChargeCompleted
struct ABP_Ship_Player_C_JumpChargeCompleted_Params
{
	TEnumAsByte<EJumpMethod>*                          JumpMethod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.JumpChargeAborted
struct ABP_Ship_Player_C_JumpChargeAborted_Params
{
	TEnumAsByte<EJumpAbortType>*                       AbortedType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.FadeJumpChargeVFX
struct ABP_Ship_Player_C_FadeJumpChargeVFX_Params
{
	float*                                             Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.JumpInVFX
struct ABP_Ship_Player_C_JumpInVFX_Params
{
	bool*                                              TranslateShip;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.JumpAwayVFX
struct ABP_Ship_Player_C_JumpAwayVFX_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.JumpDriveVFX_CruiseModeStart
struct ABP_Ship_Player_C_JumpDriveVFX_CruiseModeStart_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.JumpDriveVFX_CruisModeEnd
struct ABP_Ship_Player_C_JumpDriveVFX_CruisModeEnd_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.ToggleCruiseModeVFX
struct ABP_Ship_Player_C_ToggleCruiseModeVFX_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.BndEvt__JumpDrive_K2Node_ComponentBoundEvent_1_EventCruiseModeStart__DelegateSignature
struct ABP_Ship_Player_C_BndEvt__JumpDrive_K2Node_ComponentBoundEvent_1_EventCruiseModeStart__DelegateSignature_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.BndEvt__JumpDrive_K2Node_ComponentBoundEvent_2_EventCruiseModeEnd__DelegateSignature
struct ABP_Ship_Player_C_BndEvt__JumpDrive_K2Node_ComponentBoundEvent_2_EventCruiseModeEnd__DelegateSignature_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.BndEvt__JumpDrive_K2Node_ComponentBoundEvent_0_EventCruiseModeCharge__DelegateSignature
struct ABP_Ship_Player_C_BndEvt__JumpDrive_K2Node_ComponentBoundEvent_0_EventCruiseModeCharge__DelegateSignature_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.BndEvt__JumpDrive_K2Node_ComponentBoundEvent_1_EventCruiseModeChargeEnd__DelegateSignature
struct ABP_Ship_Player_C_BndEvt__JumpDrive_K2Node_ComponentBoundEvent_1_EventCruiseModeChargeEnd__DelegateSignature_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.UpdateCameraRotationLag
struct ABP_Ship_Player_C_UpdateCameraRotationLag_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.CameraDynamicsTick
struct ABP_Ship_Player_C_CameraDynamicsTick_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.CameraDynamicsBeginPlay
struct ABP_Ship_Player_C_CameraDynamicsBeginPlay_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.UpdateBoostCameraBehavior
struct ABP_Ship_Player_C_UpdateBoostCameraBehavior_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.UpdateFreeLook
struct ABP_Ship_Player_C_UpdateFreeLook_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.UpdateCameraAccelerationShake
struct ABP_Ship_Player_C_UpdateCameraAccelerationShake_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.UpdateFOV
struct ABP_Ship_Player_C_UpdateFOV_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.SetFOV
struct ABP_Ship_Player_C_SetFOV_Params
{
	float*                                             NewFOV;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.OnBoostStart
struct ABP_Ship_Player_C_OnBoostStart_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.OnBoostStop
struct ABP_Ship_Player_C_OnBoostStop_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.SetFirstPersonBanking
struct ABP_Ship_Player_C_SetFirstPersonBanking_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.SpawnedWeaponsWereChanged
struct ABP_Ship_Player_C_SpawnedWeaponsWereChanged_Params
{
	class UWeaponComponent**                           WeaponComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.UpdateSpringArmPosition
struct ABP_Ship_Player_C_UpdateSpringArmPosition_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.ISetCameraView
struct ABP_Ship_Player_C_ISetCameraView_Params
{
	TEnumAsByte<EPlayerShip_CameraViews>*              CameraView;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.ISetFreelookEnabled
struct ABP_Ship_Player_C_ISetFreelookEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.ICycleCameraView
struct ABP_Ship_Player_C_ICycleCameraView_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.TriggerDeathCam
struct ABP_Ship_Player_C_TriggerDeathCam_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.ApplyVertigoEffect
struct ABP_Ship_Player_C_ApplyVertigoEffect_Params
{
	float*                                             FOVOffset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.ReceiveTick
struct ABP_Ship_Player_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.ReceiveBeginPlay
struct ABP_Ship_Player_C_ReceiveBeginPlay_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.ApplyAutoRollSettings
struct ABP_Ship_Player_C_ApplyAutoRollSettings_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.GamepadModeChanged
struct ABP_Ship_Player_C_GamepadModeChanged_Params
{
	bool*                                              bNewGamepadMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Ship_Player.BP_Ship_Player_C.UpdateShip
struct ABP_Ship_Player_C_UpdateShip_Params
{
};

// Function BP_Ship_Player.BP_Ship_Player_C.ExecuteUbergraph_BP_Ship_Player
struct ABP_Ship_Player_C_ExecuteUbergraph_BP_Ship_Player_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
