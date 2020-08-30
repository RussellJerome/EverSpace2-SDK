// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_GasLeak_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GasLeak.BP_GasLeak_C.OffsiteSimulate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TimePassed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_GasLeak_C::OffsiteSimulate(float* TimePassed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GasLeak.BP_GasLeak_C.OffsiteSimulate");

	ABP_GasLeak_C_OffsiteSimulate_Params params;
	params.TimePassed = TimePassed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GasLeak.BP_GasLeak_C.RestoreState
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_GasLeak_C::RestoreState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GasLeak.BP_GasLeak_C.RestoreState");

	ABP_GasLeak_C_RestoreState_Params params;
	params.GenericSaveDataMap = GenericSaveDataMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GasLeak.BP_GasLeak_C.SaveState
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer> GenericSaveDataMap             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_GasLeak_C::SaveState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GasLeak.BP_GasLeak_C.SaveState");

	ABP_GasLeak_C_SaveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenericSaveDataMap != nullptr)
		*GenericSaveDataMap = params.GenericSaveDataMap;

	return params.ReturnValue;
}


// Function BP_GasLeak.BP_GasLeak_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GasLeak_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GasLeak.BP_GasLeak_C.ReceiveBeginPlay");

	ABP_GasLeak_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GasLeak.BP_GasLeak_C.StartLeaking
// (BlueprintCallable, BlueprintEvent)

void ABP_GasLeak_C::StartLeaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GasLeak.BP_GasLeak_C.StartLeaking");

	ABP_GasLeak_C_StartLeaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GasLeak.BP_GasLeak_C.StopLeaking
// (BlueprintCallable, BlueprintEvent)

void ABP_GasLeak_C::StopLeaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GasLeak.BP_GasLeak_C.StopLeaking");

	ABP_GasLeak_C_StopLeaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GasLeak.BP_GasLeak_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractComponent**     InteractComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GasLeak_C::CustomEvent(class UInteractComponent** InteractComponent, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GasLeak.BP_GasLeak_C.CustomEvent");

	ABP_GasLeak_C_CustomEvent_Params params;
	params.InteractComponent = InteractComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GasLeak.BP_GasLeak_C.ExecuteUbergraph_BP_GasLeak
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GasLeak_C::ExecuteUbergraph_BP_GasLeak(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GasLeak.BP_GasLeak_C.ExecuteUbergraph_BP_GasLeak");

	ABP_GasLeak_C_ExecuteUbergraph_BP_GasLeak_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
