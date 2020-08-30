// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MissionObjective_Line_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MissionObjective_Line_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.Tick");

	UWG_MissionObjective_Line_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ObjectiveText                  (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EMissionTaskState>* State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsNew                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsPermanent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MissionObjective_Line_C::Refresh(struct FText* ObjectiveText, TEnumAsByte<EMissionTaskState>* State, bool* IsNew, bool* IsPermanent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.Refresh");

	UWG_MissionObjective_Line_C_Refresh_Params params;
	params.ObjectiveText = ObjectiveText;
	params.State = State;
	params.IsNew = IsNew;
	params.IsPermanent = IsPermanent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.FadeOutFinished
// (BlueprintCallable, BlueprintEvent)

void UWG_MissionObjective_Line_C::FadeOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.FadeOutFinished");

	UWG_MissionObjective_Line_C_FadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.PlaySuccessAnimation
// (BlueprintCallable, BlueprintEvent)

void UWG_MissionObjective_Line_C::PlaySuccessAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.PlaySuccessAnimation");

	UWG_MissionObjective_Line_C_PlaySuccessAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_MissionObjective_Line_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.Construct");

	UWG_MissionObjective_Line_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.PlayFailedAnimation
// (BlueprintCallable, BlueprintEvent)

void UWG_MissionObjective_Line_C::PlayFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.PlayFailedAnimation");

	UWG_MissionObjective_Line_C_PlayFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.PlayAbortedAnimationFadOut
// (BlueprintCallable, BlueprintEvent)

void UWG_MissionObjective_Line_C::PlayAbortedAnimationFadOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.PlayAbortedAnimationFadOut");

	UWG_MissionObjective_Line_C_PlayAbortedAnimationFadOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.ExecuteUbergraph_WG_MissionObjective_Line
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MissionObjective_Line_C::ExecuteUbergraph_WG_MissionObjective_Line(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.ExecuteUbergraph_WG_MissionObjective_Line");

	UWG_MissionObjective_Line_C_ExecuteUbergraph_WG_MissionObjective_Line_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.OnExpired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_MissionObjective_Line_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_MissionObjective_Line_C::OnExpired__DelegateSignature(class UWG_MissionObjective_Line_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionObjective_Line.WG_MissionObjective_Line_C.OnExpired__DelegateSignature");

	UWG_MissionObjective_Line_C_OnExpired__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
