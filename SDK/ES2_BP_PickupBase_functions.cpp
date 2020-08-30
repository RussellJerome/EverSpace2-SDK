// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PickupBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PickupBase.BP_PickupBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PickupBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.UserConstructionScript");

	ABP_PickupBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.PickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APickupBase**            PickupBaseActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPickedUpEntirely              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupBase_C::PickedUp(class APickupBase** PickupBaseActor, int* Amount, bool* bPickedUpEntirely)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.PickedUp");

	ABP_PickupBase_C_PickedUp_Params params;
	params.PickupBaseActor = PickupBaseActor;
	params.Amount = Amount;
	params.bPickedUpEntirely = bPickedUpEntirely;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PickupBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.ReceiveBeginPlay");

	ABP_PickupBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.InitTractorBeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APickupBase**            PickupBaseActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ActorThatPulls                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupBase_C::InitTractorBeam(class APickupBase** PickupBaseActor, class AActor** ActorThatPulls)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.InitTractorBeam");

	ABP_PickupBase_C_InitTractorBeam_Params params;
	params.PickupBaseActor = PickupBaseActor;
	params.ActorThatPulls = ActorThatPulls;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.UpdateTractorBeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APickupBase**            PickupBaseActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ActorThatPulls                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupBase_C::UpdateTractorBeam(class APickupBase** PickupBaseActor, class AActor** ActorThatPulls, float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.UpdateTractorBeam");

	ABP_PickupBase_C_UpdateTractorBeam_Params params;
	params.PickupBaseActor = PickupBaseActor;
	params.ActorThatPulls = ActorThatPulls;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.UpdateTractorBeamParticles
// (BlueprintCallable, BlueprintEvent)

void ABP_PickupBase_C::UpdateTractorBeamParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.UpdateTractorBeamParticles");

	ABP_PickupBase_C_UpdateTractorBeamParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.DisableTractorBeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APickupBase**            PickupBaseActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ActorThatPulls                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupBase_C::DisableTractorBeam(class APickupBase** PickupBaseActor, class AActor** ActorThatPulls)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.DisableTractorBeam");

	ABP_PickupBase_C_DisableTractorBeam_Params params;
	params.PickupBaseActor = PickupBaseActor;
	params.ActorThatPulls = ActorThatPulls;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.InitGlowEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_PickupBase_C::InitGlowEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.InitGlowEffect");

	ABP_PickupBase_C_InitGlowEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.OnInteracted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractComponent**     InteractComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupBase_C::OnInteracted(class UInteractComponent** InteractComponent, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.OnInteracted");

	ABP_PickupBase_C_OnInteracted_Params params;
	params.InteractComponent = InteractComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PickupBase.BP_PickupBase_C.ExecuteUbergraph_BP_PickupBase
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PickupBase_C::ExecuteUbergraph_BP_PickupBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PickupBase.BP_PickupBase_C.ExecuteUbergraph_BP_PickupBase");

	ABP_PickupBase_C_ExecuteUbergraph_BP_PickupBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
