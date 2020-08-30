#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Item_Info_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Item_Info.WG_Item_Info_C.CollapseAllAttributeWidgets
struct UWG_Item_Info_C_CollapseAllAttributeWidgets_Params
{
};

// Function WG_Item_Info.WG_Item_Info_C.CreateOrGetAttributeWidget
struct UWG_Item_Info_C_CreateOrGetAttributeWidget_Params
{
	class UItemAttribute**                             ItemAttributeRef;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemAttributeStyle>*                  Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsMandatory;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_ItemAttribute_C*                         AttrWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               NewlyCreatedWidget;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.IsNotFadingIn
struct UWG_Item_Info_C_IsNotFadingIn_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.SetShipNameInfo
struct UWG_Item_Info_C_SetShipNameInfo_Params
{
	struct FText*                                      Shipname;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Item_Info.WG_Item_Info_C.SetCompareSlotIndicatorColors
struct UWG_Item_Info_C_SetCompareSlotIndicatorColors_Params
{
	class UWG_ShipInventory_C**                        ShipInventory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EInventoryCategory>*                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.IsCredits
struct UWG_Item_Info_C_IsCredits_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.RemoveCompare
struct UWG_Item_Info_C_RemoveCompare_Params
{
};

// Function WG_Item_Info.WG_Item_Info_C.SetDetailVisibility
struct UWG_Item_Info_C_SetDetailVisibility_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.OnMouseButtonDown
struct UWG_Item_Info_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Item_Info.WG_Item_Info_C.On_Border_BG_MouseButtonUp_1
struct UWG_Item_Info_C_On_Border_BG_MouseButtonUp_1_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Item_Info.WG_Item_Info_C.SetSelected
struct UWG_Item_Info_C_SetSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.SetCompareItem
struct UWG_Item_Info_C_SetCompareItem_Params
{
	class UItem**                                      CompareItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.ShouldShowAttribute
struct UWG_Item_Info_C_ShouldShowAttribute_Params
{
	class UItemAttribute**                             Attribute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.HasMissingAttribute
struct UWG_Item_Info_C_HasMissingAttribute_Params
{
	class UItemAttribute**                             ItemAttributeInstance;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.OnLoaded_ADE4D322425B441D2D2731A6F6F714A9
struct UWG_Item_Info_C_OnLoaded_ADE4D322425B441D2D2731A6F6F714A9_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.Init
struct UWG_Item_Info_C_Init_Params
{
	class UItem**                                      ItemInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.AddMissingAttribute
struct UWG_Item_Info_C_AddMissingAttribute_Params
{
	class UItemAttribute**                             AttributeInstance;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.ClearMissingAttributes
struct UWG_Item_Info_C_ClearMissingAttributes_Params
{
};

// Function WG_Item_Info.WG_Item_Info_C.OnCompareItemChanged_Event
struct UWG_Item_Info_C_OnCompareItemChanged_Event_Params
{
	class UWG_Inventory_Slot_C**                       CompareItemSlot;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.SetCompareInventory
struct UWG_Item_Info_C_SetCompareInventory_Params
{
	class UWG_Inventory_C**                            InventoryWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.SetDebugPerks
struct UWG_Item_Info_C_SetDebugPerks_Params
{
	TArray<struct FName>*                              DebugPerks;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WG_Item_Info.WG_Item_Info_C.UpdatePriceText
struct UWG_Item_Info_C_UpdatePriceText_Params
{
	int*                                               NewCredits;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CreditsDelta;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.Tick
struct UWG_Item_Info_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.ShowLevel
struct UWG_Item_Info_C_ShowLevel_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.AdjustViewportPosition
struct UWG_Item_Info_C_AdjustViewportPosition_Params
{
};

// Function WG_Item_Info.WG_Item_Info_C.PreConstruct
struct UWG_Item_Info_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.Construct
struct UWG_Item_Info_C_Construct_Params
{
};

// Function WG_Item_Info.WG_Item_Info_C.StartFadeIn
struct UWG_Item_Info_C_StartFadeIn_Params
{
	bool*                                              Animate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.StopFadeIn
struct UWG_Item_Info_C_StopFadeIn_Params
{
};

// Function WG_Item_Info.WG_Item_Info_C.ExecuteUbergraph_WG_Item_Info
struct UWG_Item_Info_C_ExecuteUbergraph_WG_Item_Info_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Info.WG_Item_Info_C.OnSelected__DelegateSignature
struct UWG_Item_Info_C_OnSelected__DelegateSignature_Params
{
	class UWG_Item_Info_C**                            ItemInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
