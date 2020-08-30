#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Condition_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Condition.WG_Condition_C.OnConditionTick_Event_1
struct UWG_Condition_C_OnConditionTick_Event_1_Params
{
	class UConditionBaseComponent**                    ConditionComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Condition.WG_Condition_C.PreConstruct
struct UWG_Condition_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Condition.WG_Condition_C.PlayNameAnimation
struct UWG_Condition_C_PlayNameAnimation_Params
{
};

// Function WG_Condition.WG_Condition_C.StopNameAnimation
struct UWG_Condition_C_StopNameAnimation_Params
{
};

// Function WG_Condition.WG_Condition_C.OnConditionRemoved
struct UWG_Condition_C_OnConditionRemoved_Params
{
	class UConditionBaseComponent**                    ConditionComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Condition.WG_Condition_C.Construct
struct UWG_Condition_C_Construct_Params
{
};

// Function WG_Condition.WG_Condition_C.ExecuteUbergraph_WG_Condition
struct UWG_Condition_C_ExecuteUbergraph_WG_Condition_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Condition.WG_Condition_C.OnTokenCountChanged__DelegateSignature
struct UWG_Condition_C_OnTokenCountChanged__DelegateSignature_Params
{
	int*                                               NewTokenCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OldTokenCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBP_Condition_Base_C**                       ConditionRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Condition.WG_Condition_C.OnRemoved__DelegateSignature
struct UWG_Condition_C_OnRemoved__DelegateSignature_Params
{
	class UWG_Condition_C**                            Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
