// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PushPopComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PushPopComponent.BP_PushPopComponent_C.PushPop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PushPopComponent_C::PushPop(bool* Input, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushPopComponent.BP_PushPopComponent_C.PushPop");

	UBP_PushPopComponent_C_PushPop_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_PushPopComponent.BP_PushPopComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PushPopComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushPopComponent.BP_PushPopComponent_C.ReceiveBeginPlay");

	UBP_PushPopComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PushPopComponent.BP_PushPopComponent_C.ExecuteUbergraph_BP_PushPopComponent
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PushPopComponent_C::ExecuteUbergraph_BP_PushPopComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PushPopComponent.BP_PushPopComponent_C.ExecuteUbergraph_BP_PushPopComponent");

	UBP_PushPopComponent_C_ExecuteUbergraph_BP_PushPopComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
