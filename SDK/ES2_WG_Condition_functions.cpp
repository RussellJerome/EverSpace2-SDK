// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Condition_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Condition.WG_Condition_C.OnConditionTick_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UConditionBaseComponent** ConditionComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Condition_C::OnConditionTick_Event_1(class UConditionBaseComponent** ConditionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Condition.WG_Condition_C.OnConditionTick_Event_1");

	UWG_Condition_C_OnConditionTick_Event_1_Params params;
	params.ConditionComponent = ConditionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Condition.WG_Condition_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Condition_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Condition.WG_Condition_C.PreConstruct");

	UWG_Condition_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Condition.WG_Condition_C.PlayNameAnimation
// (BlueprintCallable, BlueprintEvent)

void UWG_Condition_C::PlayNameAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Condition.WG_Condition_C.PlayNameAnimation");

	UWG_Condition_C_PlayNameAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Condition.WG_Condition_C.StopNameAnimation
// (BlueprintCallable, BlueprintEvent)

void UWG_Condition_C::StopNameAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Condition.WG_Condition_C.StopNameAnimation");

	UWG_Condition_C_StopNameAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Condition.WG_Condition_C.OnConditionRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UConditionBaseComponent** ConditionComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Condition_C::OnConditionRemoved(class UConditionBaseComponent** ConditionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Condition.WG_Condition_C.OnConditionRemoved");

	UWG_Condition_C_OnConditionRemoved_Params params;
	params.ConditionComponent = ConditionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Condition.WG_Condition_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Condition_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Condition.WG_Condition_C.Construct");

	UWG_Condition_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Condition.WG_Condition_C.ExecuteUbergraph_WG_Condition
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Condition_C::ExecuteUbergraph_WG_Condition(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Condition.WG_Condition_C.ExecuteUbergraph_WG_Condition");

	UWG_Condition_C_ExecuteUbergraph_WG_Condition_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Condition.WG_Condition_C.OnTokenCountChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewTokenCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldTokenCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_Condition_Base_C**   ConditionRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Condition_C::OnTokenCountChanged__DelegateSignature(int* NewTokenCount, int* OldTokenCount, class UBP_Condition_Base_C** ConditionRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Condition.WG_Condition_C.OnTokenCountChanged__DelegateSignature");

	UWG_Condition_C_OnTokenCountChanged__DelegateSignature_Params params;
	params.NewTokenCount = NewTokenCount;
	params.OldTokenCount = OldTokenCount;
	params.ConditionRef = ConditionRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Condition.WG_Condition_C.OnRemoved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Condition_C**        Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Condition_C::OnRemoved__DelegateSignature(class UWG_Condition_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Condition.WG_Condition_C.OnRemoved__DelegateSignature");

	UWG_Condition_C_OnRemoved__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
