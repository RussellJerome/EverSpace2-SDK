// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_ItemSelect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Map_ItemSelect.WG_Map_ItemSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Map_ItemSelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_ItemSelect.WG_Map_ItemSelect_C.Construct");

	UWG_Map_ItemSelect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_ItemSelect.WG_Map_ItemSelect_C.SlotSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Map_ItemSelect_C::SlotSelected(class UWG_Inventory_Slot_C** InventorySlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_ItemSelect.WG_Map_ItemSelect_C.SlotSelected");

	UWG_Map_ItemSelect_C_SlotSelected_Params params;
	params.InventorySlotWidget = InventorySlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_ItemSelect.WG_Map_ItemSelect_C.ExecuteUbergraph_WG_Map_ItemSelect
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_ItemSelect_C::ExecuteUbergraph_WG_Map_ItemSelect(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_ItemSelect.WG_Map_ItemSelect_C.ExecuteUbergraph_WG_Map_ItemSelect");

	UWG_Map_ItemSelect_C_ExecuteUbergraph_WG_Map_ItemSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_ItemSelect.WG_Map_ItemSelect_C.ItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_ItemSelect_C::ItemSelected__DelegateSignature(struct FName* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_ItemSelect.WG_Map_ItemSelect_C.ItemSelected__DelegateSignature");

	UWG_Map_ItemSelect_C_ItemSelected__DelegateSignature_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
