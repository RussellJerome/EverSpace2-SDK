#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Trigger_Equipment_Icons_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.Construct
struct UWG_Trigger_Equipment_Icons_C_Construct_Params
{
};

// Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.Tick
struct UWG_Trigger_Equipment_Icons_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.DummyEvent
struct UWG_Trigger_Equipment_Icons_C_DummyEvent_Params
{
};

// Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.NotUsed
struct UWG_Trigger_Equipment_Icons_C_NotUsed_Params
{
};

// Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.SetHoldProgress
struct UWG_Trigger_Equipment_Icons_C_SetHoldProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.ShowOrHideSelectionDPad
struct UWG_Trigger_Equipment_Icons_C_ShowOrHideSelectionDPad_Params
{
	bool*                                              bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.ExecuteUbergraph_WG_Trigger_Equipment_Icons
struct UWG_Trigger_Equipment_Icons_C_ExecuteUbergraph_WG_Trigger_Equipment_Icons_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
