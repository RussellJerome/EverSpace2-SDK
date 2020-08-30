#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_2D_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Map_2D.WG_Map_2D_C.HideUI
struct UWG_Map_2D_C_HideUI_Params
{
};

// Function WG_Map_2D.WG_Map_2D_C.OnKeyUp
struct UWG_Map_2D_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Map_2D.WG_Map_2D_C.AnalogZoom
struct UWG_Map_2D_C_AnalogZoom_Params
{
	float*                                             Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_2D.WG_Map_2D_C.OnAnalogValueChanged
struct UWG_Map_2D_C_OnAnalogValueChanged_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnalogInputEvent*                          InAnalogInputEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Map_2D.WG_Map_2D_C.OnFocusReceived
struct UWG_Map_2D_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Map_2D.WG_Map_2D_C.OnKeyDown
struct UWG_Map_2D_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Map_2D.WG_Map_2D_C.OnMouseButtonDown
struct UWG_Map_2D_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Map_2D.WG_Map_2D_C.UpdateWidgetZoomStates
struct UWG_Map_2D_C_UpdateWidgetZoomStates_Params
{
};

// Function WG_Map_2D.WG_Map_2D_C.OnMouseButtonUp
struct UWG_Map_2D_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Map_2D.WG_Map_2D_C.CenterOnCurrentLocation
struct UWG_Map_2D_C_CenterOnCurrentLocation_Params
{
};

// Function WG_Map_2D.WG_Map_2D_C.GetCenterOfWidget
struct UWG_Map_2D_C_GetCenterOfWidget_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Map_2D.WG_Map_2D_C.GetSystemWidget
struct UWG_Map_2D_C_GetSystemWidget_Params
{
	struct FName*                                      ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Map_System_C*                            SystemWidget;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Map_2D.WG_Map_2D_C.GetSystemIDsWithConnection
struct UWG_Map_2D_C_GetSystemIDsWithConnection_Params
{
	struct FName*                                      SystemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELocationConnection>*                  ConnectionType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ConnectedIDs;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function WG_Map_2D.WG_Map_2D_C.GetLocationWidget
struct UWG_Map_2D_C_GetLocationWidget_Params
{
	struct FName*                                      ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWG_Map_Location_C*                          LocationWidget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Map_2D.WG_Map_2D_C.OnPaint
struct UWG_Map_2D_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WG_Map_2D.WG_Map_2D_C.OnMouseWheel
struct UWG_Map_2D_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Map_2D.WG_Map_2D_C.OnMouseMove
struct UWG_Map_2D_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Map_2D.WG_Map_2D_C.PreConstruct
struct UWG_Map_2D_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_2D.WG_Map_2D_C.Construct
struct UWG_Map_2D_C_Construct_Params
{
};

// Function WG_Map_2D.WG_Map_2D_C.Tick
struct UWG_Map_2D_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_2D.WG_Map_2D_C.LoadLocationsForSystem
struct UWG_Map_2D_C_LoadLocationsForSystem_Params
{
	class UWG_Map_System_C**                           SystemWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Map_2D.WG_Map_2D_C.OnSystemSelected
struct UWG_Map_2D_C_OnSystemSelected_Params
{
	class UWG_Map_System_C**                           Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Map_2D.WG_Map_2D_C.OnLocationSelected
struct UWG_Map_2D_C_OnLocationSelected_Params
{
	class UWG_Map_Location_C**                         Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Map_2D.WG_Map_2D_C.CreateLocationConnections
struct UWG_Map_2D_C_CreateLocationConnections_Params
{
};

// Function WG_Map_2D.WG_Map_2D_C.OnDoubleClicked_Event_1
struct UWG_Map_2D_C_OnDoubleClicked_Event_1_Params
{
	class UWG_Map_System_C**                           Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Map_2D.WG_Map_2D_C.OnLocationWaypointSet
struct UWG_Map_2D_C_OnLocationWaypointSet_Params
{
	class UWG_Map_Location_C**                         Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      LocationID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SystemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_2D.WG_Map_2D_C.SetZoom
struct UWG_Map_2D_C_SetZoom_Params
{
	float*                                             ZoomDelta;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  MousePositionAbsolute;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_2D.WG_Map_2D_C.CreateSystemConnections
struct UWG_Map_2D_C_CreateSystemConnections_Params
{
};

// Function WG_Map_2D.WG_Map_2D_C.PressedBack
struct UWG_Map_2D_C_PressedBack_Params
{
};

// Function WG_Map_2D.WG_Map_2D_C.RefreshSystemAndLocationWidgets
struct UWG_Map_2D_C_RefreshSystemAndLocationWidgets_Params
{
};

// Function WG_Map_2D.WG_Map_2D_C.ToggleRegionsVisibility
struct UWG_Map_2D_C_ToggleRegionsVisibility_Params
{
};

// Function WG_Map_2D.WG_Map_2D_C.ItemSelected
struct UWG_Map_2D_C_ItemSelected_Params
{
	struct FName*                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_2D.WG_Map_2D_C.OnHoveredChanged
struct UWG_Map_2D_C_OnHoveredChanged_Params
{
	bool*                                              NewHovered;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_2D.WG_Map_2D_C.PressedPauseMenu
struct UWG_Map_2D_C_PressedPauseMenu_Params
{
};

// Function WG_Map_2D.WG_Map_2D_C.PressedOK
struct UWG_Map_2D_C_PressedOK_Params
{
};

// Function WG_Map_2D.WG_Map_2D_C.EmptyEvent2
struct UWG_Map_2D_C_EmptyEvent2_Params
{
};

// Function WG_Map_2D.WG_Map_2D_C.EmptyEvent3
struct UWG_Map_2D_C_EmptyEvent3_Params
{
};

// Function WG_Map_2D.WG_Map_2D_C.GamepadModeChanged
struct UWG_Map_2D_C_GamepadModeChanged_Params
{
	bool*                                              bNewGamepadMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Map_2D.WG_Map_2D_C.ExecuteUbergraph_WG_Map_2D
struct UWG_Map_2D_C_ExecuteUbergraph_WG_Map_2D_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
