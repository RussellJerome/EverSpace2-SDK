// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Outlaw_Destroyer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Outlaw_Destroyer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.UserConstructionScript");

	ABP_Outlaw_Destroyer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Outlaw_Destroyer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.ReceiveBeginPlay");

	ABP_Outlaw_Destroyer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.Open
// (BlueprintCallable, BlueprintEvent)

void ABP_Outlaw_Destroyer_C::Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.Open");

	ABP_Outlaw_Destroyer_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.Close
// (BlueprintCallable, BlueprintEvent)

void ABP_Outlaw_Destroyer_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.Close");

	ABP_Outlaw_Destroyer_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.LaunchDrones
// (BlueprintCallable, BlueprintEvent)

void ABP_Outlaw_Destroyer_C::LaunchDrones()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.LaunchDrones");

	ABP_Outlaw_Destroyer_C_LaunchDrones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.RegenerateArmor
// (BlueprintCallable, BlueprintEvent)

void ABP_Outlaw_Destroyer_C::RegenerateArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.RegenerateArmor");

	ABP_Outlaw_Destroyer_C_RegenerateArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.ArmorDepleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Outlaw_Destroyer_C::ArmorDepleted(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.ArmorDepleted");

	ABP_Outlaw_Destroyer_C_ArmorDepleted_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.FillUpArmor
// (BlueprintCallable, BlueprintEvent)

void ABP_Outlaw_Destroyer_C::FillUpArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.FillUpArmor");

	ABP_Outlaw_Destroyer_C_FillUpArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.HealthDepleted
// (BlueprintCallable, BlueprintEvent)

void ABP_Outlaw_Destroyer_C::HealthDepleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.HealthDepleted");

	ABP_Outlaw_Destroyer_C_HealthDepleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.ExecuteUbergraph_BP_Outlaw_Destroyer
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Outlaw_Destroyer_C::ExecuteUbergraph_BP_Outlaw_Destroyer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Outlaw_Destroyer.BP_Outlaw_Destroyer_C.ExecuteUbergraph_BP_Outlaw_Destroyer");

	ABP_Outlaw_Destroyer_C_ExecuteUbergraph_BP_Outlaw_Destroyer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
