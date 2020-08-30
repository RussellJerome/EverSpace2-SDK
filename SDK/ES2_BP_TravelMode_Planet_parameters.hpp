#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_TravelMode_Planet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TravelMode_Planet.BP_TravelMode_Planet_C.UpdateMap
struct ABP_TravelMode_Planet_C_UpdateMap_Params
{
};

// Function BP_TravelMode_Planet.BP_TravelMode_Planet_C.UserConstructionScript
struct ABP_TravelMode_Planet_C_UserConstructionScript_Params
{
};

// Function BP_TravelMode_Planet.BP_TravelMode_Planet_C.ReceiveTick
struct ABP_TravelMode_Planet_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TravelMode_Planet.BP_TravelMode_Planet_C.ReceiveBeginPlay
struct ABP_TravelMode_Planet_C_ReceiveBeginPlay_Params
{
};

// Function BP_TravelMode_Planet.BP_TravelMode_Planet_C.ExecuteUbergraph_BP_TravelMode_Planet
struct ABP_TravelMode_Planet_C_ExecuteUbergraph_BP_TravelMode_Planet_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
