#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Prompt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Prompt.WG_Prompt_C.OnKeyDown
struct UWG_Prompt_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Prompt.WG_Prompt_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
struct UWG_Prompt_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Prompt.WG_Prompt_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
struct UWG_Prompt_C_BndEvt__ButtonOK_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Prompt.WG_Prompt_C.Construct
struct UWG_Prompt_C_Construct_Params
{
};

// Function WG_Prompt.WG_Prompt_C.PressedConfirm
struct UWG_Prompt_C_PressedConfirm_Params
{
};

// Function WG_Prompt.WG_Prompt_C.PressedCancel
struct UWG_Prompt_C_PressedCancel_Params
{
};

// Function WG_Prompt.WG_Prompt_C.ExecuteUbergraph_WG_Prompt
struct UWG_Prompt_C_ExecuteUbergraph_WG_Prompt_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Prompt.WG_Prompt_C.OnCancel__DelegateSignature
struct UWG_Prompt_C_OnCancel__DelegateSignature_Params
{
};

// Function WG_Prompt.WG_Prompt_C.OnConfirm__DelegateSignature
struct UWG_Prompt_C_OnConfirm__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
