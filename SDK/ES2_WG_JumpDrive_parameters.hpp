#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_JumpDrive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_JumpDrive.WG_JumpDrive_C.LerpAnimationPositionByOpacity
struct UWG_JumpDrive_C_LerpAnimationPositionByOpacity_Params
{
	class UImage**                                     Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_JumpDrive.WG_JumpDrive_C.InitValuesForJumpCompleteAnimation
struct UWG_JumpDrive_C_InitValuesForJumpCompleteAnimation_Params
{
	class UImage**                                     Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_JumpDrive.WG_JumpDrive_C.JumpCompleteAnimation
struct UWG_JumpDrive_C_JumpCompleteAnimation_Params
{
	class UImage**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_JumpDrive.WG_JumpDrive_C.AddToMaps
struct UWG_JumpDrive_C_AddToMaps_Params
{
	class UImage**                                     Key;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function WG_JumpDrive.WG_JumpDrive_C.LerpAnimationsPosition
struct UWG_JumpDrive_C_LerpAnimationsPosition_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TranslatePosition;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WG_JumpDrive.WG_JumpDrive_C.StartNextAnimation3
struct UWG_JumpDrive_C_StartNextAnimation3_Params
{
};

// Function WG_JumpDrive.WG_JumpDrive_C.StartNextAnimation2
struct UWG_JumpDrive_C_StartNextAnimation2_Params
{
};

// Function WG_JumpDrive.WG_JumpDrive_C.StartNextAnimation1
struct UWG_JumpDrive_C_StartNextAnimation1_Params
{
};

// Function WG_JumpDrive.WG_JumpDrive_C.OnInitialized
struct UWG_JumpDrive_C_OnInitialized_Params
{
};

// Function WG_JumpDrive.WG_JumpDrive_C.OnJumpChargeStarted
struct UWG_JumpDrive_C_OnJumpChargeStarted_Params
{
};

// Function WG_JumpDrive.WG_JumpDrive_C.OnGrowAndBlink1Finished
struct UWG_JumpDrive_C_OnGrowAndBlink1Finished_Params
{
};

// Function WG_JumpDrive.WG_JumpDrive_C.OnJumpChargeCompleted
struct UWG_JumpDrive_C_OnJumpChargeCompleted_Params
{
	TEnumAsByte<EJumpMethod>*                          JumpMethod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_JumpDrive.WG_JumpDrive_C.OnJumpChargeAborted
struct UWG_JumpDrive_C_OnJumpChargeAborted_Params
{
	TEnumAsByte<EJumpAbortType>*                       AbortedType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_JumpDrive.WG_JumpDrive_C.OnGrowAndBlink2Finished
struct UWG_JumpDrive_C_OnGrowAndBlink2Finished_Params
{
};

// Function WG_JumpDrive.WG_JumpDrive_C.OnGrowAndBlink3Finished
struct UWG_JumpDrive_C_OnGrowAndBlink3Finished_Params
{
};

// Function WG_JumpDrive.WG_JumpDrive_C.OnGrowAndBlink4Finished
struct UWG_JumpDrive_C_OnGrowAndBlink4Finished_Params
{
};

// Function WG_JumpDrive.WG_JumpDrive_C.OnJumpChargeTicked
struct UWG_JumpDrive_C_OnJumpChargeTicked_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EJumpAbortType>*                       AbortedType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_JumpDrive.WG_JumpDrive_C.SetProgress
struct UWG_JumpDrive_C_SetProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_JumpDrive.WG_JumpDrive_C.Construct
struct UWG_JumpDrive_C_Construct_Params
{
};

// Function WG_JumpDrive.WG_JumpDrive_C.Tick
struct UWG_JumpDrive_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_JumpDrive.WG_JumpDrive_C.OnJumpDriveCanBeUsedChange
struct UWG_JumpDrive_C_OnJumpDriveCanBeUsedChange_Params
{
	bool*                                              bCanBeUsed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_JumpDrive.WG_JumpDrive_C.ExecuteUbergraph_WG_JumpDrive
struct UWG_JumpDrive_C_ExecuteUbergraph_WG_JumpDrive_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
