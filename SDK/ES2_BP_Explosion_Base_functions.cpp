// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Explosion_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Explosion_Base.BP_Explosion_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Explosion_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Base.BP_Explosion_Base_C.UserConstructionScript");

	ABP_Explosion_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_Base.BP_Explosion_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Explosion_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Base.BP_Explosion_Base_C.ReceiveBeginPlay");

	ABP_Explosion_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_Base.BP_Explosion_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Explosion_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Base.BP_Explosion_Base_C.ReceiveTick");

	ABP_Explosion_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_Base.BP_Explosion_Base_C.FireParticlesFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_Explosion_Base_C::FireParticlesFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Base.BP_Explosion_Base_C.FireParticlesFinished");

	ABP_Explosion_Base_C_FireParticlesFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_Base.BP_Explosion_Base_C.DestroyExplosion
// (BlueprintCallable, BlueprintEvent)

void ABP_Explosion_Base_C::DestroyExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Base.BP_Explosion_Base_C.DestroyExplosion");

	ABP_Explosion_Base_C_DestroyExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_Base.BP_Explosion_Base_C.ExplosionParticlesFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent** PSystem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Explosion_Base_C::ExplosionParticlesFinished(class UParticleSystemComponent** PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Base.BP_Explosion_Base_C.ExplosionParticlesFinished");

	ABP_Explosion_Base_C_ExplosionParticlesFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_Base.BP_Explosion_Base_C.ExecuteUbergraph_BP_Explosion_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Explosion_Base_C::ExecuteUbergraph_BP_Explosion_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Base.BP_Explosion_Base_C.ExecuteUbergraph_BP_Explosion_Base");

	ABP_Explosion_Base_C_ExecuteUbergraph_BP_Explosion_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_Base.BP_Explosion_Base_C.ExplosionFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Explosion_Base_C::ExplosionFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Base.BP_Explosion_Base_C.ExplosionFinished__DelegateSignature");

	ABP_Explosion_Base_C_ExplosionFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
