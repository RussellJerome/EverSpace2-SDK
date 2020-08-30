#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_SpaceObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Map_SpaceObject.WG_Map_SpaceObject_C.IsSun
struct UWG_Map_SpaceObject_C_IsSun_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_SpaceObject.WG_Map_SpaceObject_C.Construct
struct UWG_Map_SpaceObject_C_Construct_Params
{
};

// Function WG_Map_SpaceObject.WG_Map_SpaceObject_C.SetOpacity
struct UWG_Map_SpaceObject_C_SetOpacity_Params
{
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_SpaceObject.WG_Map_SpaceObject_C.ExecuteUbergraph_WG_Map_SpaceObject
struct UWG_Map_SpaceObject_C_ExecuteUbergraph_WG_Map_SpaceObject_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_SpaceObject.WG_Map_SpaceObject_C.OnClicked__DelegateSignature
struct UWG_Map_SpaceObject_C_OnClicked__DelegateSignature_Params
{
	class UWG_Map_Location_C**                         Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
