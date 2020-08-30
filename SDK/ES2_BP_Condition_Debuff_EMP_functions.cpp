// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Condition_Debuff_EMP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Condition_Debuff_EMP.BP_Condition_Debuff_EMP_C.CheckPreconditions
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor**                 Candidate                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_Condition_Debuff_EMP_C::CheckPreconditions(class AActor** Candidate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Debuff_EMP.BP_Condition_Debuff_EMP_C.CheckPreconditions");

	UBP_Condition_Debuff_EMP_C_CheckPreconditions_Params params;
	params.Candidate = Candidate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Condition_Debuff_EMP.BP_Condition_Debuff_EMP_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Condition_Debuff_EMP_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Debuff_EMP.BP_Condition_Debuff_EMP_C.ReceiveEndPlay");

	UBP_Condition_Debuff_EMP_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Condition_Debuff_EMP.BP_Condition_Debuff_EMP_C.InitCondition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InstigatorLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Condition_Debuff_EMP_C::InitCondition(class AActor** Instigator, int* InstigatorLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Debuff_EMP.BP_Condition_Debuff_EMP_C.InitCondition");

	UBP_Condition_Debuff_EMP_C_InitCondition_Params params;
	params.Instigator = Instigator;
	params.InstigatorLevel = InstigatorLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Condition_Debuff_EMP.BP_Condition_Debuff_EMP_C.ExecuteUbergraph_BP_Condition_Debuff_EMP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Condition_Debuff_EMP_C::ExecuteUbergraph_BP_Condition_Debuff_EMP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Debuff_EMP.BP_Condition_Debuff_EMP_C.ExecuteUbergraph_BP_Condition_Debuff_EMP");

	UBP_Condition_Debuff_EMP_C_ExecuteUbergraph_BP_Condition_Debuff_EMP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
