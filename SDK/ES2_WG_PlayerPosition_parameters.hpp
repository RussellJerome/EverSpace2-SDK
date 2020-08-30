#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_PlayerPosition_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_PlayerPosition.WG_PlayerPosition_C.OnPaint
struct UWG_PlayerPosition_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WG_PlayerPosition.WG_PlayerPosition_C.PreConstruct
struct UWG_PlayerPosition_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_PlayerPosition.WG_PlayerPosition_C.SetAngle
struct UWG_PlayerPosition_C_SetAngle_Params
{
	float*                                             RenderAngle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_PlayerPosition.WG_PlayerPosition_C.ExecuteUbergraph_WG_PlayerPosition
struct UWG_PlayerPosition_C_ExecuteUbergraph_WG_PlayerPosition_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
