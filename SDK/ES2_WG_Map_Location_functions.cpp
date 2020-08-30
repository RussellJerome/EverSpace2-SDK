// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_Location_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Map_Location.WG_Map_Location_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWG_Map_Location_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.OnPaint");

	UWG_Map_Location_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function WG_Map_Location.WG_Map_Location_C.IsSameLocationOrChild
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  OtherLocationID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Map_Location_C::IsSameLocationOrChild(struct FName* OtherLocationID, bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.IsSameLocationOrChild");

	UWG_Map_Location_C_IsSameLocationOrChild_Params params;
	params.OtherLocationID = OtherLocationID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WG_Map_Location.WG_Map_Location_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Map_Location_C::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.OnMouseButtonDoubleClick");

	UWG_Map_Location_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Map_Location.WG_Map_Location_C.On_Location_MouseButtonDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Map_Location_C::On_Location_MouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.On_Location_MouseButtonDown");

	UWG_Map_Location_C_On_Location_MouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WG_Map_Location.WG_Map_Location_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWG_Map_Location_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.OnMouseLeave");

	UWG_Map_Location_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Location.WG_Map_Location_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWG_Map_Location_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.OnMouseEnter");

	UWG_Map_Location_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Location.WG_Map_Location_C.SetWaypoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsNewWaypoint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_Location_C::SetWaypoint(bool* IsNewWaypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.SetWaypoint");

	UWG_Map_Location_C_SetWaypoint_Params params;
	params.IsNewWaypoint = IsNewWaypoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Location.WG_Map_Location_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_Location_C::SetSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.SetSelected");

	UWG_Map_Location_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Location.WG_Map_Location_C.SetInitPosition
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_Location_C::SetInitPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.SetInitPosition");

	UWG_Map_Location_C_SetInitPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Location.WG_Map_Location_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_Location_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.Refresh");

	UWG_Map_Location_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Location.WG_Map_Location_C.SetDebugInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 DebugString                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FSlateColor*            InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_Map_Location_C::SetDebugInfo(class FString* DebugString, struct FSlateColor* InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.SetDebugInfo");

	UWG_Map_Location_C_SetDebugInfo_Params params;
	params.DebugString = DebugString;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Location.WG_Map_Location_C.RefreshOpacity
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_Location_C::RefreshOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.RefreshOpacity");

	UWG_Map_Location_C_RefreshOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Location.WG_Map_Location_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Map_Location_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.Construct");

	UWG_Map_Location_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Location.WG_Map_Location_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_Location_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.PreConstruct");

	UWG_Map_Location_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Location.WG_Map_Location_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_Location_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.Tick");

	UWG_Map_Location_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Location.WG_Map_Location_C.ExecuteUbergraph_WG_Map_Location
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_Location_C::ExecuteUbergraph_WG_Map_Location(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.ExecuteUbergraph_WG_Map_Location");

	UWG_Map_Location_C_ExecuteUbergraph_WG_Map_Location_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Location.WG_Map_Location_C.OnHoveredChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewHovered                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_Location_C::OnHoveredChanged__DelegateSignature(bool* NewHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.OnHoveredChanged__DelegateSignature");

	UWG_Map_Location_C_OnHoveredChanged__DelegateSignature_Params params;
	params.NewHovered = NewHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Location.WG_Map_Location_C.OnWaypointSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Map_Location_C**     Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  LocationID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SystemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_Location_C::OnWaypointSet__DelegateSignature(class UWG_Map_Location_C** Widget, struct FName* LocationID, struct FName* SystemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.OnWaypointSet__DelegateSignature");

	UWG_Map_Location_C_OnWaypointSet__DelegateSignature_Params params;
	params.Widget = Widget;
	params.LocationID = LocationID;
	params.SystemID = SystemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Location.WG_Map_Location_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Map_Location_C**     Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Map_Location_C::OnClicked__DelegateSignature(class UWG_Map_Location_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Location.WG_Map_Location_C.OnClicked__DelegateSignature");

	UWG_Map_Location_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
