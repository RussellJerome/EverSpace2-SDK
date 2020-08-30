// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_DockableStation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DockableStation.BP_DockableStation_C.IGetCurrentPlayerShipIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DockableStation_C::IGetCurrentPlayerShipIndex(int* CurrentIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.IGetCurrentPlayerShipIndex");

	ABP_DockableStation_C_IGetCurrentPlayerShipIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentIndex != nullptr)
		*CurrentIndex = params.CurrentIndex;
}


// Function BP_DockableStation.BP_DockableStation_C.IGetSceneRenderTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                SceneRenderTarget              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DockableStation_C::IGetSceneRenderTarget(class UTexture** SceneRenderTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.IGetSceneRenderTarget");

	ABP_DockableStation_C_IGetSceneRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SceneRenderTarget != nullptr)
		*SceneRenderTarget = params.SceneRenderTarget;
}


// Function BP_DockableStation.BP_DockableStation_C.IShouldUseSceneCapture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           UseSceneCapture                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DockableStation_C::IShouldUseSceneCapture(bool* UseSceneCapture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.IShouldUseSceneCapture");

	ABP_DockableStation_C_IShouldUseSceneCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseSceneCapture != nullptr)
		*UseSceneCapture = params.UseSceneCapture;
}


// Function BP_DockableStation.BP_DockableStation_C.ToggleLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DockableStation_C::ToggleLights(bool* On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.ToggleLights");

	ABP_DockableStation_C_ToggleLights_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.RotateCameraSpringArm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              AxisInput                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        SpringArm                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_DockableStation_C::RotateCameraSpringArm(struct FVector2D* AxisInput, class USceneComponent** SpringArm)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.RotateCameraSpringArm");

	ABP_DockableStation_C_RotateCameraSpringArm_Params params;
	params.AxisInput = AxisInput;
	params.SpringArm = SpringArm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DockableStation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.UserConstructionScript");

	ABP_DockableStation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.ShipDocking__FinishedFunc
// (BlueprintEvent)

void ABP_DockableStation_C::ShipDocking__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.ShipDocking__FinishedFunc");

	ABP_DockableStation_C_ShipDocking__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.ShipDocking__UpdateFunc
// (BlueprintEvent)

void ABP_DockableStation_C::ShipDocking__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.ShipDocking__UpdateFunc");

	ABP_DockableStation_C_ShipDocking__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.ShipDocking__ToggleDust__EventFunc
// (BlueprintEvent)

void ABP_DockableStation_C::ShipDocking__ToggleDust__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.ShipDocking__ToggleDust__EventFunc");

	ABP_DockableStation_C_ShipDocking__ToggleDust__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.ShipDocking__ToggleLights__EventFunc
// (BlueprintEvent)

void ABP_DockableStation_C::ShipDocking__ToggleLights__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.ShipDocking__ToggleLights__EventFunc");

	ABP_DockableStation_C_ShipDocking__ToggleLights__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.UndockTimeLine__FinishedFunc
// (BlueprintEvent)

void ABP_DockableStation_C::UndockTimeLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.UndockTimeLine__FinishedFunc");

	ABP_DockableStation_C_UndockTimeLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.UndockTimeLine__UpdateFunc
// (BlueprintEvent)

void ABP_DockableStation_C::UndockTimeLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.UndockTimeLine__UpdateFunc");

	ABP_DockableStation_C_UndockTimeLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.OnMenuClosed
// (BlueprintCallable, BlueprintEvent)

void ABP_DockableStation_C::OnMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.OnMenuClosed");

	ABP_DockableStation_C_OnMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DockableStation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.ReceiveBeginPlay");

	ABP_DockableStation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.OnPlayerBeginDocking
// (Event, Public, BlueprintEvent)

void ABP_DockableStation_C::OnPlayerBeginDocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.OnPlayerBeginDocking");

	ABP_DockableStation_C_OnPlayerBeginDocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.ShowPlayerShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ShipIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DockableStation_C::ShowPlayerShip(int* ShipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.ShowPlayerShip");

	ABP_DockableStation_C_ShowPlayerShip_Params params;
	params.ShipIndex = ShipIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.ResetCameraRotation
// (BlueprintCallable, BlueprintEvent)

void ABP_DockableStation_C::ResetCameraRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.ResetCameraRotation");

	ABP_DockableStation_C_ResetCameraRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.ResetShipForSaleCameraRotation
// (BlueprintCallable, BlueprintEvent)

void ABP_DockableStation_C::ResetShipForSaleCameraRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.ResetShipForSaleCameraRotation");

	ABP_DockableStation_C_ResetShipForSaleCameraRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.PlayDockingAnimation
// (BlueprintCallable, BlueprintEvent)

void ABP_DockableStation_C::PlayDockingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.PlayDockingAnimation");

	ABP_DockableStation_C_PlayDockingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DockableStation_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.ReceiveTick");

	ABP_DockableStation_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.BndEvt__AutoDockTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_DockableStation_C::BndEvt__AutoDockTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.BndEvt__AutoDockTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_DockableStation_C_BndEvt__AutoDockTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.ReEnabledAutoDock
// (BlueprintCallable, BlueprintEvent)

void ABP_DockableStation_C::ReEnabledAutoDock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.ReEnabledAutoDock");

	ABP_DockableStation_C_ReEnabledAutoDock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.PlayUndockingAnimation
// (BlueprintCallable, BlueprintEvent)

void ABP_DockableStation_C::PlayUndockingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.PlayUndockingAnimation");

	ABP_DockableStation_C_PlayUndockingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.TriggerUndockAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DockableStation_C::TriggerUndockAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.TriggerUndockAnimation");

	ABP_DockableStation_C_TriggerUndockAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.IRotateShipsForSaleCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              AxisInput                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DockableStation_C::IRotateShipsForSaleCamera(struct FVector2D* AxisInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.IRotateShipsForSaleCamera");

	ABP_DockableStation_C_IRotateShipsForSaleCamera_Params params;
	params.AxisInput = AxisInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.IRotateStationCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              AxisInput                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DockableStation_C::IRotateStationCamera(struct FVector2D* AxisInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.IRotateStationCamera");

	ABP_DockableStation_C_IRotateStationCamera_Params params;
	params.AxisInput = AxisInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.IShowNextPlayerShip
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DockableStation_C::IShowNextPlayerShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.IShowNextPlayerShip");

	ABP_DockableStation_C_IShowNextPlayerShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.IShowPreviousPlayerShip
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DockableStation_C::IShowPreviousPlayerShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.IShowPreviousPlayerShip");

	ABP_DockableStation_C_IShowPreviousPlayerShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.IShowShipForSale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ShipIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DockableStation_C::IShowShipForSale(int* ShipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.IShowShipForSale");

	ABP_DockableStation_C_IShowShipForSale_Params params;
	params.ShipIndex = ShipIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.IShowPlayerShip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ShipIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DockableStation_C::IShowPlayerShip(int* ShipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.IShowPlayerShip");

	ABP_DockableStation_C_IShowPlayerShip_Params params;
	params.ShipIndex = ShipIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.TryToPlayWelcomeDialog
// (BlueprintCallable, BlueprintEvent)

void ABP_DockableStation_C::TryToPlayWelcomeDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.TryToPlayWelcomeDialog");

	ABP_DockableStation_C_TryToPlayWelcomeDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DockableStation.BP_DockableStation_C.ExecuteUbergraph_BP_DockableStation
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DockableStation_C::ExecuteUbergraph_BP_DockableStation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DockableStation.BP_DockableStation_C.ExecuteUbergraph_BP_DockableStation");

	ABP_DockableStation_C_ExecuteUbergraph_BP_DockableStation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
