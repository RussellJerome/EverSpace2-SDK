// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Trigger_Equipment_Icons_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Trigger_Equipment_Icons_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.Construct");

	UWG_Trigger_Equipment_Icons_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Trigger_Equipment_Icons_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.Tick");

	UWG_Trigger_Equipment_Icons_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.DummyEvent
// (BlueprintCallable, BlueprintEvent)

void UWG_Trigger_Equipment_Icons_C::DummyEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.DummyEvent");

	UWG_Trigger_Equipment_Icons_C_DummyEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.NotUsed
// (BlueprintCallable, BlueprintEvent)

void UWG_Trigger_Equipment_Icons_C::NotUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.NotUsed");

	UWG_Trigger_Equipment_Icons_C_NotUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.SetHoldProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Trigger_Equipment_Icons_C::SetHoldProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.SetHoldProgress");

	UWG_Trigger_Equipment_Icons_C_SetHoldProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.ShowOrHideSelectionDPad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Trigger_Equipment_Icons_C::ShowOrHideSelectionDPad(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.ShowOrHideSelectionDPad");

	UWG_Trigger_Equipment_Icons_C_ShowOrHideSelectionDPad_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.ExecuteUbergraph_WG_Trigger_Equipment_Icons
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Trigger_Equipment_Icons_C::ExecuteUbergraph_WG_Trigger_Equipment_Icons(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Trigger_Equipment_Icons.WG_Trigger_Equipment_Icons_C.ExecuteUbergraph_WG_Trigger_Equipment_Icons");

	UWG_Trigger_Equipment_Icons_C_ExecuteUbergraph_WG_Trigger_Equipment_Icons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
