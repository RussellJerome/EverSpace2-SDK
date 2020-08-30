#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Jobs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Jobs.WG_Jobs_C.CanItemInfoVisibilityNotBeChanged
struct UWG_Jobs_C_CanItemInfoVisibilityNotBeChanged_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Jobs.WG_Jobs_C.GetSelectedSlot
struct UWG_Jobs_C_GetSelectedSlot_Params
{
	class UWG_Inventory_Slot_C*                        Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Jobs.WG_Jobs_C.GetItemInfoWidget
struct UWG_Jobs_C_GetItemInfoWidget_Params
{
	class UWG_Item_Info_C*                             ItemInfoWidget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Jobs.WG_Jobs_C.OnKeyUp
struct UWG_Jobs_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Jobs.WG_Jobs_C.Get_TxtNoOffers_Visibility_1
struct UWG_Jobs_C_Get_TxtNoOffers_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Jobs.WG_Jobs_C.OnKeyDown
struct UWG_Jobs_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Jobs.WG_Jobs_C.OnFocusReceived
struct UWG_Jobs_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Jobs.WG_Jobs_C.FadeInOut
struct UWG_Jobs_C_FadeInOut_Params
{
	bool*                                              IsFadeIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Jobs.WG_Jobs_C.OnGamepadModeChanged
struct UWG_Jobs_C_OnGamepadModeChanged_Params
{
	bool*                                              IsGamepadMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Jobs.WG_Jobs_C.Refresh
struct UWG_Jobs_C_Refresh_Params
{
};

// Function WG_Jobs.WG_Jobs_C.PreConstruct
struct UWG_Jobs_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Jobs.WG_Jobs_C.Construct
struct UWG_Jobs_C_Construct_Params
{
};

// Function WG_Jobs.WG_Jobs_C.PressedBack
struct UWG_Jobs_C_PressedBack_Params
{
};

// Function WG_Jobs.WG_Jobs_C.PressedAcceptJob
struct UWG_Jobs_C_PressedAcceptJob_Params
{
};

// Function WG_Jobs.WG_Jobs_C.JobOfferButtonSelected
struct UWG_Jobs_C_JobOfferButtonSelected_Params
{
	class UWG_JobOffer_C**                             WidgetRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Jobs.WG_Jobs_C.InitWithStationID
struct UWG_Jobs_C_InitWithStationID_Params
{
	struct FName*                                      StationID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Menu_Ingame_C**                          MenuIngameRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Jobs.WG_Jobs_C.ExecuteUbergraph_WG_Jobs
struct UWG_Jobs_C_ExecuteUbergraph_WG_Jobs_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
