// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_AdStrip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AdStrip.BP_AdStrip_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AdStrip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AdStrip.BP_AdStrip_C.UserConstructionScript");

	ABP_AdStrip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AdStrip.BP_AdStrip_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AdStrip_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AdStrip.BP_AdStrip_C.ReceiveBeginPlay");

	ABP_AdStrip_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AdStrip.BP_AdStrip_C.UpdateCanvas
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas**                Canvas                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AdStrip_C::UpdateCanvas(class UCanvas** Canvas, int* Width, int* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AdStrip.BP_AdStrip_C.UpdateCanvas");

	ABP_AdStrip_C_UpdateCanvas_Params params;
	params.Canvas = Canvas;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AdStrip.BP_AdStrip_C.ExecuteUbergraph_BP_AdStrip
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AdStrip_C::ExecuteUbergraph_BP_AdStrip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AdStrip.BP_AdStrip_C.ExecuteUbergraph_BP_AdStrip");

	ABP_AdStrip_C_ExecuteUbergraph_BP_AdStrip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
