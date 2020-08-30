#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_DockableStation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DockableStation.BP_DockableStation_C.IGetCurrentPlayerShipIndex
struct ABP_DockableStation_C_IGetCurrentPlayerShipIndex_Params
{
	int                                                CurrentIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockableStation.BP_DockableStation_C.IGetSceneRenderTarget
struct ABP_DockableStation_C_IGetSceneRenderTarget_Params
{
	class UTexture*                                    SceneRenderTarget;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockableStation.BP_DockableStation_C.IShouldUseSceneCapture
struct ABP_DockableStation_C_IShouldUseSceneCapture_Params
{
	bool                                               UseSceneCapture;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockableStation.BP_DockableStation_C.ToggleLights
struct ABP_DockableStation_C_ToggleLights_Params
{
	bool*                                              On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockableStation.BP_DockableStation_C.RotateCameraSpringArm
struct ABP_DockableStation_C_RotateCameraSpringArm_Params
{
	struct FVector2D*                                  AxisInput;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            SpringArm;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_DockableStation.BP_DockableStation_C.UserConstructionScript
struct ABP_DockableStation_C_UserConstructionScript_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.ShipDocking__FinishedFunc
struct ABP_DockableStation_C_ShipDocking__FinishedFunc_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.ShipDocking__UpdateFunc
struct ABP_DockableStation_C_ShipDocking__UpdateFunc_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.ShipDocking__ToggleDust__EventFunc
struct ABP_DockableStation_C_ShipDocking__ToggleDust__EventFunc_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.ShipDocking__ToggleLights__EventFunc
struct ABP_DockableStation_C_ShipDocking__ToggleLights__EventFunc_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.UndockTimeLine__FinishedFunc
struct ABP_DockableStation_C_UndockTimeLine__FinishedFunc_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.UndockTimeLine__UpdateFunc
struct ABP_DockableStation_C_UndockTimeLine__UpdateFunc_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.OnMenuClosed
struct ABP_DockableStation_C_OnMenuClosed_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.ReceiveBeginPlay
struct ABP_DockableStation_C_ReceiveBeginPlay_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.OnPlayerBeginDocking
struct ABP_DockableStation_C_OnPlayerBeginDocking_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.ShowPlayerShip
struct ABP_DockableStation_C_ShowPlayerShip_Params
{
	int*                                               ShipIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockableStation.BP_DockableStation_C.ResetCameraRotation
struct ABP_DockableStation_C_ResetCameraRotation_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.ResetShipForSaleCameraRotation
struct ABP_DockableStation_C_ResetShipForSaleCameraRotation_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.PlayDockingAnimation
struct ABP_DockableStation_C_PlayDockingAnimation_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.ReceiveTick
struct ABP_DockableStation_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockableStation.BP_DockableStation_C.BndEvt__AutoDockTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_DockableStation_C_BndEvt__AutoDockTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_DockableStation.BP_DockableStation_C.ReEnabledAutoDock
struct ABP_DockableStation_C_ReEnabledAutoDock_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.PlayUndockingAnimation
struct ABP_DockableStation_C_PlayUndockingAnimation_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.TriggerUndockAnimation
struct ABP_DockableStation_C_TriggerUndockAnimation_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.IRotateShipsForSaleCamera
struct ABP_DockableStation_C_IRotateShipsForSaleCamera_Params
{
	struct FVector2D*                                  AxisInput;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockableStation.BP_DockableStation_C.IRotateStationCamera
struct ABP_DockableStation_C_IRotateStationCamera_Params
{
	struct FVector2D*                                  AxisInput;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockableStation.BP_DockableStation_C.IShowNextPlayerShip
struct ABP_DockableStation_C_IShowNextPlayerShip_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.IShowPreviousPlayerShip
struct ABP_DockableStation_C_IShowPreviousPlayerShip_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.IShowShipForSale
struct ABP_DockableStation_C_IShowShipForSale_Params
{
	int*                                               ShipIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockableStation.BP_DockableStation_C.IShowPlayerShip
struct ABP_DockableStation_C_IShowPlayerShip_Params
{
	int*                                               ShipIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockableStation.BP_DockableStation_C.TryToPlayWelcomeDialog
struct ABP_DockableStation_C_TryToPlayWelcomeDialog_Params
{
};

// Function BP_DockableStation.BP_DockableStation_C.ExecuteUbergraph_BP_DockableStation
struct ABP_DockableStation_C_ExecuteUbergraph_BP_DockableStation_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
