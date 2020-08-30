#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_JobOffer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_JobOffer.WG_JobOffer_C.OnFocusReceived
struct UWG_JobOffer_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_JobOffer.WG_JobOffer_C.Construct
struct UWG_JobOffer_C_Construct_Params
{
};

// Function WG_JobOffer.WG_JobOffer_C.UpdateButtonColor
struct UWG_JobOffer_C_UpdateButtonColor_Params
{
};

// Function WG_JobOffer.WG_JobOffer_C.BndEvt__Butto_K2Node_ComponentBoundEvent_178_OnButtonHoverEvent__DelegateSignature
struct UWG_JobOffer_C_BndEvt__Butto_K2Node_ComponentBoundEvent_178_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WG_JobOffer.WG_JobOffer_C.BndEvt__Butto_K2Node_ComponentBoundEvent_191_OnButtonHoverEvent__DelegateSignature
struct UWG_JobOffer_C_BndEvt__Butto_K2Node_ComponentBoundEvent_191_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WG_JobOffer.WG_JobOffer_C.Tick
struct UWG_JobOffer_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_JobOffer.WG_JobOffer_C.ExecuteUbergraph_WG_JobOffer
struct UWG_JobOffer_C_ExecuteUbergraph_WG_JobOffer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_JobOffer.WG_JobOffer_C.OnSelected__DelegateSignature
struct UWG_JobOffer_C_OnSelected__DelegateSignature_Params
{
	class UWG_JobOffer_C**                             WidgetRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
