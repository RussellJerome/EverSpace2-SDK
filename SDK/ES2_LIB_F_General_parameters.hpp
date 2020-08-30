#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_LIB_F_General_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LIB_F_General.LIB_F_General_C.GetRepairInfo
struct ULIB_F_General_C_GetRepairInfo_Params
{
	float*                                             RepairCostPerHitpoint;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HPCurrent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              HPMax;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              HPRepair;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.OpenPauseMenu
struct ULIB_F_General_C_OpenPauseMenu_Params
{
	class UObject**                                    WorldContextObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.CheckForItemImpactEffects
struct ULIB_F_General_C_CheckForItemImpactEffects_Params
{
	struct FTransform*                                 Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	EWeaponImpact*                                     ImpactType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CriticalHit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotDirection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponData*                                WeaponConfig;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.GetPilotAudioManager
struct ULIB_F_General_C_GetPilotAudioManager_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UIPilotAudioManager_C>      PilotAudioManager;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.GetScreenSizeAngle
struct ULIB_F_General_C_GetScreenSizeAngle_Params
{
	float*                                             WorldDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WorldRadius;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.DuplicateMeshComponents
struct ULIB_F_General_C_DuplicateMeshComponents_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMeshComponent*>                      Meshes;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<ECollisionEnabled>*                    CollisionEnabled;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              AttachToSourceMesh;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMeshComponent*>                      NewMeshes;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function LIB_F_General.LIB_F_General_C.DestroyAndClearComponentArray
struct ULIB_F_General_C_DestroyAndClearComponentArray_Params
{
	TArray<class UActorComponent*>                     ComponentArray;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.PushPop
struct ULIB_F_General_C_PushPop_Params
{
	int                                                Stack;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool*                                              Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.IsBoostingForwardWithMinSpeedPercentage
struct ULIB_F_General_C_IsBoostingForwardWithMinSpeedPercentage_Params
{
	class UShipMovementComponent**                     ShipMovementComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             MinForwardSpeedPercentage;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BoostingForward;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.IsAnyEnemyTargetingPlayer
struct ULIB_F_General_C_IsAnyEnemyTargetingPlayer_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.VertigoEffect
struct ULIB_F_General_C_VertigoEffect_Params
{
	float*                                             InitialDistance;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InitialFOV;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FOVOffset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceOffset;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.SpawnWeaponImpactEffect
struct ULIB_F_General_C_SpawnWeaponImpactEffect_Params
{
	class UParticleSystem**                            ParticleSystem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	EWeaponImpact*                                     ImpactType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CriticalHit;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ShotDirection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              SpawnDecal;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CalculateShieldOffset;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SpawnDecalMaxDistance;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             UseShieldOffsetMaxDistance;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.CreateDPSAttributes
struct ULIB_F_General_C_CreateDPSAttributes_Params
{
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemAttribute*                              HullDPSAttribute;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UItemAttribute*                              ShieldDPSAttribute;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.SetSpeedParticlesEnabled
struct ULIB_F_General_C_SetSpeedParticlesEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.GetSelfRegisteringComponent
struct ULIB_F_General_C_GetSelfRegisteringComponent_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USelfRegisteringComponent*                   SelfRegistering;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.GetSkyboxActor
struct ULIB_F_General_C_GetSkyboxActor_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Skybox_Background_C*                     Skybox;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.GetResourceItemIDFromSpawnType
struct ULIB_F_General_C_GetResourceItemIDFromSpawnType_Params
{
	TEnumAsByte<ESpawnGroup>*                          SpawnGroupType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResourceItemID;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.GetResourceClassFromSpawnType
struct ULIB_F_General_C_GetResourceClassFromSpawnType_Params
{
	TEnumAsByte<ESpawnGroup>*                          SpawnGroupType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpawnClass;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.InputRotateComponent
struct ULIB_F_General_C_InputRotateComponent_Params
{
	class USceneComponent**                            Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             PitchMin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PitchMax;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RotationSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             LagStiffness;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    InputVectorPitchYawRoll;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InvertPitch;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.GetAllMaterialsInActor
struct ULIB_F_General_C_GetAllMaterialsInActor_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IncludeChildActors;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CreateInstances;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // (Parm, OutParm, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            MaterialInstances;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function LIB_F_General.LIB_F_General_C.GetWeaponDPS
struct ULIB_F_General_C_GetWeaponDPS_Params
{
	bool*                                              GetBuffedValue;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShieldDPS;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              HullDPS;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.GetScreenSizePercentage
struct ULIB_F_General_C_GetScreenSizePercentage_Params
{
	class UPrimitiveComponent**                        Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSize;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.MouseMoveDeltaAsAxisInput
struct ULIB_F_General_C_MouseMoveDeltaAsAxisInput_Params
{
	struct FVector2D*                                  MouseDelta;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxDelta;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   AxisInput;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.GetFirstActorOfClass
struct ULIB_F_General_C_GetFirstActorOfClass_Params
{
	class UClass**                                     ActorClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.CalculateLightIntensityFalloff
struct ULIB_F_General_C_CalculateLightIntensityFalloff_Params
{
	float*                                             Attenuation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BaseIntensity;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Exponent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    LightLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    CheckLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.CloseIngameMenu
struct ULIB_F_General_C_CloseIngameMenu_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.GetMusicManager
struct ULIB_F_General_C_GetMusicManager_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UIMusicManager_C>           MusicManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.GetAllMeshesInActor
struct ULIB_F_General_C_GetAllMeshesInActor_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IncludeChildActors;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              VisibleOnly;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CollidingOnly;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>*                    CollisionResponseFilter;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMeshComponent*>                      Meshes;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function LIB_F_General.LIB_F_General_C.GetSocketInfo
struct ULIB_F_General_C_GetSocketInfo_Params
{
	struct FName*                                      SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSTRCT_SocketInfo                           SocketInfo;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.GetAllSocketsInActor
struct ULIB_F_General_C_GetAllSocketsInActor_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FilterBySubstring;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     Substring;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSTRCT_SocketInfo>                   sockets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function LIB_F_General.LIB_F_General_C.GetGlobalGravity
struct ULIB_F_General_C_GetGlobalGravity_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gravity;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.PrintFocusedWidgets
struct ULIB_F_General_C_PrintFocusedWidgets_Params
{
	class UObject**                                    WorldContextObject;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.SetAIEnabled
struct ULIB_F_General_C_SetAIEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController**                              AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.PlayCameraShake
struct ULIB_F_General_C_PlayCameraShake_Params
{
	class UClass**                                     ShakeClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FalloffRadius;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.SetBillboardSize
struct ULIB_F_General_C_SetBillboardSize_Params
{
	class UMaterialBillboardComponent**                Billboard;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_General.LIB_F_General_C.CreateAndSetMaterialInstance
struct ULIB_F_General_C_CreateAndSetMaterialInstance_Params
{
	class UPrimitiveComponent**                        Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               Element;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
