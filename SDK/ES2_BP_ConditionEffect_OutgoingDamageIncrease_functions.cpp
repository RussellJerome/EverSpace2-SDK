// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ConditionEffect_OutgoingDamageIncrease_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.AddStaticMeshComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh**            StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UStaticMeshComponent*    Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ConditionEffect_OutgoingDamageIncrease_C::AddStaticMeshComponent(class UStaticMesh** StaticMesh, struct FTransform* Transform, class UStaticMeshComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.AddStaticMeshComponent");

	ABP_ConditionEffect_OutgoingDamageIncrease_C_AddStaticMeshComponent_Params params;
	params.StaticMesh = StaticMesh;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.AddSkeletalMeshComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh**          SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class USkeletalMeshComponent*  Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ConditionEffect_OutgoingDamageIncrease_C::AddSkeletalMeshComponent(class USkeletalMesh** SkeletalMesh, struct FTransform* Transform, class USkeletalMeshComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.AddSkeletalMeshComponent");

	ABP_ConditionEffect_OutgoingDamageIncrease_C_AddSkeletalMeshComponent_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ConditionEffect_OutgoingDamageIncrease_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.ReceiveBeginPlay");

	ABP_ConditionEffect_OutgoingDamageIncrease_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.Update
// (BlueprintCallable, BlueprintEvent)

void ABP_ConditionEffect_OutgoingDamageIncrease_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.Update");

	ABP_ConditionEffect_OutgoingDamageIncrease_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ConditionEffect_OutgoingDamageIncrease_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.ReceiveEndPlay");

	ABP_ConditionEffect_OutgoingDamageIncrease_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.WeaponChangedCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponInfo*            WeaponInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ConditionEffect_OutgoingDamageIncrease_C::WeaponChangedCallback(struct FWeaponInfo* WeaponInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.WeaponChangedCallback");

	ABP_ConditionEffect_OutgoingDamageIncrease_C_WeaponChangedCallback_Params params;
	params.WeaponInfo = WeaponInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.ShipUpdatedCallback
// (BlueprintCallable, BlueprintEvent)

void ABP_ConditionEffect_OutgoingDamageIncrease_C::ShipUpdatedCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.ShipUpdatedCallback");

	ABP_ConditionEffect_OutgoingDamageIncrease_C_ShipUpdatedCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ConditionEffect_OutgoingDamageIncrease_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.ReceiveTick");

	ABP_ConditionEffect_OutgoingDamageIncrease_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.ExecuteUbergraph_BP_ConditionEffect_OutgoingDamageIncrease
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ConditionEffect_OutgoingDamageIncrease_C::ExecuteUbergraph_BP_ConditionEffect_OutgoingDamageIncrease(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ConditionEffect_OutgoingDamageIncrease.BP_ConditionEffect_OutgoingDamageIncrease_C.ExecuteUbergraph_BP_ConditionEffect_OutgoingDamageIncrease");

	ABP_ConditionEffect_OutgoingDamageIncrease_C_ExecuteUbergraph_BP_ConditionEffect_OutgoingDamageIncrease_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
