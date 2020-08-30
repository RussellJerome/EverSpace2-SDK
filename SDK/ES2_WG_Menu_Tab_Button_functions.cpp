// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Tab_Button_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Tab_Button_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.PreConstruct");

	UWG_Menu_Tab_Button_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Tab_Button_C::SetSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.SetSelected");

	UWG_Menu_Tab_Button_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWG_Menu_Tab_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature");

	UWG_Menu_Tab_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWG_Menu_Tab_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWG_Menu_Tab_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWG_Menu_Tab_Button_C::BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWG_Menu_Tab_Button_C_BndEvt__ESButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.ExecuteUbergraph_WG_Menu_Tab_Button
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Tab_Button_C::ExecuteUbergraph_WG_Menu_Tab_Button(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.ExecuteUbergraph_WG_Menu_Tab_Button");

	UWG_Menu_Tab_Button_C_ExecuteUbergraph_WG_Menu_Tab_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTab>*         Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Tab_Button_C::OnButtonClicked__DelegateSignature(TEnumAsByte<EMenuTab>* Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Tab_Button.WG_Menu_Tab_Button_C.OnButtonClicked__DelegateSignature");

	UWG_Menu_Tab_Button_C_OnButtonClicked__DelegateSignature_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
