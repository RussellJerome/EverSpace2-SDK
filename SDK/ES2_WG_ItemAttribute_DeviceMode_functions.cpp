// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_ItemAttribute_DeviceMode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_ItemAttribute_DeviceMode.WG_ItemAttribute_DeviceMode_C.OnLoaded_33E6169E40467C594A05979E4D796B62
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemAttribute_DeviceMode_C::OnLoaded_33E6169E40467C594A05979E4D796B62(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute_DeviceMode.WG_ItemAttribute_DeviceMode_C.OnLoaded_33E6169E40467C594A05979E4D796B62");

	UWG_ItemAttribute_DeviceMode_C_OnLoaded_33E6169E40467C594A05979E4D796B62_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemAttribute_DeviceMode.WG_ItemAttribute_DeviceMode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_ItemAttribute_DeviceMode_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute_DeviceMode.WG_ItemAttribute_DeviceMode_C.Construct");

	UWG_ItemAttribute_DeviceMode_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_ItemAttribute_DeviceMode.WG_ItemAttribute_DeviceMode_C.ExecuteUbergraph_WG_ItemAttribute_DeviceMode
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_ItemAttribute_DeviceMode_C::ExecuteUbergraph_WG_ItemAttribute_DeviceMode(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_ItemAttribute_DeviceMode.WG_ItemAttribute_DeviceMode_C.ExecuteUbergraph_WG_ItemAttribute_DeviceMode");

	UWG_ItemAttribute_DeviceMode_C_ExecuteUbergraph_WG_ItemAttribute_DeviceMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
