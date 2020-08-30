#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_HUD_WeaponSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.GetAmmoText
struct UWG_HUD_WeaponSlot_C_GetAmmoText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.OnLoaded_6920190B46B21124A9A431B199E63A32
struct UWG_HUD_WeaponSlot_C_OnLoaded_6920190B46B21124A9A431B199E63A32_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.SetEquipment
struct UWG_HUD_WeaponSlot_C_SetEquipment_Params
{
	class UItem**                                      ItemRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AEquipmentBase**                             EquipmentRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumSlots;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.PreConstruct
struct UWG_HUD_WeaponSlot_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.UpdateSlotImages
struct UWG_HUD_WeaponSlot_C_UpdateSlotImages_Params
{
};

// Function WG_HUD_WeaponSlot.WG_HUD_WeaponSlot_C.ExecuteUbergraph_WG_HUD_WeaponSlot
struct UWG_HUD_WeaponSlot_C_ExecuteUbergraph_WG_HUD_WeaponSlot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
