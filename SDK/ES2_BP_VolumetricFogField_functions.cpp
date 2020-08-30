// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_VolumetricFogField_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VolumetricFogField.BP_VolumetricFogField_C.UpdateLight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VolumetricFogField_C::UpdateLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolumetricFogField.BP_VolumetricFogField_C.UpdateLight");

	ABP_VolumetricFogField_C_UpdateLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VolumetricFogField.BP_VolumetricFogField_C.UpdateFogField
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VolumetricFogField_C::UpdateFogField()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolumetricFogField.BP_VolumetricFogField_C.UpdateFogField");

	ABP_VolumetricFogField_C_UpdateFogField_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VolumetricFogField.BP_VolumetricFogField_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VolumetricFogField_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolumetricFogField.BP_VolumetricFogField_C.UserConstructionScript");

	ABP_VolumetricFogField_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VolumetricFogField.BP_VolumetricFogField_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VolumetricFogField_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolumetricFogField.BP_VolumetricFogField_C.ReceiveTick");

	ABP_VolumetricFogField_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VolumetricFogField.BP_VolumetricFogField_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VolumetricFogField_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolumetricFogField.BP_VolumetricFogField_C.ReceiveBeginPlay");

	ABP_VolumetricFogField_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VolumetricFogField.BP_VolumetricFogField_C.ExecuteUbergraph_BP_VolumetricFogField
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VolumetricFogField_C::ExecuteUbergraph_BP_VolumetricFogField(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VolumetricFogField.BP_VolumetricFogField_C.ExecuteUbergraph_BP_VolumetricFogField");

	ABP_VolumetricFogField_C_ExecuteUbergraph_BP_VolumetricFogField_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
