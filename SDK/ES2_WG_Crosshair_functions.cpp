// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Crosshair_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Crosshair.WG_Crosshair_C.SetCrosshairImages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WeaponCategory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Crosshair_C::SetCrosshairImages(struct FName* WeaponCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Crosshair.WG_Crosshair_C.SetCrosshairImages");

	UWG_Crosshair_C_SetCrosshairImages_Params params;
	params.WeaponCategory = WeaponCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Crosshair.WG_Crosshair_C.GetCrosshairColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UWG_Crosshair_C::GetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Crosshair.WG_Crosshair_C.GetCrosshairColor");

	UWG_Crosshair_C_GetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WG_Crosshair.WG_Crosshair_C.OnJumpChargeTicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EJumpAbortType>*   AbortedType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Crosshair_C::OnJumpChargeTicked_Event_1(float* Progress, TEnumAsByte<EJumpAbortType>* AbortedType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Crosshair.WG_Crosshair_C.OnJumpChargeTicked_Event_1");

	UWG_Crosshair_C_OnJumpChargeTicked_Event_1_Params params;
	params.Progress = Progress;
	params.AbortedType = AbortedType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Crosshair.WG_Crosshair_C.SetReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Ready                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Crosshair_C::SetReady(bool* Ready)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Crosshair.WG_Crosshair_C.SetReady");

	UWG_Crosshair_C_SetReady_Params params;
	params.Ready = Ready;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Crosshair.WG_Crosshair_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Crosshair_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Crosshair.WG_Crosshair_C.Tick");

	UWG_Crosshair_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Crosshair.WG_Crosshair_C.ShowHitIndicator
// (BlueprintCallable, BlueprintEvent)

void UWG_Crosshair_C::ShowHitIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Crosshair.WG_Crosshair_C.ShowHitIndicator");

	UWG_Crosshair_C_ShowHitIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Crosshair.WG_Crosshair_C.SetWeaponCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WeaponCategory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Crosshair_C::SetWeaponCategory(struct FName* WeaponCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Crosshair.WG_Crosshair_C.SetWeaponCategory");

	UWG_Crosshair_C_SetWeaponCategory_Params params;
	params.WeaponCategory = WeaponCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Crosshair.WG_Crosshair_C.EnterInterceptionState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEscapeTarget**          EscapetargetRef                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Crosshair_C::EnterInterceptionState(class AEscapeTarget** EscapetargetRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Crosshair.WG_Crosshair_C.EnterInterceptionState");

	UWG_Crosshair_C_EnterInterceptionState_Params params;
	params.EscapetargetRef = EscapetargetRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Crosshair.WG_Crosshair_C.InterceptionGameStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEscapeTargetState>* NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEscapeTargetState>* OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Crosshair_C::InterceptionGameStateChange(TEnumAsByte<EEscapeTargetState>* NewState, TEnumAsByte<EEscapeTargetState>* OldState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Crosshair.WG_Crosshair_C.InterceptionGameStateChange");

	UWG_Crosshair_C_InterceptionGameStateChange_Params params;
	params.NewState = NewState;
	params.OldState = OldState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Crosshair.WG_Crosshair_C.LeaveInterceptionState
// (BlueprintCallable, BlueprintEvent)

void UWG_Crosshair_C::LeaveInterceptionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Crosshair.WG_Crosshair_C.LeaveInterceptionState");

	UWG_Crosshair_C_LeaveInterceptionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Crosshair.WG_Crosshair_C.SetWeaponChargeOrRampUpRatio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ChargreRatio                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HasChargeOrRampUpTime          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Crosshair_C::SetWeaponChargeOrRampUpRatio(float* ChargreRatio, bool* HasChargeOrRampUpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Crosshair.WG_Crosshair_C.SetWeaponChargeOrRampUpRatio");

	UWG_Crosshair_C_SetWeaponChargeOrRampUpRatio_Params params;
	params.ChargreRatio = ChargreRatio;
	params.HasChargeOrRampUpTime = HasChargeOrRampUpTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Crosshair.WG_Crosshair_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Crosshair_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Crosshair.WG_Crosshair_C.Construct");

	UWG_Crosshair_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Crosshair.WG_Crosshair_C.OnJumpChargeStarted
// (BlueprintCallable, BlueprintEvent)

void UWG_Crosshair_C::OnJumpChargeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Crosshair.WG_Crosshair_C.OnJumpChargeStarted");

	UWG_Crosshair_C_OnJumpChargeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Crosshair.WG_Crosshair_C.OnJumpChargeAborted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJumpAbortType>*   AbortedType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Crosshair_C::OnJumpChargeAborted(TEnumAsByte<EJumpAbortType>* AbortedType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Crosshair.WG_Crosshair_C.OnJumpChargeAborted");

	UWG_Crosshair_C_OnJumpChargeAborted_Params params;
	params.AbortedType = AbortedType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Crosshair.WG_Crosshair_C.ExecuteUbergraph_WG_Crosshair
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Crosshair_C::ExecuteUbergraph_WG_Crosshair(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Crosshair.WG_Crosshair_C.ExecuteUbergraph_WG_Crosshair");

	UWG_Crosshair_C_ExecuteUbergraph_WG_Crosshair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
