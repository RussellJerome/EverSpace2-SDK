#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_IMusicManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IMusicManager.IMusicManager_C
// 0x0000 (0x0028 - 0x0028)
class UIMusicManager_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IMusicManager.IMusicManager_C");
		return ptr;
	}


	void IAmbienceFadeOut(float* FadeTime);
	void IAmbienceOverrideEnd();
	void IAmbienceOverride(class USoundCue** NewAmbienceCue);
	void IPlay_Override_MusicWithSoundCue(class USoundCue** NewSoundCue);
	void IPlaySpecificSong(int* SongNumber);
	void IOverride_Mood_End();
	void IOverride_Mood(bool* OverrideOn, int* MoodLevel);
	void IPauseOverrideMusic(bool* IsPaused, float* FadeOutTime);
	void IStopOverrideMusic();
	void IPlay_Override_Music(class ULayeredSong** Override_Music_DataAsset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
