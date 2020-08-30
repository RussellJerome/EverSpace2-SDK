#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ES2_ProgressBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.SetTemporaryMaximumAmount
struct UWG_ES2_ProgressBar_C_SetTemporaryMaximumAmount_Params
{
	int*                                               TempMaximum;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnFocusReceived
struct UWG_ES2_ProgressBar_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnKeyDown
struct UWG_ES2_ProgressBar_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetCurrentAmount
struct UWG_ES2_ProgressBar_C_GetCurrentAmount_Params
{
	int                                                Amount;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetAmountFromSliderValue
struct UWG_ES2_ProgressBar_C_GetAmountFromSliderValue_Params
{
	float*                                             SliderValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.SetSliderValue
struct UWG_ES2_ProgressBar_C_SetSliderValue_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetPreviousSlotIndex
struct UWG_ES2_ProgressBar_C_GetPreviousSlotIndex_Params
{
	int*                                               CurrentAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetNextSlotIndex
struct UWG_ES2_ProgressBar_C_GetNextSlotIndex_Params
{
	int*                                               CurrentAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.AddQuickSelectData
struct UWG_ES2_ProgressBar_C_AddQuickSelectData_Params
{
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetPositionOnBar
struct UWG_ES2_ProgressBar_C_GetPositionOnBar_Params
{
	float*                                             PercentValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PositionX;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetAmountInPercent
struct UWG_ES2_ProgressBar_C_GetAmountInPercent_Params
{
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percentage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.SetMarkerPosition
struct UWG_ES2_ProgressBar_C_SetMarkerPosition_Params
{
	int*                                               MarkerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.CreateMarker
struct UWG_ES2_ProgressBar_C_CreateMarker_Params
{
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.AddIndicator
struct UWG_ES2_ProgressBar_C_AddIndicator_Params
{
	bool*                                              HasBorderStyle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PositionX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnNavigateToNextSlotBorder
struct UWG_ES2_ProgressBar_C_OnNavigateToNextSlotBorder_Params
{
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnNavigateToPreviousSlotBorder
struct UWG_ES2_ProgressBar_C_OnNavigateToPreviousSlotBorder_Params
{
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnSelectedAmountChanged
struct UWG_ES2_ProgressBar_C_OnSelectedAmountChanged_Params
{
	int*                                               New_Amount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.Tick
struct UWG_ES2_ProgressBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.BndEvt__ESSlider_148_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
struct UWG_ES2_ProgressBar_C_BndEvt__ESSlider_148_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.BndEvt__ESSlider_Progress_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
struct UWG_ES2_ProgressBar_C_BndEvt__ESSlider_Progress_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.BndEvt__ESSlider_Progress_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
struct UWG_ES2_ProgressBar_C_BndEvt__ESSlider_Progress_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.Init
struct UWG_ES2_ProgressBar_C_Init_Params
{
	int*                                               InitialAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsInitialAmountMinimum;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.PreConstruct
struct UWG_ES2_ProgressBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.SetValue
struct UWG_ES2_ProgressBar_C_SetValue_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.Deactivate
struct UWG_ES2_ProgressBar_C_Deactivate_Params
{
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.ExecuteUbergraph_WG_ES2_ProgressBar
struct UWG_ES2_ProgressBar_C_ExecuteUbergraph_WG_ES2_ProgressBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnAmountChanged__DelegateSignature
struct UWG_ES2_ProgressBar_C_OnAmountChanged__DelegateSignature_Params
{
	int*                                               NewAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
