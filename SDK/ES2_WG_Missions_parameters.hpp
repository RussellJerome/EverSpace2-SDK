#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Missions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Missions.WG_Missions_C.OnKeyUp
struct UWG_Missions_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Missions.WG_Missions_C.OnKeyDown
struct UWG_Missions_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Missions.WG_Missions_C.OnFocusReceived
struct UWG_Missions_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_Missions.WG_Missions_C.PreConstruct
struct UWG_Missions_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Missions.WG_Missions_C.Construct
struct UWG_Missions_C_Construct_Params
{
};

// Function WG_Missions.WG_Missions_C.SelectedMissionButton
struct UWG_Missions_C_SelectedMissionButton_Params
{
	class UWG_MissionButton_C**                        MissionButton;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Missions.WG_Missions_C.PressedBack
struct UWG_Missions_C_PressedBack_Params
{
};

// Function WG_Missions.WG_Missions_C.PressedTrackMission
struct UWG_Missions_C_PressedTrackMission_Params
{
};

// Function WG_Missions.WG_Missions_C.RefreshTrackedMission
struct UWG_Missions_C_RefreshTrackedMission_Params
{
	class UWG_MissionButton_C**                        MissionButton;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Missions.WG_Missions_C.RefreshTrackedMissions
struct UWG_Missions_C_RefreshTrackedMissions_Params
{
};

// Function WG_Missions.WG_Missions_C.CustomEvent
struct UWG_Missions_C_CustomEvent_Params
{
};

// Function WG_Missions.WG_Missions_C.PressedPauseMenu
struct UWG_Missions_C_PressedPauseMenu_Params
{
};

// Function WG_Missions.WG_Missions_C.ExecuteUbergraph_WG_Missions
struct UWG_Missions_C_ExecuteUbergraph_WG_Missions_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
