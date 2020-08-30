// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_JobOffer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_JobOffer.WG_JobOffer_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_JobOffer_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JobOffer.WG_JobOffer_C.OnFocusReceived");

	UWG_JobOffer_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_JobOffer.WG_JobOffer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_JobOffer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JobOffer.WG_JobOffer_C.Construct");

	UWG_JobOffer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JobOffer.WG_JobOffer_C.UpdateButtonColor
// (BlueprintCallable, BlueprintEvent)

void UWG_JobOffer_C::UpdateButtonColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JobOffer.WG_JobOffer_C.UpdateButtonColor");

	UWG_JobOffer_C_UpdateButtonColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JobOffer.WG_JobOffer_C.BndEvt__Butto_K2Node_ComponentBoundEvent_178_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWG_JobOffer_C::BndEvt__Butto_K2Node_ComponentBoundEvent_178_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JobOffer.WG_JobOffer_C.BndEvt__Butto_K2Node_ComponentBoundEvent_178_OnButtonHoverEvent__DelegateSignature");

	UWG_JobOffer_C_BndEvt__Butto_K2Node_ComponentBoundEvent_178_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JobOffer.WG_JobOffer_C.BndEvt__Butto_K2Node_ComponentBoundEvent_191_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWG_JobOffer_C::BndEvt__Butto_K2Node_ComponentBoundEvent_191_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JobOffer.WG_JobOffer_C.BndEvt__Butto_K2Node_ComponentBoundEvent_191_OnButtonHoverEvent__DelegateSignature");

	UWG_JobOffer_C_BndEvt__Butto_K2Node_ComponentBoundEvent_191_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JobOffer.WG_JobOffer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_JobOffer_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JobOffer.WG_JobOffer_C.Tick");

	UWG_JobOffer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JobOffer.WG_JobOffer_C.ExecuteUbergraph_WG_JobOffer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_JobOffer_C::ExecuteUbergraph_WG_JobOffer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JobOffer.WG_JobOffer_C.ExecuteUbergraph_WG_JobOffer");

	UWG_JobOffer_C_ExecuteUbergraph_WG_JobOffer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JobOffer.WG_JobOffer_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_JobOffer_C**         WidgetRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_JobOffer_C::OnSelected__DelegateSignature(class UWG_JobOffer_C** WidgetRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JobOffer.WG_JobOffer_C.OnSelected__DelegateSignature");

	UWG_JobOffer_C_OnSelected__DelegateSignature_Params params;
	params.WidgetRef = WidgetRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
