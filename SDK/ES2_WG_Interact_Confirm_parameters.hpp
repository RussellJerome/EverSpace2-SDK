#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Interact_Confirm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Interact_Confirm.WG_Interact_Confirm_C.OnInitWithInteractComponent
struct UWG_Interact_Confirm_C_OnInitWithInteractComponent_Params
{
	class UInteractComponent**                         NewInteractComponent;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     NewActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Interact_Confirm.WG_Interact_Confirm_C.CustomEvent_1
struct UWG_Interact_Confirm_C_CustomEvent_1_Params
{
};

// Function WG_Interact_Confirm.WG_Interact_Confirm_C.Tick
struct UWG_Interact_Confirm_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Interact_Confirm.WG_Interact_Confirm_C.CustomEvent_2
struct UWG_Interact_Confirm_C_CustomEvent_2_Params
{
};

// Function WG_Interact_Confirm.WG_Interact_Confirm_C.OnAttachedToMarkerWidget
struct UWG_Interact_Confirm_C_OnAttachedToMarkerWidget_Params
{
};

// Function WG_Interact_Confirm.WG_Interact_Confirm_C.OnDetachedFromMarkerWidget
struct UWG_Interact_Confirm_C_OnDetachedFromMarkerWidget_Params
{
};

// Function WG_Interact_Confirm.WG_Interact_Confirm_C.ExecuteUbergraph_WG_Interact_Confirm
struct UWG_Interact_Confirm_C_ExecuteUbergraph_WG_Interact_Confirm_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
