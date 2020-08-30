#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MapExporter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MapExporter.BP_MapExporter_C.GetSystemData
struct ABP_MapExporter_C_GetSystemData_Params
{
	struct FName*                                      SystemID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSystemData                                 SystemData;                                               // (Parm, OutParm)
};

// Function BP_MapExporter.BP_MapExporter_C.Update
struct ABP_MapExporter_C_Update_Params
{
};

// Function BP_MapExporter.BP_MapExporter_C.UserConstructionScript
struct ABP_MapExporter_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
