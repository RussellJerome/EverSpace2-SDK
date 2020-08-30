// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Mission_State_Line_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Mission_State_Line.WG_Mission_State_Line_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Mission_State_Line_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_State_Line.WG_Mission_State_Line_C.Construct");

	UWG_Mission_State_Line_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_State_Line.WG_Mission_State_Line_C.Expire
// (BlueprintCallable, BlueprintEvent)

void UWG_Mission_State_Line_C::Expire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_State_Line.WG_Mission_State_Line_C.Expire");

	UWG_Mission_State_Line_C_Expire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_State_Line.WG_Mission_State_Line_C.FadedOut
// (BlueprintCallable, BlueprintEvent)

void UWG_Mission_State_Line_C::FadedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_State_Line.WG_Mission_State_Line_C.FadedOut");

	UWG_Mission_State_Line_C_FadedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_State_Line.WG_Mission_State_Line_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Mission_State_Line_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_State_Line.WG_Mission_State_Line_C.Tick");

	UWG_Mission_State_Line_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_State_Line.WG_Mission_State_Line_C.ExecuteUbergraph_WG_Mission_State_Line
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Mission_State_Line_C::ExecuteUbergraph_WG_Mission_State_Line(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_State_Line.WG_Mission_State_Line_C.ExecuteUbergraph_WG_Mission_State_Line");

	UWG_Mission_State_Line_C_ExecuteUbergraph_WG_Mission_State_Line_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Mission_State_Line.WG_Mission_State_Line_C.OnExpire__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Mission_State_Line_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Mission_State_Line_C::OnExpire__DelegateSignature(class UWG_Mission_State_Line_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Mission_State_Line.WG_Mission_State_Line_C.OnExpire__DelegateSignature");

	UWG_Mission_State_Line_C_OnExpire__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
