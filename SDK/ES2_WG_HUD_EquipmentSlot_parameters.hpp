#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_HUD_EquipmentSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.GetAmount
struct UWG_HUD_EquipmentSlot_C_GetAmount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.OnLoaded_85794C7449890532D9C75FA735F99511
struct UWG_HUD_EquipmentSlot_C_OnLoaded_85794C7449890532D9C75FA735F99511_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.OnLoaded_E58A64B94654CBD39DFB8C907204AD3C
struct UWG_HUD_EquipmentSlot_C_OnLoaded_E58A64B94654CBD39DFB8C907204AD3C_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.PreConstruct
struct UWG_HUD_EquipmentSlot_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.SetEquipment
struct UWG_HUD_EquipmentSlot_C_SetEquipment_Params
{
	class UItem**                                      ItemRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AEquipmentBase**                             EquipmentRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ExcessSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.Tick
struct UWG_HUD_EquipmentSlot_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.InitWidgets
struct UWG_HUD_EquipmentSlot_C_InitWidgets_Params
{
};

// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.ReInitAfterGamepadModeChange
struct UWG_HUD_EquipmentSlot_C_ReInitAfterGamepadModeChange_Params
{
	bool*                                              bNewGamepadMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_EquipmentSlot.WG_HUD_EquipmentSlot_C.ExecuteUbergraph_WG_HUD_EquipmentSlot
struct UWG_HUD_EquipmentSlot_C_ExecuteUbergraph_WG_HUD_EquipmentSlot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
