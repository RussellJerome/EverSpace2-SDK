// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ConditionEffect_EMP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ConditionEffect_EMP.BP_ConditionEffect_EMP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ConditionEffect_EMP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_EMP.BP_ConditionEffect_EMP_C.ReceiveBeginPlay");

	ABP_ConditionEffect_EMP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionEffect_EMP.BP_ConditionEffect_EMP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ConditionEffect_EMP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_EMP.BP_ConditionEffect_EMP_C.ReceiveTick");

	ABP_ConditionEffect_EMP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionEffect_EMP.BP_ConditionEffect_EMP_C.ExecuteUbergraph_BP_ConditionEffect_EMP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ConditionEffect_EMP_C::ExecuteUbergraph_BP_ConditionEffect_EMP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_EMP.BP_ConditionEffect_EMP_C.ExecuteUbergraph_BP_ConditionEffect_EMP");

	ABP_ConditionEffect_EMP_C_ExecuteUbergraph_BP_ConditionEffect_EMP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
