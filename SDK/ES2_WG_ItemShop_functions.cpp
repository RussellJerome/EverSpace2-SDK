// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ItemShop_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_ItemShop.WG_ItemShop_C.CanItemInfoVisibilityNotBeChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_ItemShop_C::CanItemInfoVisibilityNotBeChanged(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.CanItemInfoVisibilityNotBeChanged");

	UWG_ItemShop_C_CanItemInfoVisibilityNotBeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_ItemShop.WG_ItemShop_C.GetSelectedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C*    Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ItemShop_C::GetSelectedSlot(class UWG_Inventory_Slot_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.GetSelectedSlot");

	UWG_ItemShop_C_GetSelectedSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_ItemShop.WG_ItemShop_C.GetItemInfoWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Item_Info_C*         ItemInfoWidget                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ItemShop_C::GetItemInfoWidget(class UWG_Item_Info_C** ItemInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.GetItemInfoWidget");

	UWG_ItemShop_C_GetItemInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemInfoWidget != nullptr)
		*ItemInfoWidget = params.ItemInfoWidget;
}


// Function WG_ItemShop.WG_ItemShop_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_ItemShop_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.OnKeyUp");

	UWG_ItemShop_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ItemShop.WG_ItemShop_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_ItemShop_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.OnKeyDown");

	UWG_ItemShop_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ItemShop.WG_ItemShop_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_ItemShop_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.OnFocusReceived");

	UWG_ItemShop_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ItemShop.WG_ItemShop_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_ItemShop_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.Refresh");

	UWG_ItemShop_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_ItemShop_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.Construct");

	UWG_ItemShop_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_ItemShop_C::OnRemovedFromFocusPath(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.OnRemovedFromFocusPath");

	UWG_ItemShop_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.OnGamepadModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepadMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemShop_C::OnGamepadModeChanged(bool* IsGamepadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.OnGamepadModeChanged");

	UWG_ItemShop_C_OnGamepadModeChanged_Params params;
	params.IsGamepadMode = IsGamepadMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.InitWithShopInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory**             Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemShop_C::InitWithShopInventory(class UInventory** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.InitWithShopInventory");

	UWG_ItemShop_C_InitWithShopInventory_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemShop_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.PreConstruct");

	UWG_ItemShop_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.BndEvt__Button_Perks_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWG_ItemShop_C::BndEvt__Button_Perks_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.BndEvt__Button_Perks_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWG_ItemShop_C_BndEvt__Button_Perks_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.PressedMove
// (BlueprintCallable, BlueprintEvent)

void UWG_ItemShop_C::PressedMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.PressedMove");

	UWG_ItemShop_C_PressedMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.PressedEquip
// (BlueprintCallable, BlueprintEvent)

void UWG_ItemShop_C::PressedEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.PressedEquip");

	UWG_ItemShop_C_PressedEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.PressedRemove
// (BlueprintCallable, BlueprintEvent)

void UWG_ItemShop_C::PressedRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.PressedRemove");

	UWG_ItemShop_C_PressedRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.PressedBack
// (BlueprintCallable, BlueprintEvent)

void UWG_ItemShop_C::PressedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.PressedBack");

	UWG_ItemShop_C_PressedBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.LinkInventoriesWithShop
// (BlueprintCallable, BlueprintEvent)

void UWG_ItemShop_C::LinkInventoriesWithShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.LinkInventoriesWithShop");

	UWG_ItemShop_C_LinkInventoriesWithShop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.SetupInventories
// (BlueprintCallable, BlueprintEvent)

void UWG_ItemShop_C::SetupInventories()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.SetupInventories");

	UWG_ItemShop_C_SetupInventories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.UpdateButtonsInFooter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ItemShop_C::UpdateButtonsInFooter(class UWG_Inventory_Slot_C** InventorySlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.UpdateButtonsInFooter");

	UWG_ItemShop_C_UpdateButtonsInFooter_Params params;
	params.InventorySlotWidget = InventorySlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.SlotDeselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ItemShop_C::SlotDeselected(class UWG_Inventory_Slot_C** InventorySlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.SlotDeselected");

	UWG_ItemShop_C_SlotDeselected_Params params;
	params.InventorySlotWidget = InventorySlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.OnCargoUnitChanged
// (BlueprintCallable, BlueprintEvent)

void UWG_ItemShop_C::OnCargoUnitChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.OnCargoUnitChanged");

	UWG_ItemShop_C_OnCargoUnitChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.UpdateShopItemAttributesCompareItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   CompareItemSlot                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ItemShop_C::UpdateShopItemAttributesCompareItem(class UWG_Inventory_Slot_C** CompareItemSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.UpdateShopItemAttributesCompareItem");

	UWG_ItemShop_C_UpdateShopItemAttributesCompareItem_Params params;
	params.CompareItemSlot = CompareItemSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.PressedChangeCompare
// (BlueprintCallable, BlueprintEvent)

void UWG_ItemShop_C::PressedChangeCompare()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.PressedChangeCompare");

	UWG_ItemShop_C_PressedChangeCompare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.FadeInOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFadeIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemShop_C::FadeInOut(bool* IsFadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.FadeInOut");

	UWG_ItemShop_C_FadeInOut_Params params;
	params.IsFadeIn = IsFadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.InitWithStationID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StationID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Menu_Ingame_C**      MenuIngameRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ItemShop_C::InitWithStationID(struct FName* StationID, class UWG_Menu_Ingame_C** MenuIngameRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.InitWithStationID");

	UWG_ItemShop_C_InitWithStationID_Params params;
	params.StationID = StationID;
	params.MenuIngameRef = MenuIngameRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.PressedPauseMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_ItemShop_C::PressedPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.PressedPauseMenu");

	UWG_ItemShop_C_PressedPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.ExecuteUbergraph_WG_ItemShop
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemShop_C::ExecuteUbergraph_WG_ItemShop(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.ExecuteUbergraph_WG_ItemShop");

	UWG_ItemShop_C_ExecuteUbergraph_WG_ItemShop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemShop.WG_ItemShop_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_LootTransfer_C**     LootTransferWidget             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ItemShop_C::OnClosed__DelegateSignature(class UWG_LootTransfer_C** LootTransferWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemShop.WG_ItemShop_C.OnClosed__DelegateSignature");

	UWG_ItemShop_C_OnClosed__DelegateSignature_Params params;
	params.LootTransferWidget = LootTransferWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
