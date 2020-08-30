// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_ShipForSaleViewer_Pawn_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShipForSaleViewer_Pawn.BP_ShipForSaleViewer_Pawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ShipForSaleViewer_Pawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipForSaleViewer_Pawn.BP_ShipForSaleViewer_Pawn_C.ReceiveBeginPlay");

	ABP_ShipForSaleViewer_Pawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipForSaleViewer_Pawn.BP_ShipForSaleViewer_Pawn_C.ResetCameraRotation
// (BlueprintCallable, BlueprintEvent)

void ABP_ShipForSaleViewer_Pawn_C::ResetCameraRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipForSaleViewer_Pawn.BP_ShipForSaleViewer_Pawn_C.ResetCameraRotation");

	ABP_ShipForSaleViewer_Pawn_C_ResetCameraRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ShipForSaleViewer_Pawn.BP_ShipForSaleViewer_Pawn_C.ExecuteUbergraph_BP_ShipForSaleViewer_Pawn
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipForSaleViewer_Pawn_C::ExecuteUbergraph_BP_ShipForSaleViewer_Pawn(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipForSaleViewer_Pawn.BP_ShipForSaleViewer_Pawn_C.ExecuteUbergraph_BP_ShipForSaleViewer_Pawn");

	ABP_ShipForSaleViewer_Pawn_C_ExecuteUbergraph_BP_ShipForSaleViewer_Pawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
