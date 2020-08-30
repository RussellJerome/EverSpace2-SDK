#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_TravelMode_Location_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TravelMode_Location.BP_TravelMode_Location_C.UserConstructionScript
struct ABP_TravelMode_Location_C_UserConstructionScript_Params
{
};

// Function BP_TravelMode_Location.BP_TravelMode_Location_C.ReceiveBeginPlay
struct ABP_TravelMode_Location_C_ReceiveBeginPlay_Params
{
};

// Function BP_TravelMode_Location.BP_TravelMode_Location_C.OnInteract
struct ABP_TravelMode_Location_C_OnInteract_Params
{
	class UInteractComponent**                         InteractComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TravelMode_Location.BP_TravelMode_Location_C.ReceiveTick
struct ABP_TravelMode_Location_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TravelMode_Location.BP_TravelMode_Location_C.OnRefreshIndicatorsAndVisibility
struct ABP_TravelMode_Location_C_OnRefreshIndicatorsAndVisibility_Params
{
};

// Function BP_TravelMode_Location.BP_TravelMode_Location_C.ExecuteUbergraph_BP_TravelMode_Location
struct ABP_TravelMode_Location_C_ExecuteUbergraph_BP_TravelMode_Location_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TravelMode_Location.BP_TravelMode_Location_C.OnTravelSelected__DelegateSignature
struct ABP_TravelMode_Location_C_OnTravelSelected__DelegateSignature_Params
{
	struct FLocationData*                              NewLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
