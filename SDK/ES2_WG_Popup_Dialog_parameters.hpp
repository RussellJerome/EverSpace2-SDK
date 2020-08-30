#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Popup_Dialog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Popup_Dialog.WG_Popup_Dialog_C.OnKeyDown
struct UWG_Popup_Dialog_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Popup_Dialog.WG_Popup_Dialog_C.GetBrushColor_BG
struct UWG_Popup_Dialog_C_GetBrushColor_BG_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Popup_Dialog.WG_Popup_Dialog_C.OnFocusReceived
struct UWG_Popup_Dialog_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Popup_Dialog.WG_Popup_Dialog_C.Construct
struct UWG_Popup_Dialog_C_Construct_Params
{
};

// Function WG_Popup_Dialog.WG_Popup_Dialog_C.Button1_Pressed
struct UWG_Popup_Dialog_C_Button1_Pressed_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Popup_Dialog.WG_Popup_Dialog_C.Button2_Pressed
struct UWG_Popup_Dialog_C_Button2_Pressed_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Popup_Dialog.WG_Popup_Dialog_C.Button3_Pressed
struct UWG_Popup_Dialog_C_Button3_Pressed_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Popup_Dialog.WG_Popup_Dialog_C.PreConstruct
struct UWG_Popup_Dialog_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Popup_Dialog.WG_Popup_Dialog_C.ExecuteUbergraph_WG_Popup_Dialog
struct UWG_Popup_Dialog_C_ExecuteUbergraph_WG_Popup_Dialog_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Popup_Dialog.WG_Popup_Dialog_C.OnButton3Pressed__DelegateSignature
struct UWG_Popup_Dialog_C_OnButton3Pressed__DelegateSignature_Params
{
};

// Function WG_Popup_Dialog.WG_Popup_Dialog_C.OnButton2Pressed__DelegateSignature
struct UWG_Popup_Dialog_C_OnButton2Pressed__DelegateSignature_Params
{
};

// Function WG_Popup_Dialog.WG_Popup_Dialog_C.OnButton1Pressed__DelegateSignature
struct UWG_Popup_Dialog_C_OnButton1Pressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
