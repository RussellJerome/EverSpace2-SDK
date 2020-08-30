#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Music_Manager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Music_Manager.Music_Manager_C
// 0x019A (0x04CA - 0x0330)
class AMusic_Manager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             AmbienceOverride;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AmbienceGeneric;                                          // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TSoftObjectPtr<class UMusicSet>                    InitialMusicSet;                                          // 0x0350(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMusicSet*                                   CurrentMusicSet;                                          // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMusicSet*                                   NextMusicSet;                                             // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      Current_Volume_Layer_Array;                               // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      Target_Volume_Layer_Array;                                // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TransitionDelay;                                          // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	struct FText                                       TextToDisplay;                                            // 0x03B0(0x0028) (Edit, BlueprintVisible)
	float                                              Bpm;                                                      // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Beat;                                                     // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LayerChangePending;                                       // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TransitionPending;                                        // 0x03D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03D2(0x0002) MISSED OFFSET
	int                                                Counter;                                                  // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TempSongPosition;                                         // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentSongPosition;                                      // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastBar;                                                  // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentMusicMood;                                         // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TargetMood;                                               // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastBarTransition;                                        // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TransitionStartBar;                                       // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextLayerStartBar;                                        // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SongIndex;                                                // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndCurrentPending;                                        // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	float                                              CurrentSongDuration;                                      // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	class USoundCue*                                   TransitionCue;                                            // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TimeToTransition;                                         // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isNextSongTriggered;                                      // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	float                                              Notes;                                                    // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Part;                                                     // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isMusicActivated;                                         // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	int                                                NumEnemies;                                               // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AESPawn*                                     PlayerPawn;                                               // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CountAsEnemyDistance;                                     // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NewMusicMood;                                             // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             PersistentMusicComp;                                      // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<float>                                      MoodVolume_2;                                             // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MoodVolume_3;                                             // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MoodVolume_1;                                             // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ULayeredSong*                                CurrentOverrideSongAsset;                                 // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isOverride;                                               // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RandomSelection;                                          // 0x0479(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x047A(0x0002) MISSED OFFSET
	int                                                SpecificNextSong;                                         // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponDistance;                                           // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FightingEndDistance;                                      // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScannerDistance;                                          // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScannerEndDistance;                                       // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FightingDistance;                                         // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxThreatLevel;                                           // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverrideMood;                                             // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	class UAudioComponent*                             CurrentAmbience;                                          // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               isAmbienceOverride;                                       // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x04A9(0x0003) MISSED OFFSET
	float                                              CurrentThreatSum;                                         // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastThreatSum;                                            // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentPawnThreatFactor;                                  // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextSongTime;                                             // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	struct FTimerHandle                                NextSongTimerHandle;                                      // 0x04C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               isBeginPlay;                                              // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugMusic;                                               // 0x04C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Music_Manager.Music_Manager_C");
		return ptr;
	}


	bool CheckIfTargetTimeBeyondSongDuration(float* CurrentSongPosBar, float* TargetTime);
	void GetCurrentSongAsset(class ULayeredSong** LayeredSong);
	void InitPersistentMusicComponent();
	void GetRecentlyPlayedSongs(TArray<int>* SongIndexArray);
	void GetRandomSongIndex(TArray<int>* ExcludeIndices, int* NewIndex);
	float GetSongDurationInBars();
	void PrepareEndTransition(float* TransitionLengthInBar);
	void GetSongBarPosition(float* SongBarPosition);
	void SetTargetLayerVolume(int* MoodNumber);
	void GetCurrentSoundLevel(int* CurrentSoundLevel);
	void PrepareMoodChangeTransition(int* CurrentMood, int* TargetMood, float* TransitionLengthInBar);
	void SelectAndPlayNextSong(bool* RandomSelection, bool* isOverride);
	void InpActEvt_Ctrl_N_K2Node_InputKeyEvent_5(struct FKey* Key);
	void InpActEvt_Ctrl_One_K2Node_InputKeyEvent_4(struct FKey* Key);
	void InpActEvt_Ctrl_Two_K2Node_InputKeyEvent_3(struct FKey* Key);
	void InpActEvt_Ctrl_Three_K2Node_InputKeyEvent_2(struct FKey* Key);
	void InpActEvt_N_K2Node_InputKeyEvent_1(struct FKey* Key);
	void KeyN();
	void SetMoodDependingOnEnemies();
	void AutoTriggerNextSong();
	void Play_Override_Music(class ULayeredSong** Override_Music_DataAsset);
	void StopOverrideMusic();
	void RestartAutoTriggerTimer();
	void SetMusicSet(class UMusicSet** MusicSet);
	void PlaySpecificSong(int* SongNumber);
	void ForceQuit();
	void CueMood(int* TargetMood);
	void Override_Mood(bool* OverrideOn, int* MoodLevel);
	void PauseOverrideMusic(bool* IsPaused, float* FadeOutTime);
	void Override_Mood_End();
	void CueNextSongWithTransition(bool* RandomSelection, bool* isOverride);
	void UpdateSongPositionWithPercent(class USoundWave** PlayingSoundWave, float* PlaybackPercent);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void IPlay_Override_MusicWithSoundCue(class USoundCue** NewSoundCue);
	void IPlay_Override_Music(class ULayeredSong** Override_Music_DataAsset);
	void IStopOverrideMusic();
	void IPauseOverrideMusic(bool* IsPaused, float* FadeOutTime);
	void IOverride_Mood(bool* OverrideOn, int* MoodLevel);
	void IOverride_Mood_End();
	void IPlaySpecificSong(int* SongNumber);
	void StartAmbience();
	void OverrideAmbienceEnd();
	void IAmbienceOverride(class USoundCue** NewAmbienceCue);
	void IAmbienceOverrideEnd();
	void IAmbienceFadeOut(float* FadeTime);
	void OnAudioPlaybackPercentCallback(class USoundWave** PlayingSoundWave, float* PlaybackPercent);
	void Callback(float* PlaybackTime);
	void SetTransitionPoint(float* TransitionLengthInBar);
	void ExecuteUbergraph_Music_Manager(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
