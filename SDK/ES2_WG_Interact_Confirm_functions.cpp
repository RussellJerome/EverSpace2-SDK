// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Interact_Confirm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Interact_Confirm.WG_Interact_Confirm_C.OnInitWithInteractComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractComponent**     NewInteractComponent           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 NewActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Interact_Confirm_C::OnInitWithInteractComponent(class UInteractComponent** NewInteractComponent, class AActor** NewActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Interact_Confirm.WG_Interact_Confirm_C.OnInitWithInteractComponent");

	UWG_Interact_Confirm_C_OnInitWithInteractComponent_Params params;
	params.NewInteractComponent = NewInteractComponent;
	params.NewActor = NewActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Interact_Confirm.WG_Interact_Confirm_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UWG_Interact_Confirm_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Interact_Confirm.WG_Interact_Confirm_C.CustomEvent_1");

	UWG_Interact_Confirm_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Interact_Confirm.WG_Interact_Confirm_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Interact_Confirm_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Interact_Confirm.WG_Interact_Confirm_C.Tick");

	UWG_Interact_Confirm_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Interact_Confirm.WG_Interact_Confirm_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UWG_Interact_Confirm_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Interact_Confirm.WG_Interact_Confirm_C.CustomEvent_2");

	UWG_Interact_Confirm_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Interact_Confirm.WG_Interact_Confirm_C.OnAttachedToMarkerWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWG_Interact_Confirm_C::OnAttachedToMarkerWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Interact_Confirm.WG_Interact_Confirm_C.OnAttachedToMarkerWidget");

	UWG_Interact_Confirm_C_OnAttachedToMarkerWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Interact_Confirm.WG_Interact_Confirm_C.OnDetachedFromMarkerWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWG_Interact_Confirm_C::OnDetachedFromMarkerWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Interact_Confirm.WG_Interact_Confirm_C.OnDetachedFromMarkerWidget");

	UWG_Interact_Confirm_C_OnDetachedFromMarkerWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Interact_Confirm.WG_Interact_Confirm_C.ExecuteUbergraph_WG_Interact_Confirm
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Interact_Confirm_C::ExecuteUbergraph_WG_Interact_Confirm(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Interact_Confirm.WG_Interact_Confirm_C.ExecuteUbergraph_WG_Interact_Confirm");

	UWG_Interact_Confirm_C_ExecuteUbergraph_WG_Interact_Confirm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
