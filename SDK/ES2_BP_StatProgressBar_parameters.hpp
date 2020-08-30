#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_StatProgressBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_StatProgressBar.BP_StatProgressBar_C.PreConstruct
struct UBP_StatProgressBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StatProgressBar.BP_StatProgressBar_C.SetPercent
struct UBP_StatProgressBar_C_SetPercent_Params
{
	float*                                             NewPercent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StatProgressBar.BP_StatProgressBar_C.AddDelta
struct UBP_StatProgressBar_C_AddDelta_Params
{
	float*                                             Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewPercent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StatProgressBar.BP_StatProgressBar_C.Tick
struct UBP_StatProgressBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StatProgressBar.BP_StatProgressBar_C.Refresh
struct UBP_StatProgressBar_C_Refresh_Params
{
};

// Function BP_StatProgressBar.BP_StatProgressBar_C.ExecuteUbergraph_BP_StatProgressBar
struct UBP_StatProgressBar_C_ExecuteUbergraph_BP_StatProgressBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
