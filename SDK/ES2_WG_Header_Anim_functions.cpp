// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Header_Anim_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_Header_Anim.WG_Header_Anim_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Header_Anim_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Header_Anim.WG_Header_Anim_C.PreConstruct");

	UWG_Header_Anim_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Header_Anim.WG_Header_Anim_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Header_Anim_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Header_Anim.WG_Header_Anim_C.Tick");

	UWG_Header_Anim_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Header_Anim.WG_Header_Anim_C.PauseWasChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bPaused                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Header_Anim_C::PauseWasChanged(bool* bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Header_Anim.WG_Header_Anim_C.PauseWasChanged");

	UWG_Header_Anim_C_PauseWasChanged_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_Header_Anim.WG_Header_Anim_C.ExecuteUbergraph_WG_Header_Anim
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_Header_Anim_C::ExecuteUbergraph_WG_Header_Anim(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_Header_Anim.WG_Header_Anim_C.ExecuteUbergraph_WG_Header_Anim");

	UWG_Header_Anim_C_ExecuteUbergraph_WG_Header_Anim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
