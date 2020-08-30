// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Main_OptionsScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.HasCurrentMenuUnappliedChanges
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_OptionsScreen_C::HasCurrentMenuUnappliedChanges(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.HasCurrentMenuUnappliedChanges");

	UWG_Menu_Main_OptionsScreen_C_HasCurrentMenuUnappliedChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.LoadOptionsWidgetClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TabIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_OptionsScreen_C::LoadOptionsWidgetClass(int* TabIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.LoadOptionsWidgetClass");

	UWG_Menu_Main_OptionsScreen_C_LoadOptionsWidgetClass_Params params;
	params.TabIndex = TabIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Menu_Main_OptionsScreen_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.OnFocusReceived");

	UWG_Menu_Main_OptionsScreen_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Menu_Main_OptionsScreen_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.OnKeyDown");

	UWG_Menu_Main_OptionsScreen_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Menu_Main_OptionsScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.Construct");

	UWG_Menu_Main_OptionsScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.SubTabIndexChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TabIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_OptionsScreen_C::SubTabIndexChanged(int* TabIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.SubTabIndexChanged");

	UWG_Menu_Main_OptionsScreen_C_SubTabIndexChanged_Params params;
	params.TabIndex = TabIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_OptionsScreen_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.PreConstruct");

	UWG_Menu_Main_OptionsScreen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.OnResumeGameRequest
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_OptionsScreen_C::OnResumeGameRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.OnResumeGameRequest");

	UWG_Menu_Main_OptionsScreen_C_OnResumeGameRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.PreviousTab
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_OptionsScreen_C::PreviousTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.PreviousTab");

	UWG_Menu_Main_OptionsScreen_C_PreviousTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.NextTab
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_OptionsScreen_C::NextTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.NextTab");

	UWG_Menu_Main_OptionsScreen_C_NextTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.InitializeMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_Menu_Main_OptionsScreen_C::InitializeMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.InitializeMenu");

	UWG_Menu_Main_OptionsScreen_C_InitializeMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.ExecuteUbergraph_WG_Menu_Main_OptionsScreen
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Main_OptionsScreen_C::ExecuteUbergraph_WG_Menu_Main_OptionsScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Main_OptionsScreen.WG_Menu_Main_OptionsScreen_C.ExecuteUbergraph_WG_Menu_Main_OptionsScreen");

	UWG_Menu_Main_OptionsScreen_C_ExecuteUbergraph_WG_Menu_Main_OptionsScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
