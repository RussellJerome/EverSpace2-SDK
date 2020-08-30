#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_LoadOrSaveGame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.OnKeyDown
struct UWG_LoadOrSaveGame_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.OnFocusReceived
struct UWG_LoadOrSaveGame_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.PreConstruct
struct UWG_LoadOrSaveGame_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.ButrtonClicked
struct UWG_LoadOrSaveGame_C_ButrtonClicked_Params
{
	class UWG_SaveGame_Button_C**                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.CreateNewSaveGame
struct UWG_LoadOrSaveGame_C_CreateNewSaveGame_Params
{
};

// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.OverwriteConfirmed
struct UWG_LoadOrSaveGame_C_OverwriteConfirmed_Params
{
	class UWG_ModalDialog_C**                          WG_ModalDialog;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.InitializeMenu
struct UWG_LoadOrSaveGame_C_InitializeMenu_Params
{
};

// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.OnOKPressed_Event_1
struct UWG_LoadOrSaveGame_C_OnOKPressed_Event_1_Params
{
	class UWG_ModalDialog_C**                          WG_ModalDialog;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.PressedQuitAction
struct UWG_LoadOrSaveGame_C_PressedQuitAction_Params
{
};

// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.ExecuteUbergraph_WG_LoadOrSaveGame
struct UWG_LoadOrSaveGame_C_ExecuteUbergraph_WG_LoadOrSaveGame_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_LoadOrSaveGame.WG_LoadOrSaveGame_C.OnClosed__DelegateSignature
struct UWG_LoadOrSaveGame_C_OnClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
