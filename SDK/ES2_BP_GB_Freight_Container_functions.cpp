// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_GB_Freight_Container_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GB_Freight_Container.BP_GB_Freight_Container_C.BndEvt__Wreck_K2Node_ComponentBoundEvent_1_OnShowWreckDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWreckComponent**        WreckComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_GB_Freight_Container_C::BndEvt__Wreck_K2Node_ComponentBoundEvent_1_OnShowWreckDelegate__DelegateSignature(class UWreckComponent** WreckComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GB_Freight_Container.BP_GB_Freight_Container_C.BndEvt__Wreck_K2Node_ComponentBoundEvent_1_OnShowWreckDelegate__DelegateSignature");

	ABP_GB_Freight_Container_C_BndEvt__Wreck_K2Node_ComponentBoundEvent_1_OnShowWreckDelegate__DelegateSignature_Params params;
	params.WreckComponent = WreckComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GB_Freight_Container.BP_GB_Freight_Container_C.ExecuteUbergraph_BP_GB_Freight_Container
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GB_Freight_Container_C::ExecuteUbergraph_BP_GB_Freight_Container(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GB_Freight_Container.BP_GB_Freight_Container_C.ExecuteUbergraph_BP_GB_Freight_Container");

	ABP_GB_Freight_Container_C_ExecuteUbergraph_BP_GB_Freight_Container_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
