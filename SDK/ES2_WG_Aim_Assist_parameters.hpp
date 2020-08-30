#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Aim_Assist_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Aim_Assist.WG_Aim_Assist_C.PreConstruct
struct UWG_Aim_Assist_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Aim_Assist.WG_Aim_Assist_C.Construct
struct UWG_Aim_Assist_C_Construct_Params
{
};

// Function WG_Aim_Assist.WG_Aim_Assist_C.Tick
struct UWG_Aim_Assist_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Aim_Assist.WG_Aim_Assist_C.PlayLockAnim
struct UWG_Aim_Assist_C_PlayLockAnim_Params
{
};

// Function WG_Aim_Assist.WG_Aim_Assist_C.ExecuteUbergraph_WG_Aim_Assist
struct UWG_Aim_Assist_C_ExecuteUbergraph_WG_Aim_Assist_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
