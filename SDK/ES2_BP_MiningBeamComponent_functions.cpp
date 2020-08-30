// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MiningBeamComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MiningBeamComponent.BP_MiningBeamComponent_C.StartMining
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MiningBeamComponent_C::StartMining(class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiningBeamComponent.BP_MiningBeamComponent_C.StartMining");

	UBP_MiningBeamComponent_C_StartMining_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiningBeamComponent.BP_MiningBeamComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MiningBeamComponent_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiningBeamComponent.BP_MiningBeamComponent_C.ReceiveTick");

	UBP_MiningBeamComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiningBeamComponent.BP_MiningBeamComponent_C.StopMining
// (BlueprintCallable, BlueprintEvent)

void UBP_MiningBeamComponent_C::StopMining()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiningBeamComponent.BP_MiningBeamComponent_C.StopMining");

	UBP_MiningBeamComponent_C_StopMining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MiningBeamComponent.BP_MiningBeamComponent_C.ExecuteUbergraph_BP_MiningBeamComponent
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MiningBeamComponent_C::ExecuteUbergraph_BP_MiningBeamComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MiningBeamComponent.BP_MiningBeamComponent_C.ExecuteUbergraph_BP_MiningBeamComponent");

	UBP_MiningBeamComponent_C_ExecuteUbergraph_BP_MiningBeamComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
