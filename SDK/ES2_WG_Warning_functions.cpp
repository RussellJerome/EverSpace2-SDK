// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Warning_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Warning.WG_Warning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Warning_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Warning.WG_Warning_C.Construct");

	UWG_Warning_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Warning.WG_Warning_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Warning_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Warning.WG_Warning_C.PreConstruct");

	UWG_Warning_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Warning.WG_Warning_C.StartAnim
// (BlueprintCallable, BlueprintEvent)

void UWG_Warning_C::StartAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Warning.WG_Warning_C.StartAnim");

	UWG_Warning_C_StartAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Warning.WG_Warning_C.StopAnim
// (BlueprintCallable, BlueprintEvent)

void UWG_Warning_C::StopAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Warning.WG_Warning_C.StopAnim");

	UWG_Warning_C_StopAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Warning.WG_Warning_C.ExecuteUbergraph_WG_Warning
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Warning_C::ExecuteUbergraph_WG_Warning(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Warning.WG_Warning_C.ExecuteUbergraph_WG_Warning");

	UWG_Warning_C_ExecuteUbergraph_WG_Warning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
