// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ConditionEffect_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ConditionEffect_Base.BP_ConditionEffect_Base_C.UpdateTargetActorBounds
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ConditionEffect_Base_C::UpdateTargetActorBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_Base.BP_ConditionEffect_Base_C.UpdateTargetActorBounds");

	ABP_ConditionEffect_Base_C_UpdateTargetActorBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionEffect_Base.BP_ConditionEffect_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ConditionEffect_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_Base.BP_ConditionEffect_Base_C.ReceiveBeginPlay");

	ABP_ConditionEffect_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionEffect_Base.BP_ConditionEffect_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ConditionEffect_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_Base.BP_ConditionEffect_Base_C.ReceiveTick");

	ABP_ConditionEffect_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionEffect_Base.BP_ConditionEffect_Base_C.DestroyEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ConditionEffect_Base_C::DestroyEffect(class AActor** DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_Base.BP_ConditionEffect_Base_C.DestroyEffect");

	ABP_ConditionEffect_Base_C_DestroyEffect_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionEffect_Base.BP_ConditionEffect_Base_C.ExecuteUbergraph_BP_ConditionEffect_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ConditionEffect_Base_C::ExecuteUbergraph_BP_ConditionEffect_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_Base.BP_ConditionEffect_Base_C.ExecuteUbergraph_BP_ConditionEffect_Base");

	ABP_ConditionEffect_Base_C_ExecuteUbergraph_BP_ConditionEffect_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
