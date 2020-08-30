#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_Submenu_Ingame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_Submenu_Ingame.BPI_Submenu_Ingame_C.Refresh
struct UBPI_Submenu_Ingame_C_Refresh_Params
{
};

// Function BPI_Submenu_Ingame.BPI_Submenu_Ingame_C.CanItemInfoVisibilityNotBeChanged
struct UBPI_Submenu_Ingame_C_CanItemInfoVisibilityNotBeChanged_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Submenu_Ingame.BPI_Submenu_Ingame_C.GetSelectedSlot
struct UBPI_Submenu_Ingame_C_GetSelectedSlot_Params
{
	class UWG_Inventory_Slot_C*                        Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_Submenu_Ingame.BPI_Submenu_Ingame_C.OnGamepadModeChanged
struct UBPI_Submenu_Ingame_C_OnGamepadModeChanged_Params
{
	bool*                                              IsGamepadMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Submenu_Ingame.BPI_Submenu_Ingame_C.GetItemInfoWidget
struct UBPI_Submenu_Ingame_C_GetItemInfoWidget_Params
{
	class UWG_Item_Info_C*                             ItemInfoWidget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_Submenu_Ingame.BPI_Submenu_Ingame_C.InitWithStationID
struct UBPI_Submenu_Ingame_C_InitWithStationID_Params
{
	struct FName*                                      StationID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Menu_Ingame_C**                          MenuIngameRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPI_Submenu_Ingame.BPI_Submenu_Ingame_C.FadeInOut
struct UBPI_Submenu_Ingame_C_FadeInOut_Params
{
	bool*                                              IsFadeIn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
