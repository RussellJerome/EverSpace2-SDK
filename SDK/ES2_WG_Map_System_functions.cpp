// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_System_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Map_System.WG_Map_System_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Map_System_C::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System.WG_Map_System_C.OnMouseButtonDoubleClick");

	UWG_Map_System_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Map_System.WG_Map_System_C.On_System_MouseButtonDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Map_System_C::On_System_MouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System.WG_Map_System_C.On_System_MouseButtonDown");

	UWG_Map_System_C_On_System_MouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WG_Map_System.WG_Map_System_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_System_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System.WG_Map_System_C.PreConstruct");

	UWG_Map_System_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_System.WG_Map_System_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Map_System_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System.WG_Map_System_C.Construct");

	UWG_Map_System_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_System.WG_Map_System_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_System_C::SetSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System.WG_Map_System_C.SetSelected");

	UWG_Map_System_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_System.WG_Map_System_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWG_Map_System_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System.WG_Map_System_C.OnMouseEnter");

	UWG_Map_System_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_System.WG_Map_System_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWG_Map_System_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System.WG_Map_System_C.OnMouseLeave");

	UWG_Map_System_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_System.WG_Map_System_C.SetWaypoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsNewWaypoint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_System_C::SetWaypoint(bool* IsNewWaypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System.WG_Map_System_C.SetWaypoint");

	UWG_Map_System_C_SetWaypoint_Params params;
	params.IsNewWaypoint = IsNewWaypoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_System.WG_Map_System_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_System_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System.WG_Map_System_C.Refresh");

	UWG_Map_System_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_System.WG_Map_System_C.RefreshOpacity
// (BlueprintCallable, BlueprintEvent)

void UWG_Map_System_C::RefreshOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System.WG_Map_System_C.RefreshOpacity");

	UWG_Map_System_C_RefreshOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_System.WG_Map_System_C.ExecuteUbergraph_WG_Map_System
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_System_C::ExecuteUbergraph_WG_Map_System(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System.WG_Map_System_C.ExecuteUbergraph_WG_Map_System");

	UWG_Map_System_C_ExecuteUbergraph_WG_Map_System_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_System.WG_Map_System_C.OnDoubleClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Map_System_C**       Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Map_System_C::OnDoubleClicked__DelegateSignature(class UWG_Map_System_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System.WG_Map_System_C.OnDoubleClicked__DelegateSignature");

	UWG_Map_System_C_OnDoubleClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_System.WG_Map_System_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Map_System_C**       Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Map_System_C::OnClicked__DelegateSignature(class UWG_Map_System_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_System.WG_Map_System_C.OnClicked__DelegateSignature");

	UWG_Map_System_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
