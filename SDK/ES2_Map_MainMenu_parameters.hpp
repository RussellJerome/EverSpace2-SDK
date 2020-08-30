#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Map_MainMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Map_MainMenu.Map_MainMenu_C.ReceiveBeginPlay
struct AMap_MainMenu_C_ReceiveBeginPlay_Params
{
};

// Function Map_MainMenu.Map_MainMenu_C.ReceiveTick
struct AMap_MainMenu_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Map_MainMenu.Map_MainMenu_C.ExecuteUbergraph_Map_MainMenu
struct AMap_MainMenu_C_ExecuteUbergraph_Map_MainMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
