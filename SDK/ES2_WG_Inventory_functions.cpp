// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Inventory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Inventory.WG_Inventory_C.IsEmpty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::IsEmpty(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.IsEmpty");

	UWG_Inventory_C_IsEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory.WG_Inventory_C.GetMostExpensiveItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_Slot_C*    Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_C::GetMostExpensiveItem(class UWG_Inventory_Slot_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetMostExpensiveItem");

	UWG_Inventory_C_GetMostExpensiveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory.WG_Inventory_C.UpdateDragAndDropHighlights
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_C::UpdateDragAndDropHighlights()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.UpdateDragAndDropHighlights");

	UWG_Inventory_C_UpdateDragAndDropHighlights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.GetDropTargetSlotIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::GetDropTargetSlotIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetDropTargetSlotIndex");

	UWG_Inventory_C_GetDropTargetSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WG_Inventory.WG_Inventory_C.GetDragOriginSlotIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::GetDragOriginSlotIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetDragOriginSlotIndex");

	UWG_Inventory_C_GetDragOriginSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WG_Inventory.WG_Inventory_C.SetPositionOfDragOriginHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::SetPositionOfDragOriginHighlight(int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.SetPositionOfDragOriginHighlight");

	UWG_Inventory_C_SetPositionOfDragOriginHighlight_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.SetPositionOfDropTargetHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::SetPositionOfDropTargetHighlight(int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.SetPositionOfDropTargetHighlight");

	UWG_Inventory_C_SetPositionOfDropTargetHighlight_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.SetPositionOfSelectionHighlight
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_C::SetPositionOfSelectionHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.SetPositionOfSelectionHighlight");

	UWG_Inventory_C_SetPositionOfSelectionHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.CalculateCargoScrollHelpers
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_C::CalculateCargoScrollHelpers()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.CalculateCargoScrollHelpers");

	UWG_Inventory_C_CalculateCargoScrollHelpers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.GetMaxScrollOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWG_Inventory_C::GetMaxScrollOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetMaxScrollOffset");

	UWG_Inventory_C_GetMaxScrollOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory.WG_Inventory_C.ScrollDown
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_C::ScrollDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.ScrollDown");

	UWG_Inventory_C_ScrollDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.ScrollUp
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_C::ScrollUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.ScrollUp");

	UWG_Inventory_C_ScrollUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.GetScrollBoxLineTeasingOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::GetScrollBoxLineTeasingOffset(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetScrollBoxLineTeasingOffset");

	UWG_Inventory_C_GetScrollBoxLineTeasingOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory.WG_Inventory_C.IsScrollingDownPossible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SlotOnBorderIndex              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::IsScrollingDownPossible(bool* Result, int* SlotOnBorderIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.IsScrollingDownPossible");

	UWG_Inventory_C_IsScrollingDownPossible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SlotOnBorderIndex != nullptr)
		*SlotOnBorderIndex = params.SlotOnBorderIndex;
}


// Function WG_Inventory.WG_Inventory_C.IsScrollingUpPossible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SlotOnBorderIndex              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::IsScrollingUpPossible(bool* Result, int* SlotOnBorderIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.IsScrollingUpPossible");

	UWG_Inventory_C_IsScrollingUpPossible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SlotOnBorderIndex != nullptr)
		*SlotOnBorderIndex = params.SlotOnBorderIndex;
}


// Function WG_Inventory.WG_Inventory_C.IsSlotAtIndexFullyInView
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::IsSlotAtIndexFullyInView(int* Index, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.IsSlotAtIndexFullyInView");

	UWG_Inventory_C_IsSlotAtIndexFullyInView_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory.WG_Inventory_C.GetGivenSlotPositionY
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::GetGivenSlotPositionY(int* Index, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetGivenSlotPositionY");

	UWG_Inventory_C_GetGivenSlotPositionY_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory.WG_Inventory_C.SetHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::SetHeight(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.SetHeight");

	UWG_Inventory_C_SetHeight_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.SetCompareItemForAllSlotsWithItemOfCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  CompareItemRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::SetCompareItemForAllSlotsWithItemOfCategory(class UItem** CompareItemRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.SetCompareItemForAllSlotsWithItemOfCategory");

	UWG_Inventory_C_SetCompareItemForAllSlotsWithItemOfCategory_Params params;
	params.CompareItemRef = CompareItemRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.GetTotalSlotCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::GetTotalSlotCount(int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetTotalSlotCount");

	UWG_Inventory_C_GetTotalSlotCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory.WG_Inventory_C.ToggleHeadlineHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HighlightOn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::ToggleHeadlineHighlight(bool* HighlightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.ToggleHeadlineHighlight");

	UWG_Inventory_C_ToggleHeadlineHighlight_Params params;
	params.HighlightOn = HighlightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.HasValidItemWidgetAtIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_Slot_C*    Slot                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Item_Icon_C*         ItemWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_C::HasValidItemWidgetAtIndex(int* Index, bool* Result, class UWG_Inventory_Slot_C** Slot, class UWG_Item_Icon_C** ItemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.HasValidItemWidgetAtIndex");

	UWG_Inventory_C_HasValidItemWidgetAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (Slot != nullptr)
		*Slot = params.Slot;
	if (ItemWidget != nullptr)
		*ItemWidget = params.ItemWidget;
}


// Function WG_Inventory.WG_Inventory_C.HasSpaceToFullyAddGivenItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::HasSpaceToFullyAddGivenItem(class UItem** Item, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.HasSpaceToFullyAddGivenItem");

	UWG_Inventory_C_HasSpaceToFullyAddGivenItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory.WG_Inventory_C.GetSlotAtIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_Slot_C*    Inventory_Slot                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_C::GetSlotAtIndex(int* Index, class UWG_Inventory_Slot_C** Inventory_Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetSlotAtIndex");

	UWG_Inventory_C_GetSlotAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory_Slot != nullptr)
		*Inventory_Slot = params.Inventory_Slot;
}


// Function WG_Inventory.WG_Inventory_C.SelectGivenSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   SlotToSelect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::SelectGivenSlot(class UWG_Inventory_Slot_C** SlotToSelect, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.SelectGivenSlot");

	UWG_Inventory_C_SelectGivenSlot_Params params;
	params.SlotToSelect = SlotToSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function WG_Inventory.WG_Inventory_C.GetFirstEmptySlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_Slot_C*    EmptySlot                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           HasEmptySlot                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::GetFirstEmptySlot(class UWG_Inventory_Slot_C** EmptySlot, bool* HasEmptySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetFirstEmptySlot");

	UWG_Inventory_C_GetFirstEmptySlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EmptySlot != nullptr)
		*EmptySlot = params.EmptySlot;
	if (HasEmptySlot != nullptr)
		*HasEmptySlot = params.HasEmptySlot;
}


// Function WG_Inventory.WG_Inventory_C.SetSafeSelectedSlotIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           DesiredSlotIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IndexWasClipped                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::SetSafeSelectedSlotIndex(int* DesiredSlotIndex, bool* IndexWasClipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.SetSafeSelectedSlotIndex");

	UWG_Inventory_C_SetSafeSelectedSlotIndex_Params params;
	params.DesiredSlotIndex = DesiredSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IndexWasClipped != nullptr)
		*IndexWasClipped = params.IndexWasClipped;
}


// Function WG_Inventory.WG_Inventory_C.GetMaxOpenAmountForItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::GetMaxOpenAmountForItem(class UItem** Item, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetMaxOpenAmountForItem");

	UWG_Inventory_C_GetMaxOpenAmountForItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory.WG_Inventory_C.GetAmountOfItemType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::GetAmountOfItemType(class UItem** Item, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetAmountOfItemType");

	UWG_Inventory_C_GetAmountOfItemType_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory.WG_Inventory_C.IsSingleSlotInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::IsSingleSlotInventory(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.IsSingleSlotInventory");

	UWG_Inventory_C_IsSingleSlotInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory.WG_Inventory_C.GetEquipActionType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryType>*   InventoryType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEquipActionType>  EquipActionType                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::GetEquipActionType(TEnumAsByte<EInventoryType>* InventoryType, TEnumAsByte<EEquipActionType>* EquipActionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetEquipActionType");

	UWG_Inventory_C_GetEquipActionType_Params params;
	params.InventoryType = InventoryType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EquipActionType != nullptr)
		*EquipActionType = params.EquipActionType;
}


// Function WG_Inventory.WG_Inventory_C.IsEquipment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::IsEquipment(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.IsEquipment");

	UWG_Inventory_C_IsEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory.WG_Inventory_C.HasSameCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_C**        Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::HasSameCategory(class UWG_Inventory_C** Inventory, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.HasSameCategory");

	UWG_Inventory_C_HasSameCategory_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory.WG_Inventory_C.SetItemActionCaptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  EquipAction                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  EquipEmptyAction               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  MoveAction                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Inventory_C::SetItemActionCaptions(struct FText* EquipAction, struct FText* EquipEmptyAction, struct FText* MoveAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.SetItemActionCaptions");

	UWG_Inventory_C_SetItemActionCaptions_Params params;
	params.EquipAction = EquipAction;
	params.EquipEmptyAction = EquipEmptyAction;
	params.MoveAction = MoveAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.GetSlotWidgetForItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item_Ref                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_Slot_C*    SlotWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_C::GetSlotWidgetForItem(class UItem** Item_Ref, class UWG_Inventory_Slot_C** SlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetSlotWidgetForItem");

	UWG_Inventory_C_GetSlotWidgetForItem_Params params;
	params.Item_Ref = Item_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotWidget != nullptr)
		*SlotWidget = params.SlotWidget;
}


// Function WG_Inventory.WG_Inventory_C.HasSpaceForItemOfCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Item_Template_ID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasSpace                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::HasSpaceForItemOfCategory(struct FName* Item_Template_ID, bool* HasSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.HasSpaceForItemOfCategory");

	UWG_Inventory_C_HasSpaceForItemOfCategory_Params params;
	params.Item_Template_ID = Item_Template_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasSpace != nullptr)
		*HasSpace = params.HasSpace;
}


// Function WG_Inventory.WG_Inventory_C.SetFocusToSourceSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::SetFocusToSourceSlot(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.SetFocusToSourceSlot");

	UWG_Inventory_C_SetFocusToSourceSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Inventory.WG_Inventory_C.GetSlotWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWG_Inventory_Slot_C*> SlotWidgets                    (Parm, OutParm, ZeroConstructor)

void UWG_Inventory_C::GetSlotWidgets(TArray<class UWG_Inventory_Slot_C*>* SlotWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetSlotWidgets");

	UWG_Inventory_C_GetSlotWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotWidgets != nullptr)
		*SlotWidgets = params.SlotWidgets;
}


// Function WG_Inventory.WG_Inventory_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Inventory_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.OnMouseButtonDown");

	UWG_Inventory_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory.WG_Inventory_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Inventory_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.OnFocusReceived");

	UWG_Inventory_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory.WG_Inventory_C.CalcRowsAndColumns
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumItems                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rows                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Columns                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::CalcRowsAndColumns(int* NumItems, int* Rows, int* Columns)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.CalcRowsAndColumns");

	UWG_Inventory_C_CalcRowsAndColumns_Params params;
	params.NumItems = NumItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rows != nullptr)
		*Rows = params.Rows;
	if (Columns != nullptr)
		*Columns = params.Columns;
}


// Function WG_Inventory.WG_Inventory_C.GetAllowItemSwap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AllowItemActions               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::GetAllowItemSwap(bool* AllowItemActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetAllowItemSwap");

	UWG_Inventory_C_GetAllowItemSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllowItemActions != nullptr)
		*AllowItemActions = params.AllowItemActions;
}


// Function WG_Inventory.WG_Inventory_C.IsIconHovered
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWG_Inventory_C::IsIconHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.IsIconHovered");

	UWG_Inventory_C_IsIconHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory.WG_Inventory_C.SetAllowItemSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          AllowItemSwap                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::SetAllowItemSwap(bool* AllowItemSwap)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.SetAllowItemSwap");

	UWG_Inventory_C_SetAllowItemSwap_Params params;
	params.AllowItemSwap = AllowItemSwap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.GetHighlightInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_C*         InventoryWidget                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_C::GetHighlightInventory(TEnumAsByte<EInventoryCategory>* Category, class UWG_Inventory_C** InventoryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetHighlightInventory");

	UWG_Inventory_C_GetHighlightInventory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventoryWidget != nullptr)
		*InventoryWidget = params.InventoryWidget;
}


// Function WG_Inventory.WG_Inventory_C.GetCompareItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Item_Icon_C*         ItemWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C*    ItemSlot                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_C::GetCompareItem(class UWG_Item_Icon_C** ItemWidget, class UWG_Inventory_Slot_C** ItemSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetCompareItem");

	UWG_Inventory_C_GetCompareItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemWidget != nullptr)
		*ItemWidget = params.ItemWidget;
	if (ItemSlot != nullptr)
		*ItemSlot = params.ItemSlot;
}


// Function WG_Inventory.WG_Inventory_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Inventory_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.OnMouseWheel");

	UWG_Inventory_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Inventory.WG_Inventory_C.ChangeCompareItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Forward                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::ChangeCompareItem(bool* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.ChangeCompareItem");

	UWG_Inventory_C_ChangeCompareItem_Params params;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.RemoveCompareItem
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_C::RemoveCompareItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.RemoveCompareItem");

	UWG_Inventory_C_RemoveCompareItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.ReinitCompareItem
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Inventory_C::ReinitCompareItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.ReinitCompareItem");

	UWG_Inventory_C_ReinitCompareItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.GetFirstInventorySlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_Slot_C*    Inventory_Slot                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_C::GetFirstInventorySlot(class UWG_Inventory_Slot_C** Inventory_Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetFirstInventorySlot");

	UWG_Inventory_C_GetFirstInventorySlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory_Slot != nullptr)
		*Inventory_Slot = params.Inventory_Slot;
}


// Function WG_Inventory.WG_Inventory_C.GetAllowItemActions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AllowItemActions               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::GetAllowItemActions(bool* AllowItemActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.GetAllowItemActions");

	UWG_Inventory_C_GetAllowItemActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllowItemActions != nullptr)
		*AllowItemActions = params.AllowItemActions;
}


// Function WG_Inventory.WG_Inventory_C.SetAllowItemActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          AllowItemActions               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::SetAllowItemActions(bool* AllowItemActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.SetAllowItemActions");

	UWG_Inventory_C_SetAllowItemActions_Params params;
	params.AllowItemActions = AllowItemActions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Inventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.Construct");

	UWG_Inventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.PreConstruct");

	UWG_Inventory_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.InitGrid
// (BlueprintCallable, BlueprintEvent)

void UWG_Inventory_C::InitGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.InitGrid");

	UWG_Inventory_C_InitGrid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.SetInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory**             Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::SetInventory(class UInventory** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.SetInventory");

	UWG_Inventory_C_SetInventory_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UWG_Inventory_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.Refresh");

	UWG_Inventory_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.SetHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HighlightOn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::SetHighlight(bool* HighlightOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.SetHighlight");

	UWG_Inventory_C_SetHighlight_Params params;
	params.HighlightOn = HighlightOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.AddEmptySlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory**             Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::AddEmptySlot(class UInventory** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.AddEmptySlot");

	UWG_Inventory_C_AddEmptySlot_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.InventorySlotDeselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::InventorySlotDeselected(class UWG_Inventory_Slot_C** InventorySlotWidget, int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.InventorySlotDeselected");

	UWG_Inventory_C_InventorySlotDeselected_Params params;
	params.InventorySlotWidget = InventorySlotWidget;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.InventorySlotSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::InventorySlotSelected(class UWG_Inventory_Slot_C** InventorySlotWidget, int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.InventorySlotSelected");

	UWG_Inventory_C_InventorySlotSelected_Params params;
	params.InventorySlotWidget = InventorySlotWidget;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.UpdateShopInventoryWithCompareItem
// (BlueprintCallable, BlueprintEvent)

void UWG_Inventory_C::UpdateShopInventoryWithCompareItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.UpdateShopInventoryWithCompareItem");

	UWG_Inventory_C_UpdateShopInventoryWithCompareItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.OnMouseDown_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_C::OnMouseDown_Event_1(class UWG_Inventory_Slot_C** Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.OnMouseDown_Event_1");

	UWG_Inventory_C_OnMouseDown_Event_1_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.ExecuteUbergraph_WG_Inventory
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Inventory_C::ExecuteUbergraph_WG_Inventory(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.ExecuteUbergraph_WG_Inventory");

	UWG_Inventory_C_ExecuteUbergraph_WG_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.OnSlotMouseDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_C::OnSlotMouseDown__DelegateSignature(class UWG_Inventory_Slot_C** Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.OnSlotMouseDown__DelegateSignature");

	UWG_Inventory_C_OnSlotMouseDown__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.OnSlotChosen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        CurrentShipCargoInventory      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_C::OnSlotChosen__DelegateSignature(class UWG_Inventory_Slot_C** Slot, class UWG_Inventory_C** CurrentShipCargoInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.OnSlotChosen__DelegateSignature");

	UWG_Inventory_C_OnSlotChosen__DelegateSignature_Params params;
	params.Slot = Slot;
	params.CurrentShipCargoInventory = CurrentShipCargoInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.OnSlotDeselected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_C::OnSlotDeselected__DelegateSignature(class UWG_Inventory_Slot_C** InventorySlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.OnSlotDeselected__DelegateSignature");

	UWG_Inventory_C_OnSlotDeselected__DelegateSignature_Params params;
	params.InventorySlotWidget = InventorySlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.OnSlotSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_C::OnSlotSelected__DelegateSignature(class UWG_Inventory_Slot_C** InventorySlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.OnSlotSelected__DelegateSignature");

	UWG_Inventory_C_OnSlotSelected__DelegateSignature_Params params;
	params.InventorySlotWidget = InventorySlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.OnCompareItemChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   CompareItemSlot                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_C::OnCompareItemChanged__DelegateSignature(class UWG_Inventory_Slot_C** CompareItemSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.OnCompareItemChanged__DelegateSignature");

	UWG_Inventory_C_OnCompareItemChanged__DelegateSignature_Params params;
	params.CompareItemSlot = CompareItemSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Inventory.WG_Inventory_C.OnRefresh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_C**        InventoryWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Inventory_C::OnRefresh__DelegateSignature(class UWG_Inventory_C** InventoryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Inventory.WG_Inventory_C.OnRefresh__DelegateSignature");

	UWG_Inventory_C_OnRefresh__DelegateSignature_Params params;
	params.InventoryWidget = InventoryWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
