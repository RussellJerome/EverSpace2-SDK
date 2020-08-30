// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_GameOverPostProcess_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GameOverPostProcess.BP_GameOverPostProcess_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameOverPostProcess_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverPostProcess.BP_GameOverPostProcess_C.ReceiveTick");

	ABP_GameOverPostProcess_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameOverPostProcess.BP_GameOverPostProcess_C.EnableGameOverEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_GameOverPostProcess_C::EnableGameOverEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverPostProcess.BP_GameOverPostProcess_C.EnableGameOverEffect");

	ABP_GameOverPostProcess_C_EnableGameOverEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameOverPostProcess.BP_GameOverPostProcess_C.DisableGameOverEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_GameOverPostProcess_C::DisableGameOverEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverPostProcess.BP_GameOverPostProcess_C.DisableGameOverEffect");

	ABP_GameOverPostProcess_C_DisableGameOverEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameOverPostProcess.BP_GameOverPostProcess_C.ExecuteUbergraph_BP_GameOverPostProcess
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameOverPostProcess_C::ExecuteUbergraph_BP_GameOverPostProcess(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameOverPostProcess.BP_GameOverPostProcess_C.ExecuteUbergraph_BP_GameOverPostProcess");

	ABP_GameOverPostProcess_C_ExecuteUbergraph_BP_GameOverPostProcess_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
