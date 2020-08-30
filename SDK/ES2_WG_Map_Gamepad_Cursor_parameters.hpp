#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_Gamepad_Cursor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Map_Gamepad_Cursor.WG_Map_Gamepad_Cursor_C.Tick
struct UWG_Map_Gamepad_Cursor_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_Gamepad_Cursor.WG_Map_Gamepad_Cursor_C.ExecuteUbergraph_WG_Map_Gamepad_Cursor
struct UWG_Map_Gamepad_Cursor_C_ExecuteUbergraph_WG_Map_Gamepad_Cursor_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
