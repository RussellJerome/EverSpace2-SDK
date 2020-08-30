// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_LIB_F_Text_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_F_Text.LIB_F_Text_C.GetChangeCompareSlotText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void ULIB_F_Text_C::STATIC_GetChangeCompareSlotText(class UObject** __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.GetChangeCompareSlotText");

	ULIB_F_Text_C_GetChangeCompareSlotText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function LIB_F_Text.LIB_F_Text_C.GetFormattedTimeTextMinutesSeconds
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         TimeInSeconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TimeText                       (Parm, OutParm)

void ULIB_F_Text_C::STATIC_GetFormattedTimeTextMinutesSeconds(float* TimeInSeconds, class UObject** __WorldContext, struct FText* TimeText)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.GetFormattedTimeTextMinutesSeconds");

	ULIB_F_Text_C_GetFormattedTimeTextMinutesSeconds_Params params;
	params.TimeInSeconds = TimeInSeconds;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeText != nullptr)
		*TimeText = params.TimeText;
}


// Function LIB_F_Text.LIB_F_Text_C.FormatCredits
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           credits                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAlwaysSign                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)

void ULIB_F_Text_C::STATIC_FormatCredits(int* credits, bool* bAlwaysSign, class UObject** __WorldContext, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.FormatCredits");

	ULIB_F_Text_C_FormatCredits_Params params;
	params.credits = credits;
	params.bAlwaysSign = bAlwaysSign;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_Text.LIB_F_Text_C.GetSellText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void ULIB_F_Text_C::STATIC_GetSellText(class UObject** __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.GetSellText");

	ULIB_F_Text_C_GetSellText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function LIB_F_Text.LIB_F_Text_C.GetBuyAndEquipText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void ULIB_F_Text_C::STATIC_GetBuyAndEquipText(class UObject** __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.GetBuyAndEquipText");

	ULIB_F_Text_C_GetBuyAndEquipText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function LIB_F_Text.LIB_F_Text_C.GetBuyText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void ULIB_F_Text_C::STATIC_GetBuyText(class UObject** __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.GetBuyText");

	ULIB_F_Text_C_GetBuyText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function LIB_F_Text.LIB_F_Text_C.GetMoveToContainerText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void ULIB_F_Text_C::STATIC_GetMoveToContainerText(class UObject** __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.GetMoveToContainerText");

	ULIB_F_Text_C_GetMoveToContainerText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function LIB_F_Text.LIB_F_Text_C.GetMoveToCargoText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void ULIB_F_Text_C::STATIC_GetMoveToCargoText(class UObject** __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.GetMoveToCargoText");

	ULIB_F_Text_C_GetMoveToCargoText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function LIB_F_Text.LIB_F_Text_C.GetMoveToStorageText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void ULIB_F_Text_C::STATIC_GetMoveToStorageText(class UObject** __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.GetMoveToStorageText");

	ULIB_F_Text_C_GetMoveToStorageText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function LIB_F_Text.LIB_F_Text_C.GetUnequipText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void ULIB_F_Text_C::STATIC_GetUnequipText(class UObject** __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.GetUnequipText");

	ULIB_F_Text_C_GetUnequipText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function LIB_F_Text.LIB_F_Text_C.GetEquipText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void ULIB_F_Text_C::STATIC_GetEquipText(class UObject** __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.GetEquipText");

	ULIB_F_Text_C_GetEquipText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function LIB_F_Text.LIB_F_Text_C.FormatTier
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)

void ULIB_F_Text_C::STATIC_FormatTier(int* Level, class UObject** __WorldContext, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.FormatTier");

	ULIB_F_Text_C_FormatTier_Params params;
	params.Level = Level;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function LIB_F_Text.LIB_F_Text_C.GetBackText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TextBack                       (Parm, OutParm)

void ULIB_F_Text_C::STATIC_GetBackText(class UObject** __WorldContext, struct FText* TextBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.GetBackText");

	ULIB_F_Text_C_GetBackText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextBack != nullptr)
		*TextBack = params.TextBack;
}


// Function LIB_F_Text.LIB_F_Text_C.GetCancelText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TextCancel                     (Parm, OutParm)

void ULIB_F_Text_C::STATIC_GetCancelText(class UObject** __WorldContext, struct FText* TextCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.GetCancelText");

	ULIB_F_Text_C_GetCancelText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextCancel != nullptr)
		*TextCancel = params.TextCancel;
}


// Function LIB_F_Text.LIB_F_Text_C.GetOKText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TextOK                         (Parm, OutParm)

void ULIB_F_Text_C::STATIC_GetOKText(class UObject** __WorldContext, struct FText* TextOK)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.GetOKText");

	ULIB_F_Text_C_GetOKText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextOK != nullptr)
		*TextOK = params.TextOK;
}


// Function LIB_F_Text.LIB_F_Text_C.GetRarityText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EItemRarity>*      Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ULIB_F_Text_C::STATIC_GetRarityText(TEnumAsByte<EItemRarity>* Rarity, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Text.LIB_F_Text_C.GetRarityText");

	ULIB_F_Text_C_GetRarityText_Params params;
	params.Rarity = Rarity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
