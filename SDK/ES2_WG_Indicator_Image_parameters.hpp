#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Indicator_Image_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Indicator_Image.WG_Indicator_Image_C.Construct
struct UWG_Indicator_Image_C_Construct_Params
{
};

// Function WG_Indicator_Image.WG_Indicator_Image_C.ExecuteUbergraph_WG_Indicator_Image
struct UWG_Indicator_Image_C_ExecuteUbergraph_WG_Indicator_Image_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Indicator_Image.WG_Indicator_Image_C.OnWaypointSet__DelegateSignature
struct UWG_Indicator_Image_C_OnWaypointSet__DelegateSignature_Params
{
	class UWG_Map_Location_C**                         Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      LocationID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SystemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Indicator_Image.WG_Indicator_Image_C.OnClicked__DelegateSignature
struct UWG_Indicator_Image_C_OnClicked__DelegateSignature_Params
{
	class UWG_Map_Location_C**                         Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
