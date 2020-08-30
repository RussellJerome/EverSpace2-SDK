// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Ship_Player_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Ship_Player.BP_Ship_Player_C.IGetCameraView
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerShip_CameraViews> Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::IGetCameraView(TEnumAsByte<EPlayerShip_CameraViews>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.IGetCameraView");

	ABP_Ship_Player_C_IGetCameraView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Ship_Player.BP_Ship_Player_C.SetDeathCam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::SetDeathCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.SetDeathCam");

	ABP_Ship_Player_C_SetDeathCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.TickItemEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::TickItemEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.TickItemEffects");

	ABP_Ship_Player_C_TickItemEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.SetFreeLookRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent**        Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         PitchInput                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         YawInput                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         RollInput                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::SetFreeLookRotation(class USceneComponent** Target, float* PitchInput, float* YawInput, float* RollInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.SetFreeLookRotation");

	ABP_Ship_Player_C_SetFreeLookRotation_Params params;
	params.Target = Target;
	params.PitchInput = PitchInput;
	params.YawInput = YawInput;
	params.RollInput = RollInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.SetCameraActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent**       Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Ship_Player_C::SetCameraActive(class UCameraComponent** Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.SetCameraActive");

	ABP_Ship_Player_C_SetCameraActive_Params params;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.CameraRotationLag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent**        Pivot                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent**        ReferenceComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Ship_Player_C::CameraRotationLag(class USceneComponent** Pivot, class USceneComponent** ReferenceComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.CameraRotationLag");

	ABP_Ship_Player_C_CameraRotationLag_Params params;
	params.Pivot = Pivot;
	params.ReferenceComponent = ReferenceComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.UserConstructionScript");

	ABP_Ship_Player_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.JumpInVFXTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_Ship_Player_C::JumpInVFXTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.JumpInVFXTimeline__FinishedFunc");

	ABP_Ship_Player_C_JumpInVFXTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.JumpInVFXTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_Ship_Player_C::JumpInVFXTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.JumpInVFXTimeline__UpdateFunc");

	ABP_Ship_Player_C_JumpInVFXTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.JumpAwayTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_Ship_Player_C::JumpAwayTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.JumpAwayTimeline__FinishedFunc");

	ABP_Ship_Player_C_JumpAwayTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.JumpAwayTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_Ship_Player_C::JumpAwayTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.JumpAwayTimeline__UpdateFunc");

	ABP_Ship_Player_C_JumpAwayTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.JumpAwayTimeline__ScreenFade__EventFunc
// (BlueprintEvent)

void ABP_Ship_Player_C::JumpAwayTimeline__ScreenFade__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.JumpAwayTimeline__ScreenFade__EventFunc");

	ABP_Ship_Player_C_JumpAwayTimeline__ScreenFade__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.ISetCameraVFXFOVOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::ISetCameraVFXFOVOffset(float* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.ISetCameraVFXFOVOffset");

	ABP_Ship_Player_C_ISetCameraVFXFOVOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.DamageIndicator_BeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::DamageIndicator_BeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.DamageIndicator_BeginPlay");

	ABP_Ship_Player_C_DamageIndicator_BeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.DamageIndicator_Tick
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::DamageIndicator_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.DamageIndicator_Tick");

	ABP_Ship_Player_C_DamageIndicator_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.ShieldDamageIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HitpointDelta                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::ShieldDamageIndicator(class AActor** Actor, float* HitpointDelta, struct FVector* HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.ShieldDamageIndicator");

	ABP_Ship_Player_C_ShieldDamageIndicator_Params params;
	params.Actor = Actor;
	params.HitpointDelta = HitpointDelta;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.ArmorDamageIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HitpointDelta                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::ArmorDamageIndicator(class AActor** Actor, float* HitpointDelta, struct FVector* HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.ArmorDamageIndicator");

	ABP_Ship_Player_C_ArmorDamageIndicator_Params params;
	params.Actor = Actor;
	params.HitpointDelta = HitpointDelta;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.HullDamageIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HitpointDelta                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::HullDamageIndicator(class AActor** Actor, float* HitpointDelta, struct FVector* HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.HullDamageIndicator");

	ABP_Ship_Player_C_HullDamageIndicator_Params params;
	params.Actor = Actor;
	params.HitpointDelta = HitpointDelta;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.ShowDamageIndicator
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic** Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DamageDirection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::ShowDamageIndicator(class UMaterialInstanceDynamic** Material, struct FVector* DamageDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.ShowDamageIndicator");

	ABP_Ship_Player_C_ShowDamageIndicator_Params params;
	params.Material = Material;
	params.DamageDirection = DamageDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.JumpDriveVFXBeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::JumpDriveVFXBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.JumpDriveVFXBeginPlay");

	ABP_Ship_Player_C_JumpDriveVFXBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.JumpDriveVFXTick
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::JumpDriveVFXTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.JumpDriveVFXTick");

	ABP_Ship_Player_C_JumpDriveVFXTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.JumpChargeStarted
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::JumpChargeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.JumpChargeStarted");

	ABP_Ship_Player_C_JumpChargeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.JumpChargeTicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EJumpAbortType>*   AbortedType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::JumpChargeTicked(float* Progress, TEnumAsByte<EJumpAbortType>* AbortedType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.JumpChargeTicked");

	ABP_Ship_Player_C_JumpChargeTicked_Params params;
	params.Progress = Progress;
	params.AbortedType = AbortedType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.JumpChargeCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJumpMethod>*      JumpMethod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::JumpChargeCompleted(TEnumAsByte<EJumpMethod>* JumpMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.JumpChargeCompleted");

	ABP_Ship_Player_C_JumpChargeCompleted_Params params;
	params.JumpMethod = JumpMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.JumpChargeAborted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJumpAbortType>*   AbortedType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::JumpChargeAborted(TEnumAsByte<EJumpAbortType>* AbortedType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.JumpChargeAborted");

	ABP_Ship_Player_C_JumpChargeAborted_Params params;
	params.AbortedType = AbortedType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.FadeJumpChargeVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::FadeJumpChargeVFX(float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.FadeJumpChargeVFX");

	ABP_Ship_Player_C_FadeJumpChargeVFX_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.JumpInVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TranslateShip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::JumpInVFX(bool* TranslateShip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.JumpInVFX");

	ABP_Ship_Player_C_JumpInVFX_Params params;
	params.TranslateShip = TranslateShip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.JumpAwayVFX
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::JumpAwayVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.JumpAwayVFX");

	ABP_Ship_Player_C_JumpAwayVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.JumpDriveVFX_CruiseModeStart
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::JumpDriveVFX_CruiseModeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.JumpDriveVFX_CruiseModeStart");

	ABP_Ship_Player_C_JumpDriveVFX_CruiseModeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.JumpDriveVFX_CruisModeEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::JumpDriveVFX_CruisModeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.JumpDriveVFX_CruisModeEnd");

	ABP_Ship_Player_C_JumpDriveVFX_CruisModeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.ToggleCruiseModeVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::ToggleCruiseModeVFX(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.ToggleCruiseModeVFX");

	ABP_Ship_Player_C_ToggleCruiseModeVFX_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.BndEvt__JumpDrive_K2Node_ComponentBoundEvent_1_EventCruiseModeStart__DelegateSignature
// (BlueprintEvent)

void ABP_Ship_Player_C::BndEvt__JumpDrive_K2Node_ComponentBoundEvent_1_EventCruiseModeStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.BndEvt__JumpDrive_K2Node_ComponentBoundEvent_1_EventCruiseModeStart__DelegateSignature");

	ABP_Ship_Player_C_BndEvt__JumpDrive_K2Node_ComponentBoundEvent_1_EventCruiseModeStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.BndEvt__JumpDrive_K2Node_ComponentBoundEvent_2_EventCruiseModeEnd__DelegateSignature
// (BlueprintEvent)

void ABP_Ship_Player_C::BndEvt__JumpDrive_K2Node_ComponentBoundEvent_2_EventCruiseModeEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.BndEvt__JumpDrive_K2Node_ComponentBoundEvent_2_EventCruiseModeEnd__DelegateSignature");

	ABP_Ship_Player_C_BndEvt__JumpDrive_K2Node_ComponentBoundEvent_2_EventCruiseModeEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.BndEvt__JumpDrive_K2Node_ComponentBoundEvent_0_EventCruiseModeCharge__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::BndEvt__JumpDrive_K2Node_ComponentBoundEvent_0_EventCruiseModeCharge__DelegateSignature(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.BndEvt__JumpDrive_K2Node_ComponentBoundEvent_0_EventCruiseModeCharge__DelegateSignature");

	ABP_Ship_Player_C_BndEvt__JumpDrive_K2Node_ComponentBoundEvent_0_EventCruiseModeCharge__DelegateSignature_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.BndEvt__JumpDrive_K2Node_ComponentBoundEvent_1_EventCruiseModeChargeEnd__DelegateSignature
// (BlueprintEvent)

void ABP_Ship_Player_C::BndEvt__JumpDrive_K2Node_ComponentBoundEvent_1_EventCruiseModeChargeEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.BndEvt__JumpDrive_K2Node_ComponentBoundEvent_1_EventCruiseModeChargeEnd__DelegateSignature");

	ABP_Ship_Player_C_BndEvt__JumpDrive_K2Node_ComponentBoundEvent_1_EventCruiseModeChargeEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.UpdateCameraRotationLag
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::UpdateCameraRotationLag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.UpdateCameraRotationLag");

	ABP_Ship_Player_C_UpdateCameraRotationLag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.CameraDynamicsTick
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::CameraDynamicsTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.CameraDynamicsTick");

	ABP_Ship_Player_C_CameraDynamicsTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.CameraDynamicsBeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::CameraDynamicsBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.CameraDynamicsBeginPlay");

	ABP_Ship_Player_C_CameraDynamicsBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.UpdateBoostCameraBehavior
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::UpdateBoostCameraBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.UpdateBoostCameraBehavior");

	ABP_Ship_Player_C_UpdateBoostCameraBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.UpdateFreeLook
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::UpdateFreeLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.UpdateFreeLook");

	ABP_Ship_Player_C_UpdateFreeLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.UpdateCameraAccelerationShake
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::UpdateCameraAccelerationShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.UpdateCameraAccelerationShake");

	ABP_Ship_Player_C_UpdateCameraAccelerationShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.UpdateFOV
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::UpdateFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.UpdateFOV");

	ABP_Ship_Player_C_UpdateFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.SetFOV
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewFOV                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::SetFOV(float* NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.SetFOV");

	ABP_Ship_Player_C_SetFOV_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.OnBoostStart
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::OnBoostStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.OnBoostStart");

	ABP_Ship_Player_C_OnBoostStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.OnBoostStop
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::OnBoostStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.OnBoostStop");

	ABP_Ship_Player_C_OnBoostStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.SetFirstPersonBanking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::SetFirstPersonBanking(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.SetFirstPersonBanking");

	ABP_Ship_Player_C_SetFirstPersonBanking_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.SpawnedWeaponsWereChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeaponComponent**       WeaponComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Ship_Player_C::SpawnedWeaponsWereChanged(class UWeaponComponent** WeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.SpawnedWeaponsWereChanged");

	ABP_Ship_Player_C_SpawnedWeaponsWereChanged_Params params;
	params.WeaponComponent = WeaponComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.UpdateSpringArmPosition
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::UpdateSpringArmPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.UpdateSpringArmPosition");

	ABP_Ship_Player_C_UpdateSpringArmPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.ISetCameraView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerShip_CameraViews>* CameraView                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::ISetCameraView(TEnumAsByte<EPlayerShip_CameraViews>* CameraView)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.ISetCameraView");

	ABP_Ship_Player_C_ISetCameraView_Params params;
	params.CameraView = CameraView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.ISetFreelookEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::ISetFreelookEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.ISetFreelookEnabled");

	ABP_Ship_Player_C_ISetFreelookEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.ICycleCameraView
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::ICycleCameraView()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.ICycleCameraView");

	ABP_Ship_Player_C_ICycleCameraView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.TriggerDeathCam
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::TriggerDeathCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.TriggerDeathCam");

	ABP_Ship_Player_C_TriggerDeathCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.ApplyVertigoEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         FOVOffset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::ApplyVertigoEffect(float* FOVOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.ApplyVertigoEffect");

	ABP_Ship_Player_C_ApplyVertigoEffect_Params params;
	params.FOVOffset = FOVOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.ReceiveTick");

	ABP_Ship_Player_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Ship_Player_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.ReceiveBeginPlay");

	ABP_Ship_Player_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.ApplyAutoRollSettings
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::ApplyAutoRollSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.ApplyAutoRollSettings");

	ABP_Ship_Player_C_ApplyAutoRollSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.GamepadModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bNewGamepadMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::GamepadModeChanged(bool* bNewGamepadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.GamepadModeChanged");

	ABP_Ship_Player_C_GamepadModeChanged_Params params;
	params.bNewGamepadMode = bNewGamepadMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.UpdateShip
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_C::UpdateShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.UpdateShip");

	ABP_Ship_Player_C_UpdateShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player.BP_Ship_Player_C.ExecuteUbergraph_BP_Ship_Player
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_C::ExecuteUbergraph_BP_Ship_Player(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player.BP_Ship_Player_C.ExecuteUbergraph_BP_Ship_Player");

	ABP_Ship_Player_C_ExecuteUbergraph_BP_Ship_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
