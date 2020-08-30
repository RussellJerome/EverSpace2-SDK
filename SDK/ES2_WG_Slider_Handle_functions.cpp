// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Slider_Handle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Slider_Handle.WG_Slider_Handle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Slider_Handle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Slider_Handle.WG_Slider_Handle_C.Construct");

	UWG_Slider_Handle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Slider_Handle.WG_Slider_Handle_C.Slider_Pressed
// (BlueprintCallable, BlueprintEvent)

void UWG_Slider_Handle_C::Slider_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Slider_Handle.WG_Slider_Handle_C.Slider_Pressed");

	UWG_Slider_Handle_C_Slider_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Slider_Handle.WG_Slider_Handle_C.Slider_Released
// (BlueprintCallable, BlueprintEvent)

void UWG_Slider_Handle_C::Slider_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Slider_Handle.WG_Slider_Handle_C.Slider_Released");

	UWG_Slider_Handle_C_Slider_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Slider_Handle.WG_Slider_Handle_C.ExecuteUbergraph_WG_Slider_Handle
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Slider_Handle_C::ExecuteUbergraph_WG_Slider_Handle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Slider_Handle.WG_Slider_Handle_C.ExecuteUbergraph_WG_Slider_Handle");

	UWG_Slider_Handle_C_ExecuteUbergraph_WG_Slider_Handle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
