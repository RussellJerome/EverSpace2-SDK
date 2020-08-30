#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ShipInventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_ShipInventory.WG_ShipInventory_C.CycleCompareItem
struct UWG_ShipInventory_C_CycleCompareItem_Params
{
};

// Function WG_ShipInventory.WG_ShipInventory_C.DehighlightCargoInventories
struct UWG_ShipInventory_C_DehighlightCargoInventories_Params
{
};

// Function WG_ShipInventory.WG_ShipInventory_C.GetSlotCountOfCategory
struct UWG_ShipInventory_C_GetSlotCountOfCategory_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipInventory.WG_ShipInventory_C.FadeInOut
struct UWG_ShipInventory_C_FadeInOut_Params
{
	bool*                                              IsFadeIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipInventory.WG_ShipInventory_C.GetHighlightedInventory
struct UWG_ShipInventory_C_GetHighlightedInventory_Params
{
	class UWG_Inventory_C*                             Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ShipInventory.WG_ShipInventory_C.HighlightInventoryToCompare
struct UWG_ShipInventory_C_HighlightInventoryToCompare_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_C**                            Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipInventory.WG_ShipInventory_C.SetSelectedSlotInfo
struct UWG_ShipInventory_C_SetSelectedSlotInfo_Params
{
	class UWG_Inventory_Slot_C**                       SelectedSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ShipInventory.WG_ShipInventory_C.HasFreeCargoSpace
struct UWG_ShipInventory_C_HasFreeCargoSpace_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipInventory.WG_ShipInventory_C.GetInventoryByCategory
struct UWG_ShipInventory_C_GetInventoryByCategory_Params
{
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_C*                             Inventory;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ShipInventory.WG_ShipInventory_C.OnFocusReceived
struct UWG_ShipInventory_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_ShipInventory.WG_ShipInventory_C.SetAllowItemSwap
struct UWG_ShipInventory_C_SetAllowItemSwap_Params
{
	bool*                                              Allow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipInventory.WG_ShipInventory_C.GetAllModuleInventories
struct UWG_ShipInventory_C_GetAllModuleInventories_Params
{
	TArray<class UWG_Inventory_C*>                     Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function WG_ShipInventory.WG_ShipInventory_C.SetAllowEquipmentActions
struct UWG_ShipInventory_C_SetAllowEquipmentActions_Params
{
	bool*                                              Weapons;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Consumables;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Modules;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipInventory.WG_ShipInventory_C.Construct
struct UWG_ShipInventory_C_Construct_Params
{
};

// Function WG_ShipInventory.WG_ShipInventory_C.OnCargoUnitInventoryRefreshed
struct UWG_ShipInventory_C_OnCargoUnitInventoryRefreshed_Params
{
	class UWG_Inventory_C**                            InventoryWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ShipInventory.WG_ShipInventory_C.ReInit
struct UWG_ShipInventory_C_ReInit_Params
{
};

// Function WG_ShipInventory.WG_ShipInventory_C.SetTransferInventoryForAll
struct UWG_ShipInventory_C_SetTransferInventoryForAll_Params
{
	class UWG_Inventory_C**                            TransferInventoryWidget;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_ShipInventory.WG_ShipInventory_C.SetInventoryForAll
struct UWG_ShipInventory_C_SetInventoryForAll_Params
{
};

// Function WG_ShipInventory.WG_ShipInventory_C.PreConstruct
struct UWG_ShipInventory_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipInventory.WG_ShipInventory_C.StartFadeIn
struct UWG_ShipInventory_C_StartFadeIn_Params
{
};

// Function WG_ShipInventory.WG_ShipInventory_C.StopFadeIn
struct UWG_ShipInventory_C_StopFadeIn_Params
{
};

// Function WG_ShipInventory.WG_ShipInventory_C.ExecuteUbergraph_WG_ShipInventory
struct UWG_ShipInventory_C_ExecuteUbergraph_WG_ShipInventory_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipInventory.WG_ShipInventory_C.OnCompareInventoryChanged__DelegateSignature
struct UWG_ShipInventory_C_OnCompareInventoryChanged__DelegateSignature_Params
{
};

// Function WG_ShipInventory.WG_ShipInventory_C.OnCargoUnitChanged__DelegateSignature
struct UWG_ShipInventory_C_OnCargoUnitChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
