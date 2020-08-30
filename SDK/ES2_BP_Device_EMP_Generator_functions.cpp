// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Device_EMP_Generator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Device_EMP_Generator.BP_Device_EMP_Generator_C.OnActivate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerOfDevice                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Device_EMP_Generator_C::OnActivate(class AActor** OwnerOfDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_EMP_Generator.BP_Device_EMP_Generator_C.OnActivate");

	ABP_Device_EMP_Generator_C_OnActivate_Params params;
	params.OwnerOfDevice = OwnerOfDevice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Device_EMP_Generator.BP_Device_EMP_Generator_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Device_EMP_Generator_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_EMP_Generator.BP_Device_EMP_Generator_C.Timeline_0__FinishedFunc");

	ABP_Device_EMP_Generator_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Device_EMP_Generator.BP_Device_EMP_Generator_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Device_EMP_Generator_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_EMP_Generator.BP_Device_EMP_Generator_C.Timeline_0__UpdateFunc");

	ABP_Device_EMP_Generator_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Device_EMP_Generator.BP_Device_EMP_Generator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Device_EMP_Generator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_EMP_Generator.BP_Device_EMP_Generator_C.ReceiveBeginPlay");

	ABP_Device_EMP_Generator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Device_EMP_Generator.BP_Device_EMP_Generator_C.FireEMP
// (BlueprintCallable, BlueprintEvent)

void ABP_Device_EMP_Generator_C::FireEMP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_EMP_Generator.BP_Device_EMP_Generator_C.FireEMP");

	ABP_Device_EMP_Generator_C_FireEMP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Device_EMP_Generator.BP_Device_EMP_Generator_C.ExecuteUbergraph_BP_Device_EMP_Generator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Device_EMP_Generator_C::ExecuteUbergraph_BP_Device_EMP_Generator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Device_EMP_Generator.BP_Device_EMP_Generator_C.ExecuteUbergraph_BP_Device_EMP_Generator");

	ABP_Device_EMP_Generator_C_ExecuteUbergraph_BP_Device_EMP_Generator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
