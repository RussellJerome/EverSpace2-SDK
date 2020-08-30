#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MessageLogEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_MessageLogEntry.WG_MessageLogEntry_C.Construct
struct UWG_MessageLogEntry_C_Construct_Params
{
};

// Function WG_MessageLogEntry.WG_MessageLogEntry_C.Tick
struct UWG_MessageLogEntry_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MessageLogEntry.WG_MessageLogEntry_C.StartFade
struct UWG_MessageLogEntry_C_StartFade_Params
{
};

// Function WG_MessageLogEntry.WG_MessageLogEntry_C.EndFade
struct UWG_MessageLogEntry_C_EndFade_Params
{
};

// Function WG_MessageLogEntry.WG_MessageLogEntry_C.InitMessage
struct UWG_MessageLogEntry_C_InitMessage_Params
{
	struct FHUDMessage*                                MessageInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_MessageLogEntry.WG_MessageLogEntry_C.ExecuteUbergraph_WG_MessageLogEntry
struct UWG_MessageLogEntry_C_ExecuteUbergraph_WG_MessageLogEntry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MessageLogEntry.WG_MessageLogEntry_C.OnExpired__DelegateSignature
struct UWG_MessageLogEntry_C_OnExpired__DelegateSignature_Params
{
	class UWG_MessageLogEntry_C**                      ExpiredMessage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
