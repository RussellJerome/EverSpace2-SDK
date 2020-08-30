// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Explosion_Volumetric_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.GetSubExplosionLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Explosion_Volumetric_Base_C::GetSubExplosionLocation(struct FVector* Location, struct FVector* Normal, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.GetSubExplosionLocation");

	ABP_Explosion_Volumetric_Base_C_GetSubExplosionLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Normal != nullptr)
		*Normal = params.Normal;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.SubExplosion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Explosion_Volumetric_Base_C::SubExplosion(struct FVector* Location, struct FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.SubExplosion");

	ABP_Explosion_Volumetric_Base_C_SubExplosion_Params params;
	params.Location = Location;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Explosion_Volumetric_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.ReceiveBeginPlay");

	ABP_Explosion_Volumetric_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.SpawnSubExplosion
// (BlueprintCallable, BlueprintEvent)

void ABP_Explosion_Volumetric_Base_C::SpawnSubExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.SpawnSubExplosion");

	ABP_Explosion_Volumetric_Base_C_SpawnSubExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.SpawnFinalExplosion
// (BlueprintCallable, BlueprintEvent)

void ABP_Explosion_Volumetric_Base_C::SpawnFinalExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.SpawnFinalExplosion");

	ABP_Explosion_Volumetric_Base_C_SpawnFinalExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Explosion_Volumetric_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.ReceiveTick");

	ABP_Explosion_Volumetric_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.ExecuteUbergraph_BP_Explosion_Volumetric_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Explosion_Volumetric_Base_C::ExecuteUbergraph_BP_Explosion_Volumetric_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.ExecuteUbergraph_BP_Explosion_Volumetric_Base");

	ABP_Explosion_Volumetric_Base_C_ExecuteUbergraph_BP_Explosion_Volumetric_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.FinalExplosion__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Explosion_Volumetric_Base_C::FinalExplosion__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Explosion_Volumetric_Base.BP_Explosion_Volumetric_Base_C.FinalExplosion__DelegateSignature");

	ABP_Explosion_Volumetric_Base_C_FinalExplosion__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
