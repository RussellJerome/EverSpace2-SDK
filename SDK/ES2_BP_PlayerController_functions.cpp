// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PlayerController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerController.BP_PlayerController_C.HandleInputForStationCamera
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsMouseEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FAnalogInputEvent*      AnalogInputEvent               (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor**                 DockableStationRef             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShipsForSaleShown              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEventReply             EventReply                     (Parm, OutParm)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::HandleInputForStationCamera(bool* bIsMouseEvent, struct FPointerEvent* MouseEvent, struct FAnalogInputEvent* AnalogInputEvent, class AActor** DockableStationRef, bool* ShipsForSaleShown, struct FEventReply* EventReply, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.HandleInputForStationCamera");

	ABP_PlayerController_C_HandleInputForStationCamera_Params params;
	params.bIsMouseEvent = bIsMouseEvent;
	params.MouseEvent = MouseEvent;
	params.AnalogInputEvent = AnalogInputEvent;
	params.DockableStationRef = DockableStationRef;
	params.ShipsForSaleShown = ShipsForSaleShown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventReply != nullptr)
		*EventReply = params.EventReply;
	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_X_K2Node_InputKeyEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_X_K2Node_InputKeyEvent_22(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_X_K2Node_InputKeyEvent_22");

	ABP_PlayerController_C_InpActEvt_X_K2Node_InputKeyEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_NumPadSeven_K2Node_InputKeyEvent_21(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_21");

	ABP_PlayerController_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_NumPadEight_K2Node_InputKeyEvent_20(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_20");

	ABP_PlayerController_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_NumPadNine_K2Node_InputKeyEvent_19(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_19");

	ABP_PlayerController_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_18(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_18");

	ABP_PlayerController_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_NumPadFive_K2Node_InputKeyEvent_17(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_17");

	ABP_PlayerController_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_16(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_16");

	ABP_PlayerController_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Add_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Add_K2Node_InputKeyEvent_15(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Add_K2Node_InputKeyEvent_15");

	ABP_PlayerController_C_InpActEvt_Add_K2Node_InputKeyEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Subtract_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Subtract_K2Node_InputKeyEvent_14(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Subtract_K2Node_InputKeyEvent_14");

	ABP_PlayerController_C_InpActEvt_Subtract_K2Node_InputKeyEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Divide_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Divide_K2Node_InputKeyEvent_13(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Divide_K2Node_InputKeyEvent_13");

	ABP_PlayerController_C_InpActEvt_Divide_K2Node_InputKeyEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Multiply_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Multiply_K2Node_InputKeyEvent_12(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Multiply_K2Node_InputKeyEvent_12");

	ABP_PlayerController_C_InpActEvt_Multiply_K2Node_InputKeyEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_NumPadTwo_K2Node_InputKeyEvent_11(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_11");

	ABP_PlayerController_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_NumPadThree_K2Node_InputKeyEvent_10(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_10");

	ABP_PlayerController_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_NumPadOne_K2Node_InputKeyEvent_9(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_9");

	ABP_PlayerController_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_NumPadZero_K2Node_InputKeyEvent_8(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_8");

	ABP_PlayerController_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Decimal_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Decimal_K2Node_InputKeyEvent_7(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Decimal_K2Node_InputKeyEvent_7");

	ABP_PlayerController_C_InpActEvt_Decimal_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Alt_U_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Alt_U_K2Node_InputKeyEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Alt_U_K2Node_InputKeyEvent_6");

	ABP_PlayerController_C_InpActEvt_Alt_U_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_+_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt___K2Node_InputKeyEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_+_K2Node_InputKeyEvent_5");

	ABP_PlayerController_C_InpActEvt___K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_#_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt___K2Node_InputKeyEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_#_K2Node_InputKeyEvent_4");

	ABP_PlayerController_C_InpActEvt___K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_L_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_L_K2Node_InputKeyEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_L_K2Node_InputKeyEvent_3");

	ABP_PlayerController_C_InpActEvt_L_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_R_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_R_K2Node_InputKeyEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_R_K2Node_InputKeyEvent_2");

	ABP_PlayerController_C_InpActEvt_R_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Home_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Home_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Home_K2Node_InputKeyEvent_1");

	ABP_PlayerController_C_InpActEvt_Home_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnCameraPitch
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnCameraPitch(float* Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnCameraPitch");

	ABP_PlayerController_C_OnCameraPitch_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnCameraYaw
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnCameraYaw(float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnCameraYaw");

	ABP_PlayerController_C_OnCameraYaw_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnCameraRoll
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Roll                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnCameraRoll(float* Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnCameraRoll");

	ABP_PlayerController_C_OnCameraRoll_Params params;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnCameraZoom
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Zoom                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnCameraZoom(float* Zoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnCameraZoom");

	ABP_PlayerController_C_OnCameraZoom_Params params;
	params.Zoom = Zoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnCameraForward
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnCameraForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnCameraForward");

	ABP_PlayerController_C_OnCameraForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnCameraUp
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnCameraUp(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnCameraUp");

	ABP_PlayerController_C_OnCameraUp_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnCameraRight
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnCameraRight(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnCameraRight");

	ABP_PlayerController_C_OnCameraRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnEnterOrExitActionFreeze
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnEnterOrExitActionFreeze(bool* bEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnEnterOrExitActionFreeze");

	ABP_PlayerController_C_OnEnterOrExitActionFreeze_Params params;
	params.bEnter = bEnter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnToggleActionFreezeCamera
// (Event, Public, BlueprintEvent)

void ABP_PlayerController_C::OnToggleActionFreezeCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnToggleActionFreezeCamera");

	ABP_PlayerController_C_OnToggleActionFreezeCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnToggleFreeLook
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnToggleFreeLook(bool* bEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnToggleFreeLook");

	ABP_PlayerController_C_OnToggleFreeLook_Params params;
	params.bEnter = bEnter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnToggleHeadLights
// (Event, Public, BlueprintEvent)

void ABP_PlayerController_C::OnToggleHeadLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnToggleHeadLights");

	ABP_PlayerController_C_OnToggleHeadLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnSwitchCamera
// (Event, Public, BlueprintEvent)

void ABP_PlayerController_C::OnSwitchCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnSwitchCamera");

	ABP_PlayerController_C_OnSwitchCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnHighResScreenshot
// (Event, Public, BlueprintEvent)

void ABP_PlayerController_C::OnHighResScreenshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnHighResScreenshot");

	ABP_PlayerController_C_OnHighResScreenshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay");

	ABP_PlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnCouldNotCollectPickup
// (Event, Public, BlueprintEvent)
// Parameters:
// class APickupBase**            Pickup                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnCouldNotCollectPickup(class APickupBase** Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnCouldNotCollectPickup");

	ABP_PlayerController_C_OnCouldNotCollectPickup_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnOpenInventory
// (Event, Public, BlueprintEvent)

void ABP_PlayerController_C::OnOpenInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnOpenInventory");

	ABP_PlayerController_C_OnOpenInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnClosed_Inventory
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::OnClosed_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnClosed_Inventory");

	ABP_PlayerController_C_OnClosed_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnOpenIngameMenu
// (Event, Public, BlueprintEvent)

void ABP_PlayerController_C::OnOpenIngameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnOpenIngameMenu");

	ABP_PlayerController_C_OnOpenIngameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.QuitPauseMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::QuitPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.QuitPauseMenu");

	ABP_PlayerController_C_QuitPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnShowOrHidePauseMenu
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnShowOrHidePauseMenu(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnShowOrHidePauseMenu");

	ABP_PlayerController_C_OnShowOrHidePauseMenu_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnOpenMap
// (Event, Public, BlueprintEvent)

void ABP_PlayerController_C::OnOpenMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnOpenMap");

	ABP_PlayerController_C_OnOpenMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnClosed_Map
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::OnClosed_Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnClosed_Map");

	ABP_PlayerController_C_OnClosed_Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnClosedIngameMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::OnClosedIngameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnClosedIngameMenu");

	ABP_PlayerController_C_OnClosedIngameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnJoystickPluggedIn
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           DeviceID                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class FString*                 DeviceName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_PlayerController_C::OnJoystickPluggedIn(int* DeviceID, class FString* DeviceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnJoystickPluggedIn");

	ABP_PlayerController_C_OnJoystickPluggedIn_Params params;
	params.DeviceID = DeviceID;
	params.DeviceName = DeviceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ReceiveTick");

	ABP_PlayerController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OpenMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          StillShowMissionAndDialogWidget (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OpenMap(bool* StillShowMissionAndDialogWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OpenMap");

	ABP_PlayerController_C_OpenMap_Params params;
	params.StillShowMissionAndDialogWidget = StillShowMissionAndDialogWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnTabOpened_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTab>*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnTabOpened_Event_1(TEnumAsByte<EMenuTab>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnTabOpened_Event_1");

	ABP_PlayerController_C_OnTabOpened_Event_1_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnOpenedMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTab>*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnOpenedMap(TEnumAsByte<EMenuTab>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnOpenedMap");

	ABP_PlayerController_C_OnOpenedMap_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.UserConfirmedJoystickProfile
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::UserConfirmedJoystickProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.UserConfirmedJoystickProfile");

	ABP_PlayerController_C_UserConfirmedJoystickProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnEnterOrExitControlsDisplay
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bEnter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnEnterOrExitControlsDisplay(bool* bEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnEnterOrExitControlsDisplay");

	ABP_PlayerController_C_OnEnterOrExitControlsDisplay_Params params;
	params.bEnter = bEnter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnClosedLoot
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::OnClosedLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnClosedLoot");

	ABP_PlayerController_C_OnClosedLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTab>*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::CustomEvent_2(TEnumAsByte<EMenuTab>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.CustomEvent_2");

	ABP_PlayerController_C_CustomEvent_2_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::ExecuteUbergraph_BP_PlayerController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController");

	ABP_PlayerController_C_ExecuteUbergraph_BP_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnMenuTabChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTab>*         Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnMenuTabChanged__DelegateSignature(TEnumAsByte<EMenuTab>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnMenuTabChanged__DelegateSignature");

	ABP_PlayerController_C_OnMenuTabChanged__DelegateSignature_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnClosedMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::OnClosedMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnClosedMenu__DelegateSignature");

	ABP_PlayerController_C_OnClosedMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
