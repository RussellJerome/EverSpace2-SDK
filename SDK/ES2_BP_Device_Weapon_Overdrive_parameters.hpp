#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Device_Weapon_Overdrive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Device_Weapon_Overdrive.BP_Device_Weapon_Overdrive_C.OnActivate
struct ABP_Device_Weapon_Overdrive_C_OnActivate_Params
{
	class AActor**                                     OwnerOfDevice;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Device_Weapon_Overdrive.BP_Device_Weapon_Overdrive_C.ReceiveBeginPlay
struct ABP_Device_Weapon_Overdrive_C_ReceiveBeginPlay_Params
{
};

// Function BP_Device_Weapon_Overdrive.BP_Device_Weapon_Overdrive_C.ExecuteUbergraph_BP_Device_Weapon_Overdrive
struct ABP_Device_Weapon_Overdrive_C_ExecuteUbergraph_BP_Device_Weapon_Overdrive_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
