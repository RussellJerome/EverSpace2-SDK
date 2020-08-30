// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Mining_Game_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Mining_Game.WG_Mining_Game_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Mining_Game_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mining_Game.WG_Mining_Game_C.Construct");

	UWG_Mining_Game_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mining_Game.WG_Mining_Game_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Frequency1                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Frequency2                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Exponent                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Amplitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BonusThreshold                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentMiningTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TimeLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         SpecialFrequency               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         SpecialWidth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Mining_Game_C::Update(float* Time, float* Frequency1, float* Frequency2, float* Exponent, float* Amplitude, float* BonusThreshold, float* CurrentMiningTime, float* TimeLeft, float* SpecialFrequency, float* SpecialWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mining_Game.WG_Mining_Game_C.Update");

	UWG_Mining_Game_C_Update_Params params;
	params.Time = Time;
	params.Frequency1 = Frequency1;
	params.Frequency2 = Frequency2;
	params.Exponent = Exponent;
	params.Amplitude = Amplitude;
	params.BonusThreshold = BonusThreshold;
	params.CurrentMiningTime = CurrentMiningTime;
	params.TimeLeft = TimeLeft;
	params.SpecialFrequency = SpecialFrequency;
	params.SpecialWidth = SpecialWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mining_Game.WG_Mining_Game_C.FadeOutAndClose
// (BlueprintCallable, BlueprintEvent)

void UWG_Mining_Game_C::FadeOutAndClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mining_Game.WG_Mining_Game_C.FadeOutAndClose");

	UWG_Mining_Game_C_FadeOutAndClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mining_Game.WG_Mining_Game_C.DeployCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         YieldFactor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          BonusYield                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          SpecialResource                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Mining_Game_C::DeployCharge(float* YieldFactor, bool* BonusYield, bool* SpecialResource)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mining_Game.WG_Mining_Game_C.DeployCharge");

	UWG_Mining_Game_C_DeployCharge_Params params;
	params.YieldFactor = YieldFactor;
	params.BonusYield = BonusYield;
	params.SpecialResource = SpecialResource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mining_Game.WG_Mining_Game_C.AnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWG_Mining_Game_C::AnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mining_Game.WG_Mining_Game_C.AnimationFinished");

	UWG_Mining_Game_C_AnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mining_Game.WG_Mining_Game_C.SetResourceItems
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  BasicItemRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  SpecialItemRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Mining_Game_C::SetResourceItems(class UItem** BasicItemRef, class UItem** SpecialItemRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mining_Game.WG_Mining_Game_C.SetResourceItems");

	UWG_Mining_Game_C_SetResourceItems_Params params;
	params.BasicItemRef = BasicItemRef;
	params.SpecialItemRef = SpecialItemRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mining_Game.WG_Mining_Game_C.SetNumCharges
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Mining_Game_C::SetNumCharges(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mining_Game.WG_Mining_Game_C.SetNumCharges");

	UWG_Mining_Game_C_SetNumCharges_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mining_Game.WG_Mining_Game_C.SetAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ValueSpecial                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          AddToExisting                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Mining_Game_C::SetAmount(int* Value, int* ValueSpecial, bool* AddToExisting)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mining_Game.WG_Mining_Game_C.SetAmount");

	UWG_Mining_Game_C_SetAmount_Params params;
	params.Value = Value;
	params.ValueSpecial = ValueSpecial;
	params.AddToExisting = AddToExisting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mining_Game.WG_Mining_Game_C.ExecuteUbergraph_WG_Mining_Game
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Mining_Game_C::ExecuteUbergraph_WG_Mining_Game(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mining_Game.WG_Mining_Game_C.ExecuteUbergraph_WG_Mining_Game");

	UWG_Mining_Game_C_ExecuteUbergraph_WG_Mining_Game_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mining_Game.WG_Mining_Game_C.OnFadedOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWG_Mining_Game_C::OnFadedOut__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mining_Game.WG_Mining_Game_C.OnFadedOut__DelegateSignature");

	UWG_Mining_Game_C_OnFadedOut__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
