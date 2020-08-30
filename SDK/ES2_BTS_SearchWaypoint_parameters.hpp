#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BTS_SearchWaypoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTS_SearchWaypoint.BTS_SearchWaypoint_C.ReceiveSearchStart
struct UBTS_SearchWaypoint_C_ReceiveSearchStart_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTS_SearchWaypoint.BTS_SearchWaypoint_C.ExecuteUbergraph_BTS_SearchWaypoint
struct UBTS_SearchWaypoint_C_ExecuteUbergraph_BTS_SearchWaypoint_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
