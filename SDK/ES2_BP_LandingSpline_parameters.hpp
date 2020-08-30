#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_LandingSpline_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LandingSpline.BP_LandingSpline_C.InterpolateToPad
struct UBP_LandingSpline_C_InterpolateToPad_Params
{
};

// Function BP_LandingSpline.BP_LandingSpline_C.InterpolateToSpline
struct UBP_LandingSpline_C_InterpolateToSpline_Params
{
};

// Function BP_LandingSpline.BP_LandingSpline_C.StartInterpolating
struct UBP_LandingSpline_C_StartInterpolating_Params
{
};

// Function BP_LandingSpline.BP_LandingSpline_C.ReceiveTick
struct UBP_LandingSpline_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LandingSpline.BP_LandingSpline_C.ExecuteUbergraph_BP_LandingSpline
struct UBP_LandingSpline_C_ExecuteUbergraph_BP_LandingSpline_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LandingSpline.BP_LandingSpline_C.FinishedMoveOnSpline__DelegateSignature
struct UBP_LandingSpline_C_FinishedMoveOnSpline__DelegateSignature_Params
{
	class AESPawn**                                    Ship;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
