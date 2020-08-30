#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Crosshair_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Crosshair.WG_Crosshair_C.SetCrosshairImages
struct UWG_Crosshair_C_SetCrosshairImages_Params
{
	struct FName*                                      WeaponCategory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Crosshair.WG_Crosshair_C.GetCrosshairColor
struct UWG_Crosshair_C_GetCrosshairColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WG_Crosshair.WG_Crosshair_C.OnJumpChargeTicked_Event_1
struct UWG_Crosshair_C_OnJumpChargeTicked_Event_1_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EJumpAbortType>*                       AbortedType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Crosshair.WG_Crosshair_C.SetReady
struct UWG_Crosshair_C_SetReady_Params
{
	bool*                                              Ready;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Crosshair.WG_Crosshair_C.Tick
struct UWG_Crosshair_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Crosshair.WG_Crosshair_C.ShowHitIndicator
struct UWG_Crosshair_C_ShowHitIndicator_Params
{
};

// Function WG_Crosshair.WG_Crosshair_C.SetWeaponCategory
struct UWG_Crosshair_C_SetWeaponCategory_Params
{
	struct FName*                                      WeaponCategory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Crosshair.WG_Crosshair_C.EnterInterceptionState
struct UWG_Crosshair_C_EnterInterceptionState_Params
{
	class AEscapeTarget**                              EscapetargetRef;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Crosshair.WG_Crosshair_C.InterceptionGameStateChange
struct UWG_Crosshair_C_InterceptionGameStateChange_Params
{
	TEnumAsByte<EEscapeTargetState>*                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEscapeTargetState>*                   OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Crosshair.WG_Crosshair_C.LeaveInterceptionState
struct UWG_Crosshair_C_LeaveInterceptionState_Params
{
};

// Function WG_Crosshair.WG_Crosshair_C.SetWeaponChargeOrRampUpRatio
struct UWG_Crosshair_C_SetWeaponChargeOrRampUpRatio_Params
{
	float*                                             ChargreRatio;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HasChargeOrRampUpTime;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Crosshair.WG_Crosshair_C.Construct
struct UWG_Crosshair_C_Construct_Params
{
};

// Function WG_Crosshair.WG_Crosshair_C.OnJumpChargeStarted
struct UWG_Crosshair_C_OnJumpChargeStarted_Params
{
};

// Function WG_Crosshair.WG_Crosshair_C.OnJumpChargeAborted
struct UWG_Crosshair_C_OnJumpChargeAborted_Params
{
	TEnumAsByte<EJumpAbortType>*                       AbortedType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Crosshair.WG_Crosshair_C.ExecuteUbergraph_WG_Crosshair
struct UWG_Crosshair_C_ExecuteUbergraph_WG_Crosshair_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
