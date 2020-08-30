#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Footer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Menu_Footer.WG_Menu_Footer_C.GetVisibility_1
struct UWG_Menu_Footer_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Menu_Footer.WG_Menu_Footer_C.HandleKeyUp
struct UWG_Menu_Footer_C_HandleKeyUp_Params
{
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bHandled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Footer.WG_Menu_Footer_C.OnMouseButtonDown
struct UWG_Menu_Footer_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Menu_Footer.WG_Menu_Footer_C.AddButton
struct UWG_Menu_Footer_C_AddButton_Params
{
	struct FInputActionButtonInfo*                     InputActionInfo;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWG_MenuAction_Button_C*                     Button;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Menu_Footer.WG_Menu_Footer_C.HandleKeyDown
struct UWG_Menu_Footer_C_HandleKeyDown_Params
{
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bHandled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Footer.WG_Menu_Footer_C.ClearButtons
struct UWG_Menu_Footer_C_ClearButtons_Params
{
};

// Function WG_Menu_Footer.WG_Menu_Footer_C.ExecuteUbergraph_WG_Menu_Footer
struct UWG_Menu_Footer_C_ExecuteUbergraph_WG_Menu_Footer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
