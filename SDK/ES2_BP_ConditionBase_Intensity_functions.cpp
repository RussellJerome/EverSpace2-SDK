// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ConditionBase_Intensity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.CalcIntensity
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InstigatorLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_ConditionBase_Intensity_C::CalcIntensity(class AActor** Instigator, int* InstigatorLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.CalcIntensity");

	UBP_ConditionBase_Intensity_C_CalcIntensity_Params params;
	params.Instigator = Instigator;
	params.InstigatorLevel = InstigatorLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.OnTokenCountChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TokenCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CombinedIntensity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConditionBase_Intensity_C::OnTokenCountChanged(int* TokenCount, float* CombinedIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.OnTokenCountChanged");

	UBP_ConditionBase_Intensity_C_OnTokenCountChanged_Params params;
	params.TokenCount = TokenCount;
	params.CombinedIntensity = CombinedIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.TickIntensityCondition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CombinedIntensity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConditionBase_Intensity_C::TickIntensityCondition(float* DeltaSeconds, float* CombinedIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.TickIntensityCondition");

	UBP_ConditionBase_Intensity_C_TickIntensityCondition_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.CombinedIntensity = CombinedIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.TickPerInstigator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 UnsafeInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InstigatorIntensity            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConditionBase_Intensity_C::TickPerInstigator(float* DeltaSeconds, class AActor** UnsafeInstigator, float* InstigatorIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.TickPerInstigator");

	UBP_ConditionBase_Intensity_C_TickPerInstigator_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.UnsafeInstigator = UnsafeInstigator;
	params.InstigatorIntensity = InstigatorIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.InitCondition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InstigatorLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConditionBase_Intensity_C::InitCondition(class AActor** Instigator, int* InstigatorLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.InitCondition");

	UBP_ConditionBase_Intensity_C_InitCondition_Params params;
	params.Instigator = Instigator;
	params.InstigatorLevel = InstigatorLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.ExecuteUbergraph_BP_ConditionBase_Intensity
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ConditionBase_Intensity_C::ExecuteUbergraph_BP_ConditionBase_Intensity(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionBase_Intensity.BP_ConditionBase_Intensity_C.ExecuteUbergraph_BP_ConditionBase_Intensity");

	UBP_ConditionBase_Intensity_C_ExecuteUbergraph_BP_ConditionBase_Intensity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
