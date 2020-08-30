#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_EjectInventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_EjectInventory.WG_EjectInventory_C.Construct
struct UWG_EjectInventory_C_Construct_Params
{
};

// Function WG_EjectInventory.WG_EjectInventory_C.OnRefresh_DropInventory
struct UWG_EjectInventory_C_OnRefresh_DropInventory_Params
{
	class UWG_Inventory_C**                            InventoryWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_EjectInventory.WG_EjectInventory_C.SetTransferInventory
struct UWG_EjectInventory_C_SetTransferInventory_Params
{
	class UWG_Inventory_C**                            TransferInventory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_EjectInventory.WG_EjectInventory_C.OnVanishAnimFinished_Event_1
struct UWG_EjectInventory_C_OnVanishAnimFinished_Event_1_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_EjectInventory.WG_EjectInventory_C.ExecuteUbergraph_WG_EjectInventory
struct UWG_EjectInventory_C_ExecuteUbergraph_WG_EjectInventory_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
