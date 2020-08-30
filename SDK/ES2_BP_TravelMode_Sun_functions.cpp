// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_TravelMode_Sun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.UpdateDirectionalLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TravelMode_Sun_C::UpdateDirectionalLight(struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.UpdateDirectionalLight");

	ABP_TravelMode_Sun_C_UpdateDirectionalLight_Params params;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.GetDirectionalIntensity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShadowTrace                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TravelMode_Sun_C::GetDirectionalIntensity(struct FVector* Location, bool* ShadowTrace, float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.GetDirectionalIntensity");

	ABP_TravelMode_Sun_C_GetDirectionalIntensity_Params params;
	params.Location = Location;
	params.ShadowTrace = ShadowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Intensity != nullptr)
		*Intensity = params.Intensity;
}


// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TravelMode_Sun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.UserConstructionScript");

	ABP_TravelMode_Sun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TravelMode_Sun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.ReceiveBeginPlay");

	ABP_TravelMode_Sun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_TravelMode_Sun_C::BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_TravelMode_Sun_C_BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TravelMode_Sun_C::BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_TravelMode_Sun_C_BndEvt__ProximitySphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TravelMode_Sun_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.ReceiveTick");

	ABP_TravelMode_Sun_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.UpdateMPC
// (BlueprintCallable, BlueprintEvent)

void ABP_TravelMode_Sun_C::UpdateMPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.UpdateMPC");

	ABP_TravelMode_Sun_C_UpdateMPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.PreviewLightingAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TravelMode_Sun_C::PreviewLightingAtLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.PreviewLightingAtLocation");

	ABP_TravelMode_Sun_C_PreviewLightingAtLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.ExecuteUbergraph_BP_TravelMode_Sun
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TravelMode_Sun_C::ExecuteUbergraph_BP_TravelMode_Sun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Sun.BP_TravelMode_Sun_C.ExecuteUbergraph_BP_TravelMode_Sun");

	ABP_TravelMode_Sun_C_ExecuteUbergraph_BP_TravelMode_Sun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
