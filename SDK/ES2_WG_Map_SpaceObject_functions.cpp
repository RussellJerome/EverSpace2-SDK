// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_SpaceObject_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Map_SpaceObject.WG_Map_SpaceObject_C.IsSun
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_Map_SpaceObject_C::IsSun(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_SpaceObject.WG_Map_SpaceObject_C.IsSun");

	UWG_Map_SpaceObject_C_IsSun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WG_Map_SpaceObject.WG_Map_SpaceObject_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Map_SpaceObject_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_SpaceObject.WG_Map_SpaceObject_C.Construct");

	UWG_Map_SpaceObject_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_SpaceObject.WG_Map_SpaceObject_C.SetOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_SpaceObject_C::SetOpacity(float* Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_SpaceObject.WG_Map_SpaceObject_C.SetOpacity");

	UWG_Map_SpaceObject_C_SetOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_SpaceObject.WG_Map_SpaceObject_C.ExecuteUbergraph_WG_Map_SpaceObject
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_SpaceObject_C::ExecuteUbergraph_WG_Map_SpaceObject(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_SpaceObject.WG_Map_SpaceObject_C.ExecuteUbergraph_WG_Map_SpaceObject");

	UWG_Map_SpaceObject_C_ExecuteUbergraph_WG_Map_SpaceObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_SpaceObject.WG_Map_SpaceObject_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWG_Map_Location_C**     Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_Map_SpaceObject_C::OnClicked__DelegateSignature(class UWG_Map_Location_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_SpaceObject.WG_Map_SpaceObject_C.OnClicked__DelegateSignature");

	UWG_Map_SpaceObject_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
