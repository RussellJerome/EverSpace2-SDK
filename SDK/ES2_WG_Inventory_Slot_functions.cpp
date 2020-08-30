// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Inventory_Slot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetNameOfShip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (Parm, OutParm)

void UWG_Inventory_Slot_C::GetNameOfShip(struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetNameOfShip");

	UWG_Inventory_Slot_C_GetNameOfShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsCurrentShipInventorySlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::IsCurrentShipInventorySlot(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsCurrentShipInventorySlot");

	UWG_Inventory_Slot_C_IsCurrentShipInventorySlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.DoWeNeedToForceInventoryBasedTransfer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_Slot_C**   SourceSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWG_Inventory_Slot_C::DoWeNeedToForceInventoryBasedTransfer(class UWG_Inventory_Slot_C** SourceSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.DoWeNeedToForceInventoryBasedTransfer");

	UWG_Inventory_Slot_C_DoWeNeedToForceInventoryBasedTransfer_Params params;
	params.SourceSlot = SourceSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsChangeCompareActionPossible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::IsChangeCompareActionPossible(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsChangeCompareActionPossible");

	UWG_Inventory_Slot_C_IsChangeCompareActionPossible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetEmptySlotHelpText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventoryCategory>* SlotCategory                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::SetEmptySlotHelpText(TEnumAsByte<EInventoryCategory>* SlotCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetEmptySlotHelpText");

	UWG_Inventory_Slot_C_SetEmptySlotHelpText_Params params;
	params.SlotCategory = SlotCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.Get_LockedIndicator_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Inventory_Slot_C::Get_LockedIndicator_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.Get_LockedIndicator_Visibility_1");

	UWG_Inventory_Slot_C_Get_LockedIndicator_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.Get_RefundBuyBackMarker_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Inventory_Slot_C::Get_RefundBuyBackMarker_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.Get_RefundBuyBackMarker_Visibility_1");

	UWG_Inventory_Slot_C_Get_RefundBuyBackMarker_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetLockedIconPosition
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::SetLockedIconPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetLockedIconPosition");

	UWG_Inventory_Slot_C_SetLockedIconPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.ToggleDropHighlightAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::ToggleDropHighlightAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.ToggleDropHighlightAnimation");

	UWG_Inventory_Slot_C_ToggleDropHighlightAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.ToggleDragHighlightAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::ToggleDragHighlightAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.ToggleDragHighlightAnimation");

	UWG_Inventory_Slot_C_ToggleDragHighlightAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.HighlightValidDropTargetInventories
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::HighlightValidDropTargetInventories()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.HighlightValidDropTargetInventories");

	UWG_Inventory_Slot_C_HighlightValidDropTargetInventories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.HideDragIndication
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::HideDragIndication()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.HideDragIndication");

	UWG_Inventory_Slot_C_HideDragIndication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsValidDropLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_Slot_C**   SourceSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   TargetSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::IsValidDropLocation(class UWG_Inventory_Slot_C** SourceSlot, class UWG_Inventory_Slot_C** TargetSlot, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsValidDropLocation");

	UWG_Inventory_Slot_C_IsValidDropLocation_Params params;
	params.SourceSlot = SourceSlot;
	params.TargetSlot = TargetSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.HideDropIndication
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::HideDropIndication()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.HideDropIndication");

	UWG_Inventory_Slot_C_HideDropIndication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetSlotTitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item_Ref                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::SetSlotTitle(class UItem** Item_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetSlotTitle");

	UWG_Inventory_Slot_C_SetSlotTitle_Params params;
	params.Item_Ref = Item_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateCategoryIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::UpdateCategoryIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateCategoryIcon");

	UWG_Inventory_Slot_C_UpdateCategoryIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetConsumableSlotIndexIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::GetConsumableSlotIndexIcon(int* Index, class UTexture2D** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetConsumableSlotIndexIcon");

	UWG_Inventory_Slot_C_GetConsumableSlotIndexIcon_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsNewItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::IsNewItem(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsNewItem");

	UWG_Inventory_Slot_C_IsNewItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetSlotAppearance
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::SetSlotAppearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetSlotAppearance");

	UWG_Inventory_Slot_C_SetSlotAppearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateCompareInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UseTargetSlotAsCompareBase     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::UpdateCompareInventory(bool* UseTargetSlotAsCompareBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateCompareInventory");

	UWG_Inventory_Slot_C_UpdateCompareInventory_Params params;
	params.UseTargetSlotAsCompareBase = UseTargetSlotAsCompareBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateSlotAppearance
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::UpdateSlotAppearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateSlotAppearance");

	UWG_Inventory_Slot_C_UpdateSlotAppearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsNotStacked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::IsNotStacked(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsNotStacked");

	UWG_Inventory_Slot_C_IsNotStacked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.TransferAndCloseAfterAmountSelection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   SourceSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   TargetSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        TargetInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           TransferAmount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsFeasibilityCheck             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::TransferAndCloseAfterAmountSelection(class UWG_Inventory_Slot_C** SourceSlot, class UWG_Inventory_Slot_C** TargetSlot, class UWG_Inventory_C** TargetInventory, int* TransferAmount, bool* IsFeasibilityCheck, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.TransferAndCloseAfterAmountSelection");

	UWG_Inventory_Slot_C_TransferAndCloseAfterAmountSelection_Params params;
	params.SourceSlot = SourceSlot;
	params.TargetSlot = TargetSlot;
	params.TargetInventory = TargetInventory;
	params.TransferAmount = TransferAmount;
	params.IsFeasibilityCheck = IsFeasibilityCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetDebugLabel
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::SetDebugLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetDebugLabel");

	UWG_Inventory_Slot_C_SetDebugLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsMoveToCargoPseudoSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWG_Inventory_Slot_C::IsMoveToCargoPseudoSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsMoveToCargoPseudoSlot");

	UWG_Inventory_Slot_C_IsMoveToCargoPseudoSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsItemEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWG_Inventory_Slot_C::IsItemEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsItemEnabled");

	UWG_Inventory_Slot_C_IsItemEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.CollectCredits
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::CollectCredits(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.CollectCredits");

	UWG_Inventory_Slot_C_CollectCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.HasCredits
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::HasCredits(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.HasCredits");

	UWG_Inventory_Slot_C_HasCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.TransferItemsWithOptionalAmountSelection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate*        Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          ShowDialog                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InitialAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_Slot_C**   SourceSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   TargetSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        TargetInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsFeasibilityCheck             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::TransferItemsWithOptionalAmountSelection(struct FScriptDelegate* Event, bool* ShowDialog, int* InitialAmount, int* MaxAmount, class UWG_Inventory_Slot_C** SourceSlot, class UWG_Inventory_Slot_C** TargetSlot, class UWG_Inventory_C** TargetInventory, bool* IsFeasibilityCheck, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.TransferItemsWithOptionalAmountSelection");

	UWG_Inventory_Slot_C_TransferItemsWithOptionalAmountSelection_Params params;
	params.Event = Event;
	params.ShowDialog = ShowDialog;
	params.InitialAmount = InitialAmount;
	params.MaxAmount = MaxAmount;
	params.SourceSlot = SourceSlot;
	params.TargetSlot = TargetSlot;
	params.TargetInventory = TargetInventory;
	params.IsFeasibilityCheck = IsFeasibilityCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SlotChosenToEquip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_C**        CurrentShipCargoInventory      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   BaseItemSlotRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FSTRCT_ItemSelectionSlotInfo* ExplicitSlotData               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool*                          IsFeasibilityCheck             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        OnAmountSelected               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          BuyingConfirmed                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::SlotChosenToEquip(class UWG_Inventory_C** CurrentShipCargoInventory, class UWG_Inventory_Slot_C** BaseItemSlotRef, struct FSTRCT_ItemSelectionSlotInfo* ExplicitSlotData, bool* IsFeasibilityCheck, struct FScriptDelegate* OnAmountSelected, bool* BuyingConfirmed, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.SlotChosenToEquip");

	UWG_Inventory_Slot_C_SlotChosenToEquip_Params params;
	params.CurrentShipCargoInventory = CurrentShipCargoInventory;
	params.BaseItemSlotRef = BaseItemSlotRef;
	params.ExplicitSlotData = ExplicitSlotData;
	params.IsFeasibilityCheck = IsFeasibilityCheck;
	params.OnAmountSelected = OnAmountSelected;
	params.BuyingConfirmed = BuyingConfirmed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.EquipItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_ShipInventory_C**    ShipInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        ExternalInventory              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FScriptDelegate*        Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWG_Inventory_Slot_C::EquipItem(class UWG_ShipInventory_C** ShipInventory, class UWG_Inventory_C** ExternalInventory, struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.EquipItem");

	UWG_Inventory_Slot_C_EquipItem_Params params;
	params.ShipInventory = ShipInventory;
	params.ExternalInventory = ExternalInventory;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetActionDependingSlotSelectionData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_ShipInventory_C**    Ship_Inventory_Ref             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        External_Inventory_Ref         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FSTRCT_ItemSelectionSlotInfo> Slot_Data                      (Parm, OutParm, ZeroConstructor)

void UWG_Inventory_Slot_C::GetActionDependingSlotSelectionData(class UWG_ShipInventory_C** Ship_Inventory_Ref, class UWG_Inventory_C** External_Inventory_Ref, TArray<struct FSTRCT_ItemSelectionSlotInfo>* Slot_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetActionDependingSlotSelectionData");

	UWG_Inventory_Slot_C_GetActionDependingSlotSelectionData_Params params;
	params.Ship_Inventory_Ref = Ship_Inventory_Ref;
	params.External_Inventory_Ref = External_Inventory_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot_Data != nullptr)
		*Slot_Data = params.Slot_Data;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.CanSwapItemAmountWithGivenSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_Slot_C**   OtherSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::CanSwapItemAmountWithGivenSlot(class UWG_Inventory_Slot_C** OtherSlot, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.CanSwapItemAmountWithGivenSlot");

	UWG_Inventory_Slot_C_CanSwapItemAmountWithGivenSlot_Params params;
	params.OtherSlot = OtherSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetOriginalSlotReference
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTRCT_ItemSelectionSlotInfo* ExplicitSlotData               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FSTRCT_ItemSelectionSlotInfo SlotInfo                       (Parm, OutParm, IsPlainOldData)
// class UWG_Inventory_Slot_C*    Slot                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C*         Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsFromOtherShip                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::GetOriginalSlotReference(struct FSTRCT_ItemSelectionSlotInfo* ExplicitSlotData, struct FSTRCT_ItemSelectionSlotInfo* SlotInfo, class UWG_Inventory_Slot_C** Slot, class UWG_Inventory_C** Inventory, bool* IsFromOtherShip)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetOriginalSlotReference");

	UWG_Inventory_Slot_C_GetOriginalSlotReference_Params params;
	params.ExplicitSlotData = ExplicitSlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotInfo != nullptr)
		*SlotInfo = params.SlotInfo;
	if (Slot != nullptr)
		*Slot = params.Slot;
	if (Inventory != nullptr)
		*Inventory = params.Inventory;
	if (IsFromOtherShip != nullptr)
		*IsFromOtherShip = params.IsFromOtherShip;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.HasItemReachedStackLimit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::HasItemReachedStackLimit(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.HasItemReachedStackLimit");

	UWG_Inventory_Slot_C_HasItemReachedStackLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetAmountToStackLimit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Amount                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::GetAmountToStackLimit(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetAmountToStackLimit");

	UWG_Inventory_Slot_C_GetAmountToStackLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Amount != nullptr)
		*Amount = params.Amount;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetSafeItemAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Amount                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::GetSafeItemAmount(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetSafeItemAmount");

	UWG_Inventory_Slot_C_GetSafeItemAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Amount != nullptr)
		*Amount = params.Amount;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.CanTransferItemAmountToGivenSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_Slot_C**   OtherSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          CountEmpty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           FailedBecauseFullyStacked      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::CanTransferItemAmountToGivenSlot(class UWG_Inventory_Slot_C** OtherSlot, bool* CountEmpty, bool* Result, bool* FailedBecauseFullyStacked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.CanTransferItemAmountToGivenSlot");

	UWG_Inventory_Slot_C_CanTransferItemAmountToGivenSlot_Params params;
	params.OtherSlot = OtherSlot;
	params.CountEmpty = CountEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (FailedBecauseFullyStacked != nullptr)
		*FailedBecauseFullyStacked = params.FailedBecauseFullyStacked;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.HasStackableItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::HasStackableItem(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.HasStackableItem");

	UWG_Inventory_Slot_C_HasStackableItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.HasItemOfSameType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_Slot_C**   OtherSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          CountEmpty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::HasItemOfSameType(class UWG_Inventory_Slot_C** OtherSlot, bool* CountEmpty, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.HasItemOfSameType");

	UWG_Inventory_Slot_C_HasItemOfSameType_Params params;
	params.OtherSlot = OtherSlot;
	params.CountEmpty = CountEmpty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.DeleteItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::DeleteItem(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.DeleteItem");

	UWG_Inventory_Slot_C_DeleteItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsEquipmentSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::IsEquipmentSlot(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsEquipmentSlot");

	UWG_Inventory_Slot_C_IsEquipmentSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsStacked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::IsStacked(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsStacked");

	UWG_Inventory_Slot_C_IsStacked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsEmptySlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::IsEmptySlot(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsEmptySlot");

	UWG_Inventory_Slot_C_IsEmptySlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsRemoveActionPossible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::IsRemoveActionPossible(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsRemoveActionPossible");

	UWG_Inventory_Slot_C_IsRemoveActionPossible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsMoveActionPossible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::IsMoveActionPossible(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsMoveActionPossible");

	UWG_Inventory_Slot_C_IsMoveActionPossible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.ReplaceAndMoveToCargo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory**             InvisibleInventoryWithSourceItem (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  SourceItemRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_C**        ActiveShipCargoInventory       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::ReplaceAndMoveToCargo(class UInventory** InvisibleInventoryWithSourceItem, class UItem** SourceItemRef, class UWG_Inventory_C** ActiveShipCargoInventory, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.ReplaceAndMoveToCargo");

	UWG_Inventory_Slot_C_ReplaceAndMoveToCargo_Params params;
	params.InvisibleInventoryWithSourceItem = InvisibleInventoryWithSourceItem;
	params.SourceItemRef = SourceItemRef;
	params.ActiveShipCargoInventory = ActiveShipCargoInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetSafeItemRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem*                   ItemRef                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::GetSafeItemRef(class UItem** ItemRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetSafeItemRef");

	UWG_Inventory_Slot_C_GetSafeItemRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemRef != nullptr)
		*ItemRef = params.ItemRef;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsEquipActionPossible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::IsEquipActionPossible(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsEquipActionPossible");

	UWG_Inventory_Slot_C_IsEquipActionPossible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsItemSelectionInteractionPossible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::IsItemSelectionInteractionPossible(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsItemSelectionInteractionPossible");

	UWG_Inventory_Slot_C_IsItemSelectionInteractionPossible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetCompareItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  CompareItemRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::SetCompareItem(class UItem** CompareItemRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetCompareItem");

	UWG_Inventory_Slot_C_SetCompareItem_Params params;
	params.CompareItemRef = CompareItemRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.Get_TextBlock_TradePrice_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWG_Inventory_Slot_C::Get_TextBlock_TradePrice_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.Get_TextBlock_TradePrice_ColorAndOpacity_1");

	UWG_Inventory_Slot_C_Get_TextBlock_TradePrice_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Inventory_Slot_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnFocusReceived");

	UWG_Inventory_Slot_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetPriceTextColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWG_Inventory_Slot_C::GetPriceTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.GetPriceTextColor");

	UWG_Inventory_Slot_C_GetPriceTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Inventory_Slot_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnMouseButtonUp");

	UWG_Inventory_Slot_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Inventory_Slot_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnMouseButtonDown");

	UWG_Inventory_Slot_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDragDetected");

	UWG_Inventory_Slot_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsActionChangingCargoSpace
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  CurrentItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  NewItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_Slot_C**   SourceInventorySlot            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsEquippedItemThatWillBeMovedToCargo (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ActionWouldDestroyCargo        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CargoSpaceIncrease             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ItemOverload                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::IsActionChangingCargoSpace(class UItem** CurrentItem, class UItem** NewItem, class UWG_Inventory_Slot_C** SourceInventorySlot, bool* IsEquippedItemThatWillBeMovedToCargo, bool* ActionWouldDestroyCargo, int* CargoSpaceIncrease, int* ItemOverload)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsActionChangingCargoSpace");

	UWG_Inventory_Slot_C_IsActionChangingCargoSpace_Params params;
	params.CurrentItem = CurrentItem;
	params.NewItem = NewItem;
	params.SourceInventorySlot = SourceInventorySlot;
	params.IsEquippedItemThatWillBeMovedToCargo = IsEquippedItemThatWillBeMovedToCargo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionWouldDestroyCargo != nullptr)
		*ActionWouldDestroyCargo = params.ActionWouldDestroyCargo;
	if (CargoSpaceIncrease != nullptr)
		*CargoSpaceIncrease = params.CargoSpaceIncrease;
	if (ItemOverload != nullptr)
		*ItemOverload = params.ItemOverload;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsAttributeChangingSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWG_Inventory_Slot_C::IsAttributeChangingSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.IsAttributeChangingSlot");

	UWG_Inventory_Slot_C_IsAttributeChangingSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.ReplaceItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWithNewItem       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsFeasibilityCheck             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::ReplaceItem(class UWG_Inventory_Slot_C** InventorySlotWithNewItem, bool* IsFeasibilityCheck, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.ReplaceItem");

	UWG_Inventory_Slot_C_ReplaceItem_Params params;
	params.InventorySlotWithNewItem = InventorySlotWithNewItem;
	params.IsFeasibilityCheck = IsFeasibilityCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWG_Inventory_Slot_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDrop");

	UWG_Inventory_Slot_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.On_Border_Icon_MouseDoubleClick_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Inventory_Slot_C::On_Border_Icon_MouseDoubleClick_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.On_Border_Icon_MouseDoubleClick_1");

	UWG_Inventory_Slot_C_On_Border_Icon_MouseDoubleClick_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWG_Inventory_Slot_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnMouseEnter");

	UWG_Inventory_Slot_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWG_Inventory_Slot_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnMouseLeave");

	UWG_Inventory_Slot_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDragLeave");

	UWG_Inventory_Slot_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDragEnter");

	UWG_Inventory_Slot_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetAsCompareItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SetOn                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::SetAsCompareItem(bool* SetOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetAsCompareItem");

	UWG_Inventory_Slot_C_SetAsCompareItem_Params params;
	params.SetOn = SetOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.PreConstruct");

	UWG_Inventory_Slot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetItemInfos
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  ItemRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::SetItemInfos(class UItem** ItemRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetItemInfos");

	UWG_Inventory_Slot_C_SetItemInfos_Params params;
	params.ItemRef = ItemRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.RemoveItem
// (BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::RemoveItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.RemoveItem");

	UWG_Inventory_Slot_C_RemoveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDragCancelled");

	UWG_Inventory_Slot_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateBorderColor
// (BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::UpdateBorderColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateBorderColor");

	UWG_Inventory_Slot_C_UpdateBorderColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.Tick");

	UWG_Inventory_Slot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Inventory_Slot_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnFocusLost");

	UWG_Inventory_Slot_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.AddItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  ItemRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::AddItem(class UItem** ItemRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.AddItem");

	UWG_Inventory_Slot_C_AddItem_Params params;
	params.ItemRef = ItemRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateSlotType
// (BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::UpdateSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateSlotType");

	UWG_Inventory_Slot_C_UpdateSlotType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.MoveItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_C**        TargetInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsDragAndDrop                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::MoveItem(class UWG_Inventory_C** TargetInventory, bool* IsDragAndDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.MoveItem");

	UWG_Inventory_Slot_C_MoveItem_Params params;
	params.TargetInventory = TargetInventory;
	params.IsDragAndDrop = IsDragAndDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnEquip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_ShipInventory_C**    ShipInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        ExternalInventory              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_Slot_C::OnEquip(class UWG_ShipInventory_C** ShipInventory, class UWG_Inventory_C** ExternalInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnEquip");

	UWG_Inventory_Slot_C_OnEquip_Params params;
	params.ShipInventory = ShipInventory;
	params.ExternalInventory = ExternalInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SlotChosen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        CurrentShipCargoInventory      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_Slot_C::SlotChosen(class UWG_Inventory_Slot_C** Slot, class UWG_Inventory_C** CurrentShipCargoInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.SlotChosen");

	UWG_Inventory_Slot_C_SlotChosen_Params params;
	params.Slot = Slot;
	params.CurrentShipCargoInventory = CurrentShipCargoInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnAmountSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   SourceInventorySlot            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        CustomTransferInventory        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           TransferAmount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_Slot_C**   TargetInventorySlot            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_Slot_C::OnAmountSelected(class UWG_Inventory_Slot_C** SourceInventorySlot, class UWG_Inventory_C** CustomTransferInventory, int* TransferAmount, class UWG_Inventory_Slot_C** TargetInventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnAmountSelected");

	UWG_Inventory_Slot_C_OnAmountSelected_Params params;
	params.SourceInventorySlot = SourceInventorySlot;
	params.CustomTransferInventory = CustomTransferInventory;
	params.TransferAmount = TransferAmount;
	params.TargetInventorySlot = TargetInventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.DummyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   SourceInventorySlot            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        CustomTransferInventory        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           TransferAmount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_Slot_C**   TargetInventorySlot            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_Slot_C::DummyEvent(class UWG_Inventory_Slot_C** SourceInventorySlot, class UWG_Inventory_C** CustomTransferInventory, int* TransferAmount, class UWG_Inventory_Slot_C** TargetInventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.DummyEvent");

	UWG_Inventory_Slot_C_DummyEvent_Params params;
	params.SourceInventorySlot = SourceInventorySlot;
	params.CustomTransferInventory = CustomTransferInventory;
	params.TransferAmount = TransferAmount;
	params.TargetInventorySlot = TargetInventorySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.BuyAndEquipOnOccupiedSlot
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   SourceSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   TargetSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        CurrentShipCargoInventory      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FSTRCT_ItemSelectionSlotInfo* TargetSlotData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UWG_Inventory_Slot_C::BuyAndEquipOnOccupiedSlot(class UWG_Inventory_Slot_C** SourceSlot, class UWG_Inventory_Slot_C** TargetSlot, class UWG_Inventory_C** CurrentShipCargoInventory, struct FSTRCT_ItemSelectionSlotInfo* TargetSlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.BuyAndEquipOnOccupiedSlot");

	UWG_Inventory_Slot_C_BuyAndEquipOnOccupiedSlot_Params params;
	params.SourceSlot = SourceSlot;
	params.TargetSlot = TargetSlot;
	params.CurrentShipCargoInventory = CurrentShipCargoInventory;
	params.TargetSlotData = TargetSlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SellAndEquip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_ModalDialog_C**      WG_ModalDialog                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_Slot_C::SellAndEquip(class UWG_ModalDialog_C** WG_ModalDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.SellAndEquip");

	UWG_Inventory_Slot_C_SellAndEquip_Params params;
	params.WG_ModalDialog = WG_ModalDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.MoveToCargoAndEquip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_ModalDialog_C**      WG_ModalDialog                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_Slot_C::MoveToCargoAndEquip(class UWG_ModalDialog_C** WG_ModalDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.MoveToCargoAndEquip");

	UWG_Inventory_Slot_C_MoveToCargoAndEquip_Params params;
	params.WG_ModalDialog = WG_ModalDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.BuyAndEquipAtEmptySlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_ModalDialog_C**      WG_ModalDialog                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_Slot_C::BuyAndEquipAtEmptySlot(class UWG_ModalDialog_C** WG_ModalDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.BuyAndEquipAtEmptySlot");

	UWG_Inventory_Slot_C_BuyAndEquipAtEmptySlot_Params params;
	params.WG_ModalDialog = WG_ModalDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateCreditsInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewCredits                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           CreditsDelta                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::UpdateCreditsInfo(int* NewCredits, int* CreditsDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateCreditsInfo");

	UWG_Inventory_Slot_C_UpdateCreditsInfo_Params params;
	params.NewCredits = NewCredits;
	params.CreditsDelta = CreditsDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateBuyingText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::UpdateBuyingText(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.UpdateBuyingText");

	UWG_Inventory_Slot_C_UpdateBuyingText_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Inventory_Slot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.Construct");

	UWG_Inventory_Slot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetTooltipWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Item_Info_C**        ItemInfoWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_Slot_C::SetTooltipWidget(class UWG_Item_Info_C** ItemInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetTooltipWidget");

	UWG_Inventory_Slot_C_SetTooltipWidget_Params params;
	params.ItemInfoWidget = ItemInfoWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.RemoveHeroCompare
// (BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::RemoveHeroCompare()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.RemoveHeroCompare");

	UWG_Inventory_Slot_C_RemoveHeroCompare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetCategoryIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::SetCategoryIcon(int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.SetCategoryIcon");

	UWG_Inventory_Slot_C_SetCategoryIcon_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.CloseItemSelection
// (BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::CloseItemSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.CloseItemSelection");

	UWG_Inventory_Slot_C_CloseItemSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.ExecuteUbergraph_WG_Inventory_Slot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::ExecuteUbergraph_WG_Inventory_Slot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.ExecuteUbergraph_WG_Inventory_Slot");

	UWG_Inventory_Slot_C_ExecuteUbergraph_WG_Inventory_Slot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnMouseDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_Slot_C::OnMouseDown__DelegateSignature(class UWG_Inventory_Slot_C** Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnMouseDown__DelegateSignature");

	UWG_Inventory_Slot_C_OnMouseDown__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDeselected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::OnDeselected__DelegateSignature(class UWG_Inventory_Slot_C** InventorySlotWidget, int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnDeselected__DelegateSignature");

	UWG_Inventory_Slot_C_OnDeselected__DelegateSignature_Params params;
	params.InventorySlotWidget = InventorySlotWidget;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_Slot_C::OnSelected__DelegateSignature(class UWG_Inventory_Slot_C** InventorySlotWidget, int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnSelected__DelegateSignature");

	UWG_Inventory_Slot_C_OnSelected__DelegateSignature_Params params;
	params.InventorySlotWidget = InventorySlotWidget;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnVanishAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_Slot_C::OnVanishAnimFinished__DelegateSignature(class UWG_Inventory_Slot_C** InventorySlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnVanishAnimFinished__DelegateSignature");

	UWG_Inventory_Slot_C_OnVanishAnimFinished__DelegateSignature_Params params;
	params.InventorySlotWidget = InventorySlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnRefresh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_Slot_C::OnRefresh__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnRefresh__DelegateSignature");

	UWG_Inventory_Slot_C_OnRefresh__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnTransferItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   WG_Inventory_Slot              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        CustomTransferInventory        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_Slot_C::OnTransferItem__DelegateSignature(class UWG_Inventory_Slot_C** WG_Inventory_Slot, class UWG_Inventory_C** CustomTransferInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory_Slot.WG_Inventory_Slot_C.OnTransferItem__DelegateSignature");

	UWG_Inventory_Slot_C_OnTransferItem__DelegateSignature_Params params;
	params.WG_Inventory_Slot = WG_Inventory_Slot;
	params.CustomTransferInventory = CustomTransferInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
