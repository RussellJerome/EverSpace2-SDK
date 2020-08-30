// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_TravelMode_Sun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_TravelMode_Sun.BPI_TravelMode_Sun_C.PreviewLightingAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_TravelMode_Sun_C::PreviewLightingAtLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TravelMode_Sun.BPI_TravelMode_Sun_C.PreviewLightingAtLocation");

	UBPI_TravelMode_Sun_C_PreviewLightingAtLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
