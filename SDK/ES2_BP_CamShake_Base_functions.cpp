// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_CamShake_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CamShake_Base.BP_CamShake_Base_C.ScaleLocOsc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVOscillator*           SourceOsc                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector*                NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CamShake_Base_C::ScaleLocOsc(struct FVOscillator* SourceOsc, struct FVector* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CamShake_Base.BP_CamShake_Base_C.ScaleLocOsc");

	UBP_CamShake_Base_C_ScaleLocOsc_Params params;
	params.SourceOsc = SourceOsc;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CamShake_Base.BP_CamShake_Base_C.ReceivePlayShake
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CamShake_Base_C::ReceivePlayShake(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CamShake_Base.BP_CamShake_Base_C.ReceivePlayShake");

	UBP_CamShake_Base_C_ReceivePlayShake_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CamShake_Base.BP_CamShake_Base_C.ExecuteUbergraph_BP_CamShake_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CamShake_Base_C::ExecuteUbergraph_BP_CamShake_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CamShake_Base.BP_CamShake_Base_C.ExecuteUbergraph_BP_CamShake_Base");

	UBP_CamShake_Base_C_ExecuteUbergraph_BP_CamShake_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
