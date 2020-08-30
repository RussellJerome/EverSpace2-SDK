// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Jobs_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Jobs.WG_Jobs_C.CanItemInfoVisibilityNotBeChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Jobs_C::CanItemInfoVisibilityNotBeChanged(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.CanItemInfoVisibilityNotBeChanged");

	UWG_Jobs_C_CanItemInfoVisibilityNotBeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Jobs.WG_Jobs_C.GetSelectedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C*    Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Jobs_C::GetSelectedSlot(class UWG_Inventory_Slot_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.GetSelectedSlot");

	UWG_Jobs_C_GetSelectedSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Jobs.WG_Jobs_C.GetItemInfoWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Item_Info_C*         ItemInfoWidget                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Jobs_C::GetItemInfoWidget(class UWG_Item_Info_C** ItemInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.GetItemInfoWidget");

	UWG_Jobs_C_GetItemInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemInfoWidget != nullptr)
		*ItemInfoWidget = params.ItemInfoWidget;
}


// Function WG_Jobs.WG_Jobs_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Jobs_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.OnKeyUp");

	UWG_Jobs_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Jobs.WG_Jobs_C.Get_TxtNoOffers_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_Jobs_C::Get_TxtNoOffers_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.Get_TxtNoOffers_Visibility_1");

	UWG_Jobs_C_Get_TxtNoOffers_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Jobs.WG_Jobs_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Jobs_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.OnKeyDown");

	UWG_Jobs_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Jobs.WG_Jobs_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Jobs_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.OnFocusReceived");

	UWG_Jobs_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Jobs.WG_Jobs_C.FadeInOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFadeIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Jobs_C::FadeInOut(bool* IsFadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.FadeInOut");

	UWG_Jobs_C_FadeInOut_Params params;
	params.IsFadeIn = IsFadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Jobs.WG_Jobs_C.OnGamepadModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepadMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Jobs_C::OnGamepadModeChanged(bool* IsGamepadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.OnGamepadModeChanged");

	UWG_Jobs_C_OnGamepadModeChanged_Params params;
	params.IsGamepadMode = IsGamepadMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Jobs.WG_Jobs_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Jobs_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.Refresh");

	UWG_Jobs_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Jobs.WG_Jobs_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Jobs_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.PreConstruct");

	UWG_Jobs_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Jobs.WG_Jobs_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Jobs_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.Construct");

	UWG_Jobs_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Jobs.WG_Jobs_C.PressedBack
// (BlueprintCallable, BlueprintEvent)

void UWG_Jobs_C::PressedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.PressedBack");

	UWG_Jobs_C_PressedBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Jobs.WG_Jobs_C.PressedAcceptJob
// (BlueprintCallable, BlueprintEvent)

void UWG_Jobs_C::PressedAcceptJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.PressedAcceptJob");

	UWG_Jobs_C_PressedAcceptJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Jobs.WG_Jobs_C.JobOfferButtonSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_JobOffer_C**         WidgetRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Jobs_C::JobOfferButtonSelected(class UWG_JobOffer_C** WidgetRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.JobOfferButtonSelected");

	UWG_Jobs_C_JobOfferButtonSelected_Params params;
	params.WidgetRef = WidgetRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Jobs.WG_Jobs_C.InitWithStationID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StationID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Menu_Ingame_C**      MenuIngameRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Jobs_C::InitWithStationID(struct FName* StationID, class UWG_Menu_Ingame_C** MenuIngameRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.InitWithStationID");

	UWG_Jobs_C_InitWithStationID_Params params;
	params.StationID = StationID;
	params.MenuIngameRef = MenuIngameRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Jobs.WG_Jobs_C.ExecuteUbergraph_WG_Jobs
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Jobs_C::ExecuteUbergraph_WG_Jobs(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Jobs.WG_Jobs_C.ExecuteUbergraph_WG_Jobs");

	UWG_Jobs_C_ExecuteUbergraph_WG_Jobs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
