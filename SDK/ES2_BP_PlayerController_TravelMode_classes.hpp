#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PlayerController_TravelMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C
// 0x0034 (0x083C - 0x0808)
class ABP_PlayerController_TravelMode_C : public ABP_PlayerController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0808(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_TravelMode_SpaceObject_Base_C*           CurrentSpaceObject;                                       // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoPilotOversteerAngle;                                  // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoPilotOvershootDistKM;                                 // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_TravelMode_Location_C*                   AutoPilotDestination;                                     // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FModifierHandle                             AutoPilotSpeedModifier;                                   // 0x0828(0x0008) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FTimerHandle                                ProximityCheckTimer;                                      // 0x0830(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AutoPilotEnterLocationDistanceKM;                         // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerController_TravelMode.BP_PlayerController_TravelMode_C");
		return ptr;
	}


	void SetSpeedLimitFactor(float* MaxSpeedFactor);
	void WayObstructedByPlanet(class AActor** Ship, class AActor** Target, class ABP_TravelMode_Planet_C** Planet, bool* Obstructed);
	void WayObstructedByPlanet_Old(class AActor** Ship, class AActor** Target, class ABP_TravelMode_Planet_C** Planet, bool* Obstructed);
	struct FVector FlyAroundPlanetOld(struct FVector* Ship, struct FVector* Destination, struct FVector* PlanetCenter, float* OrbitRadiusUu);
	void PlayerEnteredMassVolume(class ABP_TravelMode_SpaceObject_Base_C** SpaceObject, bool* DeathZone);
	void PlayerLeftMassVolume(class ABP_TravelMode_SpaceObject_Base_C** SpaceObject);
	void ReceiveTick(float* DeltaSeconds);
	void FadedOut(class UWG_Fullscreen_Fade_C** Widget);
	void OnProcessPlayerInput();
	void ReceiveBeginPlay();
	void RecheckProximity();
	void ReviveRequest();
	void LoadCheckpointRequest();
	void LoadMainMenuRequest();
	void ExecuteUbergraph_BP_PlayerController_TravelMode(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
