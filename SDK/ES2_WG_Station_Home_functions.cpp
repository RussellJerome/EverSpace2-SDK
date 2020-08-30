// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Station_Home_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Station_Home.WG_Station_Home_C.CanItemInfoVisibilityNotBeChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Station_Home_C::CanItemInfoVisibilityNotBeChanged(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.CanItemInfoVisibilityNotBeChanged");

	UWG_Station_Home_C_CanItemInfoVisibilityNotBeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Station_Home.WG_Station_Home_C.GetSelectedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C*    Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Station_Home_C::GetSelectedSlot(class UWG_Inventory_Slot_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.GetSelectedSlot");

	UWG_Station_Home_C_GetSelectedSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Station_Home.WG_Station_Home_C.GetItemInfoWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Item_Info_C*         ItemInfoWidget                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Station_Home_C::GetItemInfoWidget(class UWG_Item_Info_C** ItemInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.GetItemInfoWidget");

	UWG_Station_Home_C_GetItemInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemInfoWidget != nullptr)
		*ItemInfoWidget = params.ItemInfoWidget;
}


// Function WG_Station_Home.WG_Station_Home_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Station_Home_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.OnKeyUp");

	UWG_Station_Home_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Station_Home.WG_Station_Home_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Station_Home_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.OnMouseButtonUp");

	UWG_Station_Home_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Station_Home.WG_Station_Home_C.On_BorderBG_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Station_Home_C::On_BorderBG_MouseButtonDown_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.On_BorderBG_MouseButtonDown_1");

	UWG_Station_Home_C_On_BorderBG_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Station_Home.WG_Station_Home_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Station_Home_C::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.OnAnalogValueChanged");

	UWG_Station_Home_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Station_Home.WG_Station_Home_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Station_Home_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.OnMouseMove");

	UWG_Station_Home_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Station_Home.WG_Station_Home_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Station_Home_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.OnFocusReceived");

	UWG_Station_Home_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Station_Home.WG_Station_Home_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Station_Home_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.OnKeyDown");

	UWG_Station_Home_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Station_Home.WG_Station_Home_C.FadeInOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFadeIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Station_Home_C::FadeInOut(bool* IsFadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.FadeInOut");

	UWG_Station_Home_C_FadeInOut_Params params;
	params.IsFadeIn = IsFadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.OnGamepadModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepadMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Station_Home_C::OnGamepadModeChanged(bool* IsGamepadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.OnGamepadModeChanged");

	UWG_Station_Home_C_OnGamepadModeChanged_Params params;
	params.IsGamepadMode = IsGamepadMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Station_Home_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.PreConstruct");

	UWG_Station_Home_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.PressedBack
// (BlueprintCallable, BlueprintEvent)

void UWG_Station_Home_C::PressedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.PressedBack");

	UWG_Station_Home_C_PressedBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.ReinitHomeScreen
// (BlueprintCallable, BlueprintEvent)

void UWG_Station_Home_C::ReinitHomeScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.ReinitHomeScreen");

	UWG_Station_Home_C_ReinitHomeScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Station_Home_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.Construct");

	UWG_Station_Home_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.ChangeShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Previous                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Station_Home_C::ChangeShip(bool* Previous)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.ChangeShip");

	UWG_Station_Home_C_ChangeShip_Params params;
	params.Previous = Previous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.InitWithStationID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StationID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Menu_Ingame_C**      MenuIngameRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Station_Home_C::InitWithStationID(struct FName* StationID, class UWG_Menu_Ingame_C** MenuIngameRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.InitWithStationID");

	UWG_Station_Home_C_InitWithStationID_Params params;
	params.StationID = StationID;
	params.MenuIngameRef = MenuIngameRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.PressedPauseMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_Station_Home_C::PressedPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.PressedPauseMenu");

	UWG_Station_Home_C_PressedPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.NextShipSelected
// (BlueprintCallable, BlueprintEvent)

void UWG_Station_Home_C::NextShipSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.NextShipSelected");

	UWG_Station_Home_C_NextShipSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.PreviousShipSelected
// (BlueprintCallable, BlueprintEvent)

void UWG_Station_Home_C::PreviousShipSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.PreviousShipSelected");

	UWG_Station_Home_C_PreviousShipSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.OpenRefillMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_Station_Home_C::OpenRefillMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.OpenRefillMenu");

	UWG_Station_Home_C_OpenRefillMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.RefillMenuClosed
// (BlueprintCallable, BlueprintEvent)

void UWG_Station_Home_C::RefillMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.RefillMenuClosed");

	UWG_Station_Home_C_RefillMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.PressedRefill
// (BlueprintCallable, BlueprintEvent)

void UWG_Station_Home_C::PressedRefill()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.PressedRefill");

	UWG_Station_Home_C_PressedRefill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.PressedRepair
// (BlueprintCallable, BlueprintEvent)

void UWG_Station_Home_C::PressedRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.PressedRepair");

	UWG_Station_Home_C_PressedRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.OpenRepairMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_Station_Home_C::OpenRepairMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.OpenRepairMenu");

	UWG_Station_Home_C_OpenRepairMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.OnRepairClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HasRepaired                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Station_Home_C::OnRepairClosed(bool* HasRepaired)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.OnRepairClosed");

	UWG_Station_Home_C_OnRepairClosed_Params params;
	params.HasRepaired = HasRepaired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Station_Home_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.Refresh");

	UWG_Station_Home_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Station_Home.WG_Station_Home_C.ExecuteUbergraph_WG_Station_Home
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Station_Home_C::ExecuteUbergraph_WG_Station_Home(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Station_Home.WG_Station_Home_C.ExecuteUbergraph_WG_Station_Home");

	UWG_Station_Home_C_ExecuteUbergraph_WG_Station_Home_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
