// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Forcefield_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Forcefield.BP_Forcefield_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Forcefield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forcefield.BP_Forcefield_C.UserConstructionScript");

	ABP_Forcefield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forcefield.BP_Forcefield_C.ErosionTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_Forcefield_C::ErosionTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forcefield.BP_Forcefield_C.ErosionTimeline__FinishedFunc");

	ABP_Forcefield_C_ErosionTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forcefield.BP_Forcefield_C.ErosionTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_Forcefield_C::ErosionTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forcefield.BP_Forcefield_C.ErosionTimeline__UpdateFunc");

	ABP_Forcefield_C_ErosionTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forcefield.BP_Forcefield_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Forcefield_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forcefield.BP_Forcefield_C.ReceiveBeginPlay");

	ABP_Forcefield_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forcefield.BP_Forcefield_C.GeneratorDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forcefield_C::GeneratorDestroyed(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forcefield.BP_Forcefield_C.GeneratorDestroyed");

	ABP_Forcefield_C_GeneratorDestroyed_Params params;
	params.Actor = Actor;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forcefield.BP_Forcefield_C.ExecuteUbergraph_BP_Forcefield
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forcefield_C::ExecuteUbergraph_BP_Forcefield(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forcefield.BP_Forcefield_C.ExecuteUbergraph_BP_Forcefield");

	ABP_Forcefield_C_ExecuteUbergraph_BP_Forcefield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
