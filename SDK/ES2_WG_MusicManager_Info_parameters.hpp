#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MusicManager_Info_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_MusicManager_Info.WG_MusicManager_Info_C.GetNextSongTimerDuration
struct UWG_MusicManager_Info_C_GetNextSongTimerDuration_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_MusicManager_Info.WG_MusicManager_Info_C.GetNewMusicMoodText
struct UWG_MusicManager_Info_C_GetNewMusicMoodText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_MusicManager_Info.WG_MusicManager_Info_C.GetSongPendingText
struct UWG_MusicManager_Info_C_GetSongPendingText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_MusicManager_Info.WG_MusicManager_Info_C.GetSongNameText
struct UWG_MusicManager_Info_C_GetSongNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_MusicManager_Info.WG_MusicManager_Info_C.GetSongIndexText
struct UWG_MusicManager_Info_C_GetSongIndexText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WG_MusicManager_Info.WG_MusicManager_Info_C.Construct
struct UWG_MusicManager_Info_C_Construct_Params
{
};

// Function WG_MusicManager_Info.WG_MusicManager_Info_C.ExecuteUbergraph_WG_MusicManager_Info
struct UWG_MusicManager_Info_C_ExecuteUbergraph_WG_MusicManager_Info_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
