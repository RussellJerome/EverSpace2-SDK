// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Menu_Slider_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Menu_Slider.WG_Menu_Slider_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWG_Menu_Slider_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Slider.WG_Menu_Slider_C.OnKeyDown");

	UWG_Menu_Slider_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Slider.WG_Menu_Slider_C.GetSliderProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Slider_C::GetSliderProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Slider.WG_Menu_Slider_C.GetSliderProgress");

	UWG_Menu_Slider_C_GetSliderProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function WG_Menu_Slider.WG_Menu_Slider_C.SetSliderProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Slider_C::SetSliderProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Slider.WG_Menu_Slider_C.SetSliderProgress");

	UWG_Menu_Slider_C_SetSliderProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Menu_Slider.WG_Menu_Slider_C.GetRightBarColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWG_Menu_Slider_C::GetRightBarColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Slider.WG_Menu_Slider_C.GetRightBarColor");

	UWG_Menu_Slider_C_GetRightBarColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Slider.WG_Menu_Slider_C.GetLeftBarColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWG_Menu_Slider_C::GetLeftBarColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Slider.WG_Menu_Slider_C.GetLeftBarColor");

	UWG_Menu_Slider_C_GetLeftBarColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Menu_Slider.WG_Menu_Slider_C.OnProgressChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewProgress                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Menu_Slider_C::OnProgressChanged__DelegateSignature(float* NewProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Menu_Slider.WG_Menu_Slider_C.OnProgressChanged__DelegateSignature");

	UWG_Menu_Slider_C_OnProgressChanged__DelegateSignature_Params params;
	params.NewProgress = NewProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
