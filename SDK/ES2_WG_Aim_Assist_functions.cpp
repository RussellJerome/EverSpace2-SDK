// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Aim_Assist_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Aim_Assist.WG_Aim_Assist_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Aim_Assist_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Aim_Assist.WG_Aim_Assist_C.PreConstruct");

	UWG_Aim_Assist_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Aim_Assist.WG_Aim_Assist_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Aim_Assist_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Aim_Assist.WG_Aim_Assist_C.Construct");

	UWG_Aim_Assist_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Aim_Assist.WG_Aim_Assist_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Aim_Assist_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Aim_Assist.WG_Aim_Assist_C.Tick");

	UWG_Aim_Assist_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Aim_Assist.WG_Aim_Assist_C.PlayLockAnim
// (BlueprintCallable, BlueprintEvent)

void UWG_Aim_Assist_C::PlayLockAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Aim_Assist.WG_Aim_Assist_C.PlayLockAnim");

	UWG_Aim_Assist_C_PlayLockAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Aim_Assist.WG_Aim_Assist_C.ExecuteUbergraph_WG_Aim_Assist
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Aim_Assist_C::ExecuteUbergraph_WG_Aim_Assist(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Aim_Assist.WG_Aim_Assist_C.ExecuteUbergraph_WG_Aim_Assist");

	UWG_Aim_Assist_C_ExecuteUbergraph_WG_Aim_Assist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
