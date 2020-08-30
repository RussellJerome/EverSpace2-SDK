#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Item_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Item_Icon.WG_Item_Icon_C.FakeAmmoAndConditionValue
struct UWG_Item_Icon_C_FakeAmmoAndConditionValue_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsAmmo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Colorize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Icon.WG_Item_Icon_C.SetAppearance
struct UWG_Item_Icon_C_SetAppearance_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Icon.WG_Item_Icon_C.OnLoaded_8B0EADD14015B180A25263867A077750
struct UWG_Item_Icon_C_OnLoaded_8B0EADD14015B180A25263867A077750_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Icon.WG_Item_Icon_C.UpdateAmount
struct UWG_Item_Icon_C_UpdateAmount_Params
{
};

// Function WG_Item_Icon.WG_Item_Icon_C.Init
struct UWG_Item_Icon_C_Init_Params
{
};

// Function WG_Item_Icon.WG_Item_Icon_C.OnDragCancelled
struct UWG_Item_Icon_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Icon.WG_Item_Icon_C.PlayItemVanishAnim
struct UWG_Item_Icon_C_PlayItemVanishAnim_Params
{
};

// Function WG_Item_Icon.WG_Item_Icon_C.VanishAnimFinished
struct UWG_Item_Icon_C_VanishAnimFinished_Params
{
};

// Function WG_Item_Icon.WG_Item_Icon_C.SetDragDropAmount
struct UWG_Item_Icon_C_SetDragDropAmount_Params
{
	int*                                               Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Icon.WG_Item_Icon_C.SetHighlight
struct UWG_Item_Icon_C_SetHighlight_Params
{
	bool*                                              HighlightOn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Icon.WG_Item_Icon_C.OnSelectionChanged
struct UWG_Item_Icon_C_OnSelectionChanged_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Icon.WG_Item_Icon_C.Construct
struct UWG_Item_Icon_C_Construct_Params
{
};

// Function WG_Item_Icon.WG_Item_Icon_C.ExecuteUbergraph_WG_Item_Icon
struct UWG_Item_Icon_C_ExecuteUbergraph_WG_Item_Icon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Item_Icon.WG_Item_Icon_C.OnVanishAnimFinished__DelegateSignature
struct UWG_Item_Icon_C_OnVanishAnimFinished__DelegateSignature_Params
{
	class UWG_Inventory_Slot_C**                       InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
