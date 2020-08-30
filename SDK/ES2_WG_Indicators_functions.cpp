// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Indicators_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Indicators.WG_Indicators_C.RefreshIndicators
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<EIndicator>, bool>* UpdatedIndicators              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWG_Indicators_C::RefreshIndicators(TMap<TEnumAsByte<EIndicator>, bool>* UpdatedIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Indicators.WG_Indicators_C.RefreshIndicators");

	UWG_Indicators_C_RefreshIndicators_Params params;
	params.UpdatedIndicators = UpdatedIndicators;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Indicators.WG_Indicators_C.ExecuteUbergraph_WG_Indicators
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Indicators_C::ExecuteUbergraph_WG_Indicators(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Indicators.WG_Indicators_C.ExecuteUbergraph_WG_Indicators");

	UWG_Indicators_C_ExecuteUbergraph_WG_Indicators_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Indicators.WG_Indicators_C.OnWaypointSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Map_Location_C**     Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  LocationID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SystemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Indicators_C::OnWaypointSet__DelegateSignature(class UWG_Map_Location_C** Widget, struct FName* LocationID, struct FName* SystemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Indicators.WG_Indicators_C.OnWaypointSet__DelegateSignature");

	UWG_Indicators_C_OnWaypointSet__DelegateSignature_Params params;
	params.Widget = Widget;
	params.LocationID = LocationID;
	params.SystemID = SystemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Indicators.WG_Indicators_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Map_Location_C**     Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Indicators_C::OnClicked__DelegateSignature(class UWG_Map_Location_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Indicators.WG_Indicators_C.OnClicked__DelegateSignature");

	UWG_Indicators_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
