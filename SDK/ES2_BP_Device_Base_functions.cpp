// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Device_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Device_Base.BP_Device_Base_C.OnDeactivate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerOfDevice                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Device_Base_C::OnDeactivate(class AActor** OwnerOfDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_Base.BP_Device_Base_C.OnDeactivate");

	ABP_Device_Base_C_OnDeactivate_Params params;
	params.OwnerOfDevice = OwnerOfDevice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Device_Base.BP_Device_Base_C.OnActivate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerOfDevice                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Device_Base_C::OnActivate(class AActor** OwnerOfDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_Base.BP_Device_Base_C.OnActivate");

	ABP_Device_Base_C_OnActivate_Params params;
	params.OwnerOfDevice = OwnerOfDevice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Device_Base.BP_Device_Base_C.DeviceActivationVFX
// (BlueprintCallable, BlueprintEvent)

void ABP_Device_Base_C::DeviceActivationVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_Base.BP_Device_Base_C.DeviceActivationVFX");

	ABP_Device_Base_C_DeviceActivationVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Device_Base.BP_Device_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Device_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_Base.BP_Device_Base_C.ReceiveBeginPlay");

	ABP_Device_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Device_Base.BP_Device_Base_C.ExecuteUbergraph_BP_Device_Base
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Device_Base_C::ExecuteUbergraph_BP_Device_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_Base.BP_Device_Base_C.ExecuteUbergraph_BP_Device_Base");

	ABP_Device_Base_C_ExecuteUbergraph_BP_Device_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
