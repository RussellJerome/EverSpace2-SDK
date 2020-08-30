// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Skybox_Sun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Skybox_Sun.BP_Skybox_Sun_C.UpdateSkybox
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Skybox_Sun_C::UpdateSkybox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_Sun.BP_Skybox_Sun_C.UpdateSkybox");

	ABP_Skybox_Sun_C_UpdateSkybox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_Sun.BP_Skybox_Sun_C.UpdateMPC
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Skybox_Sun_C::UpdateMPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_Sun.BP_Skybox_Sun_C.UpdateMPC");

	ABP_Skybox_Sun_C_UpdateMPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_Sun.BP_Skybox_Sun_C.UpdateSun
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Skybox_Sun_C::UpdateSun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_Sun.BP_Skybox_Sun_C.UpdateSun");

	ABP_Skybox_Sun_C_UpdateSun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_Sun.BP_Skybox_Sun_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Skybox_Sun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_Sun.BP_Skybox_Sun_C.UserConstructionScript");

	ABP_Skybox_Sun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_Sun.BP_Skybox_Sun_C.SetMeshMobility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EComponentMobility>* Mobility                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Skybox_Sun_C::SetMeshMobility(TEnumAsByte<EComponentMobility>* Mobility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_Sun.BP_Skybox_Sun_C.SetMeshMobility");

	ABP_Skybox_Sun_C_SetMeshMobility_Params params;
	params.Mobility = Mobility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_Sun.BP_Skybox_Sun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Skybox_Sun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_Sun.BP_Skybox_Sun_C.ReceiveBeginPlay");

	ABP_Skybox_Sun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_Sun.BP_Skybox_Sun_C.InitLensFlare
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_LensFlare_C**        LensFlare                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Skybox_Sun_C::InitLensFlare(class ABP_LensFlare_C** LensFlare)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_Sun.BP_Skybox_Sun_C.InitLensFlare");

	ABP_Skybox_Sun_C_InitLensFlare_Params params;
	params.LensFlare = LensFlare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_Sun.BP_Skybox_Sun_C.HandleGraphicsSettingsChanged
// (BlueprintCallable, BlueprintEvent)

void ABP_Skybox_Sun_C::HandleGraphicsSettingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_Sun.BP_Skybox_Sun_C.HandleGraphicsSettingsChanged");

	ABP_Skybox_Sun_C_HandleGraphicsSettingsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_Sun.BP_Skybox_Sun_C.ExecuteUbergraph_BP_Skybox_Sun
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Skybox_Sun_C::ExecuteUbergraph_BP_Skybox_Sun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_Sun.BP_Skybox_Sun_C.ExecuteUbergraph_BP_Skybox_Sun");

	ABP_Skybox_Sun_C_ExecuteUbergraph_BP_Skybox_Sun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skybox_Sun.BP_Skybox_Sun_C.SunChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Skybox_Sun_C::SunChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_Sun.BP_Skybox_Sun_C.SunChanged__DelegateSignature");

	ABP_Skybox_Sun_C_SunChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
