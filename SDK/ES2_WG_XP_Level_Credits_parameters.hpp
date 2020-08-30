#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_XP_Level_Credits_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.Construct
struct UWG_XP_Level_Credits_C_Construct_Params
{
};

// Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.OnPlayerXPChanged_Event
struct UWG_XP_Level_Credits_C_OnPlayerXPChanged_Event_Params
{
	float*                                             XPDelta;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaAsRatio;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.OnPlayerCreditsChanged_Event
struct UWG_XP_Level_Credits_C_OnPlayerCreditsChanged_Event_Params
{
	int*                                               NewCredits;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CreditsDelta;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.OnPlayerLevelUp_Event
struct UWG_XP_Level_Credits_C_OnPlayerLevelUp_Event_Params
{
	int*                                               NewLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.SetCanPlayCreditsGainAnimation
struct UWG_XP_Level_Credits_C_SetCanPlayCreditsGainAnimation_Params
{
	bool*                                              bCanPlay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_XP_Level_Credits.WG_XP_Level_Credits_C.ExecuteUbergraph_WG_XP_Level_Credits
struct UWG_XP_Level_Credits_C_ExecuteUbergraph_WG_XP_Level_Credits_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
