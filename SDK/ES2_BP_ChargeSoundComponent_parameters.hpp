#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ChargeSoundComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.ReceiveTick
struct UBP_ChargeSoundComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.Start
struct UBP_ChargeSoundComponent_C_Start_Params
{
};

// Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.End
struct UBP_ChargeSoundComponent_C_End_Params
{
};

// Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.Charge
struct UBP_ChargeSoundComponent_C_Charge_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.ChargeEnd
struct UBP_ChargeSoundComponent_C_ChargeEnd_Params
{
};

// Function BP_ChargeSoundComponent.BP_ChargeSoundComponent_C.ExecuteUbergraph_BP_ChargeSoundComponent
struct UBP_ChargeSoundComponent_C_ExecuteUbergraph_BP_ChargeSoundComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
