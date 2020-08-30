// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_Pawn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Pawn.BPI_Pawn_C.GetPawnLocalSpaceBounds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBoxSphereBounds        LocalSpaceBounds               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Pawn_C::GetPawnLocalSpaceBounds(struct FBoxSphereBounds* LocalSpaceBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Pawn.BPI_Pawn_C.GetPawnLocalSpaceBounds");

	UBPI_Pawn_C_GetPawnLocalSpaceBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalSpaceBounds != nullptr)
		*LocalSpaceBounds = params.LocalSpaceBounds;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
