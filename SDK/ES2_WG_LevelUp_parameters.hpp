#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_LevelUp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_LevelUp.WG_LevelUp_C.Construct
struct UWG_LevelUp_C_Construct_Params
{
};

// Function WG_LevelUp.WG_LevelUp_C.PreConstruct
struct UWG_LevelUp_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_LevelUp.WG_LevelUp_C.ShowLevelUp
struct UWG_LevelUp_C_ShowLevelUp_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_LevelUp.WG_LevelUp_C.AnimationFinished
struct UWG_LevelUp_C_AnimationFinished_Params
{
};

// Function WG_LevelUp.WG_LevelUp_C.Tick
struct UWG_LevelUp_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_LevelUp.WG_LevelUp_C.CountUpStatsDelay
struct UWG_LevelUp_C_CountUpStatsDelay_Params
{
};

// Function WG_LevelUp.WG_LevelUp_C.ExecuteUbergraph_WG_LevelUp
struct UWG_LevelUp_C_ExecuteUbergraph_WG_LevelUp_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
