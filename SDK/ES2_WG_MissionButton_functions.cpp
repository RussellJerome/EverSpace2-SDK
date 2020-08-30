// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MissionButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_MissionButton.WG_MissionButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_MissionButton_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionButton.WG_MissionButton_C.OnFocusReceived");

	UWG_MissionButton_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_MissionButton.WG_MissionButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_MissionButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionButton.WG_MissionButton_C.Construct");

	UWG_MissionButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionButton.WG_MissionButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MissionButton_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionButton.WG_MissionButton_C.Tick");

	UWG_MissionButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionButton.WG_MissionButton_C.UpdateButtonColor
// (BlueprintCallable, BlueprintEvent)

void UWG_MissionButton_C::UpdateButtonColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionButton.WG_MissionButton_C.UpdateButtonColor");

	UWG_MissionButton_C_UpdateButtonColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionButton.WG_MissionButton_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWG_MissionButton_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionButton.WG_MissionButton_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UWG_MissionButton_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionButton.WG_MissionButton_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWG_MissionButton_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionButton.WG_MissionButton_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");

	UWG_MissionButton_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionButton.WG_MissionButton_C.RefreshTracked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Tracked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MissionButton_C::RefreshTracked(bool* Tracked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionButton.WG_MissionButton_C.RefreshTracked");

	UWG_MissionButton_C_RefreshTracked_Params params;
	params.Tracked = Tracked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionButton.WG_MissionButton_C.ExecuteUbergraph_WG_MissionButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MissionButton_C::ExecuteUbergraph_WG_MissionButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionButton.WG_MissionButton_C.ExecuteUbergraph_WG_MissionButton");

	UWG_MissionButton_C_ExecuteUbergraph_WG_MissionButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionButton.WG_MissionButton_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_MissionButton_C**    MissionButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_MissionButton_C::OnSelected__DelegateSignature(class UWG_MissionButton_C** MissionButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionButton.WG_MissionButton_C.OnSelected__DelegateSignature");

	UWG_MissionButton_C_OnSelected__DelegateSignature_Params params;
	params.MissionButton = MissionButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
