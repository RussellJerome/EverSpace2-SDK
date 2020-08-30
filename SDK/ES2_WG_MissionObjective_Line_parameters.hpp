#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MissionObjective_Line_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.Tick
struct UWG_MissionObjective_Line_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.Refresh
struct UWG_MissionObjective_Line_C_Refresh_Params
{
	struct FText*                                      ObjectiveText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EMissionTaskState>*                    State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsNew;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsPermanent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.FadeOutFinished
struct UWG_MissionObjective_Line_C_FadeOutFinished_Params
{
};

// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.PlaySuccessAnimation
struct UWG_MissionObjective_Line_C_PlaySuccessAnimation_Params
{
};

// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.Construct
struct UWG_MissionObjective_Line_C_Construct_Params
{
};

// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.PlayFailedAnimation
struct UWG_MissionObjective_Line_C_PlayFailedAnimation_Params
{
};

// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.PlayAbortedAnimationFadOut
struct UWG_MissionObjective_Line_C_PlayAbortedAnimationFadOut_Params
{
};

// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.ExecuteUbergraph_WG_MissionObjective_Line
struct UWG_MissionObjective_Line_C_ExecuteUbergraph_WG_MissionObjective_Line_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.OnExpired__DelegateSignature
struct UWG_MissionObjective_Line_C_OnExpired__DelegateSignature_Params
{
	class UWG_MissionObjective_Line_C**                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
