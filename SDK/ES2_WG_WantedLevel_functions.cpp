// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_WantedLevel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_WantedLevel.WG_WantedLevel_C.GetCurrentWantedLevelIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWG_WantedLevelIcon_C*   WantedLevelIcon                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_WantedLevel_C::GetCurrentWantedLevelIcon(int* Index, class UWG_WantedLevelIcon_C** WantedLevelIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_WantedLevel.WG_WantedLevel_C.GetCurrentWantedLevelIcon");

	UWG_WantedLevel_C_GetCurrentWantedLevelIcon_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WantedLevelIcon != nullptr)
		*WantedLevelIcon = params.WantedLevelIcon;
}


// Function WG_WantedLevel.WG_WantedLevel_C.ActivateOneLevel
// (BlueprintCallable, BlueprintEvent)

void UWG_WantedLevel_C::ActivateOneLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_WantedLevel.WG_WantedLevel_C.ActivateOneLevel");

	UWG_WantedLevel_C_ActivateOneLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_WantedLevel.WG_WantedLevel_C.DeactivateOneLevel
// (BlueprintCallable, BlueprintEvent)

void UWG_WantedLevel_C::DeactivateOneLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_WantedLevel.WG_WantedLevel_C.DeactivateOneLevel");

	UWG_WantedLevel_C_DeactivateOneLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_WantedLevel.WG_WantedLevel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_WantedLevel_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_WantedLevel.WG_WantedLevel_C.PreConstruct");

	UWG_WantedLevel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_WantedLevel.WG_WantedLevel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_WantedLevel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_WantedLevel.WG_WantedLevel_C.Tick");

	UWG_WantedLevel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_WantedLevel.WG_WantedLevel_C.OnShrinkLevelProgressFinished
// (BlueprintCallable, BlueprintEvent)

void UWG_WantedLevel_C::OnShrinkLevelProgressFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_WantedLevel.WG_WantedLevel_C.OnShrinkLevelProgressFinished");

	UWG_WantedLevel_C_OnShrinkLevelProgressFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_WantedLevel.WG_WantedLevel_C.OnRaiseThreatLevel
// (BlueprintCallable, BlueprintEvent)

void UWG_WantedLevel_C::OnRaiseThreatLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_WantedLevel.WG_WantedLevel_C.OnRaiseThreatLevel");

	UWG_WantedLevel_C_OnRaiseThreatLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_WantedLevel.WG_WantedLevel_C.RaiseThreatLevelDelayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_WantedLevel_C::RaiseThreatLevelDelayed(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_WantedLevel.WG_WantedLevel_C.RaiseThreatLevelDelayed");

	UWG_WantedLevel_C_RaiseThreatLevelDelayed_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_WantedLevel.WG_WantedLevel_C.CreateForThisLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Security                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_WantedLevel_C::CreateForThisLocation(float* Security)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_WantedLevel.WG_WantedLevel_C.CreateForThisLocation");

	UWG_WantedLevel_C_CreateForThisLocation_Params params;
	params.Security = Security;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_WantedLevel.WG_WantedLevel_C.CallingForHelp
// (BlueprintCallable, BlueprintEvent)

void UWG_WantedLevel_C::CallingForHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_WantedLevel.WG_WantedLevel_C.CallingForHelp");

	UWG_WantedLevel_C_CallingForHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_WantedLevel.WG_WantedLevel_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UWG_WantedLevel_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_WantedLevel.WG_WantedLevel_C.Hide");

	UWG_WantedLevel_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_WantedLevel.WG_WantedLevel_C.ExecuteUbergraph_WG_WantedLevel
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_WantedLevel_C::ExecuteUbergraph_WG_WantedLevel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_WantedLevel.WG_WantedLevel_C.ExecuteUbergraph_WG_WantedLevel");

	UWG_WantedLevel_C_ExecuteUbergraph_WG_WantedLevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
