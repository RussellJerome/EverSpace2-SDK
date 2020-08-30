#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MissionButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_MissionButton.WG_MissionButton_C.OnFocusReceived
struct UWG_MissionButton_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_MissionButton.WG_MissionButton_C.Construct
struct UWG_MissionButton_C_Construct_Params
{
};

// Function WG_MissionButton.WG_MissionButton_C.Tick
struct UWG_MissionButton_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MissionButton.WG_MissionButton_C.UpdateButtonColor
struct UWG_MissionButton_C_UpdateButtonColor_Params
{
};

// Function WG_MissionButton.WG_MissionButton_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UWG_MissionButton_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WG_MissionButton.WG_MissionButton_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
struct UWG_MissionButton_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WG_MissionButton.WG_MissionButton_C.RefreshTracked
struct UWG_MissionButton_C_RefreshTracked_Params
{
	bool*                                              Tracked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MissionButton.WG_MissionButton_C.ExecuteUbergraph_WG_MissionButton
struct UWG_MissionButton_C_ExecuteUbergraph_WG_MissionButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MissionButton.WG_MissionButton_C.OnSelected__DelegateSignature
struct UWG_MissionButton_C_OnSelected__DelegateSignature_Params
{
	class UWG_MissionButton_C**                        MissionButton;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
