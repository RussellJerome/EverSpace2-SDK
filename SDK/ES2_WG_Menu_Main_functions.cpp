// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Main_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Menu_Main.WG_Menu_Main_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Menu_Main_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.GetVisibility_1");

	UWG_Menu_Main_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main.WG_Menu_Main_C.Get_BackgroundBlurPauseMenu_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Menu_Main_C::Get_BackgroundBlurPauseMenu_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.Get_BackgroundBlurPauseMenu_Visibility_1");

	UWG_Menu_Main_C_Get_BackgroundBlurPauseMenu_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main.WG_Menu_Main_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Menu_Main_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.OnKeyDown");

	UWG_Menu_Main_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main.WG_Menu_Main_C.GetWidgetClassForTabIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           TabIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMainMenuTab>      WidgetClass                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_C::GetWidgetClassForTabIndex(int* TabIndex, TEnumAsByte<EMainMenuTab>* WidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.GetWidgetClassForTabIndex");

	UWG_Menu_Main_C_GetWidgetClassForTabIndex_Params params;
	params.TabIndex = TabIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WidgetClass != nullptr)
		*WidgetClass = params.WidgetClass;
}


// Function WG_Menu_Main.WG_Menu_Main_C.LoadWidgetClassByType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMainMenuTab>*     TabType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Menu_Main_Screen_Base_C* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Menu_Main_C::LoadWidgetClassByType(TEnumAsByte<EMainMenuTab>* TabType, class UWG_Menu_Main_Screen_Base_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.LoadWidgetClassByType");

	UWG_Menu_Main_C_LoadWidgetClassByType_Params params;
	params.TabType = TabType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function WG_Menu_Main.WG_Menu_Main_C.SetNavigationEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_C::SetNavigationEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.SetNavigationEnabled");

	UWG_Menu_Main_C_SetNavigationEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main.WG_Menu_Main_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Menu_Main_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.OnFocusReceived");

	UWG_Menu_Main_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main.WG_Menu_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Menu_Main_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.Construct");

	UWG_Menu_Main_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main.WG_Menu_Main_C.TabIndexChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewTabIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_C::TabIndexChanged(int* NewTabIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.TabIndexChanged");

	UWG_Menu_Main_C_TabIndexChanged_Params params;
	params.NewTabIndex = NewTabIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main.WG_Menu_Main_C.ResumeGame
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_C::ResumeGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.ResumeGame");

	UWG_Menu_Main_C_ResumeGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main.WG_Menu_Main_C.PreviousTab
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_C::PreviousTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.PreviousTab");

	UWG_Menu_Main_C_PreviousTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main.WG_Menu_Main_C.NextTab
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_C::NextTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.NextTab");

	UWG_Menu_Main_C_NextTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main.WG_Menu_Main_C.ConfirmDiscardChanges
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_C::ConfirmDiscardChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.ConfirmDiscardChanges");

	UWG_Menu_Main_C_ConfirmDiscardChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main.WG_Menu_Main_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.PreConstruct");

	UWG_Menu_Main_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main.WG_Menu_Main_C.ExecuteUbergraph_WG_Menu_Main
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_C::ExecuteUbergraph_WG_Menu_Main(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.ExecuteUbergraph_WG_Menu_Main");

	UWG_Menu_Main_C_ExecuteUbergraph_WG_Menu_Main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main.WG_Menu_Main_C.OnResume__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_C::OnResume__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main.WG_Menu_Main_C.OnResume__DelegateSignature");

	UWG_Menu_Main_C_OnResume__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
