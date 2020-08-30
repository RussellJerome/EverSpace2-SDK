// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_CollisionDamageComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_CollisionDamageComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.ReceiveBeginPlay");

	UBP_CollisionDamageComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.CollisionDamageHitEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 SelfActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBP_CollisionDamageComponent_C::CollisionDamageHitEvent(class AActor** SelfActor, class AActor** OtherActor, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.CollisionDamageHitEvent");

	UBP_CollisionDamageComponent_C_CollisionDamageHitEvent_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.TriggerGracePeriod
// (BlueprintCallable, BlueprintEvent)

void UBP_CollisionDamageComponent_C::TriggerGracePeriod()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.TriggerGracePeriod");

	UBP_CollisionDamageComponent_C_TriggerGracePeriod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.UpdateCollisionSound
// (BlueprintCallable, BlueprintEvent)

void UBP_CollisionDamageComponent_C::UpdateCollisionSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.UpdateCollisionSound");

	UBP_CollisionDamageComponent_C_UpdateCollisionSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CollisionDamageComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.ReceiveEndPlay");

	UBP_CollisionDamageComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.ExecuteUbergraph_BP_CollisionDamageComponent
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CollisionDamageComponent_C::ExecuteUbergraph_BP_CollisionDamageComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CollisionDamageComponent.BP_CollisionDamageComponent_C.ExecuteUbergraph_BP_CollisionDamageComponent");

	UBP_CollisionDamageComponent_C_ExecuteUbergraph_BP_CollisionDamageComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
