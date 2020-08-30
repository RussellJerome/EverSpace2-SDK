// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_XP_Numbers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_XP_Numbers.WG_XP_Numbers_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_XP_Numbers_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_XP_Numbers.WG_XP_Numbers_C.Construct");

	UWG_XP_Numbers_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_XP_Numbers.WG_XP_Numbers_C.Finished
// (BlueprintCallable, BlueprintEvent)

void UWG_XP_Numbers_C::Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_XP_Numbers.WG_XP_Numbers_C.Finished");

	UWG_XP_Numbers_C_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_XP_Numbers.WG_XP_Numbers_C.UpdateWidgetPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_XP_Numbers_C::UpdateWidgetPosition(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_XP_Numbers.WG_XP_Numbers_C.UpdateWidgetPosition");

	UWG_XP_Numbers_C_UpdateWidgetPosition_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_XP_Numbers.WG_XP_Numbers_C.ExecuteUbergraph_WG_XP_Numbers
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_XP_Numbers_C::ExecuteUbergraph_WG_XP_Numbers(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_XP_Numbers.WG_XP_Numbers_C.ExecuteUbergraph_WG_XP_Numbers");

	UWG_XP_Numbers_C_ExecuteUbergraph_WG_XP_Numbers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
