#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Main_Button_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.Get_ImgHighlightPattern_Visibility_1
struct UWG_Menu_Main_Button_C_Get_ImgHighlightPattern_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.Get_ImgBackground_ColorAndOpacity_1
struct UWG_Menu_Main_Button_C_Get_ImgBackground_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.SetFontSize
struct UWG_Menu_Main_Button_C_SetFontSize_Params
{
	bool*                                              Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.OnFocusReceived
struct UWG_Menu_Main_Button_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.SetText
struct UWG_Menu_Main_Button_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
struct UWG_Menu_Main_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UWG_Menu_Main_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UWG_Menu_Main_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UWG_Menu_Main_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.Tick
struct UWG_Menu_Main_Button_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.PreConstruct
struct UWG_Menu_Main_Button_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
struct UWG_Menu_Main_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.ExecuteUbergraph_WG_Menu_Main_Button
struct UWG_Menu_Main_Button_C_ExecuteUbergraph_WG_Menu_Main_Button_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.OnButtonLoseFocus__DelegateSignature
struct UWG_Menu_Main_Button_C_OnButtonLoseFocus__DelegateSignature_Params
{
};

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.OnButtonReceiveFocus__DelegateSignature
struct UWG_Menu_Main_Button_C_OnButtonReceiveFocus__DelegateSignature_Params
{
};

// Function WG_Menu_Main_Button.WG_Menu_Main_Button_C.OnButtonClicked__DelegateSignature
struct UWG_Menu_Main_Button_C_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
