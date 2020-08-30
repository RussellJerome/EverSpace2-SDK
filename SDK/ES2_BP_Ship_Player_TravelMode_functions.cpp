// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Ship_Player_TravelMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.SetWorldOrigin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                NewOrigin                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_TravelMode_C::SetWorldOrigin(struct FVector* NewOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.SetWorldOrigin");

	ABP_Ship_Player_TravelMode_C_SetWorldOrigin_Params params;
	params.NewOrigin = NewOrigin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.JumpDriveEnterTravelModeTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_Ship_Player_TravelMode_C::JumpDriveEnterTravelModeTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.JumpDriveEnterTravelModeTimeline__FinishedFunc");

	ABP_Ship_Player_TravelMode_C_JumpDriveEnterTravelModeTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.JumpDriveEnterTravelModeTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_Ship_Player_TravelMode_C::JumpDriveEnterTravelModeTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.JumpDriveEnterTravelModeTimeline__UpdateFunc");

	ABP_Ship_Player_TravelMode_C_JumpDriveEnterTravelModeTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Ship_Player_TravelMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.ReceiveBeginPlay");

	ABP_Ship_Player_TravelMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_TravelMode_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.ReceiveTick");

	ABP_Ship_Player_TravelMode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.RecenterOrigin
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_TravelMode_C::RecenterOrigin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.RecenterOrigin");

	ABP_Ship_Player_TravelMode_C_RecenterOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.JumpDriveVFXBeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_Player_TravelMode_C::JumpDriveVFXBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.JumpDriveVFXBeginPlay");

	ABP_Ship_Player_TravelMode_C_JumpDriveVFXBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.PlanetProximityEffectTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_TravelMode_C::PlanetProximityEffectTick(float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.PlanetProximityEffectTick");

	ABP_Ship_Player_TravelMode_C_PlanetProximityEffectTick_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.PostProcessInput
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bGamePaused                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_TravelMode_C::PostProcessInput(float* DeltaTime, bool* bGamePaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.PostProcessInput");

	ABP_Ship_Player_TravelMode_C_PostProcessInput_Params params;
	params.DeltaTime = DeltaTime;
	params.bGamePaused = bGamePaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.ExecuteUbergraph_BP_Ship_Player_TravelMode
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_Player_TravelMode_C::ExecuteUbergraph_BP_Ship_Player_TravelMode(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C.ExecuteUbergraph_BP_Ship_Player_TravelMode");

	ABP_Ship_Player_TravelMode_C_ExecuteUbergraph_BP_Ship_Player_TravelMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
