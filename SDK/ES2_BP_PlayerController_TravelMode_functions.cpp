// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PlayerController_TravelMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.SetSpeedLimitFactor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MaxSpeedFactor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_TravelMode_C::SetSpeedLimitFactor(float* MaxSpeedFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.SetSpeedLimitFactor");

	ABP_PlayerController_TravelMode_C_SetSpeedLimitFactor_Params params;
	params.MaxSpeedFactor = MaxSpeedFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.WayObstructedByPlanet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Ship                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_TravelMode_Planet_C** Planet                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Obstructed                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_TravelMode_C::WayObstructedByPlanet(class AActor** Ship, class AActor** Target, class ABP_TravelMode_Planet_C** Planet, bool* Obstructed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.WayObstructedByPlanet");

	ABP_PlayerController_TravelMode_C_WayObstructedByPlanet_Params params;
	params.Ship = Ship;
	params.Target = Target;
	params.Planet = Planet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Obstructed != nullptr)
		*Obstructed = params.Obstructed;
}


// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.WayObstructedByPlanet_Old
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Ship                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_TravelMode_Planet_C** Planet                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Obstructed                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_TravelMode_C::WayObstructedByPlanet_Old(class AActor** Ship, class AActor** Target, class ABP_TravelMode_Planet_C** Planet, bool* Obstructed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.WayObstructedByPlanet_Old");

	ABP_PlayerController_TravelMode_C_WayObstructedByPlanet_Old_Params params;
	params.Ship = Ship;
	params.Target = Target;
	params.Planet = Planet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Obstructed != nullptr)
		*Obstructed = params.Obstructed;
}


// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.FlyAroundPlanetOld
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Ship                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PlanetCenter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         OrbitRadiusUu                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_PlayerController_TravelMode_C::FlyAroundPlanetOld(struct FVector* Ship, struct FVector* Destination, struct FVector* PlanetCenter, float* OrbitRadiusUu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.FlyAroundPlanetOld");

	ABP_PlayerController_TravelMode_C_FlyAroundPlanetOld_Params params;
	params.Ship = Ship;
	params.Destination = Destination;
	params.PlanetCenter = PlanetCenter;
	params.OrbitRadiusUu = OrbitRadiusUu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.PlayerEnteredMassVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TravelMode_SpaceObject_Base_C** SpaceObject                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          DeathZone                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_TravelMode_C::PlayerEnteredMassVolume(class ABP_TravelMode_SpaceObject_Base_C** SpaceObject, bool* DeathZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.PlayerEnteredMassVolume");

	ABP_PlayerController_TravelMode_C_PlayerEnteredMassVolume_Params params;
	params.SpaceObject = SpaceObject;
	params.DeathZone = DeathZone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.PlayerLeftMassVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TravelMode_SpaceObject_Base_C** SpaceObject                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_TravelMode_C::PlayerLeftMassVolume(class ABP_TravelMode_SpaceObject_Base_C** SpaceObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.PlayerLeftMassVolume");

	ABP_PlayerController_TravelMode_C_PlayerLeftMassVolume_Params params;
	params.SpaceObject = SpaceObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_TravelMode_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.ReceiveTick");

	ABP_PlayerController_TravelMode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.FadedOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Fullscreen_Fade_C**  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_PlayerController_TravelMode_C::FadedOut(class UWG_Fullscreen_Fade_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.FadedOut");

	ABP_PlayerController_TravelMode_C_FadedOut_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.OnProcessPlayerInput
// (Event, Public, BlueprintEvent)

void ABP_PlayerController_TravelMode_C::OnProcessPlayerInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.OnProcessPlayerInput");

	ABP_PlayerController_TravelMode_C_OnProcessPlayerInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_TravelMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.ReceiveBeginPlay");

	ABP_PlayerController_TravelMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.RecheckProximity
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TravelMode_C::RecheckProximity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.RecheckProximity");

	ABP_PlayerController_TravelMode_C_RecheckProximity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.ReviveRequest
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TravelMode_C::ReviveRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.ReviveRequest");

	ABP_PlayerController_TravelMode_C_ReviveRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.LoadCheckpointRequest
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TravelMode_C::LoadCheckpointRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.LoadCheckpointRequest");

	ABP_PlayerController_TravelMode_C_LoadCheckpointRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.LoadMainMenuRequest
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_TravelMode_C::LoadMainMenuRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.LoadMainMenuRequest");

	ABP_PlayerController_TravelMode_C_LoadMainMenuRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.ExecuteUbergraph_BP_PlayerController_TravelMode
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_TravelMode_C::ExecuteUbergraph_BP_PlayerController_TravelMode(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C.ExecuteUbergraph_BP_PlayerController_TravelMode");

	ABP_PlayerController_TravelMode_C_ExecuteUbergraph_BP_PlayerController_TravelMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
