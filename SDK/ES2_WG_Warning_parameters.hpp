#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Warning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Warning.WG_Warning_C.Construct
struct UWG_Warning_C_Construct_Params
{
};

// Function WG_Warning.WG_Warning_C.PreConstruct
struct UWG_Warning_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Warning.WG_Warning_C.StartAnim
struct UWG_Warning_C_StartAnim_Params
{
};

// Function WG_Warning.WG_Warning_C.StopAnim
struct UWG_Warning_C_StopAnim_Params
{
};

// Function WG_Warning.WG_Warning_C.ExecuteUbergraph_WG_Warning
struct UWG_Warning_C_ExecuteUbergraph_WG_Warning_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
