// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_LIB_F_ItemManagement_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsEquipmentModuleCategory
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_IsEquipmentModuleCategory(TEnumAsByte<EInventoryCategory>* Category, class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsEquipmentModuleCategory");

	ULIB_F_ItemManagement_C_IsEquipmentModuleCategory_Params params;
	params.Category = Category;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.PlayErrorSFX
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_PlayErrorSFX(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.PlayErrorSFX");

	ULIB_F_ItemManagement_C_PlayErrorSFX_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.PlayItemTransferSFX
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EItemTransferType>* TransferType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETechnicalItemTransferType>* TechnicalTransferType          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_Slot_C**   TargetSlotRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsDragAndDrop                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsSilentTransfer               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsFeasibilityCheck             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_PlayItemTransferSFX(TEnumAsByte<EItemTransferType>* TransferType, TEnumAsByte<ETechnicalItemTransferType>* TechnicalTransferType, class UWG_Inventory_Slot_C** TargetSlotRef, bool* IsDragAndDrop, bool* IsSilentTransfer, bool* IsFeasibilityCheck, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.PlayItemTransferSFX");

	ULIB_F_ItemManagement_C_PlayItemTransferSFX_Params params;
	params.TransferType = TransferType;
	params.TechnicalTransferType = TechnicalTransferType;
	params.TargetSlotRef = TargetSlotRef;
	params.IsDragAndDrop = IsDragAndDrop;
	params.IsSilentTransfer = IsSilentTransfer;
	params.IsFeasibilityCheck = IsFeasibilityCheck;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.PlayBackOrCloseSFX
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWidgetType>*      WidgetType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_PlayBackOrCloseSFX(TEnumAsByte<EWidgetType>* WidgetType, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.PlayBackOrCloseSFX");

	ULIB_F_ItemManagement_C_PlayBackOrCloseSFX_Params params;
	params.WidgetType = WidgetType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.PlayNavigationSFX
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   PreviousSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   CurrentSlot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_PlayNavigationSFX(class UWG_Inventory_Slot_C** PreviousSlot, class UWG_Inventory_Slot_C** CurrentSlot, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.PlayNavigationSFX");

	ULIB_F_ItemManagement_C_PlayNavigationSFX_Params params;
	params.PreviousSlot = PreviousSlot;
	params.CurrentSlot = CurrentSlot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.MoveAllItems
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_C**        SourceInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        TargetInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_MoveAllItems(class UWG_Inventory_C** SourceInventory, class UWG_Inventory_C** TargetInventory, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.MoveAllItems");

	ULIB_F_ItemManagement_C_MoveAllItems_Params params;
	params.SourceInventory = SourceInventory;
	params.TargetInventory = TargetInventory;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetItemIconReference
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem**                  ItemRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsIconRefValid                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TSoftObjectPtr<class UTexture2D> IconRef                        (Parm, OutParm)

void ULIB_F_ItemManagement_C::STATIC_GetItemIconReference(class UItem** ItemRef, class UObject** __WorldContext, bool* IsIconRefValid, TSoftObjectPtr<class UTexture2D>* IconRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetItemIconReference");

	ULIB_F_ItemManagement_C_GetItemIconReference_Params params;
	params.ItemRef = ItemRef;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsIconRefValid != nullptr)
		*IsIconRefValid = params.IsIconRefValid;
	if (IconRef != nullptr)
		*IconRef = params.IconRef;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.SetItemIcon
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                LoadedTexture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage**                 ImageObj                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_SetItemIcon(class UObject** LoadedTexture, class UImage** ImageObj, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.SetItemIcon");

	ULIB_F_ItemManagement_C_SetItemIcon_Params params;
	params.LoadedTexture = LoadedTexture;
	params.ImageObj = ImageObj;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.SetupRarityAndTypeText
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock**             TextObj                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UItem**                  ItemRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_SetupRarityAndTypeText(class UTextBlock** TextObj, class UItem** ItemRef, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.SetupRarityAndTypeText");

	ULIB_F_ItemManagement_C_SetupRarityAndTypeText_Params params;
	params.TextObj = TextObj;
	params.ItemRef = ItemRef;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsInternalShopTransfer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_Slot_C**   Slot1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   Slot2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_IsInternalShopTransfer(class UWG_Inventory_Slot_C** Slot1, class UWG_Inventory_Slot_C** Slot2, class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsInternalShopTransfer");

	ULIB_F_ItemManagement_C_IsInternalShopTransfer_Params params;
	params.Slot1 = Slot1;
	params.Slot2 = Slot2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetItemBackgroundPattern
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  ItemRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          BigVersion                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_GetItemBackgroundPattern(class UItem** ItemRef, bool* BigVersion, class UObject** __WorldContext, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetItemBackgroundPattern");

	ULIB_F_ItemManagement_C_GetItemBackgroundPattern_Params params;
	params.ItemRef = ItemRef;
	params.BigVersion = BigVersion;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.DoCompareInventoryRefreshIfNecessary
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   SourceSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        TargetInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_DoCompareInventoryRefreshIfNecessary(class UWG_Inventory_Slot_C** SourceSlot, class UWG_Inventory_C** TargetInventory, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.DoCompareInventoryRefreshIfNecessary");

	ULIB_F_ItemManagement_C_DoCompareInventoryRefreshIfNecessary_Params params;
	params.SourceSlot = SourceSlot;
	params.TargetInventory = TargetInventory;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetGeneralizedNameOfCategory
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)

void ULIB_F_ItemManagement_C::STATIC_GetGeneralizedNameOfCategory(TEnumAsByte<EInventoryCategory>* Category, class UObject** __WorldContext, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetGeneralizedNameOfCategory");

	ULIB_F_ItemManagement_C_GetGeneralizedNameOfCategory_Params params;
	params.Category = Category;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetNameOfCategory
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InUpperCase                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)

void ULIB_F_ItemManagement_C::STATIC_GetNameOfCategory(TEnumAsByte<EInventoryCategory>* Category, bool* InUpperCase, class UObject** __WorldContext, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetNameOfCategory");

	ULIB_F_ItemManagement_C_GetNameOfCategory_Params params;
	params.Category = Category;
	params.InUpperCase = InUpperCase;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetShipNameByIndex
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)

void ULIB_F_ItemManagement_C::STATIC_GetShipNameByIndex(int* Index, class UObject** __WorldContext, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetShipNameByIndex");

	ULIB_F_ItemManagement_C_GetShipNameByIndex_Params params;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.HighlightActiveInventory
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWG_Inventory_C*> Inventories                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_HighlightActiveInventory(class UObject** __WorldContext, TArray<class UWG_Inventory_C*>* Inventories)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.HighlightActiveInventory");

	ULIB_F_ItemManagement_C_HighlightActiveInventory_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventories != nullptr)
		*Inventories = params.Inventories;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsEquipmentCategory
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_IsEquipmentCategory(TEnumAsByte<EInventoryCategory>* Category, class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsEquipmentCategory");

	ULIB_F_ItemManagement_C_IsEquipmentCategory_Params params;
	params.Category = Category;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.HighlightEquipmentCategoryToCompareWithItem
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_ShipInventory_C**    ShipInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_C**        ItemInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_HighlightEquipmentCategoryToCompareWithItem(class UWG_ShipInventory_C** ShipInventory, class UItem** Item, class UWG_Inventory_C** ItemInventory, class UObject** __WorldContext, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.HighlightEquipmentCategoryToCompareWithItem");

	ULIB_F_ItemManagement_C_HighlightEquipmentCategoryToCompareWithItem_Params params;
	params.ShipInventory = ShipInventory;
	params.Item = Item;
	params.ItemInventory = ItemInventory;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.UpdateItemInfoWidget
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Item_Info_C**        Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   BaseSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   CompareSlot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DoNotChangeVisibilityState     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_UpdateItemInfoWidget(class UWG_Item_Info_C** Widget, class UWG_Inventory_Slot_C** BaseSlot, class UWG_Inventory_Slot_C** CompareSlot, bool* Hide, bool* DoNotChangeVisibilityState, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.UpdateItemInfoWidget");

	ULIB_F_ItemManagement_C_UpdateItemInfoWidget_Params params;
	params.Widget = Widget;
	params.BaseSlot = BaseSlot;
	params.CompareSlot = CompareSlot;
	params.Hide = Hide;
	params.DoNotChangeVisibilityState = DoNotChangeVisibilityState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsShopSlot
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_Slot_C**   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_IsShopSlot(class UWG_Inventory_Slot_C** Slot, class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsShopSlot");

	ULIB_F_ItemManagement_C_IsShopSlot_Params params;
	params.Slot = Slot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.MarkItemForBuybackOrRefund
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EItemTransferType>* TransferType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsFeasibilityCheck             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_MarkItemForBuybackOrRefund(TEnumAsByte<EItemTransferType>* TransferType, class UItem** Item, bool* IsFeasibilityCheck, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.MarkItemForBuybackOrRefund");

	ULIB_F_ItemManagement_C_MarkItemForBuybackOrRefund_Params params;
	params.TransferType = TransferType;
	params.Item = Item;
	params.IsFeasibilityCheck = IsFeasibilityCheck;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetTransferPrice
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EItemTransferType>* TransferType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Total                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            PerItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CanAfford                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_GetTransferPrice(TEnumAsByte<EItemTransferType>* TransferType, class UItem** Item, int* Amount, class UObject** __WorldContext, int* Total, int* PerItem, bool* CanAfford)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetTransferPrice");

	ULIB_F_ItemManagement_C_GetTransferPrice_Params params;
	params.TransferType = TransferType;
	params.Item = Item;
	params.Amount = Amount;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Total != nullptr)
		*Total = params.Total;
	if (PerItem != nullptr)
		*PerItem = params.PerItem;
	if (CanAfford != nullptr)
		*CanAfford = params.CanAfford;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsTransferAffordable
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EItemTransferType>* TransferType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_IsTransferAffordable(class UItem** Item, int* Amount, TEnumAsByte<EItemTransferType>* TransferType, class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsTransferAffordable");

	ULIB_F_ItemManagement_C_IsTransferAffordable_Params params;
	params.Item = Item;
	params.Amount = Amount;
	params.TransferType = TransferType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.PerformCreditsTransactionIfNecessary
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EItemTransferType>* TransferType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsFeasibilityCheck             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CreditsChange                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           WasNecessary                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_PerformCreditsTransactionIfNecessary(TEnumAsByte<EItemTransferType>* TransferType, class UItem** Item, int* Amount, bool* IsFeasibilityCheck, class UObject** __WorldContext, bool* Result, int* CreditsChange, bool* WasNecessary)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.PerformCreditsTransactionIfNecessary");

	ULIB_F_ItemManagement_C_PerformCreditsTransactionIfNecessary_Params params;
	params.TransferType = TransferType;
	params.Item = Item;
	params.Amount = Amount;
	params.IsFeasibilityCheck = IsFeasibilityCheck;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (CreditsChange != nullptr)
		*CreditsChange = params.CreditsChange;
	if (WasNecessary != nullptr)
		*WasNecessary = params.WasNecessary;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetSellingPrice
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceRealPrice                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Total                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            PerItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_GetSellingPrice(class UItem** Item, int* Amount, bool* ForceRealPrice, class UObject** __WorldContext, int* Total, int* PerItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetSellingPrice");

	ULIB_F_ItemManagement_C_GetSellingPrice_Params params;
	params.Item = Item;
	params.Amount = Amount;
	params.ForceRealPrice = ForceRealPrice;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Total != nullptr)
		*Total = params.Total;
	if (PerItem != nullptr)
		*PerItem = params.PerItem;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetBuyingPrice
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceRealPrice                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Total                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            PerItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CanAffordAll                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CanAffordOne                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_GetBuyingPrice(class UItem** Item, int* Amount, bool* ForceRealPrice, class UObject** __WorldContext, int* Total, int* PerItem, bool* CanAffordAll, bool* CanAffordOne)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetBuyingPrice");

	ULIB_F_ItemManagement_C_GetBuyingPrice_Params params;
	params.Item = Item;
	params.Amount = Amount;
	params.ForceRealPrice = ForceRealPrice;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Total != nullptr)
		*Total = params.Total;
	if (PerItem != nullptr)
		*PerItem = params.PerItem;
	if (CanAffordAll != nullptr)
		*CanAffordAll = params.CanAffordAll;
	if (CanAffordOne != nullptr)
		*CanAffordOne = params.CanAffordOne;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsGivenSlotInvalidOrEmpty
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_Slot_C**   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_IsGivenSlotInvalidOrEmpty(class UWG_Inventory_Slot_C** Slot, class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsGivenSlotInvalidOrEmpty");

	ULIB_F_ItemManagement_C_IsGivenSlotInvalidOrEmpty_Params params;
	params.Slot = Slot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ShowSlotLimitReachedDialog
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFeasibilityCheck             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_ShowSlotLimitReachedDialog(bool* IsFeasibilityCheck, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ShowSlotLimitReachedDialog");

	ULIB_F_ItemManagement_C_ShowSlotLimitReachedDialog_Params params;
	params.IsFeasibilityCheck = IsFeasibilityCheck;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetInventoryType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_C**        Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryType>    Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_GetInventoryType(class UWG_Inventory_C** Inventory, class UObject** __WorldContext, TEnumAsByte<EInventoryType>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetInventoryType");

	ULIB_F_ItemManagement_C_GetInventoryType_Params params;
	params.Inventory = Inventory;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ShowInventoryLimitReachedDialog
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFeasibilityCheck             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_ShowInventoryLimitReachedDialog(bool* IsFeasibilityCheck, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ShowInventoryLimitReachedDialog");

	ULIB_F_ItemManagement_C_ShowInventoryLimitReachedDialog_Params params;
	params.IsFeasibilityCheck = IsFeasibilityCheck;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ShowCargoLimitReachedDialog
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 UniqueIntro                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           Overload                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsFeasibilityCheck             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_ShowCargoLimitReachedDialog(class FString* UniqueIntro, int* Overload, bool* IsFeasibilityCheck, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ShowCargoLimitReachedDialog");

	ULIB_F_ItemManagement_C_ShowCargoLimitReachedDialog_Params params;
	params.UniqueIntro = UniqueIntro;
	params.Overload = Overload;
	params.IsFeasibilityCheck = IsFeasibilityCheck;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.LogMessage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceDisplay                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_LogMessage(class FString* Message, struct FLinearColor* Color, bool* ForceDisplay, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.LogMessage");

	ULIB_F_ItemManagement_C_LogMessage_Params params;
	params.Message = Message;
	params.Color = Color;
	params.ForceDisplay = ForceDisplay;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.LogItemTransferResult
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsFeasibilityCheck             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_LogItemTransferResult(class FString* Message, bool* Result, bool* IsFeasibilityCheck, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.LogItemTransferResult");

	ULIB_F_ItemManagement_C_LogItemTransferResult_Params params;
	params.Message = Message;
	params.Result = Result;
	params.IsFeasibilityCheck = IsFeasibilityCheck;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ShowNotEnoughFreeSpaceInCargoDialog
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFeasibilityCheck             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsFromOtherShip                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_ShowNotEnoughFreeSpaceInCargoDialog(bool* IsFeasibilityCheck, bool* IsFromOtherShip, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ShowNotEnoughFreeSpaceInCargoDialog");

	ULIB_F_ItemManagement_C_ShowNotEnoughFreeSpaceInCargoDialog_Params params;
	params.IsFeasibilityCheck = IsFeasibilityCheck;
	params.IsFromOtherShip = IsFromOtherShip;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetMaxFillUpTransferAmount
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  SourceItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  TargetItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_GetMaxFillUpTransferAmount(class UItem** SourceItem, class UItem** TargetItem, class UObject** __WorldContext, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetMaxFillUpTransferAmount");

	ULIB_F_ItemManagement_C_GetMaxFillUpTransferAmount_Params params;
	params.SourceItem = SourceItem;
	params.TargetItem = TargetItem;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.HaveSameType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  Item2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CountEmpty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_HaveSameType(class UItem** Item1, class UItem** Item2, bool* CountEmpty, class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.HaveSameType");

	ULIB_F_ItemManagement_C_HaveSameType_Params params;
	params.Item1 = Item1;
	params.Item2 = Item2;
	params.CountEmpty = CountEmpty;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsSlotFromOtherShip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EItemSlotType>*    SlotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_IsSlotFromOtherShip(TEnumAsByte<EItemSlotType>* SlotType, class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsSlotFromOtherShip");

	ULIB_F_ItemManagement_C_IsSlotFromOtherShip_Params params;
	params.SlotType = SlotType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsValidShipIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           IndexToCheck                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_IsValidShipIndex(int* IndexToCheck, class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsValidShipIndex");

	ULIB_F_ItemManagement_C_IsValidShipIndex_Params params;
	params.IndexToCheck = IndexToCheck;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsInactiveShipIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           IndexToCheck                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_IsInactiveShipIndex(int* IndexToCheck, class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsInactiveShipIndex");

	ULIB_F_ItemManagement_C_IsInactiveShipIndex_Params params;
	params.IndexToCheck = IndexToCheck;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.WouldActionDestroyCargoSpaceOfCurrentShip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem**                  CurrentItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  NewItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ConsiderCargoChangingItemsOnly (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SpaceIncrease                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ItemOverload                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_WouldActionDestroyCargoSpaceOfCurrentShip(class UItem** CurrentItem, class UItem** NewItem, bool* ConsiderCargoChangingItemsOnly, class UObject** __WorldContext, bool* Result, int* SpaceIncrease, int* ItemOverload)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.WouldActionDestroyCargoSpaceOfCurrentShip");

	ULIB_F_ItemManagement_C_WouldActionDestroyCargoSpaceOfCurrentShip_Params params;
	params.CurrentItem = CurrentItem;
	params.NewItem = NewItem;
	params.ConsiderCargoChangingItemsOnly = ConsiderCargoChangingItemsOnly;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SpaceIncrease != nullptr)
		*SpaceIncrease = params.SpaceIncrease;
	if (ItemOverload != nullptr)
		*ItemOverload = params.ItemOverload;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsCargoSpaceChangingItem
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// int                            CargoSpaceIncrease             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ULIB_F_ItemManagement_C::STATIC_IsCargoSpaceChangingItem(class UItem** Item, class UObject** __WorldContext, int* CargoSpaceIncrease)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsCargoSpaceChangingItem");

	ULIB_F_ItemManagement_C_IsCargoSpaceChangingItem_Params params;
	params.Item = Item;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CargoSpaceIncrease != nullptr)
		*CargoSpaceIncrease = params.CargoSpaceIncrease;

	return params.ReturnValue;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsItemNecessaryToStoreAllCargo
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventory**             CargoInventory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ShipIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Overload                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_IsItemNecessaryToStoreAllCargo(class UItem** Item, class UInventory** CargoInventory, int* ShipIndex, class UObject** __WorldContext, bool* Result, int* Overload)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsItemNecessaryToStoreAllCargo");

	ULIB_F_ItemManagement_C_IsItemNecessaryToStoreAllCargo_Params params;
	params.Item = Item;
	params.CargoInventory = CargoInventory;
	params.ShipIndex = ShipIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (Overload != nullptr)
		*Overload = params.Overload;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsCreditsTransferToConvert
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_Slot_C**   SourceSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        TargetInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_IsCreditsTransferToConvert(class UWG_Inventory_Slot_C** SourceSlot, class UWG_Inventory_C** TargetInventory, class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsCreditsTransferToConvert");

	ULIB_F_ItemManagement_C_IsCreditsTransferToConvert_Params params;
	params.SourceSlot = SourceSlot;
	params.TargetInventory = TargetInventory;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.DoWeNeedAmountSelectionToEquip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_C**        SourceInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  ItemTemplateID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_Slot_C**   TargetSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            InitialAmount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MaxAmount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_DoWeNeedAmountSelectionToEquip(class UWG_Inventory_C** SourceInventory, struct FName* ItemTemplateID, class UWG_Inventory_Slot_C** TargetSlot, class UObject** __WorldContext, bool* Result, int* InitialAmount, int* MaxAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.DoWeNeedAmountSelectionToEquip");

	ULIB_F_ItemManagement_C_DoWeNeedAmountSelectionToEquip_Params params;
	params.SourceInventory = SourceInventory;
	params.ItemTemplateID = ItemTemplateID;
	params.TargetSlot = TargetSlot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (InitialAmount != nullptr)
		*InitialAmount = params.InitialAmount;
	if (MaxAmount != nullptr)
		*MaxAmount = params.MaxAmount;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.DoWeNeedAmountSelectionToMove
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   SlotWithItemsToMove            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        TargetInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsDragAndDrop                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MaxAmount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_DoWeNeedAmountSelectionToMove(class UWG_Inventory_Slot_C** SlotWithItemsToMove, class UWG_Inventory_C** TargetInventory, bool* IsDragAndDrop, class UObject** __WorldContext, bool* Result, int* MaxAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.DoWeNeedAmountSelectionToMove");

	ULIB_F_ItemManagement_C_DoWeNeedAmountSelectionToMove_Params params;
	params.SlotWithItemsToMove = SlotWithItemsToMove;
	params.TargetInventory = TargetInventory;
	params.IsDragAndDrop = IsDragAndDrop;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (MaxAmount != nullptr)
		*MaxAmount = params.MaxAmount;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetImplicitTransferAmount
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   SourceSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   TargetSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_GetImplicitTransferAmount(class UWG_Inventory_Slot_C** SourceSlot, class UWG_Inventory_Slot_C** TargetSlot, class UObject** __WorldContext, int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetImplicitTransferAmount");

	ULIB_F_ItemManagement_C_GetImplicitTransferAmount_Params params;
	params.SourceSlot = SourceSlot;
	params.TargetSlot = TargetSlot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.CreateSlotDataFromSlot
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_Slot_C**   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSTRCT_ItemSelectionSlotInfo SlotData                       (Parm, OutParm, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_CreateSlotDataFromSlot(class UWG_Inventory_Slot_C** Slot, class UObject** __WorldContext, struct FSTRCT_ItemSelectionSlotInfo* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.CreateSlotDataFromSlot");

	ULIB_F_ItemManagement_C_CreateSlotDataFromSlot_Params params;
	params.Slot = Slot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotData != nullptr)
		*SlotData = params.SlotData;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.DeleteItem
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory**             InventoryOfItem                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  ItemToDelete                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_Slot_C**   SlotToEmpty                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_DeleteItem(class UInventory** InventoryOfItem, class UItem** ItemToDelete, class UWG_Inventory_Slot_C** SlotToEmpty, class UObject** __WorldContext, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.DeleteItem");

	ULIB_F_ItemManagement_C_DeleteItem_Params params;
	params.InventoryOfItem = InventoryOfItem;
	params.ItemToDelete = ItemToDelete;
	params.SlotToEmpty = SlotToEmpty;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetInventoryCategoryByItem
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEquipment                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryCategory> Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_GetInventoryCategoryByItem(class UItem** Item, bool* IsEquipment, class UObject** __WorldContext, TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetInventoryCategoryByItem");

	ULIB_F_ItemManagement_C_GetInventoryCategoryByItem_Params params;
	params.Item = Item;
	params.IsEquipment = IsEquipment;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ChangeItemAmount
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTRCT_ItemSelectionSlotInfo SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Consolidated                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_ChangeItemAmount(class UObject** __WorldContext, struct FSTRCT_ItemSelectionSlotInfo* SlotData, int* Value, bool* Success, bool* Consolidated)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ChangeItemAmount");

	ULIB_F_ItemManagement_C_ChangeItemAmount_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotData != nullptr)
		*SlotData = params.SlotData;
	if (Value != nullptr)
		*Value = params.Value;
	if (Success != nullptr)
		*Success = params.Success;
	if (Consolidated != nullptr)
		*Consolidated = params.Consolidated;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.TransferItemsUniversal
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   SourceSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   TargetSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        TargetInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           TransferAmount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsDragAndDrop                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsSilentTransfer               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FeasibilityCheckOnly           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_TransferItemsUniversal(class UWG_Inventory_Slot_C** SourceSlot, class UWG_Inventory_Slot_C** TargetSlot, class UWG_Inventory_C** TargetInventory, int* TransferAmount, bool* IsDragAndDrop, bool* IsSilentTransfer, bool* FeasibilityCheckOnly, class UObject** __WorldContext, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.TransferItemsUniversal");

	ULIB_F_ItemManagement_C_TransferItemsUniversal_Params params;
	params.SourceSlot = SourceSlot;
	params.TargetSlot = TargetSlot;
	params.TargetInventory = TargetInventory;
	params.TransferAmount = TransferAmount;
	params.IsDragAndDrop = IsDragAndDrop;
	params.IsSilentTransfer = IsSilentTransfer;
	params.FeasibilityCheckOnly = FeasibilityCheckOnly;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsShopTransfer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_C**        Inventory1                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        Inventory2                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_IsShopTransfer(class UWG_Inventory_C** Inventory1, class UWG_Inventory_C** Inventory2, class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsShopTransfer");

	ULIB_F_ItemManagement_C_IsShopTransfer_Params params;
	params.Inventory1 = Inventory1;
	params.Inventory2 = Inventory2;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetTransferType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_C**        SourceInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        TargetInventory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EItemTransferType> TransferType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_GetTransferType(class UWG_Inventory_C** SourceInventory, class UWG_Inventory_C** TargetInventory, class UObject** __WorldContext, TEnumAsByte<EItemTransferType>* TransferType)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetTransferType");

	ULIB_F_ItemManagement_C_GetTransferType_Params params;
	params.SourceInventory = SourceInventory;
	params.TargetInventory = TargetInventory;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransferType != nullptr)
		*TransferType = params.TransferType;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.EquipFromOtherShip
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_C**        CurrentCargoInventory          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   CurrentSlotToUnequip           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FSTRCT_ItemSelectionSlotInfo OtherShipSlotData              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          FeasibilityCheckOnly           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_EquipFromOtherShip(class UWG_Inventory_C** CurrentCargoInventory, class UWG_Inventory_Slot_C** CurrentSlotToUnequip, bool* FeasibilityCheckOnly, class UObject** __WorldContext, struct FSTRCT_ItemSelectionSlotInfo* OtherShipSlotData, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.EquipFromOtherShip");

	ULIB_F_ItemManagement_C_EquipFromOtherShip_Params params;
	params.CurrentCargoInventory = CurrentCargoInventory;
	params.CurrentSlotToUnequip = CurrentSlotToUnequip;
	params.FeasibilityCheckOnly = FeasibilityCheckOnly;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OtherShipSlotData != nullptr)
		*OtherShipSlotData = params.OtherShipSlotData;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsEligableForInstantEquipping
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_ShipInventory_C**    ShipInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IncludeUnequip                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_Slot_C*    TargetSlot                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_IsEligableForInstantEquipping(class UWG_Inventory_Slot_C** Slot, class UWG_ShipInventory_C** ShipInventory, bool* IncludeUnequip, class UObject** __WorldContext, bool* Result, class UWG_Inventory_Slot_C** TargetSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.IsEligableForInstantEquipping");

	ULIB_F_ItemManagement_C_IsEligableForInstantEquipping_Params params;
	params.Slot = Slot;
	params.ShipInventory = ShipInventory;
	params.IncludeUnequip = IncludeUnequip;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (TargetSlot != nullptr)
		*TargetSlot = params.TargetSlot;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ReplaceItemWithEmptySupport
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   Slot1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   Slot2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsFeasibilityCheck             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_ReplaceItemWithEmptySupport(class UWG_Inventory_Slot_C** Slot1, class UWG_Inventory_Slot_C** Slot2, bool* IsFeasibilityCheck, class UObject** __WorldContext, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ReplaceItemWithEmptySupport");

	ULIB_F_ItemManagement_C_ReplaceItemWithEmptySupport_Params params;
	params.Slot1 = Slot1;
	params.Slot2 = Slot2;
	params.IsFeasibilityCheck = IsFeasibilityCheck;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.UpdateItemActionButtons
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C*    SelectedSlot                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// class UWG_MenuAction_Button_C* ButtonEquip                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// bool*                          IsEquipSupported               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_MenuAction_Button_C* ButtonMove                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// bool*                          IsMoveSupported                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_MenuAction_Button_C* ButtonRemove                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// bool*                          IsRemoveSupported              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_MenuAction_Button_C** BottonChangeCompare            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsChangeCompareSupported       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_UpdateItemActionButtons(bool* IsEquipSupported, bool* IsMoveSupported, bool* IsRemoveSupported, class UWG_MenuAction_Button_C** BottonChangeCompare, bool* IsChangeCompareSupported, class UObject** __WorldContext, class UWG_Inventory_Slot_C** SelectedSlot, class UWG_MenuAction_Button_C** ButtonEquip, class UWG_MenuAction_Button_C** ButtonMove, class UWG_MenuAction_Button_C** ButtonRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.UpdateItemActionButtons");

	ULIB_F_ItemManagement_C_UpdateItemActionButtons_Params params;
	params.IsEquipSupported = IsEquipSupported;
	params.IsMoveSupported = IsMoveSupported;
	params.IsRemoveSupported = IsRemoveSupported;
	params.BottonChangeCompare = BottonChangeCompare;
	params.IsChangeCompareSupported = IsChangeCompareSupported;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedSlot != nullptr)
		*SelectedSlot = params.SelectedSlot;
	if (ButtonEquip != nullptr)
		*ButtonEquip = params.ButtonEquip;
	if (ButtonMove != nullptr)
		*ButtonMove = params.ButtonMove;
	if (ButtonRemove != nullptr)
		*ButtonRemove = params.ButtonRemove;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ShowItemSelectionWidget
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_ShipInventory_C**    Ship_Inventory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FSTRCT_ItemSelectionSlotInfo> SlotData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWG_Inventory_Slot_C**   Base_Slot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FScriptDelegate*        Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_ShowItemSelectionWidget(class UWG_ShipInventory_C** Ship_Inventory, class UWG_Inventory_Slot_C** Base_Slot, struct FScriptDelegate* Event, class UObject** __WorldContext, class APlayerController** PlayerController, TArray<struct FSTRCT_ItemSelectionSlotInfo>* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.ShowItemSelectionWidget");

	ULIB_F_ItemManagement_C_ShowItemSelectionWidget_Params params;
	params.Ship_Inventory = Ship_Inventory;
	params.Base_Slot = Base_Slot;
	params.Event = Event;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;
	if (SlotData != nullptr)
		*SlotData = params.SlotData;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.AddAndInitManagedInventory
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWG_Inventory_C*> Inventories                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWG_Inventory_C**        InventoryToAdd                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText*                  EquipActionText                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  EquipEmptyText                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  MoveText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_AddAndInitManagedInventory(class UWG_Inventory_C** InventoryToAdd, struct FText* EquipActionText, struct FText* EquipEmptyText, struct FText* MoveText, class UObject** __WorldContext, TArray<class UWG_Inventory_C*>* Inventories)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.AddAndInitManagedInventory");

	ULIB_F_ItemManagement_C_AddAndInitManagedInventory_Params params;
	params.InventoryToAdd = InventoryToAdd;
	params.EquipActionText = EquipActionText;
	params.EquipEmptyText = EquipEmptyText;
	params.MoveText = MoveText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventories != nullptr)
		*Inventories = params.Inventories;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.AddAndInitManagedShipEquipmentInventories
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWG_Inventory_C*> Inventories                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWG_ShipInventory_C**    ShipInventory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText*                  EquipText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  EquipEmptyText                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  MoveText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_AddAndInitManagedShipEquipmentInventories(class UWG_ShipInventory_C** ShipInventory, struct FText* EquipText, struct FText* EquipEmptyText, struct FText* MoveText, class UObject** __WorldContext, TArray<class UWG_Inventory_C*>* Inventories)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.AddAndInitManagedShipEquipmentInventories");

	ULIB_F_ItemManagement_C_AddAndInitManagedShipEquipmentInventories_Params params;
	params.ShipInventory = ShipInventory;
	params.EquipText = EquipText;
	params.EquipEmptyText = EquipEmptyText;
	params.MoveText = MoveText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventories != nullptr)
		*Inventories = params.Inventories;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetSelectedInventorySlot
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWG_Inventory_C*> Inventories                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_Slot_C*    SelectedSlot                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_GetSelectedInventorySlot(class UObject** __WorldContext, TArray<class UWG_Inventory_C*>* Inventories, class UWG_Inventory_Slot_C** SelectedSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetSelectedInventorySlot");

	ULIB_F_ItemManagement_C_GetSelectedInventorySlot_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventories != nullptr)
		*Inventories = params.Inventories;
	if (SelectedSlot != nullptr)
		*SelectedSlot = params.SelectedSlot;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetActiveInventory
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWG_Inventory_C*> Inventories                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Inventory_C*         Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_GetActiveInventory(class UObject** __WorldContext, TArray<class UWG_Inventory_C*>* Inventories, class UWG_Inventory_C** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetActiveInventory");

	ULIB_F_ItemManagement_C_GetActiveInventory_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventories != nullptr)
		*Inventories = params.Inventories;
	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetSlotCategoryForEquip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Inventory_Slot_C**   Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryCategory> Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_GetSlotCategoryForEquip(class UWG_Inventory_Slot_C** Slot, class UObject** __WorldContext, bool* IsValid, TEnumAsByte<EInventoryCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetSlotCategoryForEquip");

	ULIB_F_ItemManagement_C_GetSlotCategoryForEquip_Params params;
	params.Slot = Slot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (Category != nullptr)
		*Category = params.Category;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.AddSlotSelectionDataShip
// (Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSTRCT_ItemSelectionSlotInfo>* DataRef                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EInventoryCategory>* Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventory**             Inventory_Ref                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsCargo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ShipIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_ShipInventory_C**    WG_ShipInventoryRef            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   BaseItemSlotRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_AddSlotSelectionDataShip(TArray<struct FSTRCT_ItemSelectionSlotInfo>* DataRef, TEnumAsByte<EInventoryCategory>* Category, class UInventory** Inventory_Ref, bool* IsCargo, int* ShipIndex, class UWG_ShipInventory_C** WG_ShipInventoryRef, class UWG_Inventory_Slot_C** BaseItemSlotRef, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.AddSlotSelectionDataShip");

	ULIB_F_ItemManagement_C_AddSlotSelectionDataShip_Params params;
	params.DataRef = DataRef;
	params.Category = Category;
	params.Inventory_Ref = Inventory_Ref;
	params.IsCargo = IsCargo;
	params.ShipIndex = ShipIndex;
	params.WG_ShipInventoryRef = WG_ShipInventoryRef;
	params.BaseItemSlotRef = BaseItemSlotRef;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.AddSlotSelectionDataStorage
// (Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSTRCT_ItemSelectionSlotInfo>* Data_Ref                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWG_Inventory_C**        WG_InventoryRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EInventoryCategory>* Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CurrentShipHasCargoSpace       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_ItemManagement_C::STATIC_AddSlotSelectionDataStorage(TArray<struct FSTRCT_ItemSelectionSlotInfo>* Data_Ref, class UWG_Inventory_C** WG_InventoryRef, TEnumAsByte<EInventoryCategory>* Category, bool* CurrentShipHasCargoSpace, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.AddSlotSelectionDataStorage");

	ULIB_F_ItemManagement_C_AddSlotSelectionDataStorage_Params params;
	params.Data_Ref = Data_Ref;
	params.WG_InventoryRef = WG_InventoryRef;
	params.Category = Category;
	params.CurrentShipHasCargoSpace = CurrentShipHasCargoSpace;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetSlotSelectionData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventoryCategory>* Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IncludeCargoOfCurrentShip      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IncludeInactiveShips           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IncludeStorageOrContainer      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IncludeMoveToCargo             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_ShipInventory_C**    ShipInventoryRef               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_C**        ExternalInventoryRef           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWG_Inventory_Slot_C**   BaseItemSlotRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSTRCT_ItemSelectionSlotInfo> SlotData                       (Parm, OutParm, ZeroConstructor)

void ULIB_F_ItemManagement_C::STATIC_GetSlotSelectionData(TEnumAsByte<EInventoryCategory>* Category, bool* IncludeCargoOfCurrentShip, bool* IncludeInactiveShips, bool* IncludeStorageOrContainer, bool* IncludeMoveToCargo, class UWG_ShipInventory_C** ShipInventoryRef, class UWG_Inventory_C** ExternalInventoryRef, class UWG_Inventory_Slot_C** BaseItemSlotRef, class UObject** __WorldContext, TArray<struct FSTRCT_ItemSelectionSlotInfo>* SlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_ItemManagement.LIB_F_ItemManagement_C.GetSlotSelectionData");

	ULIB_F_ItemManagement_C_GetSlotSelectionData_Params params;
	params.Category = Category;
	params.IncludeCargoOfCurrentShip = IncludeCargoOfCurrentShip;
	params.IncludeInactiveShips = IncludeInactiveShips;
	params.IncludeStorageOrContainer = IncludeStorageOrContainer;
	params.IncludeMoveToCargo = IncludeMoveToCargo;
	params.ShipInventoryRef = ShipInventoryRef;
	params.ExternalInventoryRef = ExternalInventoryRef;
	params.BaseItemSlotRef = BaseItemSlotRef;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotData != nullptr)
		*SlotData = params.SlotData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
