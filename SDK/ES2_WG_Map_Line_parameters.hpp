#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_Line_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Map_Line.WG_Map_Line_C.Construct
struct UWG_Map_Line_C_Construct_Params
{
};

// Function WG_Map_Line.WG_Map_Line_C.Zoom
struct UWG_Map_Line_C_Zoom_Params
{
	float*                                             Zoom_Delta;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Zoom_Origin;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_Line.WG_Map_Line_C.FadeMarker
struct UWG_Map_Line_C_FadeMarker_Params
{
	bool*                                              FadeIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_Line.WG_Map_Line_C.ExecuteUbergraph_WG_Map_Line
struct UWG_Map_Line_C_ExecuteUbergraph_WG_Map_Line_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
