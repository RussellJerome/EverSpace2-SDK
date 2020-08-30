#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_OrbitRing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Map_OrbitRing.WG_Map_OrbitRing_C.ZoomInAndFadeIn
struct UWG_Map_OrbitRing_C_ZoomInAndFadeIn_Params
{
};

// Function WG_Map_OrbitRing.WG_Map_OrbitRing_C.Construct
struct UWG_Map_OrbitRing_C_Construct_Params
{
};

// Function WG_Map_OrbitRing.WG_Map_OrbitRing_C.ZoomOutAndFadeOut
struct UWG_Map_OrbitRing_C_ZoomOutAndFadeOut_Params
{
};

// Function WG_Map_OrbitRing.WG_Map_OrbitRing_C.ExecuteUbergraph_WG_Map_OrbitRing
struct UWG_Map_OrbitRing_C_ExecuteUbergraph_WG_Map_OrbitRing_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_OrbitRing.WG_Map_OrbitRing_C.OnClicked__DelegateSignature
struct UWG_Map_OrbitRing_C_OnClicked__DelegateSignature_Params
{
	class UWG_Map_Location_C**                         Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
