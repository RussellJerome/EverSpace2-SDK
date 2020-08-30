// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_System_Regions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Map_System_Regions.WG_Map_System_Regions_C.ZoomInAndFadeIn
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_System_Regions_C::ZoomInAndFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System_Regions.WG_Map_System_Regions_C.ZoomInAndFadeIn");

	UWG_Map_System_Regions_C_ZoomInAndFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_System_Regions.WG_Map_System_Regions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Map_System_Regions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System_Regions.WG_Map_System_Regions_C.Construct");

	UWG_Map_System_Regions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_System_Regions.WG_Map_System_Regions_C.ZoomOutAndFadeOut
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_System_Regions_C::ZoomOutAndFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System_Regions.WG_Map_System_Regions_C.ZoomOutAndFadeOut");

	UWG_Map_System_Regions_C_ZoomOutAndFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_System_Regions.WG_Map_System_Regions_C.ExecuteUbergraph_WG_Map_System_Regions
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_System_Regions_C::ExecuteUbergraph_WG_Map_System_Regions(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System_Regions.WG_Map_System_Regions_C.ExecuteUbergraph_WG_Map_System_Regions");

	UWG_Map_System_Regions_C_ExecuteUbergraph_WG_Map_System_Regions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_System_Regions.WG_Map_System_Regions_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Map_Location_C**     Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Map_System_Regions_C::OnClicked__DelegateSignature(class UWG_Map_Location_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System_Regions.WG_Map_System_Regions_C.OnClicked__DelegateSignature");

	UWG_Map_System_Regions_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
