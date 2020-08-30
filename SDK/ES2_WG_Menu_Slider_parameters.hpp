#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Slider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Menu_Slider.WG_Menu_Slider_C.OnKeyDown
struct UWG_Menu_Slider_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Slider.WG_Menu_Slider_C.GetSliderProgress
struct UWG_Menu_Slider_C_GetSliderProgress_Params
{
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Slider.WG_Menu_Slider_C.SetSliderProgress
struct UWG_Menu_Slider_C_SetSliderProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Slider.WG_Menu_Slider_C.GetRightBarColor
struct UWG_Menu_Slider_C_GetRightBarColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Slider.WG_Menu_Slider_C.GetLeftBarColor
struct UWG_Menu_Slider_C_GetLeftBarColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Slider.WG_Menu_Slider_C.OnProgressChanged__DelegateSignature
struct UWG_Menu_Slider_C_OnProgressChanged__DelegateSignature_Params
{
	float*                                             NewProgress;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
