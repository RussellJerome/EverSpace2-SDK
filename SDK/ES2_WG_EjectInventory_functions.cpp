// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_EjectInventory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_EjectInventory.WG_EjectInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_EjectInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_EjectInventory.WG_EjectInventory_C.Construct");

	UWG_EjectInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_EjectInventory.WG_EjectInventory_C.OnRefresh_DropInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_C**        InventoryWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_EjectInventory_C::OnRefresh_DropInventory(class UWG_Inventory_C** InventoryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_EjectInventory.WG_EjectInventory_C.OnRefresh_DropInventory");

	UWG_EjectInventory_C_OnRefresh_DropInventory_Params params;
	params.InventoryWidget = InventoryWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_EjectInventory.WG_EjectInventory_C.SetTransferInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_C**        TransferInventory              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_EjectInventory_C::SetTransferInventory(class UWG_Inventory_C** TransferInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_EjectInventory.WG_EjectInventory_C.SetTransferInventory");

	UWG_EjectInventory_C_SetTransferInventory_Params params;
	params.TransferInventory = TransferInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_EjectInventory.WG_EjectInventory_C.OnVanishAnimFinished_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_EjectInventory_C::OnVanishAnimFinished_Event_1(class UWG_Inventory_Slot_C** InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_EjectInventory.WG_EjectInventory_C.OnVanishAnimFinished_Event_1");

	UWG_EjectInventory_C_OnVanishAnimFinished_Event_1_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_EjectInventory.WG_EjectInventory_C.ExecuteUbergraph_WG_EjectInventory
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_EjectInventory_C::ExecuteUbergraph_WG_EjectInventory(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_EjectInventory.WG_EjectInventory_C.ExecuteUbergraph_WG_EjectInventory");

	UWG_EjectInventory_C_ExecuteUbergraph_WG_EjectInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
