#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_Mining_Game_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WG_Mining_Game.WG_Mining_Game_C.Construct
struct UWG_Mining_Game_C_Construct_Params
{
};

// Function WG_Mining_Game.WG_Mining_Game_C.Update
struct UWG_Mining_Game_C_Update_Params
{
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Frequency1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Frequency2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Exponent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Amplitude;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BonusThreshold;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentMiningTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TimeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SpecialFrequency;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SpecialWidth;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Mining_Game.WG_Mining_Game_C.FadeOutAndClose
struct UWG_Mining_Game_C_FadeOutAndClose_Params
{
};

// Function WG_Mining_Game.WG_Mining_Game_C.DeployCharge
struct UWG_Mining_Game_C_DeployCharge_Params
{
	float*                                             YieldFactor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              BonusYield;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              SpecialResource;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Mining_Game.WG_Mining_Game_C.AnimationFinished
struct UWG_Mining_Game_C_AnimationFinished_Params
{
};

// Function WG_Mining_Game.WG_Mining_Game_C.SetResourceItems
struct UWG_Mining_Game_C_SetResourceItems_Params
{
	class UItem**                                      BasicItemRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItem**                                      SpecialItemRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Mining_Game.WG_Mining_Game_C.SetNumCharges
struct UWG_Mining_Game_C_SetNumCharges_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Mining_Game.WG_Mining_Game_C.SetAmount
struct UWG_Mining_Game_C_SetAmount_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ValueSpecial;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              AddToExisting;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Mining_Game.WG_Mining_Game_C.ExecuteUbergraph_WG_Mining_Game
struct UWG_Mining_Game_C_ExecuteUbergraph_WG_Mining_Game_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WG_Mining_Game.WG_Mining_Game_C.OnFadedOut__DelegateSignature
struct UWG_Mining_Game_C_OnFadedOut__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
