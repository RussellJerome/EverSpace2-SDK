#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Ship_Player_TravelMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C
// 0x0060 (0x0E9C - 0x0E3C)
class ABP_Ship_Player_TravelMode_C : public ABP_Ship_Player_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E3C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PlanetProximityEffectLight;                               // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PlanetProximityEffectSphere;                              // 0x0E50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessTravelMode;                                    // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_TravelMode_SpeedParticles;                              // 0x0E60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              JumpDriveEnterTravelModeTimeline_Alpha_624303BF45BD1A020F6BAC8F382049F5;// 0x0E68(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    JumpDriveEnterTravelModeTimeline__Direction_624303BF45BD1A020F6BAC8F382049F5;// 0x0E6C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E6D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          JumpDriveEnterTravelModeTimeline;                         // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BaseMaxSpeedForward;                                      // 0x0E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BoostPercentage;                                          // 0x0E7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    PlanetProximityEffectMaterial;                            // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlanetProximityEffectIntensity;                           // 0x0E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoPilotActivationDistKM;                                // 0x0E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoPilotOversteerAngle;                                  // 0x0E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoPilotOvershootDistKM;                                 // 0x0E94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentAcccelerationBoostOffset;                          // 0x0E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ship_Player_TravelMode.BP_Ship_Player_TravelMode_C");
		return ptr;
	}


	void SetWorldOrigin(struct FVector* NewOrigin);
	void JumpDriveEnterTravelModeTimeline__FinishedFunc();
	void JumpDriveEnterTravelModeTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void RecenterOrigin();
	void JumpDriveVFXBeginPlay();
	void PlanetProximityEffectTick(float* Intensity);
	void PostProcessInput(float* DeltaTime, bool* bGamePaused);
	void ExecuteUbergraph_BP_Ship_Player_TravelMode(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
