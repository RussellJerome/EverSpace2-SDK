#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Slider_Handle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Slider_Handle.WG_Slider_Handle_C.Construct
struct UWG_Slider_Handle_C_Construct_Params
{
};

// Function WG_Slider_Handle.WG_Slider_Handle_C.Slider_Pressed
struct UWG_Slider_Handle_C_Slider_Pressed_Params
{
};

// Function WG_Slider_Handle.WG_Slider_Handle_C.Slider_Released
struct UWG_Slider_Handle_C_Slider_Released_Params
{
};

// Function WG_Slider_Handle.WG_Slider_Handle_C.ExecuteUbergraph_WG_Slider_Handle
struct UWG_Slider_Handle_C_ExecuteUbergraph_WG_Slider_Handle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
