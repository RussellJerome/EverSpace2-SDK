// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_LandingSpline_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LandingSpline.BP_LandingSpline_C.InterpolateToPad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_LandingSpline_C::InterpolateToPad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandingSpline.BP_LandingSpline_C.InterpolateToPad");

	UBP_LandingSpline_C_InterpolateToPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LandingSpline.BP_LandingSpline_C.InterpolateToSpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_LandingSpline_C::InterpolateToSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandingSpline.BP_LandingSpline_C.InterpolateToSpline");

	UBP_LandingSpline_C_InterpolateToSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LandingSpline.BP_LandingSpline_C.StartInterpolating
// (BlueprintCallable, BlueprintEvent)

void UBP_LandingSpline_C::StartInterpolating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandingSpline.BP_LandingSpline_C.StartInterpolating");

	UBP_LandingSpline_C_StartInterpolating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LandingSpline.BP_LandingSpline_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LandingSpline_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandingSpline.BP_LandingSpline_C.ReceiveTick");

	UBP_LandingSpline_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LandingSpline.BP_LandingSpline_C.ExecuteUbergraph_BP_LandingSpline
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LandingSpline_C::ExecuteUbergraph_BP_LandingSpline(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandingSpline.BP_LandingSpline_C.ExecuteUbergraph_BP_LandingSpline");

	UBP_LandingSpline_C_ExecuteUbergraph_BP_LandingSpline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LandingSpline.BP_LandingSpline_C.FinishedMoveOnSpline__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AESPawn**                Ship                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LandingSpline_C::FinishedMoveOnSpline__DelegateSignature(class AESPawn** Ship)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandingSpline.BP_LandingSpline_C.FinishedMoveOnSpline__DelegateSignature");

	UBP_LandingSpline_C_FinishedMoveOnSpline__DelegateSignature_Params params;
	params.Ship = Ship;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
