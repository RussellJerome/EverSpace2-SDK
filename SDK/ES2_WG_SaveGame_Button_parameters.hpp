#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_SaveGame_Button_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_SaveGame_Button.WG_SaveGame_Button_C.OnFocusReceived
struct UWG_SaveGame_Button_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_SaveGame_Button.WG_SaveGame_Button_C.Tick
struct UWG_SaveGame_Button_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_SaveGame_Button.WG_SaveGame_Button_C.UpdateButtonColor
struct UWG_SaveGame_Button_C_UpdateButtonColor_Params
{
};

// Function WG_SaveGame_Button.WG_SaveGame_Button_C.Init
struct UWG_SaveGame_Button_C_Init_Params
{
	class USaveGamePreview**                           SaveGamePreviewRef;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_SaveGame_Button.WG_SaveGame_Button_C.PreConstruct
struct UWG_SaveGame_Button_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_SaveGame_Button.WG_SaveGame_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
struct UWG_SaveGame_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WG_SaveGame_Button.WG_SaveGame_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature
struct UWG_SaveGame_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WG_SaveGame_Button.WG_SaveGame_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_89_OnButtonHoverEvent__DelegateSignature
struct UWG_SaveGame_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_89_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WG_SaveGame_Button.WG_SaveGame_Button_C.ExecuteUbergraph_WG_SaveGame_Button
struct UWG_SaveGame_Button_C_ExecuteUbergraph_WG_SaveGame_Button_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_SaveGame_Button.WG_SaveGame_Button_C.OnButtonClicked__DelegateSignature
struct UWG_SaveGame_Button_C_OnButtonClicked__DelegateSignature_Params
{
	class UWG_SaveGame_Button_C**                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
