#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MissionLog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_MissionLog.WG_MissionLog_C.RefreshWithMissionID
struct UWG_MissionLog_C_RefreshWithMissionID_Params
{
	struct FName*                                      MissonID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MissionLog.WG_MissionLog_C.ExecuteUbergraph_WG_MissionLog
struct UWG_MissionLog_C_ExecuteUbergraph_WG_MissionLog_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
