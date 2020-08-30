#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_DockingGizmoBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.GetApproachingLocation
struct ABP_DockingGizmoBase_C_GetApproachingLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.GetRandomJumpTarget
struct ABP_DockingGizmoBase_C_GetRandomJumpTarget_Params
{
	class AJumpTarget*                                 JumpTarget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.UpdateEditorPreview
struct ABP_DockingGizmoBase_C_UpdateEditorPreview_Params
{
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.UserConstructionScript
struct ABP_DockingGizmoBase_C_UserConstructionScript_Params
{
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Launch__FinishedFunc
struct ABP_DockingGizmoBase_C_Timeline_Launch__FinishedFunc_Params
{
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Launch__UpdateFunc
struct ABP_DockingGizmoBase_C_Timeline_Launch__UpdateFunc_Params
{
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Launch_New__FinishedFunc
struct ABP_DockingGizmoBase_C_Timeline_Launch_New__FinishedFunc_Params
{
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Launch_New__UpdateFunc
struct ABP_DockingGizmoBase_C_Timeline_Launch_New__UpdateFunc_Params
{
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Landing__FinishedFunc
struct ABP_DockingGizmoBase_C_Timeline_Landing__FinishedFunc_Params
{
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Landing__UpdateFunc
struct ABP_DockingGizmoBase_C_Timeline_Landing__UpdateFunc_Params
{
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Landing_EntryLane__FinishedFunc
struct ABP_DockingGizmoBase_C_Timeline_Landing_EntryLane__FinishedFunc_Params
{
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Landing_EntryLane__UpdateFunc
struct ABP_DockingGizmoBase_C_Timeline_Landing_EntryLane__UpdateFunc_Params
{
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.GenericLandingTimeline__FinishedFunc
struct ABP_DockingGizmoBase_C_GenericLandingTimeline__FinishedFunc_Params
{
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.GenericLandingTimeline__UpdateFunc
struct ABP_DockingGizmoBase_C_GenericLandingTimeline__UpdateFunc_Params
{
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.TouchDownShip
struct ABP_DockingGizmoBase_C_TouchDownShip_Params
{
	class AESPawn**                                    ShipToLand;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.LaunchShip
struct ABP_DockingGizmoBase_C_LaunchShip_Params
{
	class AESPawn**                                    ShipToLaunch;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.LandingAnimationFinished
struct ABP_DockingGizmoBase_C_LandingAnimationFinished_Params
{
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.ReceiveTick
struct ABP_DockingGizmoBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.LandShip
struct ABP_DockingGizmoBase_C_LandShip_Params
{
	class AESPawn**                                    ShipToLand;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.FinishedMoveOnSpline
struct ABP_DockingGizmoBase_C_FinishedMoveOnSpline_Params
{
	class AESPawn**                                    Ship;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.ExecuteUbergraph_BP_DockingGizmoBase
struct ABP_DockingGizmoBase_C_ExecuteUbergraph_BP_DockingGizmoBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
