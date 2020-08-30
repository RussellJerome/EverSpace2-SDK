// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_StatProgressBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StatProgressBar.BP_StatProgressBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StatProgressBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatProgressBar.BP_StatProgressBar_C.PreConstruct");

	UBP_StatProgressBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StatProgressBar.BP_StatProgressBar_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewPercent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StatProgressBar_C::SetPercent(float* NewPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatProgressBar.BP_StatProgressBar_C.SetPercent");

	UBP_StatProgressBar_C_SetPercent_Params params;
	params.NewPercent = NewPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StatProgressBar.BP_StatProgressBar_C.AddDelta
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewPercent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StatProgressBar_C::AddDelta(float* Delta, float* NewPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatProgressBar.BP_StatProgressBar_C.AddDelta");

	UBP_StatProgressBar_C_AddDelta_Params params;
	params.Delta = Delta;
	params.NewPercent = NewPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StatProgressBar.BP_StatProgressBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StatProgressBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatProgressBar.BP_StatProgressBar_C.Tick");

	UBP_StatProgressBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StatProgressBar.BP_StatProgressBar_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UBP_StatProgressBar_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatProgressBar.BP_StatProgressBar_C.Refresh");

	UBP_StatProgressBar_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StatProgressBar.BP_StatProgressBar_C.ExecuteUbergraph_BP_StatProgressBar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StatProgressBar_C::ExecuteUbergraph_BP_StatProgressBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StatProgressBar.BP_StatProgressBar_C.ExecuteUbergraph_BP_StatProgressBar");

	UBP_StatProgressBar_C_ExecuteUbergraph_BP_StatProgressBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
