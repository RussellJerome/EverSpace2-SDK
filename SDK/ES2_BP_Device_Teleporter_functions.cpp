// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Device_Teleporter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Device_Teleporter.BP_Device_Teleporter_C.OnDeactivate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerOfDevice                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Device_Teleporter_C::OnDeactivate(class AActor** OwnerOfDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_Teleporter.BP_Device_Teleporter_C.OnDeactivate");

	ABP_Device_Teleporter_C_OnDeactivate_Params params;
	params.OwnerOfDevice = OwnerOfDevice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Device_Teleporter.BP_Device_Teleporter_C.OnActivate
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerOfDevice                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Device_Teleporter_C::OnActivate(class AActor** OwnerOfDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_Teleporter.BP_Device_Teleporter_C.OnActivate");

	ABP_Device_Teleporter_C_OnActivate_Params params;
	params.OwnerOfDevice = OwnerOfDevice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Device_Teleporter.BP_Device_Teleporter_C.PostEffectTimeLine__FinishedFunc
// (BlueprintEvent)

void ABP_Device_Teleporter_C::PostEffectTimeLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_Teleporter.BP_Device_Teleporter_C.PostEffectTimeLine__FinishedFunc");

	ABP_Device_Teleporter_C_PostEffectTimeLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Device_Teleporter.BP_Device_Teleporter_C.PostEffectTimeLine__UpdateFunc
// (BlueprintEvent)

void ABP_Device_Teleporter_C::PostEffectTimeLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_Teleporter.BP_Device_Teleporter_C.PostEffectTimeLine__UpdateFunc");

	ABP_Device_Teleporter_C_PostEffectTimeLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Device_Teleporter.BP_Device_Teleporter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Device_Teleporter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_Teleporter.BP_Device_Teleporter_C.ReceiveBeginPlay");

	ABP_Device_Teleporter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Device_Teleporter.BP_Device_Teleporter_C.PlayVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                InitialLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TargetLocations                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Device_Teleporter_C::PlayVFX(struct FVector* InitialLocation, struct FVector* TargetLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_Teleporter.BP_Device_Teleporter_C.PlayVFX");

	ABP_Device_Teleporter_C_PlayVFX_Params params;
	params.InitialLocation = InitialLocation;
	params.TargetLocations = TargetLocations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Device_Teleporter.BP_Device_Teleporter_C.ExecuteUbergraph_BP_Device_Teleporter
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Device_Teleporter_C::ExecuteUbergraph_BP_Device_Teleporter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_Teleporter.BP_Device_Teleporter_C.ExecuteUbergraph_BP_Device_Teleporter");

	ABP_Device_Teleporter_C_ExecuteUbergraph_BP_Device_Teleporter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
