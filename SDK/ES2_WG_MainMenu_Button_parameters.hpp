#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MainMenu_Button_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_MainMenu_Button.WG_MainMenu_Button_C.SetFontSize
struct UWG_MainMenu_Button_C_SetFontSize_Params
{
	bool*                                              Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MainMenu_Button.WG_MainMenu_Button_C.OnFocusReceived
struct UWG_MainMenu_Button_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_MainMenu_Button.WG_MainMenu_Button_C.SetText
struct UWG_MainMenu_Button_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_MainMenu_Button.WG_MainMenu_Button_C.Tick
struct UWG_MainMenu_Button_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MainMenu_Button.WG_MainMenu_Button_C.UpdateButtonColor
struct UWG_MainMenu_Button_C_UpdateButtonColor_Params
{
};

// Function WG_MainMenu_Button.WG_MainMenu_Button_C.BndEvt__ESButton_95_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature
struct UWG_MainMenu_Button_C_BndEvt__ESButton_95_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WG_MainMenu_Button.WG_MainMenu_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_129_OnButtonHoverEvent__DelegateSignature
struct UWG_MainMenu_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_129_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WG_MainMenu_Button.WG_MainMenu_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_142_OnButtonHoverEvent__DelegateSignature
struct UWG_MainMenu_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_142_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WG_MainMenu_Button.WG_MainMenu_Button_C.PreConstruct
struct UWG_MainMenu_Button_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MainMenu_Button.WG_MainMenu_Button_C.UpdateFontSize
struct UWG_MainMenu_Button_C_UpdateFontSize_Params
{
};

// Function WG_MainMenu_Button.WG_MainMenu_Button_C.ExecuteUbergraph_WG_MainMenu_Button
struct UWG_MainMenu_Button_C_ExecuteUbergraph_WG_MainMenu_Button_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MainMenu_Button.WG_MainMenu_Button_C.OnButtonClicked__DelegateSignature
struct UWG_MainMenu_Button_C_OnButtonClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
