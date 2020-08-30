// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ProximityMine_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.OffsiteSimulate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TimePassed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ProximityMine_Base_C::OffsiteSimulate(float* TimePassed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.OffsiteSimulate");

	ABP_ProximityMine_Base_C_OffsiteSimulate_Params params;
	params.TimePassed = TimePassed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.RestoreState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ProximityMine_Base_C::RestoreState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.RestoreState");

	ABP_ProximityMine_Base_C_RestoreState_Params params;
	params.GenericSaveDataMap = GenericSaveDataMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.SaveState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FGenericSaveDataBuffer> GenericSaveDataMap             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ProximityMine_Base_C::SaveState(TMap<struct FName, struct FGenericSaveDataBuffer>* GenericSaveDataMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.SaveState");

	ABP_ProximityMine_Base_C_SaveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenericSaveDataMap != nullptr)
		*GenericSaveDataMap = params.GenericSaveDataMap;

	return params.ReturnValue;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.SetArmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Armed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProximityMine_Base_C::SetArmed(bool* Armed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.SetArmed");

	ABP_ProximityMine_Base_C_SetArmed_Params params;
	params.Armed = Armed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ActorArrayContainsEnemy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Actors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           EnemyFound                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ProximityMine_Base_C::ActorArrayContainsEnemy(TArray<class AActor*>* Actors, bool* EnemyFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ActorArrayContainsEnemy");

	ABP_ProximityMine_Base_C_ActorArrayContainsEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
	if (EnemyFound != nullptr)
		*EnemyFound = params.EnemyFound;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProximityMine_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.UserConstructionScript");

	ABP_ProximityMine_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.BndEvt__TriggerRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ProximityMine_Base_C::BndEvt__TriggerRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.BndEvt__TriggerRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ProximityMine_Base_C_BndEvt__TriggerRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.CheckForOverlaps
// (BlueprintCallable, BlueprintEvent)

void ABP_ProximityMine_Base_C::CheckForOverlaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.CheckForOverlaps");

	ABP_ProximityMine_Base_C_CheckForOverlaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProximityMine_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ReceiveBeginPlay");

	ABP_ProximityMine_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.TriggerMineExplosion
// (BlueprintCallable, BlueprintEvent)

void ABP_ProximityMine_Base_C::TriggerMineExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.TriggerMineExplosion");

	ABP_ProximityMine_Base_C_TriggerMineExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.BndEvt__Health_K2Node_ComponentBoundEvent_507_OnHealthDepletedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProximityMine_Base_C::BndEvt__Health_K2Node_ComponentBoundEvent_507_OnHealthDepletedDelegate__DelegateSignature(class AActor** Actor, class AActor** DamageCauser, class AController** DamageInstigator, float* DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.BndEvt__Health_K2Node_ComponentBoundEvent_507_OnHealthDepletedDelegate__DelegateSignature");

	ABP_ProximityMine_Base_C_BndEvt__Health_K2Node_ComponentBoundEvent_507_OnHealthDepletedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.DamageCauser = DamageCauser;
	params.DamageInstigator = DamageInstigator;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.MinePickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 TheActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProximityMine_Base_C::MinePickedUp(class AActor** TheActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.MinePickedUp");

	ABP_ProximityMine_Base_C_MinePickedUp_Params params;
	params.TheActor = TheActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.MineReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 TheActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProximityMine_Base_C::MineReleased(class AActor** TheActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.MineReleased");

	ABP_ProximityMine_Base_C_MineReleased_Params params;
	params.TheActor = TheActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ApplyEMP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProximityMine_Base_C::ApplyEMP(class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ApplyEMP");

	ABP_ProximityMine_Base_C_ApplyEMP_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.RemoveEMP
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ProximityMine_Base_C::RemoveEMP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.RemoveEMP");

	ABP_ProximityMine_Base_C_RemoveEMP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.Explode
// (BlueprintCallable, BlueprintEvent)

void ABP_ProximityMine_Base_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.Explode");

	ABP_ProximityMine_Base_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ArmDelayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProximityMine_Base_C::ArmDelayed(float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ArmDelayed");

	ABP_ProximityMine_Base_C_ArmDelayed_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ArmAfterDelay
// (BlueprintCallable, BlueprintEvent)

void ABP_ProximityMine_Base_C::ArmAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ArmAfterDelay");

	ABP_ProximityMine_Base_C_ArmAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ExecuteUbergraph_BP_ProximityMine_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProximityMine_Base_C::ExecuteUbergraph_BP_ProximityMine_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.ExecuteUbergraph_BP_ProximityMine_Base");

	ABP_ProximityMine_Base_C_ExecuteUbergraph_BP_ProximityMine_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.MineDestroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ProximityMine_Base_C::MineDestroyed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProximityMine_Base.BP_ProximityMine_Base_C.MineDestroyed__DelegateSignature");

	ABP_ProximityMine_Base_C_MineDestroyed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
