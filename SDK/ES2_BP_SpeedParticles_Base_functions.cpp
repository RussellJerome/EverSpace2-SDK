// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_SpeedParticles_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpeedParticles_Base.BP_SpeedParticles_Base_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SpeedParticles_Base_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpeedParticles_Base.BP_SpeedParticles_Base_C.Update");

	ABP_SpeedParticles_Base_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpeedParticles_Base.BP_SpeedParticles_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpeedParticles_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpeedParticles_Base.BP_SpeedParticles_Base_C.UserConstructionScript");

	ABP_SpeedParticles_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpeedParticles_Base.BP_SpeedParticles_Base_C.SetEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpeedParticles_Base_C::SetEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpeedParticles_Base.BP_SpeedParticles_Base_C.SetEnabled");

	ABP_SpeedParticles_Base_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpeedParticles_Base.BP_SpeedParticles_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpeedParticles_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpeedParticles_Base.BP_SpeedParticles_Base_C.ReceiveTick");

	ABP_SpeedParticles_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpeedParticles_Base.BP_SpeedParticles_Base_C.ExecuteUbergraph_BP_SpeedParticles_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpeedParticles_Base_C::ExecuteUbergraph_BP_SpeedParticles_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpeedParticles_Base.BP_SpeedParticles_Base_C.ExecuteUbergraph_BP_SpeedParticles_Base");

	ABP_SpeedParticles_Base_C_ExecuteUbergraph_BP_SpeedParticles_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
