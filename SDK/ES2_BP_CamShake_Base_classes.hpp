#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_CamShake_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CamShake_Base.BP_CamShake_Base_C
// 0x0038 (0x0198 - 0x0160)
class UBP_CamShake_Base_C : public UCameraShake
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0160(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FirstPersonScale;                                         // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVOscillator                                BaseLocOsc;                                               // 0x016C(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      PlayerShip;                                               // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CamShake_Base.BP_CamShake_Base_C");
		return ptr;
	}


	void ScaleLocOsc(struct FVOscillator* SourceOsc, struct FVector* NewParam);
	void ReceivePlayShake(float* Scale);
	void ExecuteUbergraph_BP_CamShake_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
