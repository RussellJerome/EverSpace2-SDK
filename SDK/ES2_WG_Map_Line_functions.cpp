// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Map_Line_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Map_Line.WG_Map_Line_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_Map_Line_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Line.WG_Map_Line_C.Construct");

	UWG_Map_Line_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Line.WG_Map_Line_C.Zoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Zoom_Delta                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Zoom_Origin                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_Line_C::Zoom(float* Zoom_Delta, struct FVector2D* Zoom_Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Line.WG_Map_Line_C.Zoom");

	UWG_Map_Line_C_Zoom_Params params;
	params.Zoom_Delta = Zoom_Delta;
	params.Zoom_Origin = Zoom_Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Line.WG_Map_Line_C.FadeMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FadeIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_Line_C::FadeMarker(bool* FadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Line.WG_Map_Line_C.FadeMarker");

	UWG_Map_Line_C_FadeMarker_Params params;
	params.FadeIn = FadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Map_Line.WG_Map_Line_C.ExecuteUbergraph_WG_Map_Line
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Map_Line_C::ExecuteUbergraph_WG_Map_Line(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Map_Line.WG_Map_Line_C.ExecuteUbergraph_WG_Map_Line");

	UWG_Map_Line_C_ExecuteUbergraph_WG_Map_Line_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
