// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Condition_Debuff_IncomingDamageIncrease_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Condition_Debuff_IncomingDamageIncrease.BP_Condition_Debuff_IncomingDamageIncrease_C.CalcIntensity
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InstigatorLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_Condition_Debuff_IncomingDamageIncrease_C::CalcIntensity(class AActor** Instigator, int* InstigatorLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Debuff_IncomingDamageIncrease.BP_Condition_Debuff_IncomingDamageIncrease_C.CalcIntensity");

	UBP_Condition_Debuff_IncomingDamageIncrease_C_CalcIntensity_Params params;
	params.Instigator = Instigator;
	params.InstigatorLevel = InstigatorLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Condition_Debuff_IncomingDamageIncrease.BP_Condition_Debuff_IncomingDamageIncrease_C.OnTokenCountChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TokenCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CombinedIntensity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Condition_Debuff_IncomingDamageIncrease_C::OnTokenCountChanged(int* TokenCount, float* CombinedIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Debuff_IncomingDamageIncrease.BP_Condition_Debuff_IncomingDamageIncrease_C.OnTokenCountChanged");

	UBP_Condition_Debuff_IncomingDamageIncrease_C_OnTokenCountChanged_Params params;
	params.TokenCount = TokenCount;
	params.CombinedIntensity = CombinedIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Condition_Debuff_IncomingDamageIncrease.BP_Condition_Debuff_IncomingDamageIncrease_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Condition_Debuff_IncomingDamageIncrease_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Debuff_IncomingDamageIncrease.BP_Condition_Debuff_IncomingDamageIncrease_C.ReceiveEndPlay");

	UBP_Condition_Debuff_IncomingDamageIncrease_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Condition_Debuff_IncomingDamageIncrease.BP_Condition_Debuff_IncomingDamageIncrease_C.InitCondition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InstigatorLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Condition_Debuff_IncomingDamageIncrease_C::InitCondition(class AActor** Instigator, int* InstigatorLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Debuff_IncomingDamageIncrease.BP_Condition_Debuff_IncomingDamageIncrease_C.InitCondition");

	UBP_Condition_Debuff_IncomingDamageIncrease_C_InitCondition_Params params;
	params.Instigator = Instigator;
	params.InstigatorLevel = InstigatorLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Condition_Debuff_IncomingDamageIncrease.BP_Condition_Debuff_IncomingDamageIncrease_C.ExecuteUbergraph_BP_Condition_Debuff_IncomingDamageIncrease
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Condition_Debuff_IncomingDamageIncrease_C::ExecuteUbergraph_BP_Condition_Debuff_IncomingDamageIncrease(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Debuff_IncomingDamageIncrease.BP_Condition_Debuff_IncomingDamageIncrease_C.ExecuteUbergraph_BP_Condition_Debuff_IncomingDamageIncrease");

	UBP_Condition_Debuff_IncomingDamageIncrease_C_ExecuteUbergraph_BP_Condition_Debuff_IncomingDamageIncrease_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
