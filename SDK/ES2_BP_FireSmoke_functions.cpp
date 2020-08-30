// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_FireSmoke_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FireSmoke.BP_FireSmoke_C.UpdateParameters
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FireSmoke_C::UpdateParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireSmoke.BP_FireSmoke_C.UpdateParameters");

	ABP_FireSmoke_C_UpdateParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireSmoke.BP_FireSmoke_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FireSmoke_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireSmoke.BP_FireSmoke_C.UserConstructionScript");

	ABP_FireSmoke_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireSmoke.BP_FireSmoke_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FireSmoke_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireSmoke.BP_FireSmoke_C.ReceiveTick");

	ABP_FireSmoke_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireSmoke.BP_FireSmoke_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FireSmoke_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireSmoke.BP_FireSmoke_C.ReceiveBeginPlay");

	ABP_FireSmoke_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireSmoke.BP_FireSmoke_C.Destroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent** PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_FireSmoke_C::Destroy(class UParticleSystemComponent** PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireSmoke.BP_FireSmoke_C.Destroy");

	ABP_FireSmoke_C_Destroy_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireSmoke.BP_FireSmoke_C.ParentActorDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FireSmoke_C::ParentActorDestroyed(class AActor** DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireSmoke.BP_FireSmoke_C.ParentActorDestroyed");

	ABP_FireSmoke_C_ParentActorDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireSmoke.BP_FireSmoke_C.ExecuteUbergraph_BP_FireSmoke
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FireSmoke_C::ExecuteUbergraph_BP_FireSmoke(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireSmoke.BP_FireSmoke_C.ExecuteUbergraph_BP_FireSmoke");

	ABP_FireSmoke_C_ExecuteUbergraph_BP_FireSmoke_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireSmoke.BP_FireSmoke_C.Finished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_FireSmoke_C::Finished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireSmoke.BP_FireSmoke_C.Finished__DelegateSignature");

	ABP_FireSmoke_C_Finished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
