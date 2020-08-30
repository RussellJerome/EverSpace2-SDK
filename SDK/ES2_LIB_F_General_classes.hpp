#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_LIB_F_General_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_F_General.LIB_F_General_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_F_General_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_F_General.LIB_F_General_C");
		return ptr;
	}


	void STATIC_GetRepairInfo(float* RepairCostPerHitpoint, class UObject** __WorldContext, float* HPCurrent, float* HPMax, float* HPRepair, int* Cost);
	void STATIC_OpenPauseMenu(class UObject** WorldContextObject, class UObject** __WorldContext);
	void STATIC_CheckForItemImpactEffects(struct FTransform* Transform, struct FHitResult* HitInfo, EWeaponImpact* ImpactType, bool* CriticalHit, struct FVector* ShotDirection, struct FWeaponData* WeaponConfig, class AActor** Instigator, class UObject** __WorldContext);
	void STATIC_GetPilotAudioManager(class UObject** __WorldContext, TScriptInterface<class UIPilotAudioManager_C>* PilotAudioManager);
	void STATIC_GetScreenSizeAngle(float* WorldDistance, float* WorldRadius, class UObject** __WorldContext, float* Angle);
	void STATIC_DuplicateMeshComponents(class AActor** Target, TEnumAsByte<ECollisionEnabled>* CollisionEnabled, bool* AttachToSourceMesh, class UObject** __WorldContext, TArray<class UMeshComponent*>* Meshes, TArray<class UMeshComponent*>* NewMeshes);
	void STATIC_DestroyAndClearComponentArray(class UObject** __WorldContext, TArray<class UActorComponent*>* ComponentArray);
	void STATIC_PushPop(bool* Input, class UObject** __WorldContext, int* Stack, bool* Result);
	void STATIC_IsBoostingForwardWithMinSpeedPercentage(class UShipMovementComponent** ShipMovementComponent, float* MinForwardSpeedPercentage, class UObject** __WorldContext, bool* BoostingForward);
	void STATIC_IsAnyEnemyTargetingPlayer(class UObject** __WorldContext, bool* Result);
	void STATIC_VertigoEffect(float* InitialDistance, float* InitialFOV, float* FOVOffset, class UObject** __WorldContext, float* DistanceOffset);
	void STATIC_SpawnWeaponImpactEffect(class UParticleSystem** ParticleSystem, struct FTransform* Transform, struct FHitResult* HitInfo, EWeaponImpact* ImpactType, bool* CriticalHit, struct FVector* ShotDirection, bool* SpawnDecal, bool* CalculateShieldOffset, float* SpawnDecalMaxDistance, float* UseShieldOffsetMaxDistance, float* Scale, class UObject** __WorldContext);
	void STATIC_CreateDPSAttributes(class UItem** Item, class UObject** __WorldContext, class UItemAttribute** HullDPSAttribute, class UItemAttribute** ShieldDPSAttribute);
	void STATIC_SetSpeedParticlesEnabled(bool* Enabled, class UObject** __WorldContext);
	void STATIC_GetSelfRegisteringComponent(class AActor** Actor, class UObject** __WorldContext, class USelfRegisteringComponent** SelfRegistering);
	void STATIC_GetSkyboxActor(class UObject** __WorldContext, class ABP_Skybox_Background_C** Skybox, bool* Found);
	void STATIC_GetResourceItemIDFromSpawnType(TEnumAsByte<ESpawnGroup>* SpawnGroupType, class UObject** __WorldContext, struct FName* ResourceItemID);
	void STATIC_GetResourceClassFromSpawnType(TEnumAsByte<ESpawnGroup>* SpawnGroupType, class UObject** __WorldContext, class UClass** SpawnClass);
	void STATIC_InputRotateComponent(class USceneComponent** Target, float* PitchMin, float* PitchMax, float* RotationSpeed, float* LagStiffness, struct FVector* InputVectorPitchYawRoll, bool* InvertPitch, class UObject** __WorldContext);
	void STATIC_GetAllMaterialsInActor(class AActor** Actor, bool* IncludeChildActors, bool* CreateInstances, class UObject** __WorldContext, TArray<class UMaterialInterface*>* Materials, TArray<class UMaterialInstanceDynamic*>* MaterialInstances);
	void STATIC_GetWeaponDPS(bool* GetBuffedValue, class UItem** Item, class UObject** __WorldContext, float* ShieldDPS, float* HullDPS);
	void STATIC_GetScreenSizePercentage(class UPrimitiveComponent** Component, class UObject** __WorldContext, float* ScreenSize);
	void STATIC_MouseMoveDeltaAsAxisInput(struct FVector2D* MouseDelta, float* MaxDelta, class UObject** __WorldContext, struct FVector2D* AxisInput);
	void STATIC_GetFirstActorOfClass(class UClass** ActorClass, class UObject** __WorldContext, class AActor** Actor, bool* Found);
	void STATIC_CalculateLightIntensityFalloff(float* Attenuation, float* BaseIntensity, float* Exponent, struct FVector* LightLocation, struct FVector* CheckLocation, class UObject** __WorldContext, float* Intensity);
	void STATIC_CloseIngameMenu(class UObject** __WorldContext);
	void STATIC_GetMusicManager(class UObject** __WorldContext, TScriptInterface<class UIMusicManager_C>* MusicManager);
	void STATIC_GetAllMeshesInActor(class AActor** Actor, bool* IncludeChildActors, bool* VisibleOnly, bool* CollidingOnly, TEnumAsByte<ECollisionChannel>* CollisionResponseFilter, class UObject** __WorldContext, TArray<class UMeshComponent*>* Meshes);
	void STATIC_GetSocketInfo(struct FName* SocketName, class USceneComponent** Component, class UObject** __WorldContext, struct FSTRCT_SocketInfo* SocketInfo);
	void STATIC_GetAllSocketsInActor(class AActor** Actor, bool* FilterBySubstring, class FString* Substring, class UObject** __WorldContext, TArray<struct FSTRCT_SocketInfo>* sockets);
	void STATIC_GetGlobalGravity(class UObject** __WorldContext, float* Gravity);
	void STATIC_PrintFocusedWidgets(class UObject** WorldContextObject, class UObject** __WorldContext);
	void STATIC_SetAIEnabled(bool* Enabled, class AAIController** AIController, class UObject** __WorldContext);
	void STATIC_PlayCameraShake(class UClass** ShakeClass, class AActor** Target, float* Scale, float* FalloffRadius, struct FVector* Location, class UObject** __WorldContext, float* Intensity);
	void STATIC_SetBillboardSize(class UMaterialBillboardComponent** Billboard, float* Size, class UObject** __WorldContext);
	void STATIC_CreateAndSetMaterialInstance(class UPrimitiveComponent** Component, int* Element, class UObject** __WorldContext, class UMaterialInstanceDynamic** MaterialInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
