#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Perk_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Perk.WG_Perk_C.SetSelected
struct UWG_Perk_C_SetSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Perk.WG_Perk_C.OnMouseButtonUp_1
struct UWG_Perk_C_OnMouseButtonUp_1_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Perk.WG_Perk_C.OnLoaded_D0C7E8BF42F5972100F9DDBFAB32F3FE
struct UWG_Perk_C_OnLoaded_D0C7E8BF42F5972100F9DDBFAB32F3FE_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Perk.WG_Perk_C.Construct
struct UWG_Perk_C_Construct_Params
{
};

// Function WG_Perk.WG_Perk_C.ExecuteUbergraph_WG_Perk
struct UWG_Perk_C_ExecuteUbergraph_WG_Perk_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Perk.WG_Perk_C.OnSelected__DelegateSignature
struct UWG_Perk_C_OnSelected__DelegateSignature_Params
{
	class UWG_Perk_C**                                 WG_Perk;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
