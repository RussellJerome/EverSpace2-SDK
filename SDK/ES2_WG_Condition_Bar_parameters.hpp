#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Condition_Bar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Condition_Bar.WG_Condition_Bar_C.Construct
struct UWG_Condition_Bar_C_Construct_Params
{
};

// Function WG_Condition_Bar.WG_Condition_Bar_C.OnConditionAdded_Event_1
struct UWG_Condition_Bar_C_OnConditionAdded_Event_1_Params
{
	class UConditionBaseComponent**                    ConditionComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Condition_Bar.WG_Condition_Bar_C.OnRemoved_Event_1
struct UWG_Condition_Bar_C_OnRemoved_Event_1_Params
{
	class UWG_Condition_C**                            Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Condition_Bar.WG_Condition_Bar_C.OnConditionTokenCountChanged_Event_1
struct UWG_Condition_Bar_C_OnConditionTokenCountChanged_Event_1_Params
{
	class UConditionBaseComponent**                    ConditionComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OldTokenCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewTokenCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Condition_Bar.WG_Condition_Bar_C.ExecuteUbergraph_WG_Condition_Bar
struct UWG_Condition_Bar_C_ExecuteUbergraph_WG_Condition_Bar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
