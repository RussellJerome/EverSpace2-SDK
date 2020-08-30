// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Portable_Component_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Portable_Component.BP_Portable_Component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_Portable_Component_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Portable_Component.BP_Portable_Component_C.ReceiveBeginPlay");

	UBP_Portable_Component_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Portable_Component.BP_Portable_Component_C.ObjectAttached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 TheActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Portable_Component_C::ObjectAttached(class AActor** TheActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Portable_Component.BP_Portable_Component_C.ObjectAttached");

	UBP_Portable_Component_C_ObjectAttached_Params params;
	params.TheActor = TheActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Portable_Component.BP_Portable_Component_C.ObjectDetached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 TheActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Portable_Component_C::ObjectDetached(class AActor** TheActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Portable_Component.BP_Portable_Component_C.ObjectDetached");

	UBP_Portable_Component_C_ObjectDetached_Params params;
	params.TheActor = TheActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Portable_Component.BP_Portable_Component_C.ExecuteUbergraph_BP_Portable_Component
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Portable_Component_C::ExecuteUbergraph_BP_Portable_Component(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Portable_Component.BP_Portable_Component_C.ExecuteUbergraph_BP_Portable_Component");

	UBP_Portable_Component_C_ExecuteUbergraph_BP_Portable_Component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
