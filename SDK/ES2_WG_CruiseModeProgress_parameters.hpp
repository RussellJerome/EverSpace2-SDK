#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_CruiseModeProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.PreConstruct
struct UWG_CruiseModeProgress_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.Construct
struct UWG_CruiseModeProgress_C_Construct_Params
{
};

// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnInitialized
struct UWG_CruiseModeProgress_C_OnInitialized_Params
{
};

// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeChargeStart
struct UWG_CruiseModeProgress_C_OnCruiseModeChargeStart_Params
{
};

// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeCharge
struct UWG_CruiseModeProgress_C_OnCruiseModeCharge_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.SetProgress
struct UWG_CruiseModeProgress_C_SetProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeBlocked
struct UWG_CruiseModeProgress_C_OnCruiseModeBlocked_Params
{
};

// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeEnemiesTooClose
struct UWG_CruiseModeProgress_C_OnCruiseModeEnemiesTooClose_Params
{
};

// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeStart
struct UWG_CruiseModeProgress_C_OnCruiseModeStart_Params
{
};

// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeEnd
struct UWG_CruiseModeProgress_C_OnCruiseModeEnd_Params
{
};

// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.OnCruiseModeChargeEnd
struct UWG_CruiseModeProgress_C_OnCruiseModeChargeEnd_Params
{
};

// Function WG_CruiseModeProgress.WG_CruiseModeProgress_C.ExecuteUbergraph_WG_CruiseModeProgress
struct UWG_CruiseModeProgress_C_ExecuteUbergraph_WG_CruiseModeProgress_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
