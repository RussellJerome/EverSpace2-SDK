// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Header_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Menu_Header.WG_Menu_Header_C.Get_CanvasPanel_Location_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Menu_Header_C::Get_CanvasPanel_Location_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Header.WG_Menu_Header_C.Get_CanvasPanel_Location_Visibility_1");

	UWG_Menu_Header_C_Get_CanvasPanel_Location_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Header.WG_Menu_Header_C.HandleKeyDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bHandled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Header_C::HandleKeyDown(struct FKeyEvent* InKeyEvent, bool* bHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Header.WG_Menu_Header_C.HandleKeyDown");

	UWG_Menu_Header_C_HandleKeyDown_Params params;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHandled != nullptr)
		*bHandled = params.bHandled;
}


// Function WG_Menu_Header.WG_Menu_Header_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Header_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Header.WG_Menu_Header_C.PreConstruct");

	UWG_Menu_Header_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Header.WG_Menu_Header_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Menu_Header_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Header.WG_Menu_Header_C.Construct");

	UWG_Menu_Header_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Header.WG_Menu_Header_C.SetTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTab>*         Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Header_C::SetTab(TEnumAsByte<EMenuTab>* Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Header.WG_Menu_Header_C.SetTab");

	UWG_Menu_Header_C_SetTab_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Header.WG_Menu_Header_C.InitWithTabs
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TEnumAsByte<EMenuTab>>* Tabs                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWG_Menu_Header_C::InitWithTabs(TArray<TEnumAsByte<EMenuTab>>* Tabs)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Header.WG_Menu_Header_C.InitWithTabs");

	UWG_Menu_Header_C_InitWithTabs_Params params;
	params.Tabs = Tabs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Header.WG_Menu_Header_C.SetLocationText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  StationText                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  SystemText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Menu_Header_C::SetLocationText(struct FText* StationText, struct FText* SystemText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Header.WG_Menu_Header_C.SetLocationText");

	UWG_Menu_Header_C_SetLocationText_Params params;
	params.StationText = StationText;
	params.SystemText = SystemText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Header.WG_Menu_Header_C.SelectNextOrPreviousTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Next                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Header_C::SelectNextOrPreviousTab(bool* Next)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Header.WG_Menu_Header_C.SelectNextOrPreviousTab");

	UWG_Menu_Header_C_SelectNextOrPreviousTab_Params params;
	params.Next = Next;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Header.WG_Menu_Header_C.ExecuteUbergraph_WG_Menu_Header
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Header_C::ExecuteUbergraph_WG_Menu_Header(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Header.WG_Menu_Header_C.ExecuteUbergraph_WG_Menu_Header");

	UWG_Menu_Header_C_ExecuteUbergraph_WG_Menu_Header_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Header.WG_Menu_Header_C.OnTabChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTab>*         Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Header_C::OnTabChanged__DelegateSignature(TEnumAsByte<EMenuTab>* Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Header.WG_Menu_Header_C.OnTabChanged__DelegateSignature");

	UWG_Menu_Header_C_OnTabChanged__DelegateSignature_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
