#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Music_Manager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Music_Manager.Music_Manager_C.CheckIfTargetTimeBeyondSongDuration
struct AMusic_Manager_C_CheckIfTargetTimeBeyondSongDuration_Params
{
	float*                                             CurrentSongPosBar;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TargetTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.GetCurrentSongAsset
struct AMusic_Manager_C_GetCurrentSongAsset_Params
{
	class ULayeredSong*                                LayeredSong;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.InitPersistentMusicComponent
struct AMusic_Manager_C_InitPersistentMusicComponent_Params
{
};

// Function Music_Manager.Music_Manager_C.GetRecentlyPlayedSongs
struct AMusic_Manager_C_GetRecentlyPlayedSongs_Params
{
	TArray<int>                                        SongIndexArray;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Music_Manager.Music_Manager_C.GetRandomSongIndex
struct AMusic_Manager_C_GetRandomSongIndex_Params
{
	TArray<int>                                        ExcludeIndices;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                NewIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.GetSongDurationInBars
struct AMusic_Manager_C_GetSongDurationInBars_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.PrepareEndTransition
struct AMusic_Manager_C_PrepareEndTransition_Params
{
	float                                              TransitionLengthInBar;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.GetSongBarPosition
struct AMusic_Manager_C_GetSongBarPosition_Params
{
	float                                              SongBarPosition;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.SetTargetLayerVolume
struct AMusic_Manager_C_SetTargetLayerVolume_Params
{
	int*                                               MoodNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.GetCurrentSoundLevel
struct AMusic_Manager_C_GetCurrentSoundLevel_Params
{
	int                                                CurrentSoundLevel;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.PrepareMoodChangeTransition
struct AMusic_Manager_C_PrepareMoodChangeTransition_Params
{
	int*                                               CurrentMood;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TargetMood;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TransitionLengthInBar;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.SelectAndPlayNextSong
struct AMusic_Manager_C_SelectAndPlayNextSong_Params
{
	bool*                                              RandomSelection;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isOverride;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.InpActEvt_Ctrl_N_K2Node_InputKeyEvent_5
struct AMusic_Manager_C_InpActEvt_Ctrl_N_K2Node_InputKeyEvent_5_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Music_Manager.Music_Manager_C.InpActEvt_Ctrl_One_K2Node_InputKeyEvent_4
struct AMusic_Manager_C_InpActEvt_Ctrl_One_K2Node_InputKeyEvent_4_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Music_Manager.Music_Manager_C.InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_3
struct AMusic_Manager_C_InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_3_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Music_Manager.Music_Manager_C.InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_2
struct AMusic_Manager_C_InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Music_Manager.Music_Manager_C.InpActEvt_N_K2Node_InputKeyEvent_1
struct AMusic_Manager_C_InpActEvt_N_K2Node_InputKeyEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Music_Manager.Music_Manager_C.KeyN
struct AMusic_Manager_C_KeyN_Params
{
};

// Function Music_Manager.Music_Manager_C.SetMoodDependingOnEnemies
struct AMusic_Manager_C_SetMoodDependingOnEnemies_Params
{
};

// Function Music_Manager.Music_Manager_C.AutoTriggerNextSong
struct AMusic_Manager_C_AutoTriggerNextSong_Params
{
};

// Function Music_Manager.Music_Manager_C.Play Override Music
struct AMusic_Manager_C_Play_Override_Music_Params
{
	class ULayeredSong**                               Override_Music_DataAsset;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.StopOverrideMusic
struct AMusic_Manager_C_StopOverrideMusic_Params
{
};

// Function Music_Manager.Music_Manager_C.RestartAutoTriggerTimer
struct AMusic_Manager_C_RestartAutoTriggerTimer_Params
{
};

// Function Music_Manager.Music_Manager_C.SetMusicSet
struct AMusic_Manager_C_SetMusicSet_Params
{
	class UMusicSet**                                  MusicSet;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.PlaySpecificSong
struct AMusic_Manager_C_PlaySpecificSong_Params
{
	int*                                               SongNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.ForceQuit
struct AMusic_Manager_C_ForceQuit_Params
{
};

// Function Music_Manager.Music_Manager_C.CueMood
struct AMusic_Manager_C_CueMood_Params
{
	int*                                               TargetMood;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.Override_Mood
struct AMusic_Manager_C_Override_Mood_Params
{
	bool*                                              OverrideOn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MoodLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.PauseOverrideMusic
struct AMusic_Manager_C_PauseOverrideMusic_Params
{
	bool*                                              IsPaused;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FadeOutTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.Override_Mood_End
struct AMusic_Manager_C_Override_Mood_End_Params
{
};

// Function Music_Manager.Music_Manager_C.CueNextSongWithTransition
struct AMusic_Manager_C_CueNextSongWithTransition_Params
{
	bool*                                              RandomSelection;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isOverride;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.UpdateSongPositionWithPercent
struct AMusic_Manager_C_UpdateSongPositionWithPercent_Params
{
	class USoundWave**                                 PlayingSoundWave;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlaybackPercent;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.ReceiveTick
struct AMusic_Manager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.ReceiveBeginPlay
struct AMusic_Manager_C_ReceiveBeginPlay_Params
{
};

// Function Music_Manager.Music_Manager_C.IPlay Override MusicWithSoundCue
struct AMusic_Manager_C_IPlay_Override_MusicWithSoundCue_Params
{
	class USoundCue**                                  NewSoundCue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.IPlay Override Music
struct AMusic_Manager_C_IPlay_Override_Music_Params
{
	class ULayeredSong**                               Override_Music_DataAsset;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.IStopOverrideMusic
struct AMusic_Manager_C_IStopOverrideMusic_Params
{
};

// Function Music_Manager.Music_Manager_C.IPauseOverrideMusic
struct AMusic_Manager_C_IPauseOverrideMusic_Params
{
	bool*                                              IsPaused;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FadeOutTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.IOverride_Mood
struct AMusic_Manager_C_IOverride_Mood_Params
{
	bool*                                              OverrideOn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MoodLevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.IOverride_Mood_End
struct AMusic_Manager_C_IOverride_Mood_End_Params
{
};

// Function Music_Manager.Music_Manager_C.IPlaySpecificSong
struct AMusic_Manager_C_IPlaySpecificSong_Params
{
	int*                                               SongNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.StartAmbience
struct AMusic_Manager_C_StartAmbience_Params
{
};

// Function Music_Manager.Music_Manager_C.OverrideAmbienceEnd
struct AMusic_Manager_C_OverrideAmbienceEnd_Params
{
};

// Function Music_Manager.Music_Manager_C.IAmbienceOverride
struct AMusic_Manager_C_IAmbienceOverride_Params
{
	class USoundCue**                                  NewAmbienceCue;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.IAmbienceOverrideEnd
struct AMusic_Manager_C_IAmbienceOverrideEnd_Params
{
};

// Function Music_Manager.Music_Manager_C.IAmbienceFadeOut
struct AMusic_Manager_C_IAmbienceFadeOut_Params
{
	float*                                             FadeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.OnAudioPlaybackPercentCallback
struct AMusic_Manager_C_OnAudioPlaybackPercentCallback_Params
{
	class USoundWave**                                 PlayingSoundWave;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PlaybackPercent;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.Callback
struct AMusic_Manager_C_Callback_Params
{
	float*                                             PlaybackTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.SetTransitionPoint
struct AMusic_Manager_C_SetTransitionPoint_Params
{
	float*                                             TransitionLengthInBar;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Music_Manager.Music_Manager_C.ExecuteUbergraph_Music_Manager
struct AMusic_Manager_C_ExecuteUbergraph_Music_Manager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
