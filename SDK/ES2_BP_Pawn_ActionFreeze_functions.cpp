// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Pawn_ActionFreeze_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.InpActEvt_LeftAlt_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_ActionFreeze_C::InpActEvt_LeftAlt_K2Node_InputKeyEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.InpActEvt_LeftAlt_K2Node_InputKeyEvent_2");

	ABP_Pawn_ActionFreeze_C_InpActEvt_LeftAlt_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.InpActEvt_LeftAlt_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Pawn_ActionFreeze_C::InpActEvt_LeftAlt_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.InpActEvt_LeftAlt_K2Node_InputKeyEvent_1");

	ABP_Pawn_ActionFreeze_C_InpActEvt_LeftAlt_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_ActionFreeze_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.ReceiveTick");

	ABP_Pawn_ActionFreeze_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Pawn_ActionFreeze_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.ReceiveBeginPlay");

	ABP_Pawn_ActionFreeze_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.SetTargetPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_ActionFreeze_C::SetTargetPawn(class APawn** Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.SetTargetPawn");

	ABP_Pawn_ActionFreeze_C_SetTargetPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.SwitchCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_Pawn_ActionFreeze_C::SwitchCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.SwitchCamera");

	ABP_Pawn_ActionFreeze_C_SwitchCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_ActionFreeze_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.ReceiveEndPlay");

	ABP_Pawn_ActionFreeze_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.ExecuteUbergraph_BP_Pawn_ActionFreeze
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Pawn_ActionFreeze_C::ExecuteUbergraph_BP_Pawn_ActionFreeze(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_ActionFreeze.BP_Pawn_ActionFreeze_C.ExecuteUbergraph_BP_Pawn_ActionFreeze");

	ABP_Pawn_ActionFreeze_C_ExecuteUbergraph_BP_Pawn_ActionFreeze_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
