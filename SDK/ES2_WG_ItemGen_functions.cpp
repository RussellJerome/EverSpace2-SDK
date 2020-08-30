// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ItemGen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_ItemGen.WG_ItemGen_C.GetBrushColor_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWG_ItemGen_C::GetBrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemGen.WG_ItemGen_C.GetBrushColor_1");

	UWG_ItemGen_C_GetBrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ItemGen.WG_ItemGen_C.OnMouseButtonUp_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_ItemGen_C::OnMouseButtonUp_1(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemGen.WG_ItemGen_C.OnMouseButtonUp_1");

	UWG_ItemGen_C_OnMouseButtonUp_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function WG_ItemGen.WG_ItemGen_C.GetSelectedRarities
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TEnumAsByte<EItemRarity>> Rarities                       (Parm, OutParm, ZeroConstructor)

void UWG_ItemGen_C::GetSelectedRarities(TArray<TEnumAsByte<EItemRarity>>* Rarities)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemGen.WG_ItemGen_C.GetSelectedRarities");

	UWG_ItemGen_C_GetSelectedRarities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rarities != nullptr)
		*Rarities = params.Rarities;
}


// Function WG_ItemGen.WG_ItemGen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_ItemGen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemGen.WG_ItemGen_C.Construct");

	UWG_ItemGen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemGen.WG_ItemGen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWG_ItemGen_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemGen.WG_ItemGen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature");

	UWG_ItemGen_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemGen.WG_ItemGen_C.BndEvt__SpinBox_ItemLevel_K2Node_ComponentBoundEvent_115_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemGen_C::BndEvt__SpinBox_ItemLevel_K2Node_ComponentBoundEvent_115_OnSpinBoxValueChangedEvent__DelegateSignature(float* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemGen.WG_ItemGen_C.BndEvt__SpinBox_ItemLevel_K2Node_ComponentBoundEvent_115_OnSpinBoxValueChangedEvent__DelegateSignature");

	UWG_ItemGen_C_BndEvt__SpinBox_ItemLevel_K2Node_ComponentBoundEvent_115_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemGen.WG_ItemGen_C.GenerateItem
// (BlueprintCallable, BlueprintEvent)

void UWG_ItemGen_C::GenerateItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemGen.WG_ItemGen_C.GenerateItem");

	UWG_ItemGen_C_GenerateItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemGen.WG_ItemGen_C.BndEvt__Checkbox_Toggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemGen_C::BndEvt__Checkbox_Toggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemGen.WG_ItemGen_C.BndEvt__Checkbox_Toggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	UWG_ItemGen_C_BndEvt__Checkbox_Toggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemGen.WG_ItemGen_C.BndEvt__SpinBox_ItemLevelMax_K2Node_ComponentBoundEvent_173_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemGen_C::BndEvt__SpinBox_ItemLevelMax_K2Node_ComponentBoundEvent_173_OnSpinBoxValueChangedEvent__DelegateSignature(float* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemGen.WG_ItemGen_C.BndEvt__SpinBox_ItemLevelMax_K2Node_ComponentBoundEvent_173_OnSpinBoxValueChangedEvent__DelegateSignature");

	UWG_ItemGen_C_BndEvt__SpinBox_ItemLevelMax_K2Node_ComponentBoundEvent_173_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemGen.WG_ItemGen_C.BndEvt__ComboBox_Chips_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString*                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemGen_C::BndEvt__ComboBox_Chips_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemGen.WG_ItemGen_C.BndEvt__ComboBox_Chips_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UWG_ItemGen_C_BndEvt__ComboBox_Chips_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemGen.WG_ItemGen_C.BndEvt__SpinBox_Amount_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemGen_C::BndEvt__SpinBox_Amount_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature(float* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemGen.WG_ItemGen_C.BndEvt__SpinBox_Amount_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature");

	UWG_ItemGen_C_BndEvt__SpinBox_Amount_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemGen.WG_ItemGen_C.ExecuteUbergraph_WG_ItemGen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemGen_C::ExecuteUbergraph_WG_ItemGen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemGen.WG_ItemGen_C.ExecuteUbergraph_WG_ItemGen");

	UWG_ItemGen_C_ExecuteUbergraph_WG_ItemGen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemGen.WG_ItemGen_C.SetSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_ItemGen_C**          Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_ItemGen_C::SetSelected__DelegateSignature(bool* Selected, class UWG_ItemGen_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemGen.WG_ItemGen_C.SetSelected__DelegateSignature");

	UWG_ItemGen_C_SetSelected__DelegateSignature_Params params;
	params.Selected = Selected;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
