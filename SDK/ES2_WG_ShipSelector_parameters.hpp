#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ShipSelector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_ShipSelector.WG_ShipSelector_C.HandleKeyDown
struct UWG_ShipSelector_C_HandleKeyDown_Params
{
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bHandled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipSelector.WG_ShipSelector_C.Construct
struct UWG_ShipSelector_C_Construct_Params
{
};

// Function WG_ShipSelector.WG_ShipSelector_C.SelectPreviousShip
struct UWG_ShipSelector_C_SelectPreviousShip_Params
{
};

// Function WG_ShipSelector.WG_ShipSelector_C.SelectNextShip
struct UWG_ShipSelector_C_SelectNextShip_Params
{
};

// Function WG_ShipSelector.WG_ShipSelector_C.UpdateShipInfo
struct UWG_ShipSelector_C_UpdateShipInfo_Params
{
	struct FShipData*                                  ShipData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               ShipIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumShips;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipSelector.WG_ShipSelector_C.ExecuteUbergraph_WG_ShipSelector
struct UWG_ShipSelector_C_ExecuteUbergraph_WG_ShipSelector_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_ShipSelector.WG_ShipSelector_C.OnPreviousShip__DelegateSignature
struct UWG_ShipSelector_C_OnPreviousShip__DelegateSignature_Params
{
};

// Function WG_ShipSelector.WG_ShipSelector_C.OnNextShip__DelegateSignature
struct UWG_ShipSelector_C_OnNextShip__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
