// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MenuAction_Icon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.UpdateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWG_MenuAction_Icon_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.UpdateIcon");

	UWG_MenuAction_Icon_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MenuAction_Icon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.PreConstruct");

	UWG_MenuAction_Icon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.SetActionInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionButtonInfo* NewActionInfo                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_MenuAction_Icon_C::SetActionInfo(struct FInputActionButtonInfo* NewActionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.SetActionInfo");

	UWG_MenuAction_Icon_C_SetActionInfo_Params params;
	params.NewActionInfo = NewActionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MenuAction_Icon_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.Tick");

	UWG_MenuAction_Icon_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.SetHoldProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MenuAction_Icon_C::SetHoldProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.SetHoldProgress");

	UWG_MenuAction_Icon_C_SetHoldProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_MenuAction_Icon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.Construct");

	UWG_MenuAction_Icon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.ExecuteUbergraph_WG_MenuAction_Icon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MenuAction_Icon_C::ExecuteUbergraph_WG_MenuAction_Icon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.ExecuteUbergraph_WG_MenuAction_Icon");

	UWG_MenuAction_Icon_C_ExecuteUbergraph_WG_MenuAction_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_MenuAction_Icon_C::OnButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MenuAction_Icon.WG_MenuAction_Icon_C.OnButtonClicked__DelegateSignature");

	UWG_MenuAction_Icon_C_OnButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
