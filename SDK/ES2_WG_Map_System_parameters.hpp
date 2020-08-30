#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_System_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Map_System.WG_Map_System_C.OnMouseButtonDoubleClick
struct UWG_Map_System_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Map_System.WG_Map_System_C.On_System_MouseButtonDown
struct UWG_Map_System_C_On_System_MouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Map_System.WG_Map_System_C.PreConstruct
struct UWG_Map_System_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_System.WG_Map_System_C.Construct
struct UWG_Map_System_C_Construct_Params
{
};

// Function WG_Map_System.WG_Map_System_C.SetSelected
struct UWG_Map_System_C_SetSelected_Params
{
	bool*                                              Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_System.WG_Map_System_C.OnMouseEnter
struct UWG_Map_System_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WG_Map_System.WG_Map_System_C.OnMouseLeave
struct UWG_Map_System_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WG_Map_System.WG_Map_System_C.SetWaypoint
struct UWG_Map_System_C_SetWaypoint_Params
{
	bool*                                              IsNewWaypoint;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_System.WG_Map_System_C.Refresh
struct UWG_Map_System_C_Refresh_Params
{
};

// Function WG_Map_System.WG_Map_System_C.RefreshOpacity
struct UWG_Map_System_C_RefreshOpacity_Params
{
};

// Function WG_Map_System.WG_Map_System_C.ExecuteUbergraph_WG_Map_System
struct UWG_Map_System_C_ExecuteUbergraph_WG_Map_System_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_System.WG_Map_System_C.OnDoubleClicked__DelegateSignature
struct UWG_Map_System_C_OnDoubleClicked__DelegateSignature_Params
{
	class UWG_Map_System_C**                           Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Map_System.WG_Map_System_C.OnClicked__DelegateSignature
struct UWG_Map_System_C_OnClicked__DelegateSignature_Params
{
	class UWG_Map_System_C**                           Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
