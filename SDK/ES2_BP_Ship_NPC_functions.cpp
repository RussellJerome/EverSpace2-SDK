// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Ship_NPC_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Ship_NPC.BP_Ship_NPC_C.BroadcastInvestigate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 InstigatorActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_NPC_C::BroadcastInvestigate(class AActor** InstigatorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.BroadcastInvestigate");

	ABP_Ship_NPC_C_BroadcastInvestigate_Params params;
	params.InstigatorActor = InstigatorActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.AI_Tick
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_NPC_C::AI_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.AI_Tick");

	ABP_Ship_NPC_C_AI_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiBeginAttack
// (Event, Public, BlueprintEvent)

void ABP_Ship_NPC_C::OnAiBeginAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiBeginAttack");

	ABP_Ship_NPC_C_OnAiBeginAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.AI_StopBoosting
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_NPC_C::AI_StopBoosting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.AI_StopBoosting");

	ABP_Ship_NPC_C_AI_StopBoosting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiFleeFromTurnfight
// (Event, Public, BlueprintEvent)

void ABP_Ship_NPC_C::OnAiFleeFromTurnfight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiFleeFromTurnfight");

	ABP_Ship_NPC_C_OnAiFleeFromTurnfight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_NPC_C::BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature");

	ABP_Ship_NPC_C_BndEvt__Health_K2Node_ComponentBoundEvent_0_OnHealthDepletedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_NPC_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.ReceiveAnyDamage");

	ABP_Ship_NPC_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiBeginBarrelRoll
// (Event, Public, BlueprintEvent)

void ABP_Ship_NPC_C::OnAiBeginBarrelRoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiBeginBarrelRoll");

	ABP_Ship_NPC_C_OnAiBeginBarrelRoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.AI_StartBoosting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DurationMin                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DurationMax                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Roll                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_NPC_C::AI_StartBoosting(float* DurationMin, float* DurationMax, bool* Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.AI_StartBoosting");

	ABP_Ship_NPC_C_AI_StartBoosting_Params params;
	params.DurationMin = DurationMin;
	params.DurationMax = DurationMax;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiEndBarrelRoll
// (Event, Public, BlueprintEvent)

void ABP_Ship_NPC_C::OnAiEndBarrelRoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiEndBarrelRoll");

	ABP_Ship_NPC_C_OnAiEndBarrelRoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiNoLeader
// (Event, Public, BlueprintEvent)

void ABP_Ship_NPC_C::OnAiNoLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiNoLeader");

	ABP_Ship_NPC_C_OnAiNoLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiBeginIsTailed
// (Event, Public, BlueprintEvent)

void ABP_Ship_NPC_C::OnAiBeginIsTailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiBeginIsTailed");

	ABP_Ship_NPC_C_OnAiBeginIsTailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiEndIsTailed
// (Event, Public, BlueprintEvent)

void ABP_Ship_NPC_C::OnAiEndIsTailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiEndIsTailed");

	ABP_Ship_NPC_C_OnAiEndIsTailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiEndGainDistance
// (Event, Public, BlueprintEvent)

void ABP_Ship_NPC_C::OnAiEndGainDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiEndGainDistance");

	ABP_Ship_NPC_C_OnAiEndGainDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.OnNpcJumpIn
// (BlueprintCallable, BlueprintEvent)

void ABP_Ship_NPC_C::OnNpcJumpIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.OnNpcJumpIn");

	ABP_Ship_NPC_C_OnNpcJumpIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiBeginGainDistance
// (Event, Public, BlueprintEvent)

void ABP_Ship_NPC_C::OnAiBeginGainDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiBeginGainDistance");

	ABP_Ship_NPC_C_OnAiBeginGainDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.OnNPCJumpAway
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJumpMethod>*      JumpMethod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_NPC_C::OnNPCJumpAway(TEnumAsByte<EJumpMethod>* JumpMethod, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.OnNPCJumpAway");

	ABP_Ship_NPC_C_OnNPCJumpAway_Params params;
	params.JumpMethod = JumpMethod;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiEndFlee
// (Event, Public, BlueprintEvent)

void ABP_Ship_NPC_C::OnAiEndFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiEndFlee");

	ABP_Ship_NPC_C_OnAiEndFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.OnJumpInCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_NPC_C::OnJumpInCompleted(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.OnJumpInCompleted");

	ABP_Ship_NPC_C_OnJumpInCompleted_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiBeginFlee
// (Event, Public, BlueprintEvent)

void ABP_Ship_NPC_C::OnAiBeginFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.OnAiBeginFlee");

	ABP_Ship_NPC_C_OnAiBeginFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Ship_NPC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.ReceiveBeginPlay");

	ABP_Ship_NPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_NPC_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.ReceiveTick");

	ABP_Ship_NPC_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.ForwardOnNPCJumpAway
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJumpMethod>*      JumpMethod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_NPC_C::ForwardOnNPCJumpAway(TEnumAsByte<EJumpMethod>* JumpMethod, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.ForwardOnNPCJumpAway");

	ABP_Ship_NPC_C_ForwardOnNPCJumpAway_Params params;
	params.JumpMethod = JumpMethod;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.ForwardOnJumpInCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_NPC_C::ForwardOnJumpInCompleted(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.ForwardOnJumpInCompleted");

	ABP_Ship_NPC_C_ForwardOnJumpInCompleted_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.ExecuteUbergraph_BP_Ship_NPC
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ship_NPC_C::ExecuteUbergraph_BP_Ship_NPC(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.ExecuteUbergraph_BP_Ship_NPC");

	ABP_Ship_NPC_C_ExecuteUbergraph_BP_Ship_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ship_NPC.BP_Ship_NPC_C.JumpInFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Ship_NPC_C::JumpInFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ship_NPC.BP_Ship_NPC_C.JumpInFinished__DelegateSignature");

	ABP_Ship_NPC_C_JumpInFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
