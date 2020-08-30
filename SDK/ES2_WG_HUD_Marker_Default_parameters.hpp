#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_HUD_Marker_Default_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetDeadlyTypeIconVisibility
struct UWG_HUD_Marker_Default_C_GetDeadlyTypeIconVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.ShouldMarkerBorderScale
struct UWG_HUD_Marker_Default_C_ShouldMarkerBorderScale_Params
{
	bool                                               DoScale;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetMissionRelevantMarkerVisibility
struct UWG_HUD_Marker_Default_C_GetMissionRelevantMarkerVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetMissionRelevanttMarkerBrush
struct UWG_HUD_Marker_Default_C_GetMissionRelevanttMarkerBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetTypeIconColor
struct UWG_HUD_Marker_Default_C_GetTypeIconColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetHitpointsVisibility
struct UWG_HUD_Marker_Default_C_GetHitpointsVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetHitpointsFillRatios
struct UWG_HUD_Marker_Default_C_GetHitpointsFillRatios_Params
{
	float                                              Health;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              HealthRecentDMG;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              armor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ArmorRecentDMG;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              shield;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ShieldRecentDMG;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              EmptyShield;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              EmptyRest;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetMarkerBorderVisibility
struct UWG_HUD_Marker_Default_C_GetMarkerBorderVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetObstructedMarkerBrush
struct UWG_HUD_Marker_Default_C_GetObstructedMarkerBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetLockedMarkerBrush
struct UWG_HUD_Marker_Default_C_GetLockedMarkerBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetHoveredMarkerBrush
struct UWG_HUD_Marker_Default_C_GetHoveredMarkerBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetDefaultMarkerBrush
struct UWG_HUD_Marker_Default_C_GetDefaultMarkerBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetTypeIconVisibility
struct UWG_HUD_Marker_Default_C_GetTypeIconVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetDistanceText
struct UWG_HUD_Marker_Default_C_GetDistanceText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetMarkerColor
struct UWG_HUD_Marker_Default_C_GetMarkerColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetTextVisibility
struct UWG_HUD_Marker_Default_C_GetTextVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.GetText
struct UWG_HUD_Marker_Default_C_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.PreConstruct
struct UWG_HUD_Marker_Default_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.Init
struct UWG_HUD_Marker_Default_C_Init_Params
{
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.OnSpottedPlayer
struct UWG_HUD_Marker_Default_C_OnSpottedPlayer_Params
{
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.OnLockedByPlayer
struct UWG_HUD_Marker_Default_C_OnLockedByPlayer_Params
{
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.OnFirstShown
struct UWG_HUD_Marker_Default_C_OnFirstShown_Params
{
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.Tick
struct UWG_HUD_Marker_Default_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.RefreshIndicators
struct UWG_HUD_Marker_Default_C_RefreshIndicators_Params
{
	TMap<TEnumAsByte<EIndicator>, bool>*               NewIndicators;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.PlayerLevelUp
struct UWG_HUD_Marker_Default_C_PlayerLevelUp_Params
{
	int*                                               NewLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.ConditionAdded
struct UWG_HUD_Marker_Default_C_ConditionAdded_Params
{
	class UConditionBaseComponent**                    ConditionComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.OnAttachInteractWidget
struct UWG_HUD_Marker_Default_C_OnAttachInteractWidget_Params
{
	class UUserWidget**                                InteractWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.OnDetachInteractWidget
struct UWG_HUD_Marker_Default_C_OnDetachInteractWidget_Params
{
};

// Function WG_HUD_Marker_Default.WG_HUD_Marker_Default_C.ExecuteUbergraph_WG_HUD_Marker_Default
struct UWG_HUD_Marker_Default_C_ExecuteUbergraph_WG_HUD_Marker_Default_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
