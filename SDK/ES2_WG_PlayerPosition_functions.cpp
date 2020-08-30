// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_PlayerPosition_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_PlayerPosition.WG_PlayerPosition_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWG_PlayerPosition_C::OnPaint(struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_PlayerPosition.WG_PlayerPosition_C.OnPaint");

	UWG_PlayerPosition_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function WG_PlayerPosition.WG_PlayerPosition_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_PlayerPosition_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_PlayerPosition.WG_PlayerPosition_C.PreConstruct");

	UWG_PlayerPosition_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_PlayerPosition.WG_PlayerPosition_C.SetAngle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         RenderAngle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_PlayerPosition_C::SetAngle(float* RenderAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_PlayerPosition.WG_PlayerPosition_C.SetAngle");

	UWG_PlayerPosition_C_SetAngle_Params params;
	params.RenderAngle = RenderAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_PlayerPosition.WG_PlayerPosition_C.ExecuteUbergraph_WG_PlayerPosition
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_PlayerPosition_C::ExecuteUbergraph_WG_PlayerPosition(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_PlayerPosition.WG_PlayerPosition_C.ExecuteUbergraph_WG_PlayerPosition");

	UWG_PlayerPosition_C_ExecuteUbergraph_WG_PlayerPosition_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
