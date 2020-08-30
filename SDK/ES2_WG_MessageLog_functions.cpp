// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MessageLog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_MessageLog.WG_MessageLog_C.AddMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDMessage*            MessageInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWG_MessageLog_C::AddMessage(struct FHUDMessage* MessageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MessageLog.WG_MessageLog_C.AddMessage");

	UWG_MessageLog_C_AddMessage_Params params;
	params.MessageInfo = MessageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MessageLog.WG_MessageLog_C.MessageExpired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_MessageLogEntry_C**  ExpiredMessage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_MessageLog_C::MessageExpired(class UWG_MessageLogEntry_C** ExpiredMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MessageLog.WG_MessageLog_C.MessageExpired");

	UWG_MessageLog_C_MessageExpired_Params params;
	params.ExpiredMessage = ExpiredMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MessageLog.WG_MessageLog_C.RefreshGrid
// (BlueprintCallable, BlueprintEvent)

void UWG_MessageLog_C::RefreshGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MessageLog.WG_MessageLog_C.RefreshGrid");

	UWG_MessageLog_C_RefreshGrid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MessageLog.WG_MessageLog_C.ExecuteUbergraph_WG_MessageLog
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MessageLog_C::ExecuteUbergraph_WG_MessageLog(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MessageLog.WG_MessageLog_C.ExecuteUbergraph_WG_MessageLog");

	UWG_MessageLog_C_ExecuteUbergraph_WG_MessageLog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
