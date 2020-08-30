#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Tutorial_Message_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Tutorial_Message.WG_Tutorial_Message_C.GetActionNameFormatArguments
struct UWG_Tutorial_Message_C_GetActionNameFormatArguments_Params
{
	TArray<struct FFindReplaceTextArgument>            Arguments;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function WG_Tutorial_Message.WG_Tutorial_Message_C.OnKeyDown
struct UWG_Tutorial_Message_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Tutorial_Message.WG_Tutorial_Message_C.CloseMessage
struct UWG_Tutorial_Message_C_CloseMessage_Params
{
};

// Function WG_Tutorial_Message.WG_Tutorial_Message_C.NoEvent
struct UWG_Tutorial_Message_C_NoEvent_Params
{
};

// Function WG_Tutorial_Message.WG_Tutorial_Message_C.GamepadModeChanged
struct UWG_Tutorial_Message_C_GamepadModeChanged_Params
{
	bool*                                              bNewGamepadMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Tutorial_Message.WG_Tutorial_Message_C.UpdateRichText
struct UWG_Tutorial_Message_C_UpdateRichText_Params
{
};

// Function WG_Tutorial_Message.WG_Tutorial_Message_C.Construct
struct UWG_Tutorial_Message_C_Construct_Params
{
};

// Function WG_Tutorial_Message.WG_Tutorial_Message_C.PreConstruct
struct UWG_Tutorial_Message_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Tutorial_Message.WG_Tutorial_Message_C.OnPauseChanged
struct UWG_Tutorial_Message_C_OnPauseChanged_Params
{
	bool*                                              bPaused;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Tutorial_Message.WG_Tutorial_Message_C.ExecuteUbergraph_WG_Tutorial_Message
struct UWG_Tutorial_Message_C_ExecuteUbergraph_WG_Tutorial_Message_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Tutorial_Message.WG_Tutorial_Message_C.OnClosed__DelegateSignature
struct UWG_Tutorial_Message_C_OnClosed__DelegateSignature_Params
{
	class UWG_Tutorial_Message_C**                     TutorialMessage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
