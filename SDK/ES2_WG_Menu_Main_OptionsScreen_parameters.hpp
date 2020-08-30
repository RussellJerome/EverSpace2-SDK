#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Main_OptionsScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.HasCurrentMenuUnappliedChanges
struct UWG_Menu_Main_OptionsScreen_C_HasCurrentMenuUnappliedChanges_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.LoadOptionsWidgetClass
struct UWG_Menu_Main_OptionsScreen_C_LoadOptionsWidgetClass_Params
{
	int*                                               TabIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.OnFocusReceived
struct UWG_Menu_Main_OptionsScreen_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.OnKeyDown
struct UWG_Menu_Main_OptionsScreen_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.Construct
struct UWG_Menu_Main_OptionsScreen_C_Construct_Params
{
};

// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.SubTabIndexChanged
struct UWG_Menu_Main_OptionsScreen_C_SubTabIndexChanged_Params
{
	int*                                               TabIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.PreConstruct
struct UWG_Menu_Main_OptionsScreen_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.OnResumeGameRequest
struct UWG_Menu_Main_OptionsScreen_C_OnResumeGameRequest_Params
{
};

// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.PreviousTab
struct UWG_Menu_Main_OptionsScreen_C_PreviousTab_Params
{
};

// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.NextTab
struct UWG_Menu_Main_OptionsScreen_C_NextTab_Params
{
};

// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.InitializeMenu
struct UWG_Menu_Main_OptionsScreen_C_InitializeMenu_Params
{
};

// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.ExecuteUbergraph_WG_Menu_Main_OptionsScreen
struct UWG_Menu_Main_OptionsScreen_C_ExecuteUbergraph_WG_Menu_Main_OptionsScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
