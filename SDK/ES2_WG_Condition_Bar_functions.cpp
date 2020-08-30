// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Condition_Bar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Condition_Bar.WG_Condition_Bar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Condition_Bar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Condition_Bar.WG_Condition_Bar_C.Construct");

	UWG_Condition_Bar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Condition_Bar.WG_Condition_Bar_C.OnConditionAdded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UConditionBaseComponent** ConditionComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Condition_Bar_C::OnConditionAdded_Event_1(class UConditionBaseComponent** ConditionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Condition_Bar.WG_Condition_Bar_C.OnConditionAdded_Event_1");

	UWG_Condition_Bar_C_OnConditionAdded_Event_1_Params params;
	params.ConditionComponent = ConditionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Condition_Bar.WG_Condition_Bar_C.OnRemoved_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Condition_C**        Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Condition_Bar_C::OnRemoved_Event_1(class UWG_Condition_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Condition_Bar.WG_Condition_Bar_C.OnRemoved_Event_1");

	UWG_Condition_Bar_C_OnRemoved_Event_1_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Condition_Bar.WG_Condition_Bar_C.OnConditionTokenCountChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UConditionBaseComponent** ConditionComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OldTokenCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewTokenCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Condition_Bar_C::OnConditionTokenCountChanged_Event_1(class UConditionBaseComponent** ConditionComponent, int* OldTokenCount, int* NewTokenCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Condition_Bar.WG_Condition_Bar_C.OnConditionTokenCountChanged_Event_1");

	UWG_Condition_Bar_C_OnConditionTokenCountChanged_Event_1_Params params;
	params.ConditionComponent = ConditionComponent;
	params.OldTokenCount = OldTokenCount;
	params.NewTokenCount = NewTokenCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Condition_Bar.WG_Condition_Bar_C.ExecuteUbergraph_WG_Condition_Bar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Condition_Bar_C::ExecuteUbergraph_WG_Condition_Bar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Condition_Bar.WG_Condition_Bar_C.ExecuteUbergraph_WG_Condition_Bar");

	UWG_Condition_Bar_C_ExecuteUbergraph_WG_Condition_Bar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
