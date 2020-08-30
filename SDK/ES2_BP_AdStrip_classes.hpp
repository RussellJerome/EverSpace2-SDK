#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_AdStrip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AdStrip.BP_AdStrip_C
// 0x0070 (0x03A0 - 0x0330)
class ABP_AdStrip_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                            Spline;                                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentPointIndex;                                        // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Size;                                                     // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCanvasRenderTarget2D*                       TextRendertarget;                                         // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x0368(0x0028) (Edit, BlueprintVisible)
	TArray<class UMaterialInstanceDynamic*>            StripMaterials;                                           // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                GapSize;                                                  // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MonospaceWidth;                                           // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Light;                                                    // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	float                                              PanningSpeed;                                             // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AdStrip.BP_AdStrip_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UpdateCanvas(class UCanvas** Canvas, int* Width, int* Height);
	void ExecuteUbergraph_BP_AdStrip(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
