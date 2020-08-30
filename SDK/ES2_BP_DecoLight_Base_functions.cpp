// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_DecoLight_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DecoLight_Base.BP_DecoLight_Base_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DecoLight_Base_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecoLight_Base.BP_DecoLight_Base_C.Update");

	ABP_DecoLight_Base_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DecoLight_Base.BP_DecoLight_Base_C.SetLightActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPointLightComponent**   Light                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_DecoLight_Base_C::SetLightActive(class UPointLightComponent** Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecoLight_Base.BP_DecoLight_Base_C.SetLightActive");

	ABP_DecoLight_Base_C_SetLightActive_Params params;
	params.Light = Light;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DecoLight_Base.BP_DecoLight_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DecoLight_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecoLight_Base.BP_DecoLight_Base_C.UserConstructionScript");

	ABP_DecoLight_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DecoLight_Base.BP_DecoLight_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DecoLight_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecoLight_Base.BP_DecoLight_Base_C.ReceiveTick");

	ABP_DecoLight_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DecoLight_Base.BP_DecoLight_Base_C.ExecuteUbergraph_BP_DecoLight_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DecoLight_Base_C::ExecuteUbergraph_BP_DecoLight_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecoLight_Base.BP_DecoLight_Base_C.ExecuteUbergraph_BP_DecoLight_Base");

	ABP_DecoLight_Base_C_ExecuteUbergraph_BP_DecoLight_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
