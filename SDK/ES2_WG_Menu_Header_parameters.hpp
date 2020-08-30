#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Header_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Menu_Header.WG_Menu_Header_C.Get_CanvasPanel_Location_Visibility_1
struct UWG_Menu_Header_C_Get_CanvasPanel_Location_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Header.WG_Menu_Header_C.HandleKeyDown
struct UWG_Menu_Header_C_HandleKeyDown_Params
{
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bHandled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Header.WG_Menu_Header_C.PreConstruct
struct UWG_Menu_Header_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Header.WG_Menu_Header_C.Construct
struct UWG_Menu_Header_C_Construct_Params
{
};

// Function WG_Menu_Header.WG_Menu_Header_C.SetTab
struct UWG_Menu_Header_C_SetTab_Params
{
	TEnumAsByte<EMenuTab>*                             Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Header.WG_Menu_Header_C.InitWithTabs
struct UWG_Menu_Header_C_InitWithTabs_Params
{
	TArray<TEnumAsByte<EMenuTab>>*                     Tabs;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WG_Menu_Header.WG_Menu_Header_C.SetLocationText
struct UWG_Menu_Header_C_SetLocationText_Params
{
	struct FText*                                      StationText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      SystemText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Menu_Header.WG_Menu_Header_C.SelectNextOrPreviousTab
struct UWG_Menu_Header_C_SelectNextOrPreviousTab_Params
{
	bool*                                              Next;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Header.WG_Menu_Header_C.ExecuteUbergraph_WG_Menu_Header
struct UWG_Menu_Header_C_ExecuteUbergraph_WG_Menu_Header_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Header.WG_Menu_Header_C.OnTabChanged__DelegateSignature
struct UWG_Menu_Header_C_OnTabChanged__DelegateSignature_Params
{
	TEnumAsByte<EMenuTab>*                             Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
