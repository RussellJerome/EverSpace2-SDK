#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_IMusicManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IMusicManager.IMusicManager_C.IAmbienceFadeOut
struct UIMusicManager_C_IAmbienceFadeOut_Params
{
	float*                                             FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IMusicManager.IMusicManager_C.IAmbienceOverrideEnd
struct UIMusicManager_C_IAmbienceOverrideEnd_Params
{
};

// Function IMusicManager.IMusicManager_C.IAmbienceOverride
struct UIMusicManager_C_IAmbienceOverride_Params
{
	class USoundCue**                                  NewAmbienceCue;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IMusicManager.IMusicManager_C.IPlay Override MusicWithSoundCue
struct UIMusicManager_C_IPlay_Override_MusicWithSoundCue_Params
{
	class USoundCue**                                  NewSoundCue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IMusicManager.IMusicManager_C.IPlaySpecificSong
struct UIMusicManager_C_IPlaySpecificSong_Params
{
	int*                                               SongNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IMusicManager.IMusicManager_C.IOverride_Mood_End
struct UIMusicManager_C_IOverride_Mood_End_Params
{
};

// Function IMusicManager.IMusicManager_C.IOverride_Mood
struct UIMusicManager_C_IOverride_Mood_Params
{
	bool*                                              OverrideOn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MoodLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IMusicManager.IMusicManager_C.IPauseOverrideMusic
struct UIMusicManager_C_IPauseOverrideMusic_Params
{
	bool*                                              IsPaused;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FadeOutTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IMusicManager.IMusicManager_C.IStopOverrideMusic
struct UIMusicManager_C_IStopOverrideMusic_Params
{
};

// Function IMusicManager.IMusicManager_C.IPlay Override Music
struct UIMusicManager_C_IPlay_Override_Music_Params
{
	class ULayeredSong**                               Override_Music_DataAsset;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
