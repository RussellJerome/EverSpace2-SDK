#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_XP_Numbers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_XP_Numbers.WG_XP_Numbers_C.Construct
struct UWG_XP_Numbers_C_Construct_Params
{
};

// Function WG_XP_Numbers.WG_XP_Numbers_C.Finished
struct UWG_XP_Numbers_C_Finished_Params
{
};

// Function WG_XP_Numbers.WG_XP_Numbers_C.UpdateWidgetPosition
struct UWG_XP_Numbers_C_UpdateWidgetPosition_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_XP_Numbers.WG_XP_Numbers_C.ExecuteUbergraph_WG_XP_Numbers
struct UWG_XP_Numbers_C_ExecuteUbergraph_WG_XP_Numbers_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
