// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Warship_DroneSpawner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.OffsiteSimulate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TimePassed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Warship_DroneSpawner_C::OffsiteSimulate(float* TimePassed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.OffsiteSimulate");

	ABP_Warship_DroneSpawner_C_OffsiteSimulate_Params params;
	params.TimePassed = TimePassed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.RestoreState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Warship_DroneSpawner_C::RestoreState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.RestoreState");

	ABP_Warship_DroneSpawner_C_RestoreState_Params params;
	params.GenericSaveDataMap = GenericSaveDataMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.SaveState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer> GenericSaveDataMap             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Warship_DroneSpawner_C::SaveState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.SaveState");

	ABP_Warship_DroneSpawner_C_SaveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenericSaveDataMap != nullptr)
		*GenericSaveDataMap = params.GenericSaveDataMap;

	return params.ReturnValue;
}


// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.IsDroneAlive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Warship_DroneSpawner_C::IsDroneAlive(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.IsDroneAlive");

	ABP_Warship_DroneSpawner_C_IsDroneAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Warship_DroneSpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.UserConstructionScript");

	ABP_Warship_DroneSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.SpawnDrone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Warship_DroneSpawner_C::SpawnDrone(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.SpawnDrone");

	ABP_Warship_DroneSpawner_C_SpawnDrone_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Warship_DroneSpawner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.ReceiveBeginPlay");

	ABP_Warship_DroneSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.TryToSpawnDrone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Warship_DroneSpawner_C::TryToSpawnDrone(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.TryToSpawnDrone");

	ABP_Warship_DroneSpawner_C_TryToSpawnDrone_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.ExecuteUbergraph_BP_Warship_DroneSpawner
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Warship_DroneSpawner_C::ExecuteUbergraph_BP_Warship_DroneSpawner(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warship_DroneSpawner.BP_Warship_DroneSpawner_C.ExecuteUbergraph_BP_Warship_DroneSpawner");

	ABP_Warship_DroneSpawner_C_ExecuteUbergraph_BP_Warship_DroneSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
