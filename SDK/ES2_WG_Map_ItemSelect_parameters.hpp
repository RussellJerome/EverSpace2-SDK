#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_ItemSelect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Map_ItemSelect.WG_Map_ItemSelect_C.Construct
struct UWG_Map_ItemSelect_C_Construct_Params
{
};

// Function WG_Map_ItemSelect.WG_Map_ItemSelect_C.SlotSelected
struct UWG_Map_ItemSelect_C_SlotSelected_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlotWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Map_ItemSelect.WG_Map_ItemSelect_C.ExecuteUbergraph_WG_Map_ItemSelect
struct UWG_Map_ItemSelect_C_ExecuteUbergraph_WG_Map_ItemSelect_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_ItemSelect.WG_Map_ItemSelect_C.ItemSelected__DelegateSignature
struct UWG_Map_ItemSelect_C_ItemSelected__DelegateSignature_Params
{
	struct FName*                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
