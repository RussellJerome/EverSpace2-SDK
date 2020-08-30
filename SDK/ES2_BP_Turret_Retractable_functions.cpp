// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Turret_Retractable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Turret_Retractable.BP_Turret_Retractable_C.MoveTurret__FinishedFunc
// (BlueprintEvent)

void ABP_Turret_Retractable_C::MoveTurret__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Retractable.BP_Turret_Retractable_C.MoveTurret__FinishedFunc");

	ABP_Turret_Retractable_C_MoveTurret__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Turret_Retractable.BP_Turret_Retractable_C.MoveTurret__UpdateFunc
// (BlueprintEvent)

void ABP_Turret_Retractable_C::MoveTurret__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Retractable.BP_Turret_Retractable_C.MoveTurret__UpdateFunc");

	ABP_Turret_Retractable_C_MoveTurret__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Turret_Retractable.BP_Turret_Retractable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Turret_Retractable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Retractable.BP_Turret_Retractable_C.ReceiveBeginPlay");

	ABP_Turret_Retractable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Turret_Retractable.BP_Turret_Retractable_C.Retract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Forward                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Turret_Retractable_C::Retract(bool* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Retractable.BP_Turret_Retractable_C.Retract");

	ABP_Turret_Retractable_C_Retract_Params params;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Turret_Retractable.BP_Turret_Retractable_C.OnHealthChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         HitpointDelta                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Turret_Retractable_C::OnHealthChanged(class AActor** Actor, float* HitpointDelta, struct FVector* HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Retractable.BP_Turret_Retractable_C.OnHealthChanged");

	ABP_Turret_Retractable_C_OnHealthChanged_Params params;
	params.Actor = Actor;
	params.HitpointDelta = HitpointDelta;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Turret_Retractable.BP_Turret_Retractable_C.OnTurretRepaired
// (BlueprintCallable, BlueprintEvent)

void ABP_Turret_Retractable_C::OnTurretRepaired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Retractable.BP_Turret_Retractable_C.OnTurretRepaired");

	ABP_Turret_Retractable_C_OnTurretRepaired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Turret_Retractable.BP_Turret_Retractable_C.BringOutTurret
// (BlueprintCallable, BlueprintEvent)

void ABP_Turret_Retractable_C::BringOutTurret()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Retractable.BP_Turret_Retractable_C.BringOutTurret");

	ABP_Turret_Retractable_C_BringOutTurret_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Turret_Retractable.BP_Turret_Retractable_C.ExecuteUbergraph_BP_Turret_Retractable
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Turret_Retractable_C::ExecuteUbergraph_BP_Turret_Retractable(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Turret_Retractable.BP_Turret_Retractable_C.ExecuteUbergraph_BP_Turret_Retractable");

	ABP_Turret_Retractable_C_ExecuteUbergraph_BP_Turret_Retractable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
