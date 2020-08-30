#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PlayerController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerController.BP_PlayerController_C.HandleInputForStationCamera
struct ABP_PlayerController_C_HandleInputForStationCamera_Params
{
	bool*                                              bIsMouseEvent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FAnalogInputEvent*                          AnalogInputEvent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor**                                     DockableStationRef;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShipsForSaleShown;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventReply                                 EventReply;                                               // (Parm, OutParm)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_X_K2Node_InputKeyEvent_22
struct ABP_PlayerController_C_InpActEvt_X_K2Node_InputKeyEvent_22_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_21
struct ABP_PlayerController_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_21_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_20
struct ABP_PlayerController_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_20_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_19
struct ABP_PlayerController_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_19_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_18
struct ABP_PlayerController_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_18_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_17
struct ABP_PlayerController_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_17_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_16
struct ABP_PlayerController_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_16_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Add_K2Node_InputKeyEvent_15
struct ABP_PlayerController_C_InpActEvt_Add_K2Node_InputKeyEvent_15_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Subtract_K2Node_InputKeyEvent_14
struct ABP_PlayerController_C_InpActEvt_Subtract_K2Node_InputKeyEvent_14_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Divide_K2Node_InputKeyEvent_13
struct ABP_PlayerController_C_InpActEvt_Divide_K2Node_InputKeyEvent_13_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Multiply_K2Node_InputKeyEvent_12
struct ABP_PlayerController_C_InpActEvt_Multiply_K2Node_InputKeyEvent_12_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_11
struct ABP_PlayerController_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_11_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_10
struct ABP_PlayerController_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_10_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_9
struct ABP_PlayerController_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_9_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_NumPadZero_K2Node_InputKeyEvent_8
struct ABP_PlayerController_C_InpActEvt_NumPadZero_K2Node_InputKeyEvent_8_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Decimal_K2Node_InputKeyEvent_7
struct ABP_PlayerController_C_InpActEvt_Decimal_K2Node_InputKeyEvent_7_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Alt_U_K2Node_InputKeyEvent_6
struct ABP_PlayerController_C_InpActEvt_Alt_U_K2Node_InputKeyEvent_6_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_+_K2Node_InputKeyEvent_5
struct ABP_PlayerController_C_InpActEvt___K2Node_InputKeyEvent_5_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_#_K2Node_InputKeyEvent_4
struct ABP_PlayerController_C_InpActEvt___K2Node_InputKeyEvent_4_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_L_K2Node_InputKeyEvent_3
struct ABP_PlayerController_C_InpActEvt_L_K2Node_InputKeyEvent_3_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_R_K2Node_InputKeyEvent_2
struct ABP_PlayerController_C_InpActEvt_R_K2Node_InputKeyEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Home_K2Node_InputKeyEvent_1
struct ABP_PlayerController_C_InpActEvt_Home_K2Node_InputKeyEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController.BP_PlayerController_C.OnCameraPitch
struct ABP_PlayerController_C_OnCameraPitch_Params
{
	float*                                             Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnCameraYaw
struct ABP_PlayerController_C_OnCameraYaw_Params
{
	float*                                             Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnCameraRoll
struct ABP_PlayerController_C_OnCameraRoll_Params
{
	float*                                             Roll;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnCameraZoom
struct ABP_PlayerController_C_OnCameraZoom_Params
{
	float*                                             Zoom;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnCameraForward
struct ABP_PlayerController_C_OnCameraForward_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnCameraUp
struct ABP_PlayerController_C_OnCameraUp_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnCameraRight
struct ABP_PlayerController_C_OnCameraRight_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnEnterOrExitActionFreeze
struct ABP_PlayerController_C_OnEnterOrExitActionFreeze_Params
{
	bool*                                              bEnter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnToggleActionFreezeCamera
struct ABP_PlayerController_C_OnToggleActionFreezeCamera_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.OnToggleFreeLook
struct ABP_PlayerController_C_OnToggleFreeLook_Params
{
	bool*                                              bEnter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnToggleHeadLights
struct ABP_PlayerController_C_OnToggleHeadLights_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.OnSwitchCamera
struct ABP_PlayerController_C_OnSwitchCamera_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.OnHighResScreenshot
struct ABP_PlayerController_C_OnHighResScreenshot_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay
struct ABP_PlayerController_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.OnCouldNotCollectPickup
struct ABP_PlayerController_C_OnCouldNotCollectPickup_Params
{
	class APickupBase**                                Pickup;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnOpenInventory
struct ABP_PlayerController_C_OnOpenInventory_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.OnClosed_Inventory
struct ABP_PlayerController_C_OnClosed_Inventory_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.OnOpenIngameMenu
struct ABP_PlayerController_C_OnOpenIngameMenu_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.QuitPauseMenu
struct ABP_PlayerController_C_QuitPauseMenu_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.OnShowOrHidePauseMenu
struct ABP_PlayerController_C_OnShowOrHidePauseMenu_Params
{
	bool*                                              bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnOpenMap
struct ABP_PlayerController_C_OnOpenMap_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.OnClosed_Map
struct ABP_PlayerController_C_OnClosed_Map_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.OnClosedIngameMenu
struct ABP_PlayerController_C_OnClosedIngameMenu_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.OnJoystickPluggedIn
struct ABP_PlayerController_C_OnJoystickPluggedIn_Params
{
	int*                                               DeviceID;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString*                                     DeviceName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PlayerController.BP_PlayerController_C.ReceiveTick
struct ABP_PlayerController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OpenMap
struct ABP_PlayerController_C_OpenMap_Params
{
	bool*                                              StillShowMissionAndDialogWidget;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnTabOpened_Event_1
struct ABP_PlayerController_C_OnTabOpened_Event_1_Params
{
	TEnumAsByte<EMenuTab>*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnOpenedMap
struct ABP_PlayerController_C_OnOpenedMap_Params
{
	TEnumAsByte<EMenuTab>*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.UserConfirmedJoystickProfile
struct ABP_PlayerController_C_UserConfirmedJoystickProfile_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.OnEnterOrExitControlsDisplay
struct ABP_PlayerController_C_OnEnterOrExitControlsDisplay_Params
{
	bool*                                              bEnter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnClosedLoot
struct ABP_PlayerController_C_OnClosedLoot_Params
{
};

// Function BP_PlayerController.BP_PlayerController_C.CustomEvent_2
struct ABP_PlayerController_C_CustomEvent_2_Params
{
	TEnumAsByte<EMenuTab>*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
struct ABP_PlayerController_C_ExecuteUbergraph_BP_PlayerController_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnMenuTabChanged__DelegateSignature
struct ABP_PlayerController_C_OnMenuTabChanged__DelegateSignature_Params
{
	TEnumAsByte<EMenuTab>*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController.BP_PlayerController_C.OnClosedMenu__DelegateSignature
struct ABP_PlayerController_C_OnClosedMenu__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
