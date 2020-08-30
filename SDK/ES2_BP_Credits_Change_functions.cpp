// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Credits_Change_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Credits_Change.BP_Credits_Change_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Credits_Change_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits_Change.BP_Credits_Change_C.Construct");

	UBP_Credits_Change_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Credits_Change.BP_Credits_Change_C.OnAnimationFinished_Event
// (BlueprintCallable, BlueprintEvent)

void UBP_Credits_Change_C::OnAnimationFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits_Change.BP_Credits_Change_C.OnAnimationFinished_Event");

	UBP_Credits_Change_C_OnAnimationFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Credits_Change.BP_Credits_Change_C.ExecuteUbergraph_BP_Credits_Change
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Credits_Change_C::ExecuteUbergraph_BP_Credits_Change(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits_Change.BP_Credits_Change_C.ExecuteUbergraph_BP_Credits_Change");

	UBP_Credits_Change_C_ExecuteUbergraph_BP_Credits_Change_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
