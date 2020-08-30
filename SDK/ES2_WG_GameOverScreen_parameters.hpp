#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_GameOverScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_GameOverScreen.WG_GameOverScreen_C.GetVisibility_2
struct UWG_GameOverScreen_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.GetVisibility_1
struct UWG_GameOverScreen_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.Fade02Finishing
struct UWG_GameOverScreen_C_Fade02Finishing_Params
{
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.Fade01Finishing
struct UWG_GameOverScreen_C_Fade01Finishing_Params
{
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.OnFocusReceived
struct UWG_GameOverScreen_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.PressedConfirmAction
struct UWG_GameOverScreen_C_PressedConfirmAction_Params
{
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.BndEvt__LastCheckpointButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
struct UWG_GameOverScreen_C_BndEvt__LastCheckpointButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.Tick
struct UWG_GameOverScreen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.BndEvt__ReviveButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
struct UWG_GameOverScreen_C_BndEvt__ReviveButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.OnReviveHovered
struct UWG_GameOverScreen_C_OnReviveHovered_Params
{
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.OnReviveUnhovered
struct UWG_GameOverScreen_C_OnReviveUnhovered_Params
{
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.Fade03Finished
struct UWG_GameOverScreen_C_Fade03Finished_Params
{
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.CloseWidget
struct UWG_GameOverScreen_C_CloseWidget_Params
{
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
struct UWG_GameOverScreen_C_BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
{
	struct FInputActionButtonInfo*                     ActionInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.Construct
struct UWG_GameOverScreen_C_Construct_Params
{
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.InitDamageCauserList
struct UWG_GameOverScreen_C_InitDamageCauserList_Params
{
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.InitDamageCauserMarker
struct UWG_GameOverScreen_C_InitDamageCauserMarker_Params
{
	TEnumAsByte<EFactionRelation>*                     Relation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Deadly;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>*                          Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.InitDamageCauserIcon
struct UWG_GameOverScreen_C_InitDamageCauserIcon_Params
{
	struct FHUDMarkerData*                             MarkerData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Deadly;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.SetDamageCauserPrefixText
struct UWG_GameOverScreen_C_SetDamageCauserPrefixText_Params
{
	struct FText*                                      PrefixText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.ExecuteUbergraph_WG_GameOverScreen
struct UWG_GameOverScreen_C_ExecuteUbergraph_WG_GameOverScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.OnMainMenu__DelegateSignature
struct UWG_GameOverScreen_C_OnMainMenu__DelegateSignature_Params
{
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.OnLoadCheckpoint__DelegateSignature
struct UWG_GameOverScreen_C_OnLoadCheckpoint__DelegateSignature_Params
{
};

// Function WG_GameOverScreen.WG_GameOverScreen_C.OnRevive__DelegateSignature
struct UWG_GameOverScreen_C_OnRevive__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
