// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_MissionLog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_MissionLog.WG_MissionLog_C.RefreshWithMissionID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  MissonID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MissionLog_C::RefreshWithMissionID(struct FName* MissonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionLog.WG_MissionLog_C.RefreshWithMissionID");

	UWG_MissionLog_C_RefreshWithMissionID_Params params;
	params.MissonID = MissonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_MissionLog.WG_MissionLog_C.ExecuteUbergraph_WG_MissionLog
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_MissionLog_C::ExecuteUbergraph_WG_MissionLog(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_MissionLog.WG_MissionLog_C.ExecuteUbergraph_WG_MissionLog");

	UWG_MissionLog_C_ExecuteUbergraph_WG_MissionLog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
