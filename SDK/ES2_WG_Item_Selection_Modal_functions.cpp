// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Item_Selection_Modal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.On_BG_Close_MouseButtonUp_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Item_Selection_Modal_C::On_BG_Close_MouseButtonUp_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.On_BG_Close_MouseButtonUp_1");

	UWG_Item_Selection_Modal_C_On_BG_Close_MouseButtonUp_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.GetSlotInfoOfSource
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTRCT_ItemSelectionSlotInfo SlotInfo                       (Parm, OutParm, IsPlainOldData)

void UWG_Item_Selection_Modal_C::GetSlotInfoOfSource(struct FSTRCT_ItemSelectionSlotInfo* SlotInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.GetSlotInfoOfSource");

	UWG_Item_Selection_Modal_C_GetSlotInfoOfSource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotInfo != nullptr)
		*SlotInfo = params.SlotInfo;
}


// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.FadeInOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFadeIn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Selection_Modal_C::FadeInOut(bool* IsFadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.FadeInOut");

	UWG_Item_Selection_Modal_C_FadeInOut_Params params;
	params.IsFadeIn = IsFadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Item_Selection_Modal_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.OnKeyUp");

	UWG_Item_Selection_Modal_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.CloseAndFocusCaller
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_Item_Selection_Modal_C::CloseAndFocusCaller()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.CloseAndFocusCaller");

	UWG_Item_Selection_Modal_C_CloseAndFocusCaller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.GetSlotInfoAtIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSTRCT_ItemSelectionSlotInfo SlotInfo                       (Parm, OutParm, IsPlainOldData)

void UWG_Item_Selection_Modal_C::GetSlotInfoAtIndex(int* Index, struct FSTRCT_ItemSelectionSlotInfo* SlotInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.GetSlotInfoAtIndex");

	UWG_Item_Selection_Modal_C_GetSlotInfoAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotInfo != nullptr)
		*SlotInfo = params.SlotInfo;
}


// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Item_Selection_Modal_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.OnKeyDown");

	UWG_Item_Selection_Modal_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Item_Selection_Modal_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.OnFocusReceived");

	UWG_Item_Selection_Modal_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Selection_Modal_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.PreConstruct");

	UWG_Item_Selection_Modal_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Item_Selection_Modal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.Construct");

	UWG_Item_Selection_Modal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.PressedEquip
// (BlueprintCallable, BlueprintEvent)

void UWG_Item_Selection_Modal_C::PressedEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.PressedEquip");

	UWG_Item_Selection_Modal_C_PressedEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.PressedBack
// (BlueprintCallable, BlueprintEvent)

void UWG_Item_Selection_Modal_C::PressedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.PressedBack");

	UWG_Item_Selection_Modal_C_PressedBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.UpdateItemInfos
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Inventory_Slot_C**   InventorySlotWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Item_Selection_Modal_C::UpdateItemInfos(class UWG_Inventory_Slot_C** InventorySlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.UpdateItemInfos");

	UWG_Item_Selection_Modal_C_UpdateItemInfos_Params params;
	params.InventorySlotWidget = InventorySlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Selection_Modal_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.Tick");

	UWG_Item_Selection_Modal_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.ExecuteUbergraph_WG_Item_Selection_Modal
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Item_Selection_Modal_C::ExecuteUbergraph_WG_Item_Selection_Modal(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Item_Selection_Modal.WG_Item_Selection_Modal_C.ExecuteUbergraph_WG_Item_Selection_Modal");

	UWG_Item_Selection_Modal_C_ExecuteUbergraph_WG_Item_Selection_Modal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
