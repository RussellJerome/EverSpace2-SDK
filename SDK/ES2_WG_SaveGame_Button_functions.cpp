// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_SaveGame_Button_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_SaveGame_Button.WG_SaveGame_Button_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_SaveGame_Button_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_SaveGame_Button.WG_SaveGame_Button_C.OnFocusReceived");

	UWG_SaveGame_Button_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_SaveGame_Button.WG_SaveGame_Button_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_SaveGame_Button_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_SaveGame_Button.WG_SaveGame_Button_C.Tick");

	UWG_SaveGame_Button_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_SaveGame_Button.WG_SaveGame_Button_C.UpdateButtonColor
// (BlueprintCallable, BlueprintEvent)

void UWG_SaveGame_Button_C::UpdateButtonColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_SaveGame_Button.WG_SaveGame_Button_C.UpdateButtonColor");

	UWG_SaveGame_Button_C_UpdateButtonColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_SaveGame_Button.WG_SaveGame_Button_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGamePreview**       SaveGamePreviewRef             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_SaveGame_Button_C::Init(class USaveGamePreview** SaveGamePreviewRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_SaveGame_Button.WG_SaveGame_Button_C.Init");

	UWG_SaveGame_Button_C_Init_Params params;
	params.SaveGamePreviewRef = SaveGamePreviewRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_SaveGame_Button.WG_SaveGame_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_SaveGame_Button_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_SaveGame_Button.WG_SaveGame_Button_C.PreConstruct");

	UWG_SaveGame_Button_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_SaveGame_Button.WG_SaveGame_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWG_SaveGame_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_SaveGame_Button.WG_SaveGame_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature");

	UWG_SaveGame_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_SaveGame_Button.WG_SaveGame_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWG_SaveGame_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_SaveGame_Button.WG_SaveGame_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature");

	UWG_SaveGame_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_SaveGame_Button.WG_SaveGame_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_89_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWG_SaveGame_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_89_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_SaveGame_Button.WG_SaveGame_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_89_OnButtonHoverEvent__DelegateSignature");

	UWG_SaveGame_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_89_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_SaveGame_Button.WG_SaveGame_Button_C.ExecuteUbergraph_WG_SaveGame_Button
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_SaveGame_Button_C::ExecuteUbergraph_WG_SaveGame_Button(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_SaveGame_Button.WG_SaveGame_Button_C.ExecuteUbergraph_WG_SaveGame_Button");

	UWG_SaveGame_Button_C_ExecuteUbergraph_WG_SaveGame_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_SaveGame_Button.WG_SaveGame_Button_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_SaveGame_Button_C**  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_SaveGame_Button_C::OnButtonClicked__DelegateSignature(class UWG_SaveGame_Button_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_SaveGame_Button.WG_SaveGame_Button_C.OnButtonClicked__DelegateSignature");

	UWG_SaveGame_Button_C_OnButtonClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
