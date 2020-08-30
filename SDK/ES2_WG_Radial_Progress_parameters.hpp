#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Radial_Progress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Radial_Progress.WG_Radial_Progress_C.SetProgress
struct UWG_Radial_Progress_C_SetProgress_Params
{
	float*                                             CurrentProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FutureProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Radial_Progress.WG_Radial_Progress_C.Construct
struct UWG_Radial_Progress_C_Construct_Params
{
};

// Function WG_Radial_Progress.WG_Radial_Progress_C.ExecuteUbergraph_WG_Radial_Progress
struct UWG_Radial_Progress_C_ExecuteUbergraph_WG_Radial_Progress_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
