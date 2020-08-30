// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ShipInventory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_ShipInventory.WG_ShipInventory_C.CycleCompareItem
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_ShipInventory_C::CycleCompareItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.CycleCompareItem");

	UWG_ShipInventory_C_CycleCompareItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.DehighlightCargoInventories
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_ShipInventory_C::DehighlightCargoInventories()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.DehighlightCargoInventories");

	UWG_ShipInventory_C_DehighlightCargoInventories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.GetSlotCountOfCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_ShipInventory_C::GetSlotCountOfCategory(TEnumAsByte<EInventoryCategory>* Category, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.GetSlotCountOfCategory");

	UWG_ShipInventory_C_GetSlotCountOfCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_ShipInventory.WG_ShipInventory_C.FadeInOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFadeIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ShipInventory_C::FadeInOut(bool* IsFadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.FadeInOut");

	UWG_ShipInventory_C_FadeInOut_Params params;
	params.IsFadeIn = IsFadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.GetHighlightedInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_C*         Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ShipInventory_C::GetHighlightedInventory(class UWG_Inventory_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.GetHighlightedInventory");

	UWG_ShipInventory_C_GetHighlightedInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_ShipInventory.WG_ShipInventory_C.HighlightInventoryToCompare
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_C**        Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_ShipInventory_C::HighlightInventoryToCompare(TEnumAsByte<EInventoryCategory>* Category, class UWG_Inventory_C** Inventory, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.HighlightInventoryToCompare");

	UWG_ShipInventory_C_HighlightInventoryToCompare_Params params;
	params.Category = Category;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function WG_ShipInventory.WG_ShipInventory_C.SetSelectedSlotInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   SelectedSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ShipInventory_C::SetSelectedSlotInfo(class UWG_Inventory_Slot_C** SelectedSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.SetSelectedSlotInfo");

	UWG_ShipInventory_C_SetSelectedSlotInfo_Params params;
	params.SelectedSlot = SelectedSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.HasFreeCargoSpace
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_ShipInventory_C::HasFreeCargoSpace(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.HasFreeCargoSpace");

	UWG_ShipInventory_C_HasFreeCargoSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_ShipInventory.WG_ShipInventory_C.GetInventoryByCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_C*         Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ShipInventory_C::GetInventoryByCategory(TEnumAsByte<EInventoryCategory>* Category, class UWG_Inventory_C** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.GetInventoryByCategory");

	UWG_ShipInventory_C_GetInventoryByCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function WG_ShipInventory.WG_ShipInventory_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_ShipInventory_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.OnFocusReceived");

	UWG_ShipInventory_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ShipInventory.WG_ShipInventory_C.SetAllowItemSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Allow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ShipInventory_C::SetAllowItemSwap(bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.SetAllowItemSwap");

	UWG_ShipInventory_C_SetAllowItemSwap_Params params;
	params.Allow = Allow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.GetAllModuleInventories
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWG_Inventory_C*> Array                          (Parm, OutParm, ZeroConstructor)

void UWG_ShipInventory_C::GetAllModuleInventories(TArray<class UWG_Inventory_C*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.GetAllModuleInventories");

	UWG_ShipInventory_C_GetAllModuleInventories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function WG_ShipInventory.WG_ShipInventory_C.SetAllowEquipmentActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Weapons                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Consumables                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Modules                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ShipInventory_C::SetAllowEquipmentActions(bool* Weapons, bool* Consumables, bool* Modules)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.SetAllowEquipmentActions");

	UWG_ShipInventory_C_SetAllowEquipmentActions_Params params;
	params.Weapons = Weapons;
	params.Consumables = Consumables;
	params.Modules = Modules;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_ShipInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.Construct");

	UWG_ShipInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.OnCargoUnitInventoryRefreshed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_C**        InventoryWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ShipInventory_C::OnCargoUnitInventoryRefreshed(class UWG_Inventory_C** InventoryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.OnCargoUnitInventoryRefreshed");

	UWG_ShipInventory_C_OnCargoUnitInventoryRefreshed_Params params;
	params.InventoryWidget = InventoryWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.ReInit
// (BlueprintCallable, BlueprintEvent)

void UWG_ShipInventory_C::ReInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.ReInit");

	UWG_ShipInventory_C_ReInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.SetTransferInventoryForAll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_C**        TransferInventoryWidget        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ShipInventory_C::SetTransferInventoryForAll(class UWG_Inventory_C** TransferInventoryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.SetTransferInventoryForAll");

	UWG_ShipInventory_C_SetTransferInventoryForAll_Params params;
	params.TransferInventoryWidget = TransferInventoryWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.SetInventoryForAll
// (BlueprintCallable, BlueprintEvent)

void UWG_ShipInventory_C::SetInventoryForAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.SetInventoryForAll");

	UWG_ShipInventory_C_SetInventoryForAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ShipInventory_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.PreConstruct");

	UWG_ShipInventory_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.StartFadeIn
// (BlueprintCallable, BlueprintEvent)

void UWG_ShipInventory_C::StartFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.StartFadeIn");

	UWG_ShipInventory_C_StartFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.StopFadeIn
// (BlueprintCallable, BlueprintEvent)

void UWG_ShipInventory_C::StopFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.StopFadeIn");

	UWG_ShipInventory_C_StopFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.ExecuteUbergraph_WG_ShipInventory
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ShipInventory_C::ExecuteUbergraph_WG_ShipInventory(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.ExecuteUbergraph_WG_ShipInventory");

	UWG_ShipInventory_C_ExecuteUbergraph_WG_ShipInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.OnCompareInventoryChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_ShipInventory_C::OnCompareInventoryChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.OnCompareInventoryChanged__DelegateSignature");

	UWG_ShipInventory_C_OnCompareInventoryChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipInventory.WG_ShipInventory_C.OnCargoUnitChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_ShipInventory_C::OnCargoUnitChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipInventory.WG_ShipInventory_C.OnCargoUnitChanged__DelegateSignature");

	UWG_ShipInventory_C_OnCargoUnitChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
