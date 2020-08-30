#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_EnvironmentGenerator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EnvironmentGenerator.BP_EnvironmentGenerator_C
// 0x01C1 (0x04F1 - 0x0330)
class ABP_EnvironmentGenerator_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        BackgroundFogMesh;                                        // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UExponentialHeightFogComponent*              Fog;                                                      // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FogPivot;                                                 // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_PlanetDataComponent_C*                   BP_PlanetDataComponent;                                   // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkyLightComponent*                          SkyLightSurface;                                          // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkyLightComponent*                          SkyLightSpace;                                            // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               UseLocationData;                                          // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Update;                                                   // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TemporaryLocation;                                        // 0x0372(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0373(0x0001) MISSED OFFSET
	struct FRandomStream                               RandomStream;                                             // 0x0374(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PlanetSurface;                                            // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	float                                              PlanetLowOrbitDistanceThreshold;                          // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlanetSurfaceDistanceThreshold;                           // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LowOrbit;                                                 // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	class ABP_Skybox_Sun_C*                            SkyboxSun;                                                // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0398(0x0008) MISSED OFFSET
	struct FLocationSpaceObject                        CurrentSpaceObject;                                       // 0x03A0(0x00C0) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSTRCT_PlanetInstance>               Planets;                                                  // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              PlanetDistanceScale;                                      // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                PlanetMeshes;                                             // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              NebulaDistanceScale;                                      // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SunDistanceScale;                                         // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SunRelativeLocation;                                      // 0x0490(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NebulaFogAmountMax;                                       // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSTRCT_FogSettings                          FogSettings;                                              // 0x04A0(0x0040) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SystemColor;                                              // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HidePlanets;                                              // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnvironmentGenerator.BP_EnvironmentGenerator_C");
		return ptr;
	}


	void UpdateFog(struct FSTRCT_FogSettings* FogSettings);
	void CreatePlanet(struct FSTRCT_PlanetInstance* PlanetData);
	void ProcessSpaceObjects();
	void UpdateEnviroment();
	void UserConstructionScript();
	void InitializeEnvironment();
	void ReceiveBeginPlay();
	void UpdateMPC();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_EnvironmentGenerator(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
