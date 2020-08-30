#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_HUD_CentralBars_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.Construct
struct UWG_HUD_CentralBars_C_Construct_Params
{
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeChargeEnd_Event_1
struct UWG_HUD_CentralBars_C_OnCruiseModeChargeEnd_Event_1_Params
{
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeChargeStart_Event_1
struct UWG_HUD_CentralBars_C_OnCruiseModeChargeStart_Event_1_Params
{
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeReady_Event_1
struct UWG_HUD_CentralBars_C_OnCruiseModeReady_Event_1_Params
{
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeStart_Event_1
struct UWG_HUD_CentralBars_C_OnCruiseModeStart_Event_1_Params
{
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeEnd_Event_1
struct UWG_HUD_CentralBars_C_OnCruiseModeEnd_Event_1_Params
{
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.CruiseModeStartInput
struct UWG_HUD_CentralBars_C_CruiseModeStartInput_Params
{
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.HideCruiseModeButton
struct UWG_HUD_CentralBars_C_HideCruiseModeButton_Params
{
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnBoostTick_Event_1
struct UWG_HUD_CentralBars_C_OnBoostTick_Event_1_Params
{
	float*                                             Percentage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.Tick
struct UWG_HUD_CentralBars_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.CruiseModeEndInput
struct UWG_HUD_CentralBars_C_CruiseModeEndInput_Params
{
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.AutoPilot
struct UWG_HUD_CentralBars_C_AutoPilot_Params
{
	bool*                                              bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnAutoPilotSkipTick_Event_1
struct UWG_HUD_CentralBars_C_OnAutoPilotSkipTick_Event_1_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnAutoPilotSkipEnd_Event_1
struct UWG_HUD_CentralBars_C_OnAutoPilotSkipEnd_Event_1_Params
{
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeCanBeUsedChange_Event_1
struct UWG_HUD_CentralBars_C_OnCruiseModeCanBeUsedChange_Event_1_Params
{
	bool*                                              bCanBeUsed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnJumpDriveCanBeUsedChange_Event_1
struct UWG_HUD_CentralBars_C_OnJumpDriveCanBeUsedChange_Event_1_Params
{
	bool*                                              bCanBeUsed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.ExecuteUbergraph_WG_HUD_CentralBars
struct UWG_HUD_CentralBars_C_ExecuteUbergraph_WG_HUD_CentralBars_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
