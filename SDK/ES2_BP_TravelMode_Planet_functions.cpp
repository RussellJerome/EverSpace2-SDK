// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_TravelMode_Planet_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TravelMode_Planet.BP_TravelMode_Planet_C.UpdateMap
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TravelMode_Planet_C::UpdateMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Planet.BP_TravelMode_Planet_C.UpdateMap");

	ABP_TravelMode_Planet_C_UpdateMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Planet.BP_TravelMode_Planet_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TravelMode_Planet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Planet.BP_TravelMode_Planet_C.UserConstructionScript");

	ABP_TravelMode_Planet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Planet.BP_TravelMode_Planet_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TravelMode_Planet_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Planet.BP_TravelMode_Planet_C.ReceiveTick");

	ABP_TravelMode_Planet_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Planet.BP_TravelMode_Planet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TravelMode_Planet_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Planet.BP_TravelMode_Planet_C.ReceiveBeginPlay");

	ABP_TravelMode_Planet_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TravelMode_Planet.BP_TravelMode_Planet_C.ExecuteUbergraph_BP_TravelMode_Planet
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TravelMode_Planet_C::ExecuteUbergraph_BP_TravelMode_Planet(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TravelMode_Planet.BP_TravelMode_Planet_C.ExecuteUbergraph_BP_TravelMode_Planet");

	ABP_TravelMode_Planet_C_ExecuteUbergraph_BP_TravelMode_Planet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
