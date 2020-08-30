#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Equipment_Wheel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Equipment_Wheel.WG_Equipment_Wheel_C.EmptyEvent
struct UWG_Equipment_Wheel_C_EmptyEvent_Params
{
};

// Function WG_Equipment_Wheel.WG_Equipment_Wheel_C.SetEquipment
struct UWG_Equipment_Wheel_C_SetEquipment_Params
{
	TArray<class UItem*>*                              ItemRefs;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              Devices;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HoldToTrigger;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Equipment_Wheel.WG_Equipment_Wheel_C.SelectEquipment
struct UWG_Equipment_Wheel_C_SelectEquipment_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Devices;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Equipment_Wheel.WG_Equipment_Wheel_C.ExecuteUbergraph_WG_Equipment_Wheel
struct UWG_Equipment_Wheel_C_ExecuteUbergraph_WG_Equipment_Wheel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
