#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Main_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Menu_Main.WG_Menu_Main_C.GetVisibility_1
struct UWG_Menu_Main_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main.WG_Menu_Main_C.Get_BackgroundBlurPauseMenu_Visibility_1
struct UWG_Menu_Main_C_Get_BackgroundBlurPauseMenu_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main.WG_Menu_Main_C.OnKeyDown
struct UWG_Menu_Main_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Main.WG_Menu_Main_C.GetWidgetClassForTabIndex
struct UWG_Menu_Main_C_GetWidgetClassForTabIndex_Params
{
	int*                                               TabIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMainMenuTab>                          WidgetClass;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main.WG_Menu_Main_C.LoadWidgetClassByType
struct UWG_Menu_Main_C_LoadWidgetClassByType_Params
{
	TEnumAsByte<EMainMenuTab>*                         TabType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Menu_Main_Screen_Base_C*                 Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Menu_Main.WG_Menu_Main_C.SetNavigationEnabled
struct UWG_Menu_Main_C_SetNavigationEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main.WG_Menu_Main_C.OnFocusReceived
struct UWG_Menu_Main_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Main.WG_Menu_Main_C.Construct
struct UWG_Menu_Main_C_Construct_Params
{
};

// Function WG_Menu_Main.WG_Menu_Main_C.TabIndexChanged
struct UWG_Menu_Main_C_TabIndexChanged_Params
{
	int*                                               NewTabIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main.WG_Menu_Main_C.ResumeGame
struct UWG_Menu_Main_C_ResumeGame_Params
{
};

// Function WG_Menu_Main.WG_Menu_Main_C.PreviousTab
struct UWG_Menu_Main_C_PreviousTab_Params
{
};

// Function WG_Menu_Main.WG_Menu_Main_C.NextTab
struct UWG_Menu_Main_C_NextTab_Params
{
};

// Function WG_Menu_Main.WG_Menu_Main_C.ConfirmDiscardChanges
struct UWG_Menu_Main_C_ConfirmDiscardChanges_Params
{
};

// Function WG_Menu_Main.WG_Menu_Main_C.PreConstruct
struct UWG_Menu_Main_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main.WG_Menu_Main_C.ExecuteUbergraph_WG_Menu_Main
struct UWG_Menu_Main_C_ExecuteUbergraph_WG_Menu_Main_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main.WG_Menu_Main_C.OnResume__DelegateSignature
struct UWG_Menu_Main_C_OnResume__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
