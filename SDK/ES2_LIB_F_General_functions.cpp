// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_LIB_F_General_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_F_General.LIB_F_General_C.GetRepairInfo
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         RepairCostPerHitpoint          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HPCurrent                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          HPMax                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          HPRepair                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_GetRepairInfo(float* RepairCostPerHitpoint, class UObject** __WorldContext, float* HPCurrent, float* HPMax, float* HPRepair, int* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetRepairInfo");

	ULIB_F_General_C_GetRepairInfo_Params params;
	params.RepairCostPerHitpoint = RepairCostPerHitpoint;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HPCurrent != nullptr)
		*HPCurrent = params.HPCurrent;
	if (HPMax != nullptr)
		*HPMax = params.HPMax;
	if (HPRepair != nullptr)
		*HPRepair = params.HPRepair;
	if (Cost != nullptr)
		*Cost = params.Cost;
}


// Function LIB_F_General.LIB_F_General_C.OpenPauseMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_OpenPauseMenu(class UObject** WorldContextObject, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.OpenPauseMenu");

	ULIB_F_General_C_OpenPauseMenu_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_General.LIB_F_General_C.CheckForItemImpactEffects
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// EWeaponImpact*                 ImpactType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CriticalHit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotDirection                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWeaponData*            WeaponConfig                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_CheckForItemImpactEffects(struct FTransform* Transform, struct FHitResult* HitInfo, EWeaponImpact* ImpactType, bool* CriticalHit, struct FVector* ShotDirection, struct FWeaponData* WeaponConfig, class AActor** Instigator, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.CheckForItemImpactEffects");

	ULIB_F_General_C_CheckForItemImpactEffects_Params params;
	params.Transform = Transform;
	params.HitInfo = HitInfo;
	params.ImpactType = ImpactType;
	params.CriticalHit = CriticalHit;
	params.ShotDirection = ShotDirection;
	params.WeaponConfig = WeaponConfig;
	params.Instigator = Instigator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_General.LIB_F_General_C.GetPilotAudioManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UIPilotAudioManager_C> PilotAudioManager              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_GetPilotAudioManager(class UObject** __WorldContext, TScriptInterface<class UIPilotAudioManager_C>* PilotAudioManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetPilotAudioManager");

	ULIB_F_General_C_GetPilotAudioManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PilotAudioManager != nullptr)
		*PilotAudioManager = params.PilotAudioManager;
}


// Function LIB_F_General.LIB_F_General_C.GetScreenSizeAngle
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         WorldDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WorldRadius                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_GetScreenSizeAngle(float* WorldDistance, float* WorldRadius, class UObject** __WorldContext, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetScreenSizeAngle");

	ULIB_F_General_C_GetScreenSizeAngle_Params params;
	params.WorldDistance = WorldDistance;
	params.WorldRadius = WorldRadius;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function LIB_F_General.LIB_F_General_C.DuplicateMeshComponents
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMeshComponent*>  Meshes                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<ECollisionEnabled>* CollisionEnabled               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          AttachToSourceMesh             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMeshComponent*>  NewMeshes                      (Parm, OutParm, ZeroConstructor)

void ULIB_F_General_C::STATIC_DuplicateMeshComponents(class AActor** Target, TEnumAsByte<ECollisionEnabled>* CollisionEnabled, bool* AttachToSourceMesh, class UObject** __WorldContext, TArray<class UMeshComponent*>* Meshes, TArray<class UMeshComponent*>* NewMeshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.DuplicateMeshComponents");

	ULIB_F_General_C_DuplicateMeshComponents_Params params;
	params.Target = Target;
	params.CollisionEnabled = CollisionEnabled;
	params.AttachToSourceMesh = AttachToSourceMesh;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Meshes != nullptr)
		*Meshes = params.Meshes;
	if (NewMeshes != nullptr)
		*NewMeshes = params.NewMeshes;
}


// Function LIB_F_General.LIB_F_General_C.DestroyAndClearComponentArray
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActorComponent*> ComponentArray                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_DestroyAndClearComponentArray(class UObject** __WorldContext, TArray<class UActorComponent*>* ComponentArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.DestroyAndClearComponentArray");

	ULIB_F_General_C_DestroyAndClearComponentArray_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComponentArray != nullptr)
		*ComponentArray = params.ComponentArray;
}


// Function LIB_F_General.LIB_F_General_C.PushPop
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Stack                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_PushPop(bool* Input, class UObject** __WorldContext, int* Stack, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.PushPop");

	ULIB_F_General_C_PushPop_Params params;
	params.Input = Input;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stack != nullptr)
		*Stack = params.Stack;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_General.LIB_F_General_C.IsBoostingForwardWithMinSpeedPercentage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UShipMovementComponent** ShipMovementComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         MinForwardSpeedPercentage      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BoostingForward                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_IsBoostingForwardWithMinSpeedPercentage(class UShipMovementComponent** ShipMovementComponent, float* MinForwardSpeedPercentage, class UObject** __WorldContext, bool* BoostingForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.IsBoostingForwardWithMinSpeedPercentage");

	ULIB_F_General_C_IsBoostingForwardWithMinSpeedPercentage_Params params;
	params.ShipMovementComponent = ShipMovementComponent;
	params.MinForwardSpeedPercentage = MinForwardSpeedPercentage;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoostingForward != nullptr)
		*BoostingForward = params.BoostingForward;
}


// Function LIB_F_General.LIB_F_General_C.IsAnyEnemyTargetingPlayer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_IsAnyEnemyTargetingPlayer(class UObject** __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.IsAnyEnemyTargetingPlayer");

	ULIB_F_General_C_IsAnyEnemyTargetingPlayer_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_General.LIB_F_General_C.VertigoEffect
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InitialDistance                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InitialFOV                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FOVOffset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceOffset                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_VertigoEffect(float* InitialDistance, float* InitialFOV, float* FOVOffset, class UObject** __WorldContext, float* DistanceOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.VertigoEffect");

	ULIB_F_General_C_VertigoEffect_Params params;
	params.InitialDistance = InitialDistance;
	params.InitialFOV = InitialFOV;
	params.FOVOffset = FOVOffset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DistanceOffset != nullptr)
		*DistanceOffset = params.DistanceOffset;
}


// Function LIB_F_General.LIB_F_General_C.SpawnWeaponImpactEffect
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem**        ParticleSystem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// EWeaponImpact*                 ImpactType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CriticalHit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotDirection                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          SpawnDecal                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CalculateShieldOffset          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         SpawnDecalMaxDistance          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         UseShieldOffsetMaxDistance     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_SpawnWeaponImpactEffect(class UParticleSystem** ParticleSystem, struct FTransform* Transform, struct FHitResult* HitInfo, EWeaponImpact* ImpactType, bool* CriticalHit, struct FVector* ShotDirection, bool* SpawnDecal, bool* CalculateShieldOffset, float* SpawnDecalMaxDistance, float* UseShieldOffsetMaxDistance, float* Scale, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.SpawnWeaponImpactEffect");

	ULIB_F_General_C_SpawnWeaponImpactEffect_Params params;
	params.ParticleSystem = ParticleSystem;
	params.Transform = Transform;
	params.HitInfo = HitInfo;
	params.ImpactType = ImpactType;
	params.CriticalHit = CriticalHit;
	params.ShotDirection = ShotDirection;
	params.SpawnDecal = SpawnDecal;
	params.CalculateShieldOffset = CalculateShieldOffset;
	params.SpawnDecalMaxDistance = SpawnDecalMaxDistance;
	params.UseShieldOffsetMaxDistance = UseShieldOffsetMaxDistance;
	params.Scale = Scale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_General.LIB_F_General_C.CreateDPSAttributes
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemAttribute*          HullDPSAttribute               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UItemAttribute*          ShieldDPSAttribute             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_CreateDPSAttributes(class UItem** Item, class UObject** __WorldContext, class UItemAttribute** HullDPSAttribute, class UItemAttribute** ShieldDPSAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.CreateDPSAttributes");

	ULIB_F_General_C_CreateDPSAttributes_Params params;
	params.Item = Item;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HullDPSAttribute != nullptr)
		*HullDPSAttribute = params.HullDPSAttribute;
	if (ShieldDPSAttribute != nullptr)
		*ShieldDPSAttribute = params.ShieldDPSAttribute;
}


// Function LIB_F_General.LIB_F_General_C.SetSpeedParticlesEnabled
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_SetSpeedParticlesEnabled(bool* Enabled, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.SetSpeedParticlesEnabled");

	ULIB_F_General_C_SetSpeedParticlesEnabled_Params params;
	params.Enabled = Enabled;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_General.LIB_F_General_C.GetSelfRegisteringComponent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USelfRegisteringComponent* SelfRegistering                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULIB_F_General_C::STATIC_GetSelfRegisteringComponent(class AActor** Actor, class UObject** __WorldContext, class USelfRegisteringComponent** SelfRegistering)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetSelfRegisteringComponent");

	ULIB_F_General_C_GetSelfRegisteringComponent_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelfRegistering != nullptr)
		*SelfRegistering = params.SelfRegistering;
}


// Function LIB_F_General.LIB_F_General_C.GetSkyboxActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_Skybox_Background_C* Skybox                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_GetSkyboxActor(class UObject** __WorldContext, class ABP_Skybox_Background_C** Skybox, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetSkyboxActor");

	ULIB_F_General_C_GetSkyboxActor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Skybox != nullptr)
		*Skybox = params.Skybox;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function LIB_F_General.LIB_F_General_C.GetResourceItemIDFromSpawnType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESpawnGroup>*      SpawnGroupType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResourceItemID                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_GetResourceItemIDFromSpawnType(TEnumAsByte<ESpawnGroup>* SpawnGroupType, class UObject** __WorldContext, struct FName* ResourceItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetResourceItemIDFromSpawnType");

	ULIB_F_General_C_GetResourceItemIDFromSpawnType_Params params;
	params.SpawnGroupType = SpawnGroupType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResourceItemID != nullptr)
		*ResourceItemID = params.ResourceItemID;
}


// Function LIB_F_General.LIB_F_General_C.GetResourceClassFromSpawnType
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESpawnGroup>*      SpawnGroupType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  SpawnClass                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_GetResourceClassFromSpawnType(TEnumAsByte<ESpawnGroup>* SpawnGroupType, class UObject** __WorldContext, class UClass** SpawnClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetResourceClassFromSpawnType");

	ULIB_F_General_C_GetResourceClassFromSpawnType_Params params;
	params.SpawnGroupType = SpawnGroupType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnClass != nullptr)
		*SpawnClass = params.SpawnClass;
}


// Function LIB_F_General.LIB_F_General_C.InputRotateComponent
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent**        Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         PitchMin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         PitchMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         RotationSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         LagStiffness                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                InputVectorPitchYawRoll        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InvertPitch                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_InputRotateComponent(class USceneComponent** Target, float* PitchMin, float* PitchMax, float* RotationSpeed, float* LagStiffness, struct FVector* InputVectorPitchYawRoll, bool* InvertPitch, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.InputRotateComponent");

	ULIB_F_General_C_InputRotateComponent_Params params;
	params.Target = Target;
	params.PitchMin = PitchMin;
	params.PitchMax = PitchMax;
	params.RotationSpeed = RotationSpeed;
	params.LagStiffness = LagStiffness;
	params.InputVectorPitchYawRoll = InputVectorPitchYawRoll;
	params.InvertPitch = InvertPitch;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_General.LIB_F_General_C.GetAllMaterialsInActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IncludeChildActors             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CreateInstances                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInterface*> Materials                      (Parm, OutParm, ZeroConstructor)
// TArray<class UMaterialInstanceDynamic*> MaterialInstances              (Parm, OutParm, ZeroConstructor)

void ULIB_F_General_C::STATIC_GetAllMaterialsInActor(class AActor** Actor, bool* IncludeChildActors, bool* CreateInstances, class UObject** __WorldContext, TArray<class UMaterialInterface*>* Materials, TArray<class UMaterialInstanceDynamic*>* MaterialInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetAllMaterialsInActor");

	ULIB_F_General_C_GetAllMaterialsInActor_Params params;
	params.Actor = Actor;
	params.IncludeChildActors = IncludeChildActors;
	params.CreateInstances = CreateInstances;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Materials != nullptr)
		*Materials = params.Materials;
	if (MaterialInstances != nullptr)
		*MaterialInstances = params.MaterialInstances;
}


// Function LIB_F_General.LIB_F_General_C.GetWeaponDPS
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          GetBuffedValue                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ShieldDPS                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          HullDPS                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_GetWeaponDPS(bool* GetBuffedValue, class UItem** Item, class UObject** __WorldContext, float* ShieldDPS, float* HullDPS)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetWeaponDPS");

	ULIB_F_General_C_GetWeaponDPS_Params params;
	params.GetBuffedValue = GetBuffedValue;
	params.Item = Item;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShieldDPS != nullptr)
		*ShieldDPS = params.ShieldDPS;
	if (HullDPS != nullptr)
		*HullDPS = params.HullDPS;
}


// Function LIB_F_General.LIB_F_General_C.GetScreenSizePercentage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScreenSize                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_GetScreenSizePercentage(class UPrimitiveComponent** Component, class UObject** __WorldContext, float* ScreenSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetScreenSizePercentage");

	ULIB_F_General_C_GetScreenSizePercentage_Params params;
	params.Component = Component;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenSize != nullptr)
		*ScreenSize = params.ScreenSize;
}


// Function LIB_F_General.LIB_F_General_C.MouseMoveDeltaAsAxisInput
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D*              MouseDelta                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxDelta                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               AxisInput                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_MouseMoveDeltaAsAxisInput(struct FVector2D* MouseDelta, float* MaxDelta, class UObject** __WorldContext, struct FVector2D* AxisInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.MouseMoveDeltaAsAxisInput");

	ULIB_F_General_C_MouseMoveDeltaAsAxisInput_Params params;
	params.MouseDelta = MouseDelta;
	params.MaxDelta = MaxDelta;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AxisInput != nullptr)
		*AxisInput = params.AxisInput;
}


// Function LIB_F_General.LIB_F_General_C.GetFirstActorOfClass
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_GetFirstActorOfClass(class UClass** ActorClass, class UObject** __WorldContext, class AActor** Actor, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetFirstActorOfClass");

	ULIB_F_General_C_GetFirstActorOfClass_Params params;
	params.ActorClass = ActorClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function LIB_F_General.LIB_F_General_C.CalculateLightIntensityFalloff
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Attenuation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         BaseIntensity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Exponent                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                LightLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                CheckLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_CalculateLightIntensityFalloff(float* Attenuation, float* BaseIntensity, float* Exponent, struct FVector* LightLocation, struct FVector* CheckLocation, class UObject** __WorldContext, float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.CalculateLightIntensityFalloff");

	ULIB_F_General_C_CalculateLightIntensityFalloff_Params params;
	params.Attenuation = Attenuation;
	params.BaseIntensity = BaseIntensity;
	params.Exponent = Exponent;
	params.LightLocation = LightLocation;
	params.CheckLocation = CheckLocation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Intensity != nullptr)
		*Intensity = params.Intensity;
}


// Function LIB_F_General.LIB_F_General_C.CloseIngameMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_CloseIngameMenu(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.CloseIngameMenu");

	ULIB_F_General_C_CloseIngameMenu_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_General.LIB_F_General_C.GetMusicManager
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UIMusicManager_C> MusicManager                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_GetMusicManager(class UObject** __WorldContext, TScriptInterface<class UIMusicManager_C>* MusicManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetMusicManager");

	ULIB_F_General_C_GetMusicManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MusicManager != nullptr)
		*MusicManager = params.MusicManager;
}


// Function LIB_F_General.LIB_F_General_C.GetAllMeshesInActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IncludeChildActors             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          VisibleOnly                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CollidingOnly                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel>* CollisionResponseFilter        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMeshComponent*>  Meshes                         (Parm, OutParm, ZeroConstructor)

void ULIB_F_General_C::STATIC_GetAllMeshesInActor(class AActor** Actor, bool* IncludeChildActors, bool* VisibleOnly, bool* CollidingOnly, TEnumAsByte<ECollisionChannel>* CollisionResponseFilter, class UObject** __WorldContext, TArray<class UMeshComponent*>* Meshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetAllMeshesInActor");

	ULIB_F_General_C_GetAllMeshesInActor_Params params;
	params.Actor = Actor;
	params.IncludeChildActors = IncludeChildActors;
	params.VisibleOnly = VisibleOnly;
	params.CollidingOnly = CollidingOnly;
	params.CollisionResponseFilter = CollisionResponseFilter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Meshes != nullptr)
		*Meshes = params.Meshes;
}


// Function LIB_F_General.LIB_F_General_C.GetSocketInfo
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSTRCT_SocketInfo       SocketInfo                     (Parm, OutParm, IsPlainOldData)

void ULIB_F_General_C::STATIC_GetSocketInfo(struct FName* SocketName, class USceneComponent** Component, class UObject** __WorldContext, struct FSTRCT_SocketInfo* SocketInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetSocketInfo");

	ULIB_F_General_C_GetSocketInfo_Params params;
	params.SocketName = SocketName;
	params.Component = Component;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SocketInfo != nullptr)
		*SocketInfo = params.SocketInfo;
}


// Function LIB_F_General.LIB_F_General_C.GetAllSocketsInActor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FilterBySubstring              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 Substring                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSTRCT_SocketInfo> sockets                        (Parm, OutParm, ZeroConstructor)

void ULIB_F_General_C::STATIC_GetAllSocketsInActor(class AActor** Actor, bool* FilterBySubstring, class FString* Substring, class UObject** __WorldContext, TArray<struct FSTRCT_SocketInfo>* sockets)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetAllSocketsInActor");

	ULIB_F_General_C_GetAllSocketsInActor_Params params;
	params.Actor = Actor;
	params.FilterBySubstring = FilterBySubstring;
	params.Substring = Substring;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sockets != nullptr)
		*sockets = params.sockets;
}


// Function LIB_F_General.LIB_F_General_C.GetGlobalGravity
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_GetGlobalGravity(class UObject** __WorldContext, float* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.GetGlobalGravity");

	ULIB_F_General_C_GetGlobalGravity_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gravity != nullptr)
		*Gravity = params.Gravity;
}


// Function LIB_F_General.LIB_F_General_C.PrintFocusedWidgets
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_PrintFocusedWidgets(class UObject** WorldContextObject, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.PrintFocusedWidgets");

	ULIB_F_General_C_PrintFocusedWidgets_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_General.LIB_F_General_C.SetAIEnabled
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAIController**          AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_SetAIEnabled(bool* Enabled, class AAIController** AIController, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.SetAIEnabled");

	ULIB_F_General_C_SetAIEnabled_Params params;
	params.Enabled = Enabled;
	params.AIController = AIController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_General.LIB_F_General_C.PlayCameraShake
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ShakeClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FalloffRadius                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_PlayCameraShake(class UClass** ShakeClass, class AActor** Target, float* Scale, float* FalloffRadius, struct FVector* Location, class UObject** __WorldContext, float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.PlayCameraShake");

	ULIB_F_General_C_PlayCameraShake_Params params;
	params.ShakeClass = ShakeClass;
	params.Target = Target;
	params.Scale = Scale;
	params.FalloffRadius = FalloffRadius;
	params.Location = Location;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Intensity != nullptr)
		*Intensity = params.Intensity;
}


// Function LIB_F_General.LIB_F_General_C.SetBillboardSize
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialBillboardComponent** Billboard                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_SetBillboardSize(class UMaterialBillboardComponent** Billboard, float* Size, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.SetBillboardSize");

	ULIB_F_General_C_SetBillboardSize_Params params;
	params.Billboard = Billboard;
	params.Size = Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_General.LIB_F_General_C.CreateAndSetMaterialInstance
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* MaterialInstance               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_General_C::STATIC_CreateAndSetMaterialInstance(class UPrimitiveComponent** Component, int* Element, class UObject** __WorldContext, class UMaterialInstanceDynamic** MaterialInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_General.LIB_F_General_C.CreateAndSetMaterialInstance");

	ULIB_F_General_C_CreateAndSetMaterialInstance_Params params;
	params.Component = Component;
	params.Element = Element;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialInstance != nullptr)
		*MaterialInstance = params.MaterialInstance;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
