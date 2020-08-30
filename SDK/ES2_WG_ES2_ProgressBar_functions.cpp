// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ES2_ProgressBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.SetTemporaryMaximumAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TempMaximum                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::SetTemporaryMaximumAmount(int* TempMaximum)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.SetTemporaryMaximumAmount");

	UWG_ES2_ProgressBar_C_SetTemporaryMaximumAmount_Params params;
	params.TempMaximum = TempMaximum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_ES2_ProgressBar_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnFocusReceived");

	UWG_ES2_ProgressBar_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_ES2_ProgressBar_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnKeyDown");

	UWG_ES2_ProgressBar_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetCurrentAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Amount                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::GetCurrentAmount(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetCurrentAmount");

	UWG_ES2_ProgressBar_C_GetCurrentAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Amount != nullptr)
		*Amount = params.Amount;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetAmountFromSliderValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         SliderValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::GetAmountFromSliderValue(float* SliderValue, int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetAmountFromSliderValue");

	UWG_ES2_ProgressBar_C_GetAmountFromSliderValue_Params params;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Amount != nullptr)
		*Amount = params.Amount;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.SetSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::SetSliderValue(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.SetSliderValue");

	UWG_ES2_ProgressBar_C_SetSliderValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetPreviousSlotIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::GetPreviousSlotIndex(int* CurrentAmount, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetPreviousSlotIndex");

	UWG_ES2_ProgressBar_C_GetPreviousSlotIndex_Params params;
	params.CurrentAmount = CurrentAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetNextSlotIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::GetNextSlotIndex(int* CurrentAmount, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetNextSlotIndex");

	UWG_ES2_ProgressBar_C_GetNextSlotIndex_Params params;
	params.CurrentAmount = CurrentAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.AddQuickSelectData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::AddQuickSelectData(int* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.AddQuickSelectData");

	UWG_ES2_ProgressBar_C_AddQuickSelectData_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetPositionOnBar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PercentValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PositionX                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::GetPositionOnBar(float* PercentValue, float* PositionX)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetPositionOnBar");

	UWG_ES2_ProgressBar_C_GetPositionOnBar_Params params;
	params.PercentValue = PercentValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PositionX != nullptr)
		*PositionX = params.PositionX;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetAmountInPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Percentage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::GetAmountInPercent(int* Amount, float* Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.GetAmountInPercent");

	UWG_ES2_ProgressBar_C_GetAmountInPercent_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percentage != nullptr)
		*Percentage = params.Percentage;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.SetMarkerPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           MarkerValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::SetMarkerPosition(int* MarkerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.SetMarkerPosition");

	UWG_ES2_ProgressBar_C_SetMarkerPosition_Params params;
	params.MarkerValue = MarkerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.CreateMarker
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_ES2_ProgressBar_C::CreateMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.CreateMarker");

	UWG_ES2_ProgressBar_C_CreateMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.AddIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HasBorderStyle                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PositionX                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::AddIndicator(bool* HasBorderStyle, float* PositionX)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.AddIndicator");

	UWG_ES2_ProgressBar_C_AddIndicator_Params params;
	params.HasBorderStyle = HasBorderStyle;
	params.PositionX = PositionX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnNavigateToNextSlotBorder
// (BlueprintCallable, BlueprintEvent)

void UWG_ES2_ProgressBar_C::OnNavigateToNextSlotBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnNavigateToNextSlotBorder");

	UWG_ES2_ProgressBar_C_OnNavigateToNextSlotBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnNavigateToPreviousSlotBorder
// (BlueprintCallable, BlueprintEvent)

void UWG_ES2_ProgressBar_C::OnNavigateToPreviousSlotBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnNavigateToPreviousSlotBorder");

	UWG_ES2_ProgressBar_C_OnNavigateToPreviousSlotBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnSelectedAmountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           New_Amount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::OnSelectedAmountChanged(int* New_Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnSelectedAmountChanged");

	UWG_ES2_ProgressBar_C_OnSelectedAmountChanged_Params params;
	params.New_Amount = New_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.Tick");

	UWG_ES2_ProgressBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.BndEvt__ESSlider_148_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void UWG_ES2_ProgressBar_C::BndEvt__ESSlider_148_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.BndEvt__ESSlider_148_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature");

	UWG_ES2_ProgressBar_C_BndEvt__ESSlider_148_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.BndEvt__ESSlider_Progress_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UWG_ES2_ProgressBar_C::BndEvt__ESSlider_Progress_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.BndEvt__ESSlider_Progress_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature");

	UWG_ES2_ProgressBar_C_BndEvt__ESSlider_Progress_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.BndEvt__ESSlider_Progress_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::BndEvt__ESSlider_Progress_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.BndEvt__ESSlider_Progress_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	UWG_ES2_ProgressBar_C_BndEvt__ESSlider_Progress_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InitialAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsInitialAmountMinimum         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::Init(int* InitialAmount, int* MaxAmount, bool* IsInitialAmountMinimum)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.Init");

	UWG_ES2_ProgressBar_C_Init_Params params;
	params.InitialAmount = InitialAmount;
	params.MaxAmount = MaxAmount;
	params.IsInitialAmountMinimum = IsInitialAmountMinimum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.PreConstruct");

	UWG_ES2_ProgressBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.SetValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::SetValue(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.SetValue");

	UWG_ES2_ProgressBar_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void UWG_ES2_ProgressBar_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.Deactivate");

	UWG_ES2_ProgressBar_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.ExecuteUbergraph_WG_ES2_ProgressBar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::ExecuteUbergraph_WG_ES2_ProgressBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.ExecuteUbergraph_WG_ES2_ProgressBar");

	UWG_ES2_ProgressBar_C_ExecuteUbergraph_WG_ES2_ProgressBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnAmountChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ES2_ProgressBar_C::OnAmountChanged__DelegateSignature(int* NewAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ES2_ProgressBar.WG_ES2_ProgressBar_C.OnAmountChanged__DelegateSignature");

	UWG_ES2_ProgressBar_C_OnAmountChanged__DelegateSignature_Params params;
	params.NewAmount = NewAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
