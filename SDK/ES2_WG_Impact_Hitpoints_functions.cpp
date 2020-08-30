// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Impact_Hitpoints_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Impact_Hitpoints.WG_Impact_Hitpoints_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Impact_Hitpoints_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Impact_Hitpoints.WG_Impact_Hitpoints_C.Construct");

	UWG_Impact_Hitpoints_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Impact_Hitpoints.WG_Impact_Hitpoints_C.Finished
// (BlueprintCallable, BlueprintEvent)

void UWG_Impact_Hitpoints_C::Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Impact_Hitpoints.WG_Impact_Hitpoints_C.Finished");

	UWG_Impact_Hitpoints_C_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Impact_Hitpoints.WG_Impact_Hitpoints_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Impact_Hitpoints_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Impact_Hitpoints.WG_Impact_Hitpoints_C.Tick");

	UWG_Impact_Hitpoints_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Impact_Hitpoints.WG_Impact_Hitpoints_C.UpdateWidgetPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Impact_Hitpoints_C::UpdateWidgetPosition(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Impact_Hitpoints.WG_Impact_Hitpoints_C.UpdateWidgetPosition");

	UWG_Impact_Hitpoints_C_UpdateWidgetPosition_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Impact_Hitpoints.WG_Impact_Hitpoints_C.ExecuteUbergraph_WG_Impact_Hitpoints
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Impact_Hitpoints_C::ExecuteUbergraph_WG_Impact_Hitpoints(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Impact_Hitpoints.WG_Impact_Hitpoints_C.ExecuteUbergraph_WG_Impact_Hitpoints");

	UWG_Impact_Hitpoints_C_ExecuteUbergraph_WG_Impact_Hitpoints_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
