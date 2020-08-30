// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_2D_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Map_2D.WG_Map_2D_C.HideUI
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Map_2D_C::HideUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.HideUI");

	UWG_Map_2D_C_HideUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Map_2D_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.OnKeyUp");

	UWG_Map_2D_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Map_2D.WG_Map_2D_C.AnalogZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_2D_C::AnalogZoom(float* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.AnalogZoom");

	UWG_Map_2D_C_AnalogZoom_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Map_2D_C::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.OnAnalogValueChanged");

	UWG_Map_2D_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Map_2D.WG_Map_2D_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Map_2D_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.OnFocusReceived");

	UWG_Map_2D_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Map_2D.WG_Map_2D_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Map_2D_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.OnKeyDown");

	UWG_Map_2D_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Map_2D.WG_Map_2D_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Map_2D_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.OnMouseButtonDown");

	UWG_Map_2D_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Map_2D.WG_Map_2D_C.UpdateWidgetZoomStates
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Map_2D_C::UpdateWidgetZoomStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.UpdateWidgetZoomStates");

	UWG_Map_2D_C_UpdateWidgetZoomStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Map_2D_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.OnMouseButtonUp");

	UWG_Map_2D_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Map_2D.WG_Map_2D_C.CenterOnCurrentLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWG_Map_2D_C::CenterOnCurrentLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.CenterOnCurrentLocation");

	UWG_Map_2D_C_CenterOnCurrentLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.GetCenterOfWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UWG_Map_2D_C::GetCenterOfWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.GetCenterOfWidget");

	UWG_Map_2D_C_GetCenterOfWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Map_2D.WG_Map_2D_C.GetSystemWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName*                  ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Map_System_C*        SystemWidget                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Map_2D_C::GetSystemWidget(struct FName* ID, class UWG_Map_System_C** SystemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.GetSystemWidget");

	UWG_Map_2D_C_GetSystemWidget_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SystemWidget != nullptr)
		*SystemWidget = params.SystemWidget;
}


// Function WG_Map_2D.WG_Map_2D_C.GetSystemIDsWithConnection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  SystemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELocationConnection>* ConnectionType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ConnectedIDs                   (Parm, OutParm, ZeroConstructor)

void UWG_Map_2D_C::GetSystemIDsWithConnection(struct FName* SystemID, TEnumAsByte<ELocationConnection>* ConnectionType, TArray<struct FName>* ConnectedIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.GetSystemIDsWithConnection");

	UWG_Map_2D_C_GetSystemIDsWithConnection_Params params;
	params.SystemID = SystemID;
	params.ConnectionType = ConnectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConnectedIDs != nullptr)
		*ConnectedIDs = params.ConnectedIDs;
}


// Function WG_Map_2D.WG_Map_2D_C.GetLocationWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_Map_Location_C*      LocationWidget                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Map_2D_C::GetLocationWidget(struct FName* ID, class UWG_Map_Location_C** LocationWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.GetLocationWidget");

	UWG_Map_2D_C_GetLocationWidget_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationWidget != nullptr)
		*LocationWidget = params.LocationWidget;
}


// Function WG_Map_2D.WG_Map_2D_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWG_Map_2D_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.OnPaint");

	UWG_Map_2D_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function WG_Map_2D.WG_Map_2D_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Map_2D_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.OnMouseWheel");

	UWG_Map_2D_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Map_2D.WG_Map_2D_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Map_2D_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.OnMouseMove");

	UWG_Map_2D_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Map_2D.WG_Map_2D_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_2D_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.PreConstruct");

	UWG_Map_2D_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Map_2D_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.Construct");

	UWG_Map_2D_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_2D_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.Tick");

	UWG_Map_2D_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.LoadLocationsForSystem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Map_System_C**       SystemWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Map_2D_C::LoadLocationsForSystem(class UWG_Map_System_C** SystemWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.LoadLocationsForSystem");

	UWG_Map_2D_C_LoadLocationsForSystem_Params params;
	params.SystemWidget = SystemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.OnSystemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Map_System_C**       Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Map_2D_C::OnSystemSelected(class UWG_Map_System_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.OnSystemSelected");

	UWG_Map_2D_C_OnSystemSelected_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.OnLocationSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Map_Location_C**     Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Map_2D_C::OnLocationSelected(class UWG_Map_Location_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.OnLocationSelected");

	UWG_Map_2D_C_OnLocationSelected_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.CreateLocationConnections
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_2D_C::CreateLocationConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.CreateLocationConnections");

	UWG_Map_2D_C_CreateLocationConnections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.OnDoubleClicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Map_System_C**       Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Map_2D_C::OnDoubleClicked_Event_1(class UWG_Map_System_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.OnDoubleClicked_Event_1");

	UWG_Map_2D_C_OnDoubleClicked_Event_1_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.OnLocationWaypointSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Map_Location_C**     Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  LocationID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SystemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_2D_C::OnLocationWaypointSet(class UWG_Map_Location_C** Widget, struct FName* LocationID, struct FName* SystemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.OnLocationWaypointSet");

	UWG_Map_2D_C_OnLocationWaypointSet_Params params;
	params.Widget = Widget;
	params.LocationID = LocationID;
	params.SystemID = SystemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.SetZoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ZoomDelta                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              MousePositionAbsolute          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_2D_C::SetZoom(float* ZoomDelta, struct FVector2D* MousePositionAbsolute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.SetZoom");

	UWG_Map_2D_C_SetZoom_Params params;
	params.ZoomDelta = ZoomDelta;
	params.MousePositionAbsolute = MousePositionAbsolute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.CreateSystemConnections
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_2D_C::CreateSystemConnections()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.CreateSystemConnections");

	UWG_Map_2D_C_CreateSystemConnections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.PressedBack
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_2D_C::PressedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.PressedBack");

	UWG_Map_2D_C_PressedBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.RefreshSystemAndLocationWidgets
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_2D_C::RefreshSystemAndLocationWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.RefreshSystemAndLocationWidgets");

	UWG_Map_2D_C_RefreshSystemAndLocationWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.ToggleRegionsVisibility
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_2D_C::ToggleRegionsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.ToggleRegionsVisibility");

	UWG_Map_2D_C_ToggleRegionsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.ItemSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_2D_C::ItemSelected(struct FName* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.ItemSelected");

	UWG_Map_2D_C_ItemSelected_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.OnHoveredChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewHovered                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_2D_C::OnHoveredChanged(bool* NewHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.OnHoveredChanged");

	UWG_Map_2D_C_OnHoveredChanged_Params params;
	params.NewHovered = NewHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.PressedPauseMenu
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_2D_C::PressedPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.PressedPauseMenu");

	UWG_Map_2D_C_PressedPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.PressedOK
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_2D_C::PressedOK()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.PressedOK");

	UWG_Map_2D_C_PressedOK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.EmptyEvent2
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_2D_C::EmptyEvent2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.EmptyEvent2");

	UWG_Map_2D_C_EmptyEvent2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.EmptyEvent3
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_2D_C::EmptyEvent3()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.EmptyEvent3");

	UWG_Map_2D_C_EmptyEvent3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.GamepadModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bNewGamepadMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_2D_C::GamepadModeChanged(bool* bNewGamepadMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.GamepadModeChanged");

	UWG_Map_2D_C_GamepadModeChanged_Params params;
	params.bNewGamepadMode = bNewGamepadMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_2D.WG_Map_2D_C.ExecuteUbergraph_WG_Map_2D
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_2D_C::ExecuteUbergraph_WG_Map_2D(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_2D.WG_Map_2D_C.ExecuteUbergraph_WG_Map_2D");

	UWG_Map_2D_C_ExecuteUbergraph_WG_Map_2D_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
