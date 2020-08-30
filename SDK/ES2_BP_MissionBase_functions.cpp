// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_MissionBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MissionBase.BP_MissionBase_C.GetItemContainerContentsFromRewards
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FItemContainerContent> CointainerContents             (Parm, OutParm, ZeroConstructor)

void ABP_MissionBase_C::GetItemContainerContentsFromRewards(TArray<struct FItemContainerContent>* CointainerContents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionBase.BP_MissionBase_C.GetItemContainerContentsFromRewards");

	ABP_MissionBase_C_GetItemContainerContentsFromRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CointainerContents != nullptr)
		*CointainerContents = params.CointainerContents;
}


// Function BP_MissionBase.BP_MissionBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MissionBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionBase.BP_MissionBase_C.ReceiveBeginPlay");

	ABP_MissionBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionBase.BP_MissionBase_C.MissionSuccessSpawnRewards
// (BlueprintCallable, BlueprintEvent)

void ABP_MissionBase_C::MissionSuccessSpawnRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionBase.BP_MissionBase_C.MissionSuccessSpawnRewards");

	ABP_MissionBase_C_MissionSuccessSpawnRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionBase.BP_MissionBase_C.ExecuteUbergraph_BP_MissionBase
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionBase_C::ExecuteUbergraph_BP_MissionBase(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionBase.BP_MissionBase_C.ExecuteUbergraph_BP_MissionBase");

	ABP_MissionBase_C_ExecuteUbergraph_BP_MissionBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
