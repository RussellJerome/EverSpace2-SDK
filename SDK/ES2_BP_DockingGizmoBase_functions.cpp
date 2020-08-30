// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_DockingGizmoBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.GetApproachingLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_DockingGizmoBase_C::GetApproachingLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.GetApproachingLocation");

	ABP_DockingGizmoBase_C_GetApproachingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.GetRandomJumpTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AJumpTarget*             JumpTarget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DockingGizmoBase_C::GetRandomJumpTarget(class AJumpTarget** JumpTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.GetRandomJumpTarget");

	ABP_DockingGizmoBase_C_GetRandomJumpTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JumpTarget != nullptr)
		*JumpTarget = params.JumpTarget;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.UpdateEditorPreview
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DockingGizmoBase_C::UpdateEditorPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.UpdateEditorPreview");

	ABP_DockingGizmoBase_C_UpdateEditorPreview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DockingGizmoBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.UserConstructionScript");

	ABP_DockingGizmoBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Launch__FinishedFunc
// (BlueprintEvent)

void ABP_DockingGizmoBase_C::Timeline_Launch__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Launch__FinishedFunc");

	ABP_DockingGizmoBase_C_Timeline_Launch__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Launch__UpdateFunc
// (BlueprintEvent)

void ABP_DockingGizmoBase_C::Timeline_Launch__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Launch__UpdateFunc");

	ABP_DockingGizmoBase_C_Timeline_Launch__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Launch_New__FinishedFunc
// (BlueprintEvent)

void ABP_DockingGizmoBase_C::Timeline_Launch_New__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Launch_New__FinishedFunc");

	ABP_DockingGizmoBase_C_Timeline_Launch_New__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Launch_New__UpdateFunc
// (BlueprintEvent)

void ABP_DockingGizmoBase_C::Timeline_Launch_New__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Launch_New__UpdateFunc");

	ABP_DockingGizmoBase_C_Timeline_Launch_New__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Landing__FinishedFunc
// (BlueprintEvent)

void ABP_DockingGizmoBase_C::Timeline_Landing__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Landing__FinishedFunc");

	ABP_DockingGizmoBase_C_Timeline_Landing__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Landing__UpdateFunc
// (BlueprintEvent)

void ABP_DockingGizmoBase_C::Timeline_Landing__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Landing__UpdateFunc");

	ABP_DockingGizmoBase_C_Timeline_Landing__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Landing_EntryLane__FinishedFunc
// (BlueprintEvent)

void ABP_DockingGizmoBase_C::Timeline_Landing_EntryLane__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Landing_EntryLane__FinishedFunc");

	ABP_DockingGizmoBase_C_Timeline_Landing_EntryLane__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Landing_EntryLane__UpdateFunc
// (BlueprintEvent)

void ABP_DockingGizmoBase_C::Timeline_Landing_EntryLane__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.Timeline_Landing_EntryLane__UpdateFunc");

	ABP_DockingGizmoBase_C_Timeline_Landing_EntryLane__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.GenericLandingTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_DockingGizmoBase_C::GenericLandingTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.GenericLandingTimeline__FinishedFunc");

	ABP_DockingGizmoBase_C_GenericLandingTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.GenericLandingTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_DockingGizmoBase_C::GenericLandingTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.GenericLandingTimeline__UpdateFunc");

	ABP_DockingGizmoBase_C_GenericLandingTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.TouchDownShip
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AESPawn**                ShipToLand                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DockingGizmoBase_C::TouchDownShip(class AESPawn** ShipToLand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.TouchDownShip");

	ABP_DockingGizmoBase_C_TouchDownShip_Params params;
	params.ShipToLand = ShipToLand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.LaunchShip
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AESPawn**                ShipToLaunch                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DockingGizmoBase_C::LaunchShip(class AESPawn** ShipToLaunch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.LaunchShip");

	ABP_DockingGizmoBase_C_LaunchShip_Params params;
	params.ShipToLaunch = ShipToLaunch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.LandingAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_DockingGizmoBase_C::LandingAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.LandingAnimationFinished");

	ABP_DockingGizmoBase_C_LandingAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DockingGizmoBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.ReceiveTick");

	ABP_DockingGizmoBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.LandShip
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AESPawn**                ShipToLand                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DockingGizmoBase_C::LandShip(class AESPawn** ShipToLand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.LandShip");

	ABP_DockingGizmoBase_C_LandShip_Params params;
	params.ShipToLand = ShipToLand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.FinishedMoveOnSpline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AESPawn**                Ship                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DockingGizmoBase_C::FinishedMoveOnSpline(class AESPawn** Ship)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.FinishedMoveOnSpline");

	ABP_DockingGizmoBase_C_FinishedMoveOnSpline_Params params;
	params.Ship = Ship;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.ExecuteUbergraph_BP_DockingGizmoBase
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DockingGizmoBase_C::ExecuteUbergraph_BP_DockingGizmoBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockingGizmoBase.BP_DockingGizmoBase_C.ExecuteUbergraph_BP_DockingGizmoBase");

	ABP_DockingGizmoBase_C_ExecuteUbergraph_BP_DockingGizmoBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
