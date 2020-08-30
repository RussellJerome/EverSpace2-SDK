#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_System_Regions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Map_System_Regions.WG_Map_System_Regions_C.ZoomInAndFadeIn
struct UWG_Map_System_Regions_C_ZoomInAndFadeIn_Params
{
};

// Function WG_Map_System_Regions.WG_Map_System_Regions_C.Construct
struct UWG_Map_System_Regions_C_Construct_Params
{
};

// Function WG_Map_System_Regions.WG_Map_System_Regions_C.ZoomOutAndFadeOut
struct UWG_Map_System_Regions_C_ZoomOutAndFadeOut_Params
{
};

// Function WG_Map_System_Regions.WG_Map_System_Regions_C.ExecuteUbergraph_WG_Map_System_Regions
struct UWG_Map_System_Regions_C_ExecuteUbergraph_WG_Map_System_Regions_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_System_Regions.WG_Map_System_Regions_C.OnClicked__DelegateSignature
struct UWG_Map_System_Regions_C_OnClicked__DelegateSignature_Params
{
	class UWG_Map_Location_C**                         Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
