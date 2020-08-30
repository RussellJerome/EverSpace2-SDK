#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Submenu_Header_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Submenu_Header.WG_Submenu_Header_C.PreConstruct
struct UWG_Submenu_Header_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Submenu_Header.WG_Submenu_Header_C.SetNewTtile
struct UWG_Submenu_Header_C_SetNewTtile_Params
{
	struct FText*                                      NewTitle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Submenu_Header.WG_Submenu_Header_C.ExecuteUbergraph_WG_Submenu_Header
struct UWG_Submenu_Header_C_ExecuteUbergraph_WG_Submenu_Header_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
