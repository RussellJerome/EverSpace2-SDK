// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_WantedLevelManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WantedLevelManager.BP_WantedLevelManager_C.OnIngameWidgetCreated
// (BlueprintCallable, BlueprintEvent)

void ABP_WantedLevelManager_C::OnIngameWidgetCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WantedLevelManager.BP_WantedLevelManager_C.OnIngameWidgetCreated");

	ABP_WantedLevelManager_C_OnIngameWidgetCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WantedLevelManager.BP_WantedLevelManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WantedLevelManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WantedLevelManager.BP_WantedLevelManager_C.ReceiveBeginPlay");

	ABP_WantedLevelManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WantedLevelManager.BP_WantedLevelManager_C.OnHealthDepleted
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WantedLevelManager_C::OnHealthDepleted(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WantedLevelManager.BP_WantedLevelManager_C.OnHealthDepleted");

	ABP_WantedLevelManager_C_OnHealthDepleted_Params params;
	params.Actor = Actor;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WantedLevelManager.BP_WantedLevelManager_C.OnTimeUntilDefenceArrivesEllapsed
// (BlueprintCallable, BlueprintEvent)

void ABP_WantedLevelManager_C::OnTimeUntilDefenceArrivesEllapsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WantedLevelManager.BP_WantedLevelManager_C.OnTimeUntilDefenceArrivesEllapsed");

	ABP_WantedLevelManager_C_OnTimeUntilDefenceArrivesEllapsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WantedLevelManager.BP_WantedLevelManager_C.OnNeutralsTurnedHostile
// (Event, Public, BlueprintEvent)

void ABP_WantedLevelManager_C::OnNeutralsTurnedHostile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WantedLevelManager.BP_WantedLevelManager_C.OnNeutralsTurnedHostile");

	ABP_WantedLevelManager_C_OnNeutralsTurnedHostile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WantedLevelManager.BP_WantedLevelManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WantedLevelManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WantedLevelManager.BP_WantedLevelManager_C.ReceiveTick");

	ABP_WantedLevelManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WantedLevelManager.BP_WantedLevelManager_C.ExecuteUbergraph_BP_WantedLevelManager
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WantedLevelManager_C::ExecuteUbergraph_BP_WantedLevelManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WantedLevelManager.BP_WantedLevelManager_C.ExecuteUbergraph_BP_WantedLevelManager");

	ABP_WantedLevelManager_C_ExecuteUbergraph_BP_WantedLevelManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
