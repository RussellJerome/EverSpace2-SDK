// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Minable_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Minable_Base.BP_Minable_Base_C.GetHudMarkerName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemTemplate*          ItemTemplate                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Name                           (Parm, OutParm)

void ABP_Minable_Base_C::GetHudMarkerName(struct FItemTemplate* ItemTemplate, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.GetHudMarkerName");

	ABP_Minable_Base_C_GetHudMarkerName_Params params;
	params.ItemTemplate = ItemTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_Minable_Base.BP_Minable_Base_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewSeed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ResourceID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minable_Base_C::Init(int* NewSeed, struct FName* ResourceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.Init");

	ABP_Minable_Base_C_Init_Params params;
	params.NewSeed = NewSeed;
	params.ResourceID = ResourceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minable_Base.BP_Minable_Base_C.GetMiningWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWG_Mining_Game_C*       AsWG_Mining_Game               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Minable_Base_C::GetMiningWidget(class UWG_Mining_Game_C** AsWG_Mining_Game)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.GetMiningWidget");

	ABP_Minable_Base_C_GetMiningWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsWG_Mining_Game != nullptr)
		*AsWG_Mining_Game = params.AsWG_Mining_Game;
}


// Function BP_Minable_Base.BP_Minable_Base_C.GetCurrentYieldFactor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           BonusYield                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           SpecialResource                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

float ABP_Minable_Base_C::GetCurrentYieldFactor(bool* BonusYield, bool* SpecialResource)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.GetCurrentYieldFactor");

	ABP_Minable_Base_C_GetCurrentYieldFactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BonusYield != nullptr)
		*BonusYield = params.BonusYield;
	if (SpecialResource != nullptr)
		*SpecialResource = params.SpecialResource;

	return params.ReturnValue;
}


// Function BP_Minable_Base.BP_Minable_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Minable_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.UserConstructionScript");

	ABP_Minable_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minable_Base.BP_Minable_Base_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Minable_Base_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1");

	ABP_Minable_Base_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minable_Base.BP_Minable_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Minable_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.ReceiveBeginPlay");

	ABP_Minable_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minable_Base.BP_Minable_Base_C.StartMining
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 PawnThatMines                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minable_Base_C::StartMining(class AActor** PawnThatMines)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.StartMining");

	ABP_Minable_Base_C_StartMining_Params params;
	params.PawnThatMines = PawnThatMines;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minable_Base.BP_Minable_Base_C.DeployCharge
// (BlueprintCallable, BlueprintEvent)

void ABP_Minable_Base_C::DeployCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.DeployCharge");

	ABP_Minable_Base_C_DeployCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minable_Base.BP_Minable_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minable_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.ReceiveTick");

	ABP_Minable_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minable_Base.BP_Minable_Base_C.OnInteracted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInteractComponent**     InteractComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minable_Base_C::OnInteracted(class UInteractComponent** InteractComponent, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.OnInteracted");

	ABP_Minable_Base_C_OnInteracted_Params params;
	params.InteractComponent = InteractComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minable_Base.BP_Minable_Base_C.OnCollectParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ParticleTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minable_Base_C::OnCollectParticle(struct FName* EventName, float* EmitterTime, int* ParticleTime, struct FVector* Location, struct FVector* Velocity, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.OnCollectParticle");

	ABP_Minable_Base_C_OnCollectParticle_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minable_Base.BP_Minable_Base_C.StopMining
// (BlueprintCallable, BlueprintEvent)

void ABP_Minable_Base_C::StopMining()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.StopMining");

	ABP_Minable_Base_C_StopMining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minable_Base.BP_Minable_Base_C.OnWidgetFadedOut
// (BlueprintCallable, BlueprintEvent)

void ABP_Minable_Base_C::OnWidgetFadedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.OnWidgetFadedOut");

	ABP_Minable_Base_C_OnWidgetFadedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minable_Base.BP_Minable_Base_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minable_Base_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.ReceiveAnyDamage");

	ABP_Minable_Base_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Minable_Base.BP_Minable_Base_C.ExecuteUbergraph_BP_Minable_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Minable_Base_C::ExecuteUbergraph_BP_Minable_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Minable_Base.BP_Minable_Base_C.ExecuteUbergraph_BP_Minable_Base");

	ABP_Minable_Base_C_ExecuteUbergraph_BP_Minable_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
