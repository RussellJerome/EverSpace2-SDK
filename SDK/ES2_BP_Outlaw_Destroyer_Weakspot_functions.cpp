// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Outlaw_Destroyer_Weakspot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Outlaw_Destroyer_Weakspot.BP_Outlaw_Destroyer_Weakspot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Outlaw_Destroyer_Weakspot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Destroyer_Weakspot.BP_Outlaw_Destroyer_Weakspot_C.UserConstructionScript");

	ABP_Outlaw_Destroyer_Weakspot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Destroyer_Weakspot.BP_Outlaw_Destroyer_Weakspot_C.SetVulnerable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Vulnerable                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Outlaw_Destroyer_Weakspot_C::SetVulnerable(bool* Vulnerable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Destroyer_Weakspot.BP_Outlaw_Destroyer_Weakspot_C.SetVulnerable");

	ABP_Outlaw_Destroyer_Weakspot_C_SetVulnerable_Params params;
	params.Vulnerable = Vulnerable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Destroyer_Weakspot.BP_Outlaw_Destroyer_Weakspot_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Outlaw_Destroyer_Weakspot_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Destroyer_Weakspot.BP_Outlaw_Destroyer_Weakspot_C.ReceivePointDamage");

	ABP_Outlaw_Destroyer_Weakspot_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Destroyer_Weakspot.BP_Outlaw_Destroyer_Weakspot_C.ExecuteUbergraph_BP_Outlaw_Destroyer_Weakspot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Outlaw_Destroyer_Weakspot_C::ExecuteUbergraph_BP_Outlaw_Destroyer_Weakspot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Destroyer_Weakspot.BP_Outlaw_Destroyer_Weakspot_C.ExecuteUbergraph_BP_Outlaw_Destroyer_Weakspot");

	ABP_Outlaw_Destroyer_Weakspot_C_ExecuteUbergraph_BP_Outlaw_Destroyer_Weakspot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
