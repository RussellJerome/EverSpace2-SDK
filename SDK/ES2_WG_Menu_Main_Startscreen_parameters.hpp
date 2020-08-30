#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Main_Startscreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Get_PrototypeHintOverlay_Visibility_1
struct UWG_Menu_Main_Startscreen_C_Get_PrototypeHintOverlay_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.OnKeyDown
struct UWG_Menu_Main_Startscreen_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.SelectMenuButton
struct UWG_Menu_Main_Startscreen_C_SelectMenuButton_Params
{
	int*                                               ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Get_SkipTutorialButton_Visibility
struct UWG_Menu_Main_Startscreen_C_Get_SkipTutorialButton_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.IsTutorialMission
struct UWG_Menu_Main_Startscreen_C_IsTutorialMission_Params
{
	class AActor**                                     Mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.OnFocusReceived
struct UWG_Menu_Main_Startscreen_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Get_ActionFreezeButton_Visibility
struct UWG_Menu_Main_Startscreen_C_Get_ActionFreezeButton_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Get_NewGameButton_Visibility
struct UWG_Menu_Main_Startscreen_C_Get_NewGameButton_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Get_ContinueGameButton_Visibility
struct UWG_Menu_Main_Startscreen_C_Get_ContinueGameButton_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.PreConstruct
struct UWG_Menu_Main_Startscreen_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Construct
struct UWG_Menu_Main_Startscreen_C_Construct_Params
{
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.PressedConfirmAction
struct UWG_Menu_Main_Startscreen_C_PressedConfirmAction_Params
{
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.RefreshButtons
struct UWG_Menu_Main_Startscreen_C_RefreshButtons_Params
{
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.BndEvt__ContinueGameButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
struct UWG_Menu_Main_Startscreen_C_BndEvt__ContinueGameButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.BndEvt__NewGameButtonNew_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
struct UWG_Menu_Main_Startscreen_C_BndEvt__NewGameButtonNew_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.BndEvt__SkipTutorialButtonNew_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature
struct UWG_Menu_Main_Startscreen_C_BndEvt__SkipTutorialButtonNew_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.BndEvt__ActionFreezeButtonNew_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature
struct UWG_Menu_Main_Startscreen_C_BndEvt__ActionFreezeButtonNew_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.BndEvt__QuitButtonNew_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature
struct UWG_Menu_Main_Startscreen_C_BndEvt__QuitButtonNew_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.ContinueGame
struct UWG_Menu_Main_Startscreen_C_ContinueGame_Params
{
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.PressedCancelAction
struct UWG_Menu_Main_Startscreen_C_PressedCancelAction_Params
{
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.Tick
struct UWG_Menu_Main_Startscreen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.FadedOut
struct UWG_Menu_Main_Startscreen_C_FadedOut_Params
{
	class UWG_Fullscreen_Fade_C**                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.ConfirmQuit
struct UWG_Menu_Main_Startscreen_C_ConfirmQuit_Params
{
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.InitializeMenu
struct UWG_Menu_Main_Startscreen_C_InitializeMenu_Params
{
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.FadeOutAfterContinuePress
struct UWG_Menu_Main_Startscreen_C_FadeOutAfterContinuePress_Params
{
	class UWG_Fullscreen_Fade_C**                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.ReturnToMainMenuFade
struct UWG_Menu_Main_Startscreen_C_ReturnToMainMenuFade_Params
{
	class UWG_Fullscreen_Fade_C**                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Menu_Main_Startscreen.WG_Menu_Main_Startscreen_C.ExecuteUbergraph_WG_Menu_Main_Startscreen
struct UWG_Menu_Main_Startscreen_C_ExecuteUbergraph_WG_Menu_Main_Startscreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
