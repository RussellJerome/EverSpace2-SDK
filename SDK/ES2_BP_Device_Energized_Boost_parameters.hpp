#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Device_Energized_Boost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Device_Energized_Boost.BP_Device_Energized_Boost_C.OnDeactivate
struct ABP_Device_Energized_Boost_C_OnDeactivate_Params
{
	class AActor**                                     OwnerOfDevice;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Device_Energized_Boost.BP_Device_Energized_Boost_C.OnActivate
struct ABP_Device_Energized_Boost_C_OnActivate_Params
{
	class AActor**                                     OwnerOfDevice;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Device_Energized_Boost.BP_Device_Energized_Boost_C.ReceiveBeginPlay
struct ABP_Device_Energized_Boost_C_ReceiveBeginPlay_Params
{
};

// Function BP_Device_Energized_Boost.BP_Device_Energized_Boost_C.ReceiveTick
struct ABP_Device_Energized_Boost_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Device_Energized_Boost.BP_Device_Energized_Boost_C.ExecuteUbergraph_BP_Device_Energized_Boost
struct ABP_Device_Energized_Boost_C_ExecuteUbergraph_BP_Device_Energized_Boost_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
