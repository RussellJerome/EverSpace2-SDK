#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Main_Header_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.GetTopButtonSaveColor
struct UWG_Menu_Main_Header_C_GetTopButtonSaveColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.GetTopButtonLoadColor
struct UWG_Menu_Main_Header_C_GetTopButtonLoadColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.GetVisibility_Save
struct UWG_Menu_Main_Header_C_GetVisibility_Save_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.GetTopButtonOptionsColor
struct UWG_Menu_Main_Header_C_GetTopButtonOptionsColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.GetTopButtonMainColor
struct UWG_Menu_Main_Header_C_GetTopButtonMainColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.BndEvt__TopButtonMain_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
struct UWG_Menu_Main_Header_C_BndEvt__TopButtonMain_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
{
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.BndEvt__TopButtonOptions_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
struct UWG_Menu_Main_Header_C_BndEvt__TopButtonOptions_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params
{
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.BndEvt__ActionButton_PrevTab_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
struct UWG_Menu_Main_Header_C_BndEvt__ActionButton_PrevTab_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.BndEvt__ActionButton_NextTab_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature
struct UWG_Menu_Main_Header_C_BndEvt__ActionButton_NextTab_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.BndEvt__TopButtonSave_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature
struct UWG_Menu_Main_Header_C_BndEvt__TopButtonSave_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature_Params
{
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.BndEvt__TopButtonLoad_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature
struct UWG_Menu_Main_Header_C_BndEvt__TopButtonLoad_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature_Params
{
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.Init
struct UWG_Menu_Main_Header_C_Init_Params
{
	bool*                                              InPauseMenu;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.PreviousTab
struct UWG_Menu_Main_Header_C_PreviousTab_Params
{
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.NextTab
struct UWG_Menu_Main_Header_C_NextTab_Params
{
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.SelectTab
struct UWG_Menu_Main_Header_C_SelectTab_Params
{
	int*                                               NewTabIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.ConfirmSelectTab
struct UWG_Menu_Main_Header_C_ConfirmSelectTab_Params
{
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.ExecuteUbergraph_WG_Menu_Main_Header
struct UWG_Menu_Main_Header_C_ExecuteUbergraph_WG_Menu_Main_Header_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_Header.WG_Menu_Main_Header_C.TabIndexChanged__DelegateSignature
struct UWG_Menu_Main_Header_C_TabIndexChanged__DelegateSignature_Params
{
	int*                                               NewTabIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
