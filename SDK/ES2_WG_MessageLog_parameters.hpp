#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MessageLog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_MessageLog.WG_MessageLog_C.AddMessage
struct UWG_MessageLog_C_AddMessage_Params
{
	struct FHUDMessage*                                MessageInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_MessageLog.WG_MessageLog_C.MessageExpired
struct UWG_MessageLog_C_MessageExpired_Params
{
	class UWG_MessageLogEntry_C**                      ExpiredMessage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_MessageLog.WG_MessageLog_C.RefreshGrid
struct UWG_MessageLog_C_RefreshGrid_Params
{
};

// Function WG_MessageLog.WG_MessageLog_C.ExecuteUbergraph_WG_MessageLog
struct UWG_MessageLog_C_ExecuteUbergraph_WG_MessageLog_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
