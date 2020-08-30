#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_GameModeMainMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GameModeMainMenu.BP_GameModeMainMenu_C.ReceiveBeginPlay
struct ABP_GameModeMainMenu_C_ReceiveBeginPlay_Params
{
};

// Function BP_GameModeMainMenu.BP_GameModeMainMenu_C.ReceiveEndPlay
struct ABP_GameModeMainMenu_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameModeMainMenu.BP_GameModeMainMenu_C.ExecuteUbergraph_BP_GameModeMainMenu
struct ABP_GameModeMainMenu_C_ExecuteUbergraph_BP_GameModeMainMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
