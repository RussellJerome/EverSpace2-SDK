#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MenuAction_Button_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.UpdateButtonStyle
struct UWG_MenuAction_Button_C_UpdateButtonStyle_Params
{
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.SetText
struct UWG_MenuAction_Button_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.UpdateButtonColor
struct UWG_MenuAction_Button_C_UpdateButtonColor_Params
{
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.Tick
struct UWG_MenuAction_Button_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.SetNewActionInfo
struct UWG_MenuAction_Button_C_SetNewActionInfo_Params
{
	struct FInputActionButtonInfo*                     NewActionInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
struct UWG_MenuAction_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UWG_MenuAction_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
struct UWG_MenuAction_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.HandleKeyDown
struct UWG_MenuAction_Button_C_HandleKeyDown_Params
{
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.HandlePressed
struct UWG_MenuAction_Button_C_HandlePressed_Params
{
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.HandleReleased
struct UWG_MenuAction_Button_C_HandleReleased_Params
{
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.HandleKeyUp
struct UWG_MenuAction_Button_C_HandleKeyUp_Params
{
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature
struct UWG_MenuAction_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature
struct UWG_MenuAction_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.OverrideHoldProgress
struct UWG_MenuAction_Button_C_OverrideHoldProgress_Params
{
	float*                                             ProgressIn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.PreConstruct
struct UWG_MenuAction_Button_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.ExecuteUbergraph_WG_MenuAction_Button
struct UWG_MenuAction_Button_C_ExecuteUbergraph_WG_MenuAction_Button_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.OnButtonHoldFinished__DelegateSignature
struct UWG_MenuAction_Button_C_OnButtonHoldFinished__DelegateSignature_Params
{
};

// Function WG_MenuAction_Button.WG_MenuAction_Button_C.OnButtonClicked__DelegateSignature
struct UWG_MenuAction_Button_C_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
