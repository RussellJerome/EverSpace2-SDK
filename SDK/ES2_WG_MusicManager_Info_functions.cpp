// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MusicManager_Info_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_MusicManager_Info.WG_MusicManager_Info_C.GetNextSongTimerDuration
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_MusicManager_Info_C::GetNextSongTimerDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MusicManager_Info.WG_MusicManager_Info_C.GetNextSongTimerDuration");

	UWG_MusicManager_Info_C_GetNextSongTimerDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_MusicManager_Info.WG_MusicManager_Info_C.GetNewMusicMoodText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_MusicManager_Info_C::GetNewMusicMoodText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MusicManager_Info.WG_MusicManager_Info_C.GetNewMusicMoodText");

	UWG_MusicManager_Info_C_GetNewMusicMoodText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_MusicManager_Info.WG_MusicManager_Info_C.GetSongPendingText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_MusicManager_Info_C::GetSongPendingText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MusicManager_Info.WG_MusicManager_Info_C.GetSongPendingText");

	UWG_MusicManager_Info_C_GetSongPendingText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_MusicManager_Info.WG_MusicManager_Info_C.GetSongNameText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_MusicManager_Info_C::GetSongNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MusicManager_Info.WG_MusicManager_Info_C.GetSongNameText");

	UWG_MusicManager_Info_C_GetSongNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_MusicManager_Info.WG_MusicManager_Info_C.GetSongIndexText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWG_MusicManager_Info_C::GetSongIndexText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MusicManager_Info.WG_MusicManager_Info_C.GetSongIndexText");

	UWG_MusicManager_Info_C_GetSongIndexText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_MusicManager_Info.WG_MusicManager_Info_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_MusicManager_Info_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MusicManager_Info.WG_MusicManager_Info_C.Construct");

	UWG_MusicManager_Info_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MusicManager_Info.WG_MusicManager_Info_C.ExecuteUbergraph_WG_MusicManager_Info
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MusicManager_Info_C::ExecuteUbergraph_WG_MusicManager_Info(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MusicManager_Info.WG_MusicManager_Info_C.ExecuteUbergraph_WG_MusicManager_Info");

	UWG_MusicManager_Info_C_ExecuteUbergraph_WG_MusicManager_Info_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
