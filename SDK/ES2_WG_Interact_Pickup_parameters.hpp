#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Interact_Pickup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Interact_Pickup.WG_Interact_Pickup_C.TickInteractionWidget
struct UWG_Interact_Pickup_C_TickInteractionWidget_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Interact_Pickup.WG_Interact_Pickup_C.OnInitWithInteractComponent
struct UWG_Interact_Pickup_C_OnInitWithInteractComponent_Params
{
	class UInteractComponent**                         NewInteractComponent;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     NewActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Interact_Pickup.WG_Interact_Pickup_C.OnWeaponChanged
struct UWG_Interact_Pickup_C_OnWeaponChanged_Params
{
	struct FWeaponInfo*                                WeaponInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Interact_Pickup.WG_Interact_Pickup_C.ExecuteUbergraph_WG_Interact_Pickup
struct UWG_Interact_Pickup_C_ExecuteUbergraph_WG_Interact_Pickup_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
