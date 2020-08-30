#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Options_Header_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.GetTopButtonGameColor
struct UWG_Menu_Options_Header_C_GetTopButtonGameColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.GetTopButtonInputColor
struct UWG_Menu_Options_Header_C_GetTopButtonInputColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.GetTopButtonAudioColor
struct UWG_Menu_Options_Header_C_GetTopButtonAudioColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.GetTopButtonMainColor
struct UWG_Menu_Options_Header_C_GetTopButtonMainColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.Construct
struct UWG_Menu_Options_Header_C_Construct_Params
{
};

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.BndEvt__TopButtonVideo_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
struct UWG_Menu_Options_Header_C_BndEvt__TopButtonVideo_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
{
};

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.BndEvt__TopButtonAudio_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
struct UWG_Menu_Options_Header_C_BndEvt__TopButtonAudio_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
{
};

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.BndEvt__TopButtonInput_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
struct UWG_Menu_Options_Header_C_BndEvt__TopButtonInput_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params
{
};

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.BndEvt__ActionButton_PrevTab_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature
struct UWG_Menu_Options_Header_C_BndEvt__ActionButton_PrevTab_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.BndEvt__ActionButton_NextTab_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature
struct UWG_Menu_Options_Header_C_BndEvt__ActionButton_NextTab_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.SelectSubTab
struct UWG_Menu_Options_Header_C_SelectSubTab_Params
{
	int*                                               NewTabIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.PreviousTab
struct UWG_Menu_Options_Header_C_PreviousTab_Params
{
};

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.NextTab
struct UWG_Menu_Options_Header_C_NextTab_Params
{
};

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.ConfirmedDiscardChanges
struct UWG_Menu_Options_Header_C_ConfirmedDiscardChanges_Params
{
};

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.ExecuteUbergraph_WG_Menu_Options_Header
struct UWG_Menu_Options_Header_C_ExecuteUbergraph_WG_Menu_Options_Header_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Options_Header.WG_Menu_Options_Header_C.SubTabIndexChanged__DelegateSignature
struct UWG_Menu_Options_Header_C_SubTabIndexChanged__DelegateSignature_Params
{
	int*                                               TabIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
