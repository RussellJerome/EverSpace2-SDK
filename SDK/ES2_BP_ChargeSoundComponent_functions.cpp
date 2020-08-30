// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ChargeSoundComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChargeSoundComponent_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.ReceiveTick");

	UBP_ChargeSoundComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.Start
// (BlueprintCallable, BlueprintEvent)

void UBP_ChargeSoundComponent_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.Start");

	UBP_ChargeSoundComponent_C_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.End
// (BlueprintCallable, BlueprintEvent)

void UBP_ChargeSoundComponent_C::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.End");

	UBP_ChargeSoundComponent_C_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.Charge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChargeSoundComponent_C::Charge(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.Charge");

	UBP_ChargeSoundComponent_C_Charge_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.ChargeEnd
// (BlueprintCallable, BlueprintEvent)

void UBP_ChargeSoundComponent_C::ChargeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.ChargeEnd");

	UBP_ChargeSoundComponent_C_ChargeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.ExecuteUbergraph_BP_ChargeSoundComponent
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ChargeSoundComponent_C::ExecuteUbergraph_BP_ChargeSoundComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.ExecuteUbergraph_BP_ChargeSoundComponent");

	UBP_ChargeSoundComponent_C_ExecuteUbergraph_BP_ChargeSoundComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
