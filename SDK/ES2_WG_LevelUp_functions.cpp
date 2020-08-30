// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_LevelUp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_LevelUp.WG_LevelUp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_LevelUp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LevelUp.WG_LevelUp_C.Construct");

	UWG_LevelUp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LevelUp.WG_LevelUp_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_LevelUp_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LevelUp.WG_LevelUp_C.PreConstruct");

	UWG_LevelUp_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LevelUp.WG_LevelUp_C.ShowLevelUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_LevelUp_C::ShowLevelUp(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LevelUp.WG_LevelUp_C.ShowLevelUp");

	UWG_LevelUp_C_ShowLevelUp_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LevelUp.WG_LevelUp_C.AnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWG_LevelUp_C::AnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LevelUp.WG_LevelUp_C.AnimationFinished");

	UWG_LevelUp_C_AnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LevelUp.WG_LevelUp_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_LevelUp_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LevelUp.WG_LevelUp_C.Tick");

	UWG_LevelUp_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LevelUp.WG_LevelUp_C.CountUpStatsDelay
// (BlueprintCallable, BlueprintEvent)

void UWG_LevelUp_C::CountUpStatsDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LevelUp.WG_LevelUp_C.CountUpStatsDelay");

	UWG_LevelUp_C_CountUpStatsDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_LevelUp.WG_LevelUp_C.ExecuteUbergraph_WG_LevelUp
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_LevelUp_C::ExecuteUbergraph_WG_LevelUp(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_LevelUp.WG_LevelUp_C.ExecuteUbergraph_WG_LevelUp");

	UWG_LevelUp_C_ExecuteUbergraph_WG_LevelUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
