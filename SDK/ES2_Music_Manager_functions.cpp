// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Music_Manager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Music_Manager.Music_Manager_C.CheckIfTargetTimeBeyondSongDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         CurrentSongPosBar              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TargetTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMusic_Manager_C::CheckIfTargetTimeBeyondSongDuration(float* CurrentSongPosBar, float* TargetTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.CheckIfTargetTimeBeyondSongDuration");

	AMusic_Manager_C_CheckIfTargetTimeBeyondSongDuration_Params params;
	params.CurrentSongPosBar = CurrentSongPosBar;
	params.TargetTime = TargetTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Music_Manager.Music_Manager_C.GetCurrentSongAsset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ULayeredSong*            LayeredSong                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::GetCurrentSongAsset(class ULayeredSong** LayeredSong)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.GetCurrentSongAsset");

	AMusic_Manager_C_GetCurrentSongAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LayeredSong != nullptr)
		*LayeredSong = params.LayeredSong;
}


// Function Music_Manager.Music_Manager_C.InitPersistentMusicComponent
// (Public, BlueprintCallable, BlueprintEvent)

void AMusic_Manager_C::InitPersistentMusicComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.InitPersistentMusicComponent");

	AMusic_Manager_C_InitPersistentMusicComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.GetRecentlyPlayedSongs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int>                    SongIndexArray                 (Parm, OutParm, ZeroConstructor)

void AMusic_Manager_C::GetRecentlyPlayedSongs(TArray<int>* SongIndexArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.GetRecentlyPlayedSongs");

	AMusic_Manager_C_GetRecentlyPlayedSongs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SongIndexArray != nullptr)
		*SongIndexArray = params.SongIndexArray;
}


// Function Music_Manager.Music_Manager_C.GetRandomSongIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    ExcludeIndices                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            NewIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::GetRandomSongIndex(TArray<int>* ExcludeIndices, int* NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.GetRandomSongIndex");

	AMusic_Manager_C_GetRandomSongIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExcludeIndices != nullptr)
		*ExcludeIndices = params.ExcludeIndices;
	if (NewIndex != nullptr)
		*NewIndex = params.NewIndex;
}


// Function Music_Manager.Music_Manager_C.GetSongDurationInBars
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMusic_Manager_C::GetSongDurationInBars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.GetSongDurationInBars");

	AMusic_Manager_C_GetSongDurationInBars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Music_Manager.Music_Manager_C.PrepareEndTransition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TransitionLengthInBar          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::PrepareEndTransition(float* TransitionLengthInBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.PrepareEndTransition");

	AMusic_Manager_C_PrepareEndTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransitionLengthInBar != nullptr)
		*TransitionLengthInBar = params.TransitionLengthInBar;
}


// Function Music_Manager.Music_Manager_C.GetSongBarPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SongBarPosition                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::GetSongBarPosition(float* SongBarPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.GetSongBarPosition");

	AMusic_Manager_C_GetSongBarPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SongBarPosition != nullptr)
		*SongBarPosition = params.SongBarPosition;
}


// Function Music_Manager.Music_Manager_C.SetTargetLayerVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           MoodNumber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::SetTargetLayerVolume(int* MoodNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.SetTargetLayerVolume");

	AMusic_Manager_C_SetTargetLayerVolume_Params params;
	params.MoodNumber = MoodNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.GetCurrentSoundLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentSoundLevel              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::GetCurrentSoundLevel(int* CurrentSoundLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.GetCurrentSoundLevel");

	AMusic_Manager_C_GetCurrentSoundLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSoundLevel != nullptr)
		*CurrentSoundLevel = params.CurrentSoundLevel;
}


// Function Music_Manager.Music_Manager_C.PrepareMoodChangeTransition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentMood                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TargetMood                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TransitionLengthInBar          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::PrepareMoodChangeTransition(int* CurrentMood, int* TargetMood, float* TransitionLengthInBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.PrepareMoodChangeTransition");

	AMusic_Manager_C_PrepareMoodChangeTransition_Params params;
	params.CurrentMood = CurrentMood;
	params.TargetMood = TargetMood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransitionLengthInBar != nullptr)
		*TransitionLengthInBar = params.TransitionLengthInBar;
}


// Function Music_Manager.Music_Manager_C.SelectAndPlayNextSong
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          RandomSelection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isOverride                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::SelectAndPlayNextSong(bool* RandomSelection, bool* isOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.SelectAndPlayNextSong");

	AMusic_Manager_C_SelectAndPlayNextSong_Params params;
	params.RandomSelection = RandomSelection;
	params.isOverride = isOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.InpActEvt_Ctrl_N_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMusic_Manager_C::InpActEvt_Ctrl_N_K2Node_InputKeyEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.InpActEvt_Ctrl_N_K2Node_InputKeyEvent_5");

	AMusic_Manager_C_InpActEvt_Ctrl_N_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.InpActEvt_Ctrl_One_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMusic_Manager_C::InpActEvt_Ctrl_One_K2Node_InputKeyEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.InpActEvt_Ctrl_One_K2Node_InputKeyEvent_4");

	AMusic_Manager_C_InpActEvt_Ctrl_One_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMusic_Manager_C::InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_3");

	AMusic_Manager_C_InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMusic_Manager_C::InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_2");

	AMusic_Manager_C_InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.InpActEvt_N_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AMusic_Manager_C::InpActEvt_N_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.InpActEvt_N_K2Node_InputKeyEvent_1");

	AMusic_Manager_C_InpActEvt_N_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.KeyN
// (BlueprintCallable, BlueprintEvent)

void AMusic_Manager_C::KeyN()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.KeyN");

	AMusic_Manager_C_KeyN_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.SetMoodDependingOnEnemies
// (BlueprintCallable, BlueprintEvent)

void AMusic_Manager_C::SetMoodDependingOnEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.SetMoodDependingOnEnemies");

	AMusic_Manager_C_SetMoodDependingOnEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.AutoTriggerNextSong
// (BlueprintCallable, BlueprintEvent)

void AMusic_Manager_C::AutoTriggerNextSong()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.AutoTriggerNextSong");

	AMusic_Manager_C_AutoTriggerNextSong_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.Play Override Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULayeredSong**           Override_Music_DataAsset       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::Play_Override_Music(class ULayeredSong** Override_Music_DataAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.Play Override Music");

	AMusic_Manager_C_Play_Override_Music_Params params;
	params.Override_Music_DataAsset = Override_Music_DataAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.StopOverrideMusic
// (BlueprintCallable, BlueprintEvent)

void AMusic_Manager_C::StopOverrideMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.StopOverrideMusic");

	AMusic_Manager_C_StopOverrideMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.RestartAutoTriggerTimer
// (BlueprintCallable, BlueprintEvent)

void AMusic_Manager_C::RestartAutoTriggerTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.RestartAutoTriggerTimer");

	AMusic_Manager_C_RestartAutoTriggerTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.SetMusicSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMusicSet**              MusicSet                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::SetMusicSet(class UMusicSet** MusicSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.SetMusicSet");

	AMusic_Manager_C_SetMusicSet_Params params;
	params.MusicSet = MusicSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.PlaySpecificSong
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SongNumber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::PlaySpecificSong(int* SongNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.PlaySpecificSong");

	AMusic_Manager_C_PlaySpecificSong_Params params;
	params.SongNumber = SongNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.ForceQuit
// (BlueprintCallable, BlueprintEvent)

void AMusic_Manager_C::ForceQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.ForceQuit");

	AMusic_Manager_C_ForceQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.CueMood
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TargetMood                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::CueMood(int* TargetMood)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.CueMood");

	AMusic_Manager_C_CueMood_Params params;
	params.TargetMood = TargetMood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.Override_Mood
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          OverrideOn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MoodLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::Override_Mood(bool* OverrideOn, int* MoodLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.Override_Mood");

	AMusic_Manager_C_Override_Mood_Params params;
	params.OverrideOn = OverrideOn;
	params.MoodLevel = MoodLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.PauseOverrideMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsPaused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FadeOutTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::PauseOverrideMusic(bool* IsPaused, float* FadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.PauseOverrideMusic");

	AMusic_Manager_C_PauseOverrideMusic_Params params;
	params.IsPaused = IsPaused;
	params.FadeOutTime = FadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.Override_Mood_End
// (BlueprintCallable, BlueprintEvent)

void AMusic_Manager_C::Override_Mood_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.Override_Mood_End");

	AMusic_Manager_C_Override_Mood_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.CueNextSongWithTransition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          RandomSelection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isOverride                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::CueNextSongWithTransition(bool* RandomSelection, bool* isOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.CueNextSongWithTransition");

	AMusic_Manager_C_CueNextSongWithTransition_Params params;
	params.RandomSelection = RandomSelection;
	params.isOverride = isOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.UpdateSongPositionWithPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave**             PlayingSoundWave               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlaybackPercent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::UpdateSongPositionWithPercent(class USoundWave** PlayingSoundWave, float* PlaybackPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.UpdateSongPositionWithPercent");

	AMusic_Manager_C_UpdateSongPositionWithPercent_Params params;
	params.PlayingSoundWave = PlayingSoundWave;
	params.PlaybackPercent = PlaybackPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.ReceiveTick");

	AMusic_Manager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMusic_Manager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.ReceiveBeginPlay");

	AMusic_Manager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.IPlay Override MusicWithSoundCue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue**              NewSoundCue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::IPlay_Override_MusicWithSoundCue(class USoundCue** NewSoundCue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.IPlay Override MusicWithSoundCue");

	AMusic_Manager_C_IPlay_Override_MusicWithSoundCue_Params params;
	params.NewSoundCue = NewSoundCue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.IPlay Override Music
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULayeredSong**           Override_Music_DataAsset       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::IPlay_Override_Music(class ULayeredSong** Override_Music_DataAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.IPlay Override Music");

	AMusic_Manager_C_IPlay_Override_Music_Params params;
	params.Override_Music_DataAsset = Override_Music_DataAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.IStopOverrideMusic
// (Public, BlueprintCallable, BlueprintEvent)

void AMusic_Manager_C::IStopOverrideMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.IStopOverrideMusic");

	AMusic_Manager_C_IStopOverrideMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.IPauseOverrideMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsPaused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FadeOutTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::IPauseOverrideMusic(bool* IsPaused, float* FadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.IPauseOverrideMusic");

	AMusic_Manager_C_IPauseOverrideMusic_Params params;
	params.IsPaused = IsPaused;
	params.FadeOutTime = FadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.IOverride_Mood
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          OverrideOn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MoodLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::IOverride_Mood(bool* OverrideOn, int* MoodLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.IOverride_Mood");

	AMusic_Manager_C_IOverride_Mood_Params params;
	params.OverrideOn = OverrideOn;
	params.MoodLevel = MoodLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.IOverride_Mood_End
// (Public, BlueprintCallable, BlueprintEvent)

void AMusic_Manager_C::IOverride_Mood_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.IOverride_Mood_End");

	AMusic_Manager_C_IOverride_Mood_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.IPlaySpecificSong
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SongNumber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::IPlaySpecificSong(int* SongNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.IPlaySpecificSong");

	AMusic_Manager_C_IPlaySpecificSong_Params params;
	params.SongNumber = SongNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.StartAmbience
// (BlueprintCallable, BlueprintEvent)

void AMusic_Manager_C::StartAmbience()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.StartAmbience");

	AMusic_Manager_C_StartAmbience_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.OverrideAmbienceEnd
// (BlueprintCallable, BlueprintEvent)

void AMusic_Manager_C::OverrideAmbienceEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.OverrideAmbienceEnd");

	AMusic_Manager_C_OverrideAmbienceEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.IAmbienceOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue**              NewAmbienceCue                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::IAmbienceOverride(class USoundCue** NewAmbienceCue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.IAmbienceOverride");

	AMusic_Manager_C_IAmbienceOverride_Params params;
	params.NewAmbienceCue = NewAmbienceCue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.IAmbienceOverrideEnd
// (Public, BlueprintCallable, BlueprintEvent)

void AMusic_Manager_C::IAmbienceOverrideEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.IAmbienceOverrideEnd");

	AMusic_Manager_C_IAmbienceOverrideEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.IAmbienceFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::IAmbienceFadeOut(float* FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.IAmbienceFadeOut");

	AMusic_Manager_C_IAmbienceFadeOut_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.OnAudioPlaybackPercentCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave**             PlayingSoundWave               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PlaybackPercent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::OnAudioPlaybackPercentCallback(class USoundWave** PlayingSoundWave, float* PlaybackPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.OnAudioPlaybackPercentCallback");

	AMusic_Manager_C_OnAudioPlaybackPercentCallback_Params params;
	params.PlayingSoundWave = PlayingSoundWave;
	params.PlaybackPercent = PlaybackPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.Callback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PlaybackTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::Callback(float* PlaybackTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.Callback");

	AMusic_Manager_C_Callback_Params params;
	params.PlaybackTime = PlaybackTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.SetTransitionPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TransitionLengthInBar          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::SetTransitionPoint(float* TransitionLengthInBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.SetTransitionPoint");

	AMusic_Manager_C_SetTransitionPoint_Params params;
	params.TransitionLengthInBar = TransitionLengthInBar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Music_Manager.Music_Manager_C.ExecuteUbergraph_Music_Manager
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusic_Manager_C::ExecuteUbergraph_Music_Manager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music_Manager.Music_Manager_C.ExecuteUbergraph_Music_Manager");

	AMusic_Manager_C_ExecuteUbergraph_Music_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
