// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MessageLogEntry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_MessageLogEntry.WG_MessageLogEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_MessageLogEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MessageLogEntry.WG_MessageLogEntry_C.Construct");

	UWG_MessageLogEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MessageLogEntry.WG_MessageLogEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MessageLogEntry_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MessageLogEntry.WG_MessageLogEntry_C.Tick");

	UWG_MessageLogEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MessageLogEntry.WG_MessageLogEntry_C.StartFade
// (BlueprintCallable, BlueprintEvent)

void UWG_MessageLogEntry_C::StartFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MessageLogEntry.WG_MessageLogEntry_C.StartFade");

	UWG_MessageLogEntry_C_StartFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MessageLogEntry.WG_MessageLogEntry_C.EndFade
// (BlueprintCallable, BlueprintEvent)

void UWG_MessageLogEntry_C::EndFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MessageLogEntry.WG_MessageLogEntry_C.EndFade");

	UWG_MessageLogEntry_C_EndFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MessageLogEntry.WG_MessageLogEntry_C.InitMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDMessage*            MessageInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_MessageLogEntry_C::InitMessage(struct FHUDMessage* MessageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MessageLogEntry.WG_MessageLogEntry_C.InitMessage");

	UWG_MessageLogEntry_C_InitMessage_Params params;
	params.MessageInfo = MessageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MessageLogEntry.WG_MessageLogEntry_C.ExecuteUbergraph_WG_MessageLogEntry
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MessageLogEntry_C::ExecuteUbergraph_WG_MessageLogEntry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MessageLogEntry.WG_MessageLogEntry_C.ExecuteUbergraph_WG_MessageLogEntry");

	UWG_MessageLogEntry_C_ExecuteUbergraph_WG_MessageLogEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MessageLogEntry.WG_MessageLogEntry_C.OnExpired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_MessageLogEntry_C**  ExpiredMessage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_MessageLogEntry_C::OnExpired__DelegateSignature(class UWG_MessageLogEntry_C** ExpiredMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MessageLogEntry.WG_MessageLogEntry_C.OnExpired__DelegateSignature");

	UWG_MessageLogEntry_C_OnExpired__DelegateSignature_Params params;
	params.ExpiredMessage = ExpiredMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
