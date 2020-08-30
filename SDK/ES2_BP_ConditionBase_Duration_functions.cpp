// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ConditionBase_Duration_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ConditionBase_Duration.BP_ConditionBase_Duration_C.CalcIntensity
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 UnsafeInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InstigatorLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_ConditionBase_Duration_C::CalcIntensity(class AActor** UnsafeInstigator, int* InstigatorLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionBase_Duration.BP_ConditionBase_Duration_C.CalcIntensity");

	UBP_ConditionBase_Duration_C_CalcIntensity_Params params;
	params.UnsafeInstigator = UnsafeInstigator;
	params.InstigatorLevel = InstigatorLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ConditionBase_Duration.BP_ConditionBase_Duration_C.OnTokenCountChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TokenCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentIntensity               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         RemainingTotalSeconds          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConditionBase_Duration_C::OnTokenCountChanged(int* TokenCount, float* CurrentIntensity, float* RemainingTotalSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionBase_Duration.BP_ConditionBase_Duration_C.OnTokenCountChanged");

	UBP_ConditionBase_Duration_C_OnTokenCountChanged_Params params;
	params.TokenCount = TokenCount;
	params.CurrentIntensity = CurrentIntensity;
	params.RemainingTotalSeconds = RemainingTotalSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionBase_Duration.BP_ConditionBase_Duration_C.TickDurationCondition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentIntensity               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 CurrentUnsafeInstigator        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         RemainingTotalSeconds          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConditionBase_Duration_C::TickDurationCondition(float* DeltaSeconds, float* CurrentIntensity, class AActor** CurrentUnsafeInstigator, float* RemainingTotalSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionBase_Duration.BP_ConditionBase_Duration_C.TickDurationCondition");

	UBP_ConditionBase_Duration_C_TickDurationCondition_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.CurrentIntensity = CurrentIntensity;
	params.CurrentUnsafeInstigator = CurrentUnsafeInstigator;
	params.RemainingTotalSeconds = RemainingTotalSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionBase_Duration.BP_ConditionBase_Duration_C.InitCondition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InstigatorLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConditionBase_Duration_C::InitCondition(class AActor** Instigator, int* InstigatorLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionBase_Duration.BP_ConditionBase_Duration_C.InitCondition");

	UBP_ConditionBase_Duration_C_InitCondition_Params params;
	params.Instigator = Instigator;
	params.InstigatorLevel = InstigatorLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionBase_Duration.BP_ConditionBase_Duration_C.ExecuteUbergraph_BP_ConditionBase_Duration
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConditionBase_Duration_C::ExecuteUbergraph_BP_ConditionBase_Duration(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionBase_Duration.BP_ConditionBase_Duration_C.ExecuteUbergraph_BP_ConditionBase_Duration");

	UBP_ConditionBase_Duration_C_ExecuteUbergraph_BP_ConditionBase_Duration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
