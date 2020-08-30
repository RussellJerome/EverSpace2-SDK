// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_HUD_CentralBars_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_HUD_CentralBars_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.Construct");

	UWG_HUD_CentralBars_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeChargeEnd_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CentralBars_C::OnCruiseModeChargeEnd_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeChargeEnd_Event_1");

	UWG_HUD_CentralBars_C_OnCruiseModeChargeEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeChargeStart_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CentralBars_C::OnCruiseModeChargeStart_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeChargeStart_Event_1");

	UWG_HUD_CentralBars_C_OnCruiseModeChargeStart_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeReady_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CentralBars_C::OnCruiseModeReady_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeReady_Event_1");

	UWG_HUD_CentralBars_C_OnCruiseModeReady_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeStart_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CentralBars_C::OnCruiseModeStart_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeStart_Event_1");

	UWG_HUD_CentralBars_C_OnCruiseModeStart_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeEnd_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CentralBars_C::OnCruiseModeEnd_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeEnd_Event_1");

	UWG_HUD_CentralBars_C_OnCruiseModeEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.CruiseModeStartInput
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CentralBars_C::CruiseModeStartInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.CruiseModeStartInput");

	UWG_HUD_CentralBars_C_CruiseModeStartInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.HideCruiseModeButton
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CentralBars_C::HideCruiseModeButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.HideCruiseModeButton");

	UWG_HUD_CentralBars_C_HideCruiseModeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnBoostTick_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CentralBars_C::OnBoostTick_Event_1(float* Percentage, float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnBoostTick_Event_1");

	UWG_HUD_CentralBars_C_OnBoostTick_Event_1_Params params;
	params.Percentage = Percentage;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CentralBars_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.Tick");

	UWG_HUD_CentralBars_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.CruiseModeEndInput
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CentralBars_C::CruiseModeEndInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.CruiseModeEndInput");

	UWG_HUD_CentralBars_C_CruiseModeEndInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.AutoPilot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CentralBars_C::AutoPilot(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.AutoPilot");

	UWG_HUD_CentralBars_C_AutoPilot_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnAutoPilotSkipTick_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CentralBars_C::OnAutoPilotSkipTick_Event_1(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnAutoPilotSkipTick_Event_1");

	UWG_HUD_CentralBars_C_OnAutoPilotSkipTick_Event_1_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnAutoPilotSkipEnd_Event_1
// (BlueprintCallable, BlueprintEvent)

void UWG_HUD_CentralBars_C::OnAutoPilotSkipEnd_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnAutoPilotSkipEnd_Event_1");

	UWG_HUD_CentralBars_C_OnAutoPilotSkipEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeCanBeUsedChange_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCanBeUsed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CentralBars_C::OnCruiseModeCanBeUsedChange_Event_1(bool* bCanBeUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnCruiseModeCanBeUsedChange_Event_1");

	UWG_HUD_CentralBars_C_OnCruiseModeCanBeUsedChange_Event_1_Params params;
	params.bCanBeUsed = bCanBeUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnJumpDriveCanBeUsedChange_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCanBeUsed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CentralBars_C::OnJumpDriveCanBeUsedChange_Event_1(bool* bCanBeUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.OnJumpDriveCanBeUsedChange_Event_1");

	UWG_HUD_CentralBars_C_OnJumpDriveCanBeUsedChange_Event_1_Params params;
	params.bCanBeUsed = bCanBeUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.ExecuteUbergraph_WG_HUD_CentralBars
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_HUD_CentralBars_C::ExecuteUbergraph_WG_HUD_CentralBars(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_HUD_CentralBars.WG_HUD_CentralBars_C.ExecuteUbergraph_WG_HUD_CentralBars");

	UWG_HUD_CentralBars_C_ExecuteUbergraph_WG_HUD_CentralBars_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
