#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Perk_Row_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Perk_Row.WG_Perk_Row_C.GetSelectedPerkID
struct UWG_Perk_Row_C_GetSelectedPerkID_Params
{
	struct FName                                       PerkID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Perk_Row.WG_Perk_Row_C.Construct
struct UWG_Perk_Row_C_Construct_Params
{
};

// Function WG_Perk_Row.WG_Perk_Row_C.OnSelected_Perk
struct UWG_Perk_Row_C_OnSelected_Perk_Params
{
	class UWG_Perk_C**                                 WG_Perk;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Perk_Row.WG_Perk_Row_C.ExecuteUbergraph_WG_Perk_Row
struct UWG_Perk_Row_C_ExecuteUbergraph_WG_Perk_Row_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
