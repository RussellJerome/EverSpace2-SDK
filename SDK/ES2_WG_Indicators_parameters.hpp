#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Indicators_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Indicators.WG_Indicators_C.RefreshIndicators
struct UWG_Indicators_C_RefreshIndicators_Params
{
	TMap<TEnumAsByte<EIndicator>, bool>*               UpdatedIndicators;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WG_Indicators.WG_Indicators_C.ExecuteUbergraph_WG_Indicators
struct UWG_Indicators_C_ExecuteUbergraph_WG_Indicators_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Indicators.WG_Indicators_C.OnWaypointSet__DelegateSignature
struct UWG_Indicators_C_OnWaypointSet__DelegateSignature_Params
{
	class UWG_Map_Location_C**                         Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      LocationID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SystemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Indicators.WG_Indicators_C.OnClicked__DelegateSignature
struct UWG_Indicators_C_OnClicked__DelegateSignature_Params
{
	class UWG_Map_Location_C**                         Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
