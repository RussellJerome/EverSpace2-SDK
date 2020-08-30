#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Mission_State_Line_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Mission_State_Line.WG_Mission_State_Line_C.Construct
struct UWG_Mission_State_Line_C_Construct_Params
{
};

// Function WG_Mission_State_Line.WG_Mission_State_Line_C.Expire
struct UWG_Mission_State_Line_C_Expire_Params
{
};

// Function WG_Mission_State_Line.WG_Mission_State_Line_C.FadedOut
struct UWG_Mission_State_Line_C_FadedOut_Params
{
};

// Function WG_Mission_State_Line.WG_Mission_State_Line_C.Tick
struct UWG_Mission_State_Line_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Mission_State_Line.WG_Mission_State_Line_C.ExecuteUbergraph_WG_Mission_State_Line
struct UWG_Mission_State_Line_C_ExecuteUbergraph_WG_Mission_State_Line_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Mission_State_Line.WG_Mission_State_Line_C.OnExpire__DelegateSignature
struct UWG_Mission_State_Line_C_OnExpire__DelegateSignature_Params
{
	class UWG_Mission_State_Line_C**                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
