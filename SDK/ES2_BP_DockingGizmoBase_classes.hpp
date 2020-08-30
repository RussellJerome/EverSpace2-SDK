#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_DockingGizmoBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DockingGizmoBase.BP_DockingGizmoBase_C
// 0x0168 (0x0548 - 0x03E0)
class ABP_DockingGizmoBase_C : public ADockingGizmo
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                            EntryLaneSpline;                                          // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              GenericLandingTimeline_BankingStrength_1AC58B01403E6AAC5940AAA2B716339E;// 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GenericLandingTimeline_MoveToPad_1AC58B01403E6AAC5940AAA2B716339E;// 0x03F4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    GenericLandingTimeline__Direction_1AC58B01403E6AAC5940AAA2B716339E;// 0x03F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          GenericLandingTimeline;                                   // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_Landing_EntryLane_Deceleration_FD4670904F5746489CCCC19D4C1F0946;// 0x0408(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Landing_EntryLane__Direction_FD4670904F5746489CCCC19D4C1F0946;// 0x040C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Landing_EntryLane;                               // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_Launch_New_Alpha_434F4D6149FC875526C38E823AA65F5B;// 0x0418(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Launch_New__Direction_434F4D6149FC875526C38E823AA65F5B;// 0x041C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Launch_New;                                      // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_Launch_Alpha_F658A504441FDC84B30D038CDBF0A7EF;   // 0x0428(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Launch__Direction_F658A504441FDC84B30D038CDBF0A7EF;// 0x042C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Launch;                                          // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_Landing_YawAlpha_F3FF021549D761B6D52DF5BD9B7653E6;// 0x0438(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_Landing_RollPitchAlpha_F3FF021549D761B6D52DF5BD9B7653E6;// 0x043C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_Landing_Time_F3FF021549D761B6D52DF5BD9B7653E6;   // 0x0440(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_Landing_SpeedAlpha_F3FF021549D761B6D52DF5BD9B7653E6;// 0x0444(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_Landing_PositionAlpha_F3FF021549D761B6D52DF5BD9B7653E6;// 0x0448(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Landing__Direction_F3FF021549D761B6D52DF5BD9B7653E6;// 0x044C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x044D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Landing;                                         // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0458(0x0008) MISSED OFFSET
	struct FTransform                                  InitialShipTransform;                                     // 0x0460(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    InitialBankingRotation;                                   // 0x0490(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     InitialVelocity;                                          // 0x049C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET
	struct FTransform                                  TargetTransform;                                          // 0x04B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FFloatRange                                 JumpDistance;                                             // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseEntryLaneSpline;                                       // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	float                                              NormalizedShipBaseVelocity;                               // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NormalizedPositionOnSpline;                               // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	class ULevelSequence*                              LandingSequence;                                          // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TouchDownSequencePlaying;                                 // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	class AESPawn*                                     LandingShip;                                              // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialDistanceFactor;                                    // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LandingLocation;                                          // 0x051C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_LandingStrip_C*                          LandingStrip;                                             // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FRotator                                    InitialBankRotation;                                      // 0x0530(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	class USplineComponent*                            TempSpline;                                               // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DockingGizmoBase.BP_DockingGizmoBase_C");
		return ptr;
	}


	struct FVector GetApproachingLocation();
	void GetRandomJumpTarget(class AJumpTarget** JumpTarget);
	void UpdateEditorPreview();
	void UserConstructionScript();
	void Timeline_Launch__FinishedFunc();
	void Timeline_Launch__UpdateFunc();
	void Timeline_Launch_New__FinishedFunc();
	void Timeline_Launch_New__UpdateFunc();
	void Timeline_Landing__FinishedFunc();
	void Timeline_Landing__UpdateFunc();
	void Timeline_Landing_EntryLane__FinishedFunc();
	void Timeline_Landing_EntryLane__UpdateFunc();
	void GenericLandingTimeline__FinishedFunc();
	void GenericLandingTimeline__UpdateFunc();
	void TouchDownShip(class AESPawn** ShipToLand);
	void LaunchShip(class AESPawn** ShipToLaunch);
	void LandingAnimationFinished();
	void ReceiveTick(float* DeltaSeconds);
	void LandShip(class AESPawn** ShipToLand);
	void FinishedMoveOnSpline(class AESPawn** Ship);
	void ExecuteUbergraph_BP_DockingGizmoBase(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
