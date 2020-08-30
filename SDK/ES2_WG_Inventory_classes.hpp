#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Inventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WG_Inventory.WG_Inventory_C
// 0x01B1 (0x03E1 - 0x0230)
class UWG_Inventory_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                                  GridPanel_Items;                                          // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     HighlightCornersDragOrigin;                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     HighlightCornersDropTarget;                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     HighlightFrameDefault;                                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     HighlightFrameDragOrigin;                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     HighlightFrameDropTarget;                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  ScrollBox_Items;                                          // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    SizeBox_Items;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TEnumAsByte<EInventoryCategory>                    Category;                                                 // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowItemSwap;                                            // 0x0279(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowItemActions;                                         // 0x027A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowEnlargingInventory;                                  // 0x027B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemSlotStyle>                        SlotStyle;                                                // 0x027C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x027D(0x0003) MISSED OFFSET
	class UInventory*                                  InventoryRef;                                             // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWG_Inventory_C*                             TransferInventoryWidget;                                  // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MaxColumns;                                               // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinInventorySize;                                         // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RowsVisible;                                              // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Rows;                                                     // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Columns;                                                  // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	TArray<class UItem*>                               Items;                                                    // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnRefresh;                                                // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FText                                       TitleText;                                                // 0x02C8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bIsHighlighted;                                           // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCompareItemChanged;                                     // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                FirstGridIndex;                                           // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSlotSelected;                                           // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UWG_Inventory_Slot_C*                        SelectedSlotWidget;                                       // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                SelectedSlotIndex;                                        // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSlotDeselected;                                         // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsActiveInventory;                                        // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	struct FText                                       EquipActionCaption;                                       // 0x0338(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       MoveActionCaption;                                        // 0x0350(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EInventoryType>                        Type;                                                     // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	struct FText                                       EquipEmptyActionCaption;                                  // 0x0370(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnSlotChosen;                                             // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UWG_Inventory_Headline_C*                    InventoryHeadlineRef;                                     // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWG_ShipInventory_C*                         ShipInventoryRef;                                         // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                LastKnownCompareItemIndex;                                // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	TArray<float>                                      ScrollOffsets;                                            // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentScrollOffsetIndex;                                 // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsScrolling;                                              // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsNavigatingToPreviousSlot;                               // 0x03C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x03C6(0x0002) MISSED OFFSET
	float                                              Height;                                                   // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSlotMouseDown;                                          // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               CanBeTransferTarget;                                      // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WG_Inventory.WG_Inventory_C");
		return ptr;
	}


	void IsEmpty(bool* Result);
	void GetMostExpensiveItem(class UWG_Inventory_Slot_C** Result);
	void UpdateDragAndDropHighlights();
	void GetDropTargetSlotIndex(int* Index);
	void GetDragOriginSlotIndex(int* Index);
	void SetPositionOfDragOriginHighlight(int* SlotIndex);
	void SetPositionOfDropTargetHighlight(int* SlotIndex);
	void SetPositionOfSelectionHighlight();
	void CalculateCargoScrollHelpers();
	float GetMaxScrollOffset();
	void ScrollDown();
	void ScrollUp();
	void GetScrollBoxLineTeasingOffset(float* Result);
	void IsScrollingDownPossible(bool* Result, int* SlotOnBorderIndex);
	void IsScrollingUpPossible(bool* Result, int* SlotOnBorderIndex);
	void IsSlotAtIndexFullyInView(int* Index, bool* Result);
	void GetGivenSlotPositionY(int* Index, float* Result);
	void SetHeight(float* Height);
	void SetCompareItemForAllSlotsWithItemOfCategory(class UItem** CompareItemRef);
	void GetTotalSlotCount(int* Result);
	void ToggleHeadlineHighlight(bool* HighlightOn);
	void HasValidItemWidgetAtIndex(int* Index, bool* Result, class UWG_Inventory_Slot_C** Slot, class UWG_Item_Icon_C** ItemWidget);
	void HasSpaceToFullyAddGivenItem(class UItem** Item, bool* Result);
	void GetSlotAtIndex(int* Index, class UWG_Inventory_Slot_C** Inventory_Slot);
	void SelectGivenSlot(class UWG_Inventory_Slot_C** SlotToSelect, bool* Success);
	void GetFirstEmptySlot(class UWG_Inventory_Slot_C** EmptySlot, bool* HasEmptySlot);
	void SetSafeSelectedSlotIndex(int* DesiredSlotIndex, bool* IndexWasClipped);
	void GetMaxOpenAmountForItem(class UItem** Item, int* Result);
	void GetAmountOfItemType(class UItem** Item, int* Result);
	void IsSingleSlotInventory(bool* Result);
	void GetEquipActionType(TEnumAsByte<EInventoryType>* InventoryType, TEnumAsByte<EEquipActionType>* EquipActionType);
	void IsEquipment(bool* Result);
	void HasSameCategory(class UWG_Inventory_C** Inventory, bool* Result);
	void SetItemActionCaptions(struct FText* EquipAction, struct FText* EquipEmptyAction, struct FText* MoveAction);
	void GetSlotWidgetForItem(class UItem** Item_Ref, class UWG_Inventory_Slot_C** SlotWidget);
	void HasSpaceForItemOfCategory(struct FName* Item_Template_ID, bool* HasSpace);
	void SetFocusToSourceSlot(bool* Result);
	void GetSlotWidgets(TArray<class UWG_Inventory_Slot_C*>* SlotWidgets);
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void CalcRowsAndColumns(int* NumItems, int* Rows, int* Columns);
	void GetAllowItemSwap(bool* AllowItemActions);
	bool IsIconHovered();
	void SetAllowItemSwap(bool* AllowItemSwap);
	void GetHighlightInventory(TEnumAsByte<EInventoryCategory>* Category, class UWG_Inventory_C** InventoryWidget);
	void GetCompareItem(class UWG_Item_Icon_C** ItemWidget, class UWG_Inventory_Slot_C** ItemSlot);
	struct FEventReply OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void ChangeCompareItem(bool* Forward);
	void RemoveCompareItem();
	void ReinitCompareItem();
	void GetFirstInventorySlot(class UWG_Inventory_Slot_C** Inventory_Slot);
	void GetAllowItemActions(bool* AllowItemActions);
	void SetAllowItemActions(bool* AllowItemActions);
	void Construct();
	void PreConstruct(bool* IsDesignTime);
	void InitGrid();
	void SetInventory(class UInventory** Inventory);
	void Refresh();
	void SetHighlight(bool* HighlightOn);
	void AddEmptySlot(class UInventory** Inventory);
	void InventorySlotDeselected(class UWG_Inventory_Slot_C** InventorySlotWidget, int* SlotIndex);
	void InventorySlotSelected(class UWG_Inventory_Slot_C** InventorySlotWidget, int* SlotIndex);
	void UpdateShopInventoryWithCompareItem();
	void OnMouseDown_Event_1(class UWG_Inventory_Slot_C** Slot);
	void ExecuteUbergraph_WG_Inventory(int* EntryPoint);
	void OnSlotMouseDown__DelegateSignature(class UWG_Inventory_Slot_C** Slot);
	void OnSlotChosen__DelegateSignature(class UWG_Inventory_Slot_C** Slot, class UWG_Inventory_C** CurrentShipCargoInventory);
	void OnSlotDeselected__DelegateSignature(class UWG_Inventory_Slot_C** InventorySlotWidget);
	void OnSlotSelected__DelegateSignature(class UWG_Inventory_Slot_C** InventorySlotWidget);
	void OnCompareItemChanged__DelegateSignature(class UWG_Inventory_Slot_C** CompareItemSlot);
	void OnRefresh__DelegateSignature(class UWG_Inventory_C** InventoryWidget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
