#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_WantedLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_WantedLevel.WG_WantedLevel_C.GetCurrentWantedLevelIcon
struct UWG_WantedLevel_C_GetCurrentWantedLevelIcon_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_WantedLevelIcon_C*                       WantedLevelIcon;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_WantedLevel.WG_WantedLevel_C.ActivateOneLevel
struct UWG_WantedLevel_C_ActivateOneLevel_Params
{
};

// Function WG_WantedLevel.WG_WantedLevel_C.DeactivateOneLevel
struct UWG_WantedLevel_C_DeactivateOneLevel_Params
{
};

// Function WG_WantedLevel.WG_WantedLevel_C.PreConstruct
struct UWG_WantedLevel_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_WantedLevel.WG_WantedLevel_C.Tick
struct UWG_WantedLevel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_WantedLevel.WG_WantedLevel_C.OnShrinkLevelProgressFinished
struct UWG_WantedLevel_C_OnShrinkLevelProgressFinished_Params
{
};

// Function WG_WantedLevel.WG_WantedLevel_C.OnRaiseThreatLevel
struct UWG_WantedLevel_C_OnRaiseThreatLevel_Params
{
};

// Function WG_WantedLevel.WG_WantedLevel_C.RaiseThreatLevelDelayed
struct UWG_WantedLevel_C_RaiseThreatLevelDelayed_Params
{
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_WantedLevel.WG_WantedLevel_C.CreateForThisLocation
struct UWG_WantedLevel_C_CreateForThisLocation_Params
{
	float*                                             Security;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_WantedLevel.WG_WantedLevel_C.CallingForHelp
struct UWG_WantedLevel_C_CallingForHelp_Params
{
};

// Function WG_WantedLevel.WG_WantedLevel_C.Hide
struct UWG_WantedLevel_C_Hide_Params
{
};

// Function WG_WantedLevel.WG_WantedLevel_C.ExecuteUbergraph_WG_WantedLevel
struct UWG_WantedLevel_C_ExecuteUbergraph_WG_WantedLevel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
