#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_DistanceCullComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DistanceCullComponent.BP_DistanceCullComponent_C
// 0x0060 (0x0158 - 0x00F8)
class UBP_DistanceCullComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Enabled;                                                  // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	TArray<struct FSTRCT_DistanceCullSettings>         CullSettings;                                             // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CullDistanceIndex;                                        // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDrawDistance;                                          // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CheckInterval;                                            // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LastCullDistanceIndex;                                    // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugPrintIndex;                                          // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	TArray<class UClass*>                              ExcludeComponentClasses;                                  // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              GlobalDistanceFactor;                                     // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ExcludeTagString;                                         // 0x0144(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEnabled;                                                // 0x014C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x014D(0x0003) MISSED OFFSET
	struct FTimerHandle                                CullCheckTimer;                                           // 0x0150(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DistanceCullComponent.BP_DistanceCullComponent_C");
		return ptr;
	}


	void MaxCullIndex(int* CullIndex, bool* TRUE);
	void GetCullSettingsIndexFromDistance(int* Index);
	void SetCulled(bool* Culled, struct FSTRCT_DistanceCullSettings* CullSettings);
	void ReceiveBeginPlay();
	void CheckCullDistance();
	void ExcludeComponent(class UActorComponent** TargetComponent);
	void SetEnabled(bool* Enabled);
	void SetDrawDistanceCulling(bool* Enabled);
	void ExecuteUbergraph_BP_DistanceCullComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
