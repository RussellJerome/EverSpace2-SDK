#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_TravelMode_Planet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TravelMode_Planet.BP_TravelMode_Planet_C
// 0x00C2 (0x04B8 - 0x03F6)
class ABP_TravelMode_Planet_C : public ABP_TravelMode_SpaceObject_Base_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x03F6(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USelfRegisteringComponent*                   SelfRegistering;                                          // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DebugOrbitPlane;                                          // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RingMesh;                                                 // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ShadowCasterMesh;                                         // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_PlanetDataComponent_C*                   BP_PlanetDataComponent;                                   // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PlanetMesh;                                               // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Scale;                                                    // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseScale;                                                // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPlanetTypes>                          PlanetType;                                               // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	struct FSTRCT_PlanetType                           PlanetTypes;                                              // 0x0440(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Materials;                                                // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FSTRCT_PlanetType                           PlanetData;                                               // 0x0470(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Moon;                                                     // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Ring;                                                     // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0492(0x0002) MISSED OFFSET
	struct FLinearColor                                RingColor;                                                // 0x0494(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RingUVOffset;                                             // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RingDensity;                                              // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RingWidth;                                                // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_Ship_Player_TravelMode_C*                PlayerShip;                                               // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TravelMode_Planet.BP_TravelMode_Planet_C");
		return ptr;
	}


	void UpdateMap();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TravelMode_Planet(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
