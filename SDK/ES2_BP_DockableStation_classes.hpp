#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_DockableStation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DockableStation.BP_DockableStation_C
// 0x013D (0x060D - 0x04D0)
class ABP_DockableStation_C : public ADockableStation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             TakeOffTransform;                                         // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               AutoDockTrigger;                                          // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        BP_EditorNote;                                            // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Vehicle_LandingDust;                                    // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              UndockTimeLine_NewTrack_0_72AB58124DB102E8EEF67BA20A21428E;// 0x0518(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    UndockTimeLine__Direction_72AB58124DB102E8EEF67BA20A21428E;// 0x051C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x051D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          UndockTimeLine;                                           // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ShipDocking_GlobalAlpha_5A647DF943BA15E7709DB7B1D262DA0F; // 0x0528(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShipDocking_BankingAlpha_5A647DF943BA15E7709DB7B1D262DA0F;// 0x052C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShipDocking_TransformAlpha_5A647DF943BA15E7709DB7B1D262DA0F;// 0x0530(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ShipDocking__Direction_5A647DF943BA15E7709DB7B1D262DA0F;  // 0x0534(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0535(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ShipDocking;                                              // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                KinematicModeHandle;                                      // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0544(0x000C) MISSED OFFSET
	struct FTransform                                  InitialShipTransform;                                     // 0x0550(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    InitialBankingRotation;                                   // 0x0580(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	class ABP_ShipForSaleViewer_Pawn_C*                ShipsForSaleViewerPawn;                                   // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialSpringArmPitch;                                    // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialSpringArmYaw;                                      // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DesiredPlayerShipIndex;                                   // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InitialPlayerShipIndex;                                   // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentPlayerShipIndex;                                   // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialDistanceFactor;                                    // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraLookAtOffsetZ;                                      // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	TArray<class ABP_DecoLight_Base_C*>                LinkedDecoLights;                                         // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UCanvasRenderTarget2D*                       SceneRenderTarget;                                        // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCanvasRenderTarget2D*                       SceneRenderTargetAlpha;                                   // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RenderTargetResolutionScale;                              // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05DC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              SceneCaptureIncludeActors;                                // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              LandingDustDistanceMax;                                   // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x05F4(0x0004) MISSED OFFSET
	class USceneCaptureComponent2D*                    SceneCaptureComp;                                         // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureCompAlpha;                                    // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               UseSceneCapture;                                          // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoDock;                                                 // 0x0609(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreAutoDockTrigger;                                    // 0x060A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayTakeOffAnimation;                                     // 0x060B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayLandingAnimation;                                     // 0x060C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DockableStation.BP_DockableStation_C");
		return ptr;
	}


	void IGetCurrentPlayerShipIndex(int* CurrentIndex);
	void IGetSceneRenderTarget(class UTexture** SceneRenderTarget);
	void IShouldUseSceneCapture(bool* UseSceneCapture);
	void ToggleLights(bool* On);
	void RotateCameraSpringArm(struct FVector2D* AxisInput, class USceneComponent** SpringArm);
	void UserConstructionScript();
	void ShipDocking__FinishedFunc();
	void ShipDocking__UpdateFunc();
	void ShipDocking__ToggleDust__EventFunc();
	void ShipDocking__ToggleLights__EventFunc();
	void UndockTimeLine__FinishedFunc();
	void UndockTimeLine__UpdateFunc();
	void OnMenuClosed();
	void ReceiveBeginPlay();
	void OnPlayerBeginDocking();
	void ShowPlayerShip(int* ShipIndex);
	void ResetCameraRotation();
	void ResetShipForSaleCameraRotation();
	void PlayDockingAnimation();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__AutoDockTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void ReEnabledAutoDock();
	void PlayUndockingAnimation();
	void TriggerUndockAnimation();
	void IRotateShipsForSaleCamera(struct FVector2D* AxisInput);
	void IRotateStationCamera(struct FVector2D* AxisInput);
	void IShowNextPlayerShip();
	void IShowPreviousPlayerShip();
	void IShowShipForSale(int* ShipIndex);
	void IShowPlayerShip(int* ShipIndex);
	void TryToPlayWelcomeDialog();
	void ExecuteUbergraph_BP_DockableStation(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
