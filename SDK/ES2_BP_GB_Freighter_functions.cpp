// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_GB_Freighter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GB_Freighter.BP_GB_Freighter_C.SetTurretLevels
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GB_Freighter_C::SetTurretLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GB_Freighter.BP_GB_Freighter_C.SetTurretLevels");

	ABP_GB_Freighter_C_SetTurretLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GB_Freighter.BP_GB_Freighter_C.SetContainerHP
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GB_Freighter_C::SetContainerHP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GB_Freighter.BP_GB_Freighter_C.SetContainerHP");

	ABP_GB_Freighter_C_SetContainerHP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GB_Freighter.BP_GB_Freighter_C.SetupIgnoreActors
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GB_Freighter_C::SetupIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GB_Freighter.BP_GB_Freighter_C.SetupIgnoreActors");

	ABP_GB_Freighter_C_SetupIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GB_Freighter.BP_GB_Freighter_C.GetRemainingContainers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Containers                     (Parm, OutParm, ZeroConstructor)

void ABP_GB_Freighter_C::GetRemainingContainers(TArray<class AActor*>* Containers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GB_Freighter.BP_GB_Freighter_C.GetRemainingContainers");

	ABP_GB_Freighter_C_GetRemainingContainers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Containers != nullptr)
		*Containers = params.Containers;
}


// Function BP_GB_Freighter.BP_GB_Freighter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GB_Freighter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GB_Freighter.BP_GB_Freighter_C.UserConstructionScript");

	ABP_GB_Freighter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GB_Freighter.BP_GB_Freighter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GB_Freighter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GB_Freighter.BP_GB_Freighter_C.ReceiveBeginPlay");

	ABP_GB_Freighter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GB_Freighter.BP_GB_Freighter_C.ContainerDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWreckComponent**        WreckComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_GB_Freighter_C::ContainerDestroyed(class UWreckComponent** WreckComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GB_Freighter.BP_GB_Freighter_C.ContainerDestroyed");

	ABP_GB_Freighter_C_ContainerDestroyed_Params params;
	params.WreckComponent = WreckComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GB_Freighter.BP_GB_Freighter_C.DestroyAfterExploding
// (BlueprintCallable, BlueprintEvent)

void ABP_GB_Freighter_C::DestroyAfterExploding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GB_Freighter.BP_GB_Freighter_C.DestroyAfterExploding");

	ABP_GB_Freighter_C_DestroyAfterExploding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GB_Freighter.BP_GB_Freighter_C.Explode
// (BlueprintCallable, BlueprintEvent)

void ABP_GB_Freighter_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GB_Freighter.BP_GB_Freighter_C.Explode");

	ABP_GB_Freighter_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GB_Freighter.BP_GB_Freighter_C.ExecuteUbergraph_BP_GB_Freighter
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GB_Freighter_C::ExecuteUbergraph_BP_GB_Freighter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GB_Freighter.BP_GB_Freighter_C.ExecuteUbergraph_BP_GB_Freighter");

	ABP_GB_Freighter_C_ExecuteUbergraph_BP_GB_Freighter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
