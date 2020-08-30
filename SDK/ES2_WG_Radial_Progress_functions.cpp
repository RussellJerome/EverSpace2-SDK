// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Radial_Progress_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Radial_Progress.WG_Radial_Progress_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CurrentProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FutureProgress                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Radial_Progress_C::SetProgress(float* CurrentProgress, float* FutureProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Radial_Progress.WG_Radial_Progress_C.SetProgress");

	UWG_Radial_Progress_C_SetProgress_Params params;
	params.CurrentProgress = CurrentProgress;
	params.FutureProgress = FutureProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Radial_Progress.WG_Radial_Progress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Radial_Progress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Radial_Progress.WG_Radial_Progress_C.Construct");

	UWG_Radial_Progress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Radial_Progress.WG_Radial_Progress_C.ExecuteUbergraph_WG_Radial_Progress
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Radial_Progress_C::ExecuteUbergraph_WG_Radial_Progress(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Radial_Progress.WG_Radial_Progress_C.ExecuteUbergraph_WG_Radial_Progress");

	UWG_Radial_Progress_C_ExecuteUbergraph_WG_Radial_Progress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
