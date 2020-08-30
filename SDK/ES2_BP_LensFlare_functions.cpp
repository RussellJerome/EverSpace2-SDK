// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_LensFlare_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LensFlare.BP_LensFlare_C.SunDistanceFade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ScreenRadius                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_LensFlare_C::SunDistanceFade(class UPrimitiveComponent** TargetComponent, float* ScreenRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LensFlare.BP_LensFlare_C.SunDistanceFade");

	ABP_LensFlare_C_SunDistanceFade_Params params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenRadius != nullptr)
		*ScreenRadius = params.ScreenRadius;
}


// Function BP_LensFlare.BP_LensFlare_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LensFlare_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LensFlare.BP_LensFlare_C.Update");

	ABP_LensFlare_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LensFlare.BP_LensFlare_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LensFlare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LensFlare.BP_LensFlare_C.UserConstructionScript");

	ABP_LensFlare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LensFlare.BP_LensFlare_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LensFlare_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LensFlare.BP_LensFlare_C.ReceiveTick");

	ABP_LensFlare_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LensFlare.BP_LensFlare_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LensFlare_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LensFlare.BP_LensFlare_C.ReceiveBeginPlay");

	ABP_LensFlare_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LensFlare.BP_LensFlare_C.UpdateScreenSizePercentage
// (BlueprintCallable, BlueprintEvent)

void ABP_LensFlare_C::UpdateScreenSizePercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LensFlare.BP_LensFlare_C.UpdateScreenSizePercentage");

	ABP_LensFlare_C_UpdateScreenSizePercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LensFlare.BP_LensFlare_C.ExecuteUbergraph_BP_LensFlare
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LensFlare_C::ExecuteUbergraph_BP_LensFlare(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LensFlare.BP_LensFlare_C.ExecuteUbergraph_BP_LensFlare");

	ABP_LensFlare_C_ExecuteUbergraph_BP_LensFlare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
