#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_LIB_F_Text_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LIB_F_Text.LIB_F_Text_C.GetChangeCompareSlotText
struct ULIB_F_Text_C_GetChangeCompareSlotText_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function LIB_F_Text.LIB_F_Text_C.GetFormattedTimeTextMinutesSeconds
struct ULIB_F_Text_C_GetFormattedTimeTextMinutesSeconds_Params
{
	float*                                             TimeInSeconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TimeText;                                                 // (Parm, OutParm)
};

// Function LIB_F_Text.LIB_F_Text_C.FormatCredits
struct ULIB_F_Text_C_FormatCredits_Params
{
	int*                                               credits;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAlwaysSign;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function LIB_F_Text.LIB_F_Text_C.GetSellText
struct ULIB_F_Text_C_GetSellText_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function LIB_F_Text.LIB_F_Text_C.GetBuyAndEquipText
struct ULIB_F_Text_C_GetBuyAndEquipText_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function LIB_F_Text.LIB_F_Text_C.GetBuyText
struct ULIB_F_Text_C_GetBuyText_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function LIB_F_Text.LIB_F_Text_C.GetMoveToContainerText
struct ULIB_F_Text_C_GetMoveToContainerText_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function LIB_F_Text.LIB_F_Text_C.GetMoveToCargoText
struct ULIB_F_Text_C_GetMoveToCargoText_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function LIB_F_Text.LIB_F_Text_C.GetMoveToStorageText
struct ULIB_F_Text_C_GetMoveToStorageText_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function LIB_F_Text.LIB_F_Text_C.GetUnequipText
struct ULIB_F_Text_C_GetUnequipText_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function LIB_F_Text.LIB_F_Text_C.GetEquipText
struct ULIB_F_Text_C_GetEquipText_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function LIB_F_Text.LIB_F_Text_C.FormatTier
struct ULIB_F_Text_C_FormatTier_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function LIB_F_Text.LIB_F_Text_C.GetBackText
struct ULIB_F_Text_C_GetBackText_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TextBack;                                                 // (Parm, OutParm)
};

// Function LIB_F_Text.LIB_F_Text_C.GetCancelText
struct ULIB_F_Text_C_GetCancelText_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TextCancel;                                               // (Parm, OutParm)
};

// Function LIB_F_Text.LIB_F_Text_C.GetOKText
struct ULIB_F_Text_C_GetOKText_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TextOK;                                                   // (Parm, OutParm)
};

// Function LIB_F_Text.LIB_F_Text_C.GetRarityText
struct ULIB_F_Text_C_GetRarityText_Params
{
	TEnumAsByte<EItemRarity>*                          Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
