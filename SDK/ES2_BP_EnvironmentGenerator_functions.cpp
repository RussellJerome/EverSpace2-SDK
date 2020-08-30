// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_EnvironmentGenerator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.UpdateFog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTRCT_FogSettings*     FogSettings                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_EnvironmentGenerator_C::UpdateFog(struct FSTRCT_FogSettings* FogSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.UpdateFog");

	ABP_EnvironmentGenerator_C_UpdateFog_Params params;
	params.FogSettings = FogSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.CreatePlanet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTRCT_PlanetInstance*  PlanetData                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_EnvironmentGenerator_C::CreatePlanet(struct FSTRCT_PlanetInstance* PlanetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.CreatePlanet");

	ABP_EnvironmentGenerator_C_CreatePlanet_Params params;
	params.PlanetData = PlanetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.ProcessSpaceObjects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EnvironmentGenerator_C::ProcessSpaceObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.ProcessSpaceObjects");

	ABP_EnvironmentGenerator_C_ProcessSpaceObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.UpdateEnviroment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EnvironmentGenerator_C::UpdateEnviroment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.UpdateEnviroment");

	ABP_EnvironmentGenerator_C_UpdateEnviroment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EnvironmentGenerator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.UserConstructionScript");

	ABP_EnvironmentGenerator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.InitializeEnvironment
// (BlueprintCallable, BlueprintEvent)

void ABP_EnvironmentGenerator_C::InitializeEnvironment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.InitializeEnvironment");

	ABP_EnvironmentGenerator_C_InitializeEnvironment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EnvironmentGenerator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.ReceiveBeginPlay");

	ABP_EnvironmentGenerator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.UpdateMPC
// (BlueprintCallable, BlueprintEvent)

void ABP_EnvironmentGenerator_C::UpdateMPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.UpdateMPC");

	ABP_EnvironmentGenerator_C_UpdateMPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnvironmentGenerator_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.ReceiveTick");

	ABP_EnvironmentGenerator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.ExecuteUbergraph_BP_EnvironmentGenerator
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnvironmentGenerator_C::ExecuteUbergraph_BP_EnvironmentGenerator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnvironmentGenerator.BP_EnvironmentGenerator_C.ExecuteUbergraph_BP_EnvironmentGenerator");

	ABP_EnvironmentGenerator_C_ExecuteUbergraph_BP_EnvironmentGenerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
