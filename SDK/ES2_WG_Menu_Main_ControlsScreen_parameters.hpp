#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Main_ControlsScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.Get_TextBlock_2_Text_1
struct UWG_Menu_Main_ControlsScreen_C_Get_TextBlock_2_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.GetVisibility_NotInOverlay
struct UWG_Menu_Main_ControlsScreen_C_GetVisibility_NotInOverlay_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.Get_ButtonSchemeB_ColorAndOpacity_1
struct UWG_Menu_Main_ControlsScreen_C_Get_ButtonSchemeB_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.Get_ButtonSchemeA_ColorAndOpacity_1
struct UWG_Menu_Main_ControlsScreen_C_Get_ButtonSchemeA_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.Get_StartButton_Visibility_1
struct UWG_Menu_Main_ControlsScreen_C_Get_StartButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.Get_Text_InvertPitch_Text_1
struct UWG_Menu_Main_ControlsScreen_C_Get_Text_InvertPitch_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.GetVisibility_GamepadMode
struct UWG_Menu_Main_ControlsScreen_C_GetVisibility_GamepadMode_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.Get_ControlLayoutImage_Brush_1
struct UWG_Menu_Main_ControlsScreen_C_Get_ControlLayoutImage_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.OnKeyUp
struct UWG_Menu_Main_ControlsScreen_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.OnKeyDown
struct UWG_Menu_Main_ControlsScreen_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.OnFocusReceived
struct UWG_Menu_Main_ControlsScreen_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.StartGame
struct UWG_Menu_Main_ControlsScreen_C_StartGame_Params
{
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.PreConstruct
struct UWG_Menu_Main_ControlsScreen_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.PressedCancelAction
struct UWG_Menu_Main_ControlsScreen_C_PressedCancelAction_Params
{
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.PressedStartGame
struct UWG_Menu_Main_ControlsScreen_C_PressedStartGame_Params
{
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
struct UWG_Menu_Main_ControlsScreen_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.Tick
struct UWG_Menu_Main_ControlsScreen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.FadedOut
struct UWG_Menu_Main_ControlsScreen_C_FadedOut_Params
{
	class UWG_Fullscreen_Fade_C**                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.PressedInvertY
struct UWG_Menu_Main_ControlsScreen_C_PressedInvertY_Params
{
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.InvertYChanged
struct UWG_Menu_Main_ControlsScreen_C_InvertYChanged_Params
{
	float*                                             NewProgress;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.PressedLeftHandedMode
struct UWG_Menu_Main_ControlsScreen_C_PressedLeftHandedMode_Params
{
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.InitializeMenu
struct UWG_Menu_Main_ControlsScreen_C_InitializeMenu_Params
{
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.Construct
struct UWG_Menu_Main_ControlsScreen_C_Construct_Params
{
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.ExecuteUbergraph_WG_Menu_Main_ControlsScreen
struct UWG_Menu_Main_ControlsScreen_C_ExecuteUbergraph_WG_Menu_Main_ControlsScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_ControlsScreen.WG_Menu_Main_ControlsScreen_C.OnApply__DelegateSignature
struct UWG_Menu_Main_ControlsScreen_C_OnApply__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
