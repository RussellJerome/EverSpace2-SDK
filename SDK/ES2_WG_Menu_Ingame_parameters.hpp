#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Ingame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.GetActiveTabWidget
struct UWG_Menu_Ingame_C_GetActiveTabWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.SlotNavigationUpdate
struct UWG_Menu_Ingame_C_SlotNavigationUpdate_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.HandleItemInfoWidgets
struct UWG_Menu_Ingame_C_HandleItemInfoWidgets_Params
{
	class UWG_Item_Info_C**                            StaticItemInfoWidget;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_Inventory_Slot_C**                       SelectedSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              DoNotChangeVisibilityState;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceFadeInAnimation;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnPreviewKeyDown
struct UWG_Menu_Ingame_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnMouseWheel
struct UWG_Menu_Ingame_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnKeyDown
struct UWG_Menu_Ingame_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnFocusReceived
struct UWG_Menu_Ingame_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.CloseMenu
struct UWG_Menu_Ingame_C_CloseMenu_Params
{
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnTabChanged_Event_1
struct UWG_Menu_Ingame_C_OnTabChanged_Event_1_Params
{
	TEnumAsByte<EMenuTab>*                             Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.Construct
struct UWG_Menu_Ingame_C_Construct_Params
{
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.BlurInBGIfNeeded
struct UWG_Menu_Ingame_C_BlurInBGIfNeeded_Params
{
	bool*                                              Immediately;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.BlurOutBGIfNeeded
struct UWG_Menu_Ingame_C_BlurOutBGIfNeeded_Params
{
	bool*                                              Immediately;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.HandlePauseOnTabChangeOrMenuClose
struct UWG_Menu_Ingame_C_HandlePauseOnTabChangeOrMenuClose_Params
{
	bool*                                              bMenuClose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.PreConstruct
struct UWG_Menu_Ingame_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.Tick
struct UWG_Menu_Ingame_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnPlayerCreditsChanged_Event
struct UWG_Menu_Ingame_C_OnPlayerCreditsChanged_Event_Params
{
	int*                                               NewCredits;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CreditsDelta;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.ExecuteUbergraph_WG_Menu_Ingame
struct UWG_Menu_Ingame_C_ExecuteUbergraph_WG_Menu_Ingame_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnTabOpened__DelegateSignature
struct UWG_Menu_Ingame_C_OnTabOpened__DelegateSignature_Params
{
	TEnumAsByte<EMenuTab>*                             Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Ingame.WG_Menu_Ingame_C.OnClosed__DelegateSignature
struct UWG_Menu_Ingame_C_OnClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
