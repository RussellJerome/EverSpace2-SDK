// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Condition_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Condition_Base.BP_Condition_Base_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_Condition_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Base.BP_Condition_Base_C.ReceiveBeginPlay");

	UBP_Condition_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Condition_Base.BP_Condition_Base_C.DestroyEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UConditionBaseComponent** ConditionComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_Condition_Base_C::DestroyEffect(class UConditionBaseComponent** ConditionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Base.BP_Condition_Base_C.DestroyEffect");

	UBP_Condition_Base_C_DestroyEffect_Params params;
	params.ConditionComponent = ConditionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Condition_Base.BP_Condition_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Condition_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Base.BP_Condition_Base_C.ReceiveTick");

	UBP_Condition_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Condition_Base.BP_Condition_Base_C.ConditionAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UConditionBaseComponent** ConditionComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_Condition_Base_C::ConditionAdded(class UConditionBaseComponent** ConditionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Base.BP_Condition_Base_C.ConditionAdded");

	UBP_Condition_Base_C_ConditionAdded_Params params;
	params.ConditionComponent = ConditionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Condition_Base.BP_Condition_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Condition_Base_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Base.BP_Condition_Base_C.ReceiveEndPlay");

	UBP_Condition_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Condition_Base.BP_Condition_Base_C.ExecuteUbergraph_BP_Condition_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Condition_Base_C::ExecuteUbergraph_BP_Condition_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Base.BP_Condition_Base_C.ExecuteUbergraph_BP_Condition_Base");

	UBP_Condition_Base_C_ExecuteUbergraph_BP_Condition_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
