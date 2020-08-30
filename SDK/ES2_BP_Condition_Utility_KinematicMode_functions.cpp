// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Condition_Utility_KinematicMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Condition_Utility_KinematicMode.BP_Condition_Utility_KinematicMode_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_Condition_Utility_KinematicMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Utility_KinematicMode.BP_Condition_Utility_KinematicMode_C.ReceiveBeginPlay");

	UBP_Condition_Utility_KinematicMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Condition_Utility_KinematicMode.BP_Condition_Utility_KinematicMode_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Condition_Utility_KinematicMode_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Utility_KinematicMode.BP_Condition_Utility_KinematicMode_C.ReceiveEndPlay");

	UBP_Condition_Utility_KinematicMode_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Condition_Utility_KinematicMode.BP_Condition_Utility_KinematicMode_C.ExecuteUbergraph_BP_Condition_Utility_KinematicMode
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Condition_Utility_KinematicMode_C::ExecuteUbergraph_BP_Condition_Utility_KinematicMode(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Condition_Utility_KinematicMode.BP_Condition_Utility_KinematicMode_C.ExecuteUbergraph_BP_Condition_Utility_KinematicMode");

	UBP_Condition_Utility_KinematicMode_C_ExecuteUbergraph_BP_Condition_Utility_KinematicMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
