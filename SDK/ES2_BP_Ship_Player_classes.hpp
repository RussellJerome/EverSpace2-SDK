#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Ship_Player_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Ship_Player.BP_Ship_Player_C
// 0x0240 (0x0E3C - 0x0BFC)
class ABP_Ship_Player_C : public ABP_ShipBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BFC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C00(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            CameraFPNoCockpit;                                        // 0x0C08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_ChargeSoundComponent_C*                  BP_ChargeSoundComponent;                                  // 0x0C10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CruiseModeFrictionSphere;                                 // 0x0C18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessDamageIndicator;                               // 0x0C20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_MiningBeamComponent_C*                   BP_MiningBeamComponent;                                   // 0x0C28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessSuppressMotionBlur;                            // 0x0C30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WarpTunnelSphere;                                         // 0x0C38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessJumpCharge;                                    // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessJumpInit;                                      // 0x0C48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArmFreeLook;                                        // 0x0C50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            CameraTPFar;                                              // 0x0C58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArmTPFar;                                           // 0x0C60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USensorComponent*                            sensor;                                                   // 0x0C68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CameraTPFreeLookPivot;                                    // 0x0C70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            CameraFreeLook;                                           // 0x0C78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CameraTPRotationPivot;                                    // 0x0C80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CameraFPRotationPivot;                                    // 0x0C88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            CameraFP;                                                 // 0x0C90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArmTPClose;                                         // 0x0C98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULootCollectComponent*                       LootCollect;                                              // 0x0CA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            CameraTPClose;                                            // 0x0CA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              JumpAwayTimeline_SpeedBoost_CBF9F92746945B52C9C81C9168218FF3;// 0x0CB0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              JumpAwayTimeline_VFXAlpha_CBF9F92746945B52C9C81C9168218FF3;// 0x0CB4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    JumpAwayTimeline__Direction_CBF9F92746945B52C9C81C9168218FF3;// 0x0CB8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0CB9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          JumpAwayTimeline;                                         // 0x0CC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              JumpInVFXTimeline_Alpha_B7AB5C5F4E548EA48BDD01BE7496FA8C; // 0x0CC8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    JumpInVFXTimeline__Direction_B7AB5C5F4E548EA48BDD01BE7496FA8C;// 0x0CCC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0CCD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          JumpInVFXTimeline;                                        // 0x0CD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CameraFreeLookEnabled;                                    // 0x0CD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0CD9(0x0003) MISSED OFFSET
	float                                              CameraBaseFOV;                                            // 0x0CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraBoostFOVOffsetCurrent;                              // 0x0CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraBoostFOVOffset;                                     // 0x0CE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraCollisionShakeEnergyDivisor;                        // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraTPRotationLagStiffness;                             // 0x0CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraTPRotationLagPivotXOffset;                          // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraFPLocationLagMax;                                   // 0x0CF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraFPLocationLagMin;                                   // 0x0D00(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraFPLocationLagAmount;                                // 0x0D0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraFPRotationPredictionAmount;                         // 0x0D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraFPBankingSpeed;                                     // 0x0D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAngularVelocityFactor;                                 // 0x0D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CameraPlayBoostShake;                                     // 0x0D1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0D1D(0x0003) MISSED OFFSET
	struct FVector                                     LastVelocity;                                             // 0x0D20(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentAcceleration;                                      // 0x0D2C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPlayerShip_CameraViews>               CurrentCameraView;                                        // 0x0D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0D39(0x0007) MISSED OFFSET
	class UCameraComponent*                            ActiveCamera;                                             // 0x0D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              CameraFreeLookDistanceMin;                                // 0x0D48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraFreeLookDistanceMax;                                // 0x0D4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraFreeLookZoomStepSize;                               // 0x0D50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraFreeLookRotationSpeed;                              // 0x0D54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeLookTargetDistance;                                   // 0x0D58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActionFreezeCamRotateSpeed;                               // 0x0D5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActionFreezeCamMoveSpeed;                                 // 0x0D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraAccelerationShakeIntensity;                         // 0x0D64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccelerationDelta;                                        // 0x0D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastAcceleration;                                         // 0x0D6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraJumpDriveFOVOffset;                                 // 0x0D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraJumpDriveChargeFOVOffsetMax;                        // 0x0D74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WarpTunnelMaterial;                                       // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraJumpDriveFOVOffsetMax;                              // 0x0D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JumpCharging;                                             // 0x0D84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0D85(0x0003) MISSED OFFSET
	struct FVector                                     SpawnLocation;                                            // 0x0D88(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     JumpAwayLocation;                                         // 0x0D94(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InitShipSettingsFromDataTable;                            // 0x0DA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0DA1(0x0007) MISSED OFFSET
	struct FModifierHandle                             BankingStrafeModifierFP;                                  // 0x0DA8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FModifierHandle                             BankingYawModifierFP;                                     // 0x0DB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CameraFPBankingFactor;                                    // 0x0DB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeLookInitialDistance;                                  // 0x0DBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DamageIndicatorPostProcessMaterial;                       // 0x0DC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_PlayerController_C*                      PlayerController;                                         // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DamageIndicatorMaterialShield;                            // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DamageIndicatorMaterialArmor;                             // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DamageIndicatorMaterialHull;                              // 0x0DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CruiseModeVFXEnabled;                                     // 0x0DE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0DE9(0x0003) MISSED OFFSET
	float                                              CameraCruiseModeFOVOffsetMax;                             // 0x0DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraCruiseModeFOVOffset;                                // 0x0DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0DF4(0x0004) MISSED OFFSET
	class AActor*                                      CruiseModeSpeedParticles;                                 // 0x0DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraFocusDistance;                                      // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraConfigFOVOffset;                                    // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UESGameUserSettings*                         GameUserSettings;                                         // 0x0E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DamageIndicatorLowHealthMaterial;                         // 0x0E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageIndicatorLowHealthThreshold;                        // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FullStopDamageIncreaseHandle;                             // 0x0E1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraVFXFOVOffset;                                       // 0x0E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0E24(0x0004) MISSED OFFSET
	class UObject*                                     DeathCamActor;                                            // 0x0E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewChargeStyle;                                           // 0x0E30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0E31(0x0003) MISSED OFFSET
	float                                              CameraFinalFOVOffset;                                     // 0x0E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraFPNoCockpitWeaponDistance;                          // 0x0E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ship_Player.BP_Ship_Player_C");
		return ptr;
	}


	void IGetCameraView(TEnumAsByte<EPlayerShip_CameraViews>* Result);
	void SetDeathCam();
	void TickItemEffects();
	void SetFreeLookRotation(class USceneComponent** Target, float* PitchInput, float* YawInput, float* RollInput);
	void SetCameraActive(class UCameraComponent** Camera);
	void CameraRotationLag(class USceneComponent** Pivot, class USceneComponent** ReferenceComponent);
	void UserConstructionScript();
	void JumpInVFXTimeline__FinishedFunc();
	void JumpInVFXTimeline__UpdateFunc();
	void JumpAwayTimeline__FinishedFunc();
	void JumpAwayTimeline__UpdateFunc();
	void JumpAwayTimeline__ScreenFade__EventFunc();
	void ISetCameraVFXFOVOffset(float* Offset);
	void DamageIndicator_BeginPlay();
	void DamageIndicator_Tick();
	void ShieldDamageIndicator(class AActor** Actor, float* HitpointDelta, struct FVector* HitDirection);
	void ArmorDamageIndicator(class AActor** Actor, float* HitpointDelta, struct FVector* HitDirection);
	void HullDamageIndicator(class AActor** Actor, float* HitpointDelta, struct FVector* HitDirection);
	void ShowDamageIndicator(class UMaterialInstanceDynamic** Material, struct FVector* DamageDirection);
	void JumpDriveVFXBeginPlay();
	void JumpDriveVFXTick();
	void JumpChargeStarted();
	void JumpChargeTicked(float* Progress, TEnumAsByte<EJumpAbortType>* AbortedType);
	void JumpChargeCompleted(TEnumAsByte<EJumpMethod>* JumpMethod);
	void JumpChargeAborted(TEnumAsByte<EJumpAbortType>* AbortedType);
	void FadeJumpChargeVFX(float* Alpha);
	void JumpInVFX(bool* TranslateShip);
	void JumpAwayVFX();
	void JumpDriveVFX_CruiseModeStart();
	void JumpDriveVFX_CruisModeEnd();
	void ToggleCruiseModeVFX(bool* Enabled);
	void BndEvt__JumpDrive_K2Node_ComponentBoundEvent_1_EventCruiseModeStart__DelegateSignature();
	void BndEvt__JumpDrive_K2Node_ComponentBoundEvent_2_EventCruiseModeEnd__DelegateSignature();
	void BndEvt__JumpDrive_K2Node_ComponentBoundEvent_0_EventCruiseModeCharge__DelegateSignature(float* Progress);
	void BndEvt__JumpDrive_K2Node_ComponentBoundEvent_1_EventCruiseModeChargeEnd__DelegateSignature();
	void UpdateCameraRotationLag();
	void CameraDynamicsTick();
	void CameraDynamicsBeginPlay();
	void UpdateBoostCameraBehavior();
	void UpdateFreeLook();
	void UpdateCameraAccelerationShake();
	void UpdateFOV();
	void SetFOV(float* NewFOV);
	void OnBoostStart();
	void OnBoostStop();
	void SetFirstPersonBanking(bool* Enabled);
	void SpawnedWeaponsWereChanged(class UWeaponComponent** WeaponComponent);
	void UpdateSpringArmPosition();
	void ISetCameraView(TEnumAsByte<EPlayerShip_CameraViews>* CameraView);
	void ISetFreelookEnabled(bool* Enabled);
	void ICycleCameraView();
	void TriggerDeathCam();
	void ApplyVertigoEffect(float* FOVOffset);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ApplyAutoRollSettings();
	void GamepadModeChanged(bool* bNewGamepadMode);
	void UpdateShip();
	void ExecuteUbergraph_BP_Ship_Player(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
