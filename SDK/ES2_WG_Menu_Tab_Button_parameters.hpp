#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Tab_Button_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.PreConstruct
struct UWG_Menu_Tab_Button_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.SetSelected
struct UWG_Menu_Tab_Button_C_SetSelected_Params
{
	bool*                                              Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
struct UWG_Menu_Tab_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWG_Menu_Tab_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWG_Menu_Tab_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.ExecuteUbergraph_WG_Menu_Tab_Button
struct UWG_Menu_Tab_Button_C_ExecuteUbergraph_WG_Menu_Tab_Button_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.OnButtonClicked__DelegateSignature
struct UWG_Menu_Tab_Button_C_OnButtonClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTab>*                             Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
