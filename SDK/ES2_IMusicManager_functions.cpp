// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_IMusicManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IMusicManager.IMusicManager_C.IAmbienceFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIMusicManager_C::IAmbienceFadeOut(float* FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IMusicManager.IMusicManager_C.IAmbienceFadeOut");

	UIMusicManager_C_IAmbienceFadeOut_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IMusicManager.IMusicManager_C.IAmbienceOverrideEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UIMusicManager_C::IAmbienceOverrideEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function IMusicManager.IMusicManager_C.IAmbienceOverrideEnd");

	UIMusicManager_C_IAmbienceOverrideEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IMusicManager.IMusicManager_C.IAmbienceOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue**              NewAmbienceCue                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIMusicManager_C::IAmbienceOverride(class USoundCue** NewAmbienceCue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IMusicManager.IMusicManager_C.IAmbienceOverride");

	UIMusicManager_C_IAmbienceOverride_Params params;
	params.NewAmbienceCue = NewAmbienceCue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IMusicManager.IMusicManager_C.IPlay Override MusicWithSoundCue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue**              NewSoundCue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIMusicManager_C::IPlay_Override_MusicWithSoundCue(class USoundCue** NewSoundCue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IMusicManager.IMusicManager_C.IPlay Override MusicWithSoundCue");

	UIMusicManager_C_IPlay_Override_MusicWithSoundCue_Params params;
	params.NewSoundCue = NewSoundCue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IMusicManager.IMusicManager_C.IPlaySpecificSong
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SongNumber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIMusicManager_C::IPlaySpecificSong(int* SongNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function IMusicManager.IMusicManager_C.IPlaySpecificSong");

	UIMusicManager_C_IPlaySpecificSong_Params params;
	params.SongNumber = SongNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IMusicManager.IMusicManager_C.IOverride_Mood_End
// (Public, BlueprintCallable, BlueprintEvent)

void UIMusicManager_C::IOverride_Mood_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function IMusicManager.IMusicManager_C.IOverride_Mood_End");

	UIMusicManager_C_IOverride_Mood_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IMusicManager.IMusicManager_C.IOverride_Mood
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          OverrideOn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MoodLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIMusicManager_C::IOverride_Mood(bool* OverrideOn, int* MoodLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function IMusicManager.IMusicManager_C.IOverride_Mood");

	UIMusicManager_C_IOverride_Mood_Params params;
	params.OverrideOn = OverrideOn;
	params.MoodLevel = MoodLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IMusicManager.IMusicManager_C.IPauseOverrideMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsPaused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FadeOutTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIMusicManager_C::IPauseOverrideMusic(bool* IsPaused, float* FadeOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IMusicManager.IMusicManager_C.IPauseOverrideMusic");

	UIMusicManager_C_IPauseOverrideMusic_Params params;
	params.IsPaused = IsPaused;
	params.FadeOutTime = FadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IMusicManager.IMusicManager_C.IStopOverrideMusic
// (Public, BlueprintCallable, BlueprintEvent)

void UIMusicManager_C::IStopOverrideMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function IMusicManager.IMusicManager_C.IStopOverrideMusic");

	UIMusicManager_C_IStopOverrideMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IMusicManager.IMusicManager_C.IPlay Override Music
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULayeredSong**           Override_Music_DataAsset       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIMusicManager_C::IPlay_Override_Music(class ULayeredSong** Override_Music_DataAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function IMusicManager.IMusicManager_C.IPlay Override Music");

	UIMusicManager_C_IPlay_Override_Music_Params params;
	params.Override_Music_DataAsset = Override_Music_DataAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
