#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BTS_GetDockingDestination_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTS_GetDockingDestination.BTS_GetDockingDestination_C.ReceiveSearchStart
struct UBTS_GetDockingDestination_C_ReceiveSearchStart_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_GetDockingDestination.BTS_GetDockingDestination_C.ExecuteUbergraph_BTS_GetDockingDestination
struct UBTS_GetDockingDestination_C_ExecuteUbergraph_BTS_GetDockingDestination_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
