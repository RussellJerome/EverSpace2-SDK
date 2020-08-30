// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_CruiseModeProgress_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_CruiseModeProgress_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.PreConstruct");

	UWG_CruiseModeProgress_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_CruiseModeProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.Construct");

	UWG_CruiseModeProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_CruiseModeProgress_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnInitialized");

	UWG_CruiseModeProgress_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeChargeStart
// (BlueprintCallable, BlueprintEvent)

void UWG_CruiseModeProgress_C::OnCruiseModeChargeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeChargeStart");

	UWG_CruiseModeProgress_C_OnCruiseModeChargeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_CruiseModeProgress_C::OnCruiseModeCharge(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeCharge");

	UWG_CruiseModeProgress_C_OnCruiseModeCharge_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_CruiseModeProgress_C::SetProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.SetProgress");

	UWG_CruiseModeProgress_C_SetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeBlocked
// (BlueprintCallable, BlueprintEvent)

void UWG_CruiseModeProgress_C::OnCruiseModeBlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeBlocked");

	UWG_CruiseModeProgress_C_OnCruiseModeBlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeEnemiesTooClose
// (BlueprintCallable, BlueprintEvent)

void UWG_CruiseModeProgress_C::OnCruiseModeEnemiesTooClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeEnemiesTooClose");

	UWG_CruiseModeProgress_C_OnCruiseModeEnemiesTooClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeStart
// (BlueprintCallable, BlueprintEvent)

void UWG_CruiseModeProgress_C::OnCruiseModeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeStart");

	UWG_CruiseModeProgress_C_OnCruiseModeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeEnd
// (BlueprintCallable, BlueprintEvent)

void UWG_CruiseModeProgress_C::OnCruiseModeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeEnd");

	UWG_CruiseModeProgress_C_OnCruiseModeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeChargeEnd
// (BlueprintCallable, BlueprintEvent)

void UWG_CruiseModeProgress_C::OnCruiseModeChargeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeChargeEnd");

	UWG_CruiseModeProgress_C_OnCruiseModeChargeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.ExecuteUbergraph_WG_CruiseModeProgress
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_CruiseModeProgress_C::ExecuteUbergraph_WG_CruiseModeProgress(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.ExecuteUbergraph_WG_CruiseModeProgress");

	UWG_CruiseModeProgress_C_ExecuteUbergraph_WG_CruiseModeProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
