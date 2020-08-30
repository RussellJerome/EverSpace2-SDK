#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Item_Selection_Modal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.On_BG_Close_MouseButtonUp_1
struct UWG_Item_Selection_Modal_C_On_BG_Close_MouseButtonUp_1_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.GetSlotInfoOfSource
struct UWG_Item_Selection_Modal_C_GetSlotInfoOfSource_Params
{
	struct FSTRCT_ItemSelectionSlotInfo                SlotInfo;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.FadeInOut
struct UWG_Item_Selection_Modal_C_FadeInOut_Params
{
	bool*                                              IsFadeIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.OnKeyUp
struct UWG_Item_Selection_Modal_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.CloseAndFocusCaller
struct UWG_Item_Selection_Modal_C_CloseAndFocusCaller_Params
{
};

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.GetSlotInfoAtIndex
struct UWG_Item_Selection_Modal_C_GetSlotInfoAtIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSTRCT_ItemSelectionSlotInfo                SlotInfo;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.OnKeyDown
struct UWG_Item_Selection_Modal_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.OnFocusReceived
struct UWG_Item_Selection_Modal_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.PreConstruct
struct UWG_Item_Selection_Modal_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.Construct
struct UWG_Item_Selection_Modal_C_Construct_Params
{
};

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.PressedEquip
struct UWG_Item_Selection_Modal_C_PressedEquip_Params
{
};

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.PressedBack
struct UWG_Item_Selection_Modal_C_PressedBack_Params
{
};

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.UpdateItemInfos
struct UWG_Item_Selection_Modal_C_UpdateItemInfos_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.Tick
struct UWG_Item_Selection_Modal_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.ExecuteUbergraph_WG_Item_Selection_Modal
struct UWG_Item_Selection_Modal_C_ExecuteUbergraph_WG_Item_Selection_Modal_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
