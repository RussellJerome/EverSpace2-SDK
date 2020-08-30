// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MapExporter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MapExporter.BP_MapExporter_C.GetSystemData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  SystemID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSystemData             SystemData                     (Parm, OutParm)

void ABP_MapExporter_C::GetSystemData(struct FName* SystemID, struct FSystemData* SystemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapExporter.BP_MapExporter_C.GetSystemData");

	ABP_MapExporter_C_GetSystemData_Params params;
	params.SystemID = SystemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SystemData != nullptr)
		*SystemData = params.SystemData;
}


// Function BP_MapExporter.BP_MapExporter_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MapExporter_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapExporter.BP_MapExporter_C.Update");

	ABP_MapExporter_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MapExporter.BP_MapExporter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MapExporter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MapExporter.BP_MapExporter_C.UserConstructionScript");

	ABP_MapExporter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
