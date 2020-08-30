// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_Condition_EMP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Condition_EMP.BPI_Condition_EMP_C.RemoveEMP
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Condition_EMP_C::RemoveEMP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Condition_EMP.BPI_Condition_EMP_C.RemoveEMP");

	UBPI_Condition_EMP_C_RemoveEMP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Condition_EMP.BPI_Condition_EMP_C.ApplyEMP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Condition_EMP_C::ApplyEMP(class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Condition_EMP.BPI_Condition_EMP_C.ApplyEMP");

	UBPI_Condition_EMP_C_ApplyEMP_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
