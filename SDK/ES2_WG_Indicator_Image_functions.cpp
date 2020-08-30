// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Indicator_Image_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Indicator_Image.WG_Indicator_Image_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Indicator_Image_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Indicator_Image.WG_Indicator_Image_C.Construct");

	UWG_Indicator_Image_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Indicator_Image.WG_Indicator_Image_C.ExecuteUbergraph_WG_Indicator_Image
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Indicator_Image_C::ExecuteUbergraph_WG_Indicator_Image(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Indicator_Image.WG_Indicator_Image_C.ExecuteUbergraph_WG_Indicator_Image");

	UWG_Indicator_Image_C_ExecuteUbergraph_WG_Indicator_Image_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Indicator_Image.WG_Indicator_Image_C.OnWaypointSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Map_Location_C**     Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  LocationID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SystemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Indicator_Image_C::OnWaypointSet__DelegateSignature(class UWG_Map_Location_C** Widget, struct FName* LocationID, struct FName* SystemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Indicator_Image.WG_Indicator_Image_C.OnWaypointSet__DelegateSignature");

	UWG_Indicator_Image_C_OnWaypointSet__DelegateSignature_Params params;
	params.Widget = Widget;
	params.LocationID = LocationID;
	params.SystemID = SystemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Indicator_Image.WG_Indicator_Image_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Map_Location_C**     Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Indicator_Image_C::OnClicked__DelegateSignature(class UWG_Map_Location_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Indicator_Image.WG_Indicator_Image_C.OnClicked__DelegateSignature");

	UWG_Indicator_Image_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
