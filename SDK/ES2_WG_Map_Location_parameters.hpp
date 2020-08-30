#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_Location_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Map_Location.WG_Map_Location_C.OnPaint
struct UWG_Map_Location_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WG_Map_Location.WG_Map_Location_C.IsSameLocationOrChild
struct UWG_Map_Location_C_IsSameLocationOrChild_Params
{
	struct FName*                                      OtherLocationID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_Location.WG_Map_Location_C.OnMouseButtonDoubleClick
struct UWG_Map_Location_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Map_Location.WG_Map_Location_C.On_Location_MouseButtonDown
struct UWG_Map_Location_C_On_Location_MouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Map_Location.WG_Map_Location_C.OnMouseLeave
struct UWG_Map_Location_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WG_Map_Location.WG_Map_Location_C.OnMouseEnter
struct UWG_Map_Location_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WG_Map_Location.WG_Map_Location_C.SetWaypoint
struct UWG_Map_Location_C_SetWaypoint_Params
{
	bool*                                              IsNewWaypoint;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_Location.WG_Map_Location_C.SetSelected
struct UWG_Map_Location_C_SetSelected_Params
{
	bool*                                              Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_Location.WG_Map_Location_C.SetInitPosition
struct UWG_Map_Location_C_SetInitPosition_Params
{
};

// Function WG_Map_Location.WG_Map_Location_C.Refresh
struct UWG_Map_Location_C_Refresh_Params
{
};

// Function WG_Map_Location.WG_Map_Location_C.SetDebugInfo
struct UWG_Map_Location_C_SetDebugInfo_Params
{
	class FString*                                     DebugString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FSlateColor*                                InColorAndOpacity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WG_Map_Location.WG_Map_Location_C.RefreshOpacity
struct UWG_Map_Location_C_RefreshOpacity_Params
{
};

// Function WG_Map_Location.WG_Map_Location_C.Construct
struct UWG_Map_Location_C_Construct_Params
{
};

// Function WG_Map_Location.WG_Map_Location_C.PreConstruct
struct UWG_Map_Location_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_Location.WG_Map_Location_C.Tick
struct UWG_Map_Location_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_Location.WG_Map_Location_C.ExecuteUbergraph_WG_Map_Location
struct UWG_Map_Location_C_ExecuteUbergraph_WG_Map_Location_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_Location.WG_Map_Location_C.OnHoveredChanged__DelegateSignature
struct UWG_Map_Location_C_OnHoveredChanged__DelegateSignature_Params
{
	bool*                                              NewHovered;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_Location.WG_Map_Location_C.OnWaypointSet__DelegateSignature
struct UWG_Map_Location_C_OnWaypointSet__DelegateSignature_Params
{
	class UWG_Map_Location_C**                         Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      LocationID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SystemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_Location.WG_Map_Location_C.OnClicked__DelegateSignature
struct UWG_Map_Location_C_OnClicked__DelegateSignature_Params
{
	class UWG_Map_Location_C**                         Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
