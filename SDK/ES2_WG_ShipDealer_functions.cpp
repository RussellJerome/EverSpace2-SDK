// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ShipDealer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_ShipDealer.WG_ShipDealer_C.CanItemInfoVisibilityNotBeChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_ShipDealer_C::CanItemInfoVisibilityNotBeChanged(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.CanItemInfoVisibilityNotBeChanged");

	UWG_ShipDealer_C_CanItemInfoVisibilityNotBeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_ShipDealer.WG_ShipDealer_C.GetSelectedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C*    Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ShipDealer_C::GetSelectedSlot(class UWG_Inventory_Slot_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.GetSelectedSlot");

	UWG_ShipDealer_C_GetSelectedSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_ShipDealer.WG_ShipDealer_C.GetItemInfoWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Item_Info_C*         ItemInfoWidget                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ShipDealer_C::GetItemInfoWidget(class UWG_Item_Info_C** ItemInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.GetItemInfoWidget");

	UWG_ShipDealer_C_GetItemInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemInfoWidget != nullptr)
		*ItemInfoWidget = params.ItemInfoWidget;
}


// Function WG_ShipDealer.WG_ShipDealer_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_ShipDealer_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.OnKeyUp");

	UWG_ShipDealer_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ShipDealer.WG_ShipDealer_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_ShipDealer_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.OnMouseMove");

	UWG_ShipDealer_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ShipDealer.WG_ShipDealer_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_ShipDealer_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.OnMouseButtonUp");

	UWG_ShipDealer_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ShipDealer.WG_ShipDealer_C.On_BorderBG_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_ShipDealer_C::On_BorderBG_MouseButtonDown_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.On_BorderBG_MouseButtonDown_1");

	UWG_ShipDealer_C_On_BorderBG_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ShipDealer.WG_ShipDealer_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_ShipDealer_C::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.OnAnalogValueChanged");

	UWG_ShipDealer_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ShipDealer.WG_ShipDealer_C.GetSelectedShipData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FoundData                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FShipData               ShipData                       (Parm, OutParm)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_ShipDealer_C::GetSelectedShipData(bool* FoundData, struct FShipData* ShipData, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.GetSelectedShipData");

	UWG_ShipDealer_C_GetSelectedShipData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundData != nullptr)
		*FoundData = params.FoundData;
	if (ShipData != nullptr)
		*ShipData = params.ShipData;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function WG_ShipDealer.WG_ShipDealer_C.Get_TxtNoOffers_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWG_ShipDealer_C::Get_TxtNoOffers_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.Get_TxtNoOffers_Visibility_1");

	UWG_ShipDealer_C_Get_TxtNoOffers_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ShipDealer.WG_ShipDealer_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_ShipDealer_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.OnKeyDown");

	UWG_ShipDealer_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ShipDealer.WG_ShipDealer_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_ShipDealer_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.OnFocusReceived");

	UWG_ShipDealer_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ShipDealer.WG_ShipDealer_C.FadeInOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFadeIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ShipDealer_C::FadeInOut(bool* IsFadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.FadeInOut");

	UWG_ShipDealer_C_FadeInOut_Params params;
	params.IsFadeIn = IsFadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipDealer.WG_ShipDealer_C.OnGamepadModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsGamepadMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ShipDealer_C::OnGamepadModeChanged(bool* IsGamepadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.OnGamepadModeChanged");

	UWG_ShipDealer_C_OnGamepadModeChanged_Params params;
	params.IsGamepadMode = IsGamepadMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipDealer.WG_ShipDealer_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_ShipDealer_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.Refresh");

	UWG_ShipDealer_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipDealer.WG_ShipDealer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ShipDealer_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.PreConstruct");

	UWG_ShipDealer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipDealer.WG_ShipDealer_C.PressedBack
// (BlueprintCallable, BlueprintEvent)

void UWG_ShipDealer_C::PressedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.PressedBack");

	UWG_ShipDealer_C_PressedBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipDealer.WG_ShipDealer_C.NewShipSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ShipDealer_C::NewShipSelected(class UWG_Inventory_Slot_C** InventorySlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.NewShipSelected");

	UWG_ShipDealer_C_NewShipSelected_Params params;
	params.InventorySlotWidget = InventorySlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipDealer.WG_ShipDealer_C.PressedBuy
// (BlueprintCallable, BlueprintEvent)

void UWG_ShipDealer_C::PressedBuy()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.PressedBuy");

	UWG_ShipDealer_C_PressedBuy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipDealer.WG_ShipDealer_C.OnFadedOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Fullscreen_Fade_C**  Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ShipDealer_C::OnFadedOut(class UWG_Fullscreen_Fade_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.OnFadedOut");

	UWG_ShipDealer_C_OnFadedOut_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipDealer.WG_ShipDealer_C.LeaveShop
// (BlueprintCallable, BlueprintEvent)

void UWG_ShipDealer_C::LeaveShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.LeaveShop");

	UWG_ShipDealer_C_LeaveShop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipDealer.WG_ShipDealer_C.TradeShip
// (BlueprintCallable, BlueprintEvent)

void UWG_ShipDealer_C::TradeShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.TradeShip");

	UWG_ShipDealer_C_TradeShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipDealer.WG_ShipDealer_C.BuyShip
// (BlueprintCallable, BlueprintEvent)

void UWG_ShipDealer_C::BuyShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.BuyShip");

	UWG_ShipDealer_C_BuyShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipDealer.WG_ShipDealer_C.FlyNewShip
// (BlueprintCallable, BlueprintEvent)

void UWG_ShipDealer_C::FlyNewShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.FlyNewShip");

	UWG_ShipDealer_C_FlyNewShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipDealer.WG_ShipDealer_C.FlyOldShip
// (BlueprintCallable, BlueprintEvent)

void UWG_ShipDealer_C::FlyOldShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.FlyOldShip");

	UWG_ShipDealer_C_FlyOldShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipDealer.WG_ShipDealer_C.TriggerBuy
// (BlueprintCallable, BlueprintEvent)

void UWG_ShipDealer_C::TriggerBuy()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.TriggerBuy");

	UWG_ShipDealer_C_TriggerBuy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipDealer.WG_ShipDealer_C.InitWithStationID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StationID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Menu_Ingame_C**      MenuIngameRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ShipDealer_C::InitWithStationID(struct FName* StationID, class UWG_Menu_Ingame_C** MenuIngameRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.InitWithStationID");

	UWG_ShipDealer_C_InitWithStationID_Params params;
	params.StationID = StationID;
	params.MenuIngameRef = MenuIngameRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ShipDealer.WG_ShipDealer_C.ExecuteUbergraph_WG_ShipDealer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ShipDealer_C::ExecuteUbergraph_WG_ShipDealer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ShipDealer.WG_ShipDealer_C.ExecuteUbergraph_WG_ShipDealer");

	UWG_ShipDealer_C_ExecuteUbergraph_WG_ShipDealer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
