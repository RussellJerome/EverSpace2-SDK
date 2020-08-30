#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Fullscreen_Fade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.FadeOut
struct UWG_Fullscreen_Fade_C_FadeOut_Params
{
};

// Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.FadeIn
struct UWG_Fullscreen_Fade_C_FadeIn_Params
{
};

// Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.Construct
struct UWG_Fullscreen_Fade_C_Construct_Params
{
};

// Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.ExecuteUbergraph_WG_Fullscreen_Fade
struct UWG_Fullscreen_Fade_C_ExecuteUbergraph_WG_Fullscreen_Fade_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.OnFadedOut__DelegateSignature
struct UWG_Fullscreen_Fade_C_OnFadedOut__DelegateSignature_Params
{
	class UWG_Fullscreen_Fade_C**                      Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WG_Fullscreen_Fade.WG_Fullscreen_Fade_C.OnFadedIn__DelegateSignature
struct UWG_Fullscreen_Fade_C_OnFadedIn__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
