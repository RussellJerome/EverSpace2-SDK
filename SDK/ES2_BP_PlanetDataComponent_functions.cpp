// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PlanetDataComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlanetDataComponent.BP_PlanetDataComponent_C.GetPlanetData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlanetTypes>*     Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSTRCT_PlanetType       PlanetData                     (Parm, OutParm, IsPlainOldData)

void UBP_PlanetDataComponent_C::GetPlanetData(TEnumAsByte<EPlanetTypes>* Type, struct FSTRCT_PlanetType* PlanetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlanetDataComponent.BP_PlanetDataComponent_C.GetPlanetData");

	UBP_PlanetDataComponent_C_GetPlanetData_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlanetData != nullptr)
		*PlanetData = params.PlanetData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
