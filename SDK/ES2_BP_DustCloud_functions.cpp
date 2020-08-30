// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_DustCloud_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DustCloud.BP_DustCloud_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DustCloud_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DustCloud.BP_DustCloud_C.Update");

	ABP_DustCloud_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DustCloud.BP_DustCloud_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DustCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DustCloud.BP_DustCloud_C.UserConstructionScript");

	ABP_DustCloud_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DustCloud.BP_DustCloud_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DustCloud_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DustCloud.BP_DustCloud_C.ReceiveBeginPlay");

	ABP_DustCloud_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DustCloud.BP_DustCloud_C.ExecuteUbergraph_BP_DustCloud
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DustCloud_C::ExecuteUbergraph_BP_DustCloud(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DustCloud.BP_DustCloud_C.ExecuteUbergraph_BP_DustCloud");

	ABP_DustCloud_C_ExecuteUbergraph_BP_DustCloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
