// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_LIB_F_Cheats_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatGetAllPlayerShipsAsESPawns
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AESPawn*>         Ships                          (Parm, OutParm, ZeroConstructor)

void ULIB_F_Cheats_C::STATIC_CheatGetAllPlayerShipsAsESPawns(class UObject** __WorldContext, TArray<class AESPawn*>* Ships)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatGetAllPlayerShipsAsESPawns");

	ULIB_F_Cheats_C_CheatGetAllPlayerShipsAsESPawns_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ships != nullptr)
		*Ships = params.Ships;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatGetAllPlayerShips
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABP_ShipBase_C*>  Ships                          (Parm, OutParm, ZeroConstructor)

void ULIB_F_Cheats_C::STATIC_CheatGetAllPlayerShips(class UObject** __WorldContext, TArray<class ABP_ShipBase_C*>* Ships)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatGetAllPlayerShips");

	ULIB_F_Cheats_C_CheatGetAllPlayerShips_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ships != nullptr)
		*Ships = params.Ships;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatEnterTempLocationAtCurrentPosition
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatEnterTempLocationAtCurrentPosition(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatEnterTempLocationAtCurrentPosition");

	ULIB_F_Cheats_C_CheatEnterTempLocationAtCurrentPosition_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatUnlimitedAmmo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatUnlimitedAmmo(bool* On, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatUnlimitedAmmo");

	ULIB_F_Cheats_C_CheatUnlimitedAmmo_Params params;
	params.On = On;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatSetPlayerLevel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatSetPlayerLevel(int* NewLevel, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatSetPlayerLevel");

	ULIB_F_Cheats_C_CheatSetPlayerLevel_Params params;
	params.NewLevel = NewLevel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatInstallAllPrimaryWeaponTypes
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatInstallAllPrimaryWeaponTypes(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatInstallAllPrimaryWeaponTypes");

	ULIB_F_Cheats_C_CheatInstallAllPrimaryWeaponTypes_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatUnlimitedSensorRange
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifierHandle*        ModifierHandle                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FModifierHandle         Handle                         (Parm, OutParm)

void ULIB_F_Cheats_C::STATIC_CheatUnlimitedSensorRange(bool* Enable, struct FModifierHandle* ModifierHandle, class UObject** __WorldContext, struct FModifierHandle* Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatUnlimitedSensorRange");

	ULIB_F_Cheats_C_CheatUnlimitedSensorRange_Params params;
	params.Enable = Enable;
	params.ModifierHandle = ModifierHandle;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handle != nullptr)
		*Handle = params.Handle;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatToggleDebugShipLook
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatToggleDebugShipLook(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatToggleDebugShipLook");

	ULIB_F_Cheats_C_CheatToggleDebugShipLook_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatSetDebugShipLook
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ShipLookID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatSetDebugShipLook(struct FName* ShipLookID, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatSetDebugShipLook");

	ULIB_F_Cheats_C_CheatSetDebugShipLook_Params params;
	params.ShipLookID = ShipLookID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatRandomPlayerShip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TEnumAsByte<EShip>>     PossibleShipTypes              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatRandomPlayerShip(class UObject** __WorldContext, TArray<TEnumAsByte<EShip>>* PossibleShipTypes)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatRandomPlayerShip");

	ULIB_F_Cheats_C_CheatRandomPlayerShip_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PossibleShipTypes != nullptr)
		*PossibleShipTypes = params.PossibleShipTypes;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatShowShipSpeed
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatShowShipSpeed(bool* bShow, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatShowShipSpeed");

	ULIB_F_Cheats_C_CheatShowShipSpeed_Params params;
	params.bShow = bShow;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatSkipInterception
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatSkipInterception(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatSkipInterception");

	ULIB_F_Cheats_C_CheatSkipInterception_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatCreateAndRespawnNewPlayerShip
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ShipTemplateID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatCreateAndRespawnNewPlayerShip(struct FName* ShipTemplateID, int* Level, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatCreateAndRespawnNewPlayerShip");

	ULIB_F_Cheats_C_CheatCreateAndRespawnNewPlayerShip_Params params;
	params.ShipTemplateID = ShipTemplateID;
	params.Level = Level;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChooseTestShipColorSet
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatChooseTestShipColorSet(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChooseTestShipColorSet");

	ULIB_F_Cheats_C_CheatChooseTestShipColorSet_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatShuffleShipModulesColorsDecals
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatShuffleShipModulesColorsDecals(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatShuffleShipModulesColorsDecals");

	ULIB_F_Cheats_C_CheatShuffleShipModulesColorsDecals_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangeShipDecals
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bPrevious                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatChangeShipDecals(bool* bPrevious, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangeShipDecals");

	ULIB_F_Cheats_C_CheatChangeShipDecals_Params params;
	params.bPrevious = bPrevious;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangeShipColorSet
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bPrevious                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatChangeShipColorSet(bool* bPrevious, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangeShipColorSet");

	ULIB_F_Cheats_C_CheatChangeShipColorSet_Params params;
	params.bPrevious = bPrevious;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangeCredits
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           credits                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatChangeCredits(int* credits, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangeCredits");

	ULIB_F_Cheats_C_CheatChangeCredits_Params params;
	params.credits = credits;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatLockedNPCJumpsAway
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatLockedNPCJumpsAway(class UObject** WorldContextObject, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatLockedNPCJumpsAway");

	ULIB_F_Cheats_C_CheatLockedNPCJumpsAway_Params params;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatShowMusicInfo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatShowMusicInfo(bool* bShow, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatShowMusicInfo");

	ULIB_F_Cheats_C_CheatShowMusicInfo_Params params;
	params.bShow = bShow;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatReloadLocation
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatReloadLocation(class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatReloadLocation");

	ULIB_F_Cheats_C_CheatReloadLocation_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangeShipModule
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EShipModule>*      ModuleType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPrevious                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatChangeShipModule(TEnumAsByte<EShipModule>* ModuleType, bool* bPrevious, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangeShipModule");

	ULIB_F_Cheats_C_CheatChangeShipModule_Params params;
	params.ModuleType = ModuleType;
	params.bPrevious = bPrevious;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatShowNPCInfo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatShowNPCInfo(bool* bShow, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatShowNPCInfo");

	ULIB_F_Cheats_C_CheatShowNPCInfo_Params params;
	params.bShow = bShow;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatEnemySpawning
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatEnemySpawning(bool* bEnable, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatEnemySpawning");

	ULIB_F_Cheats_C_CheatEnemySpawning_Params params;
	params.bEnable = bEnable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangeXP
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         XP                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatChangeXP(float* XP, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangeXP");

	ULIB_F_Cheats_C_CheatChangeXP_Params params;
	params.XP = XP;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatDeviceCooldowns
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatDeviceCooldowns(bool* bEnable, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatDeviceCooldowns");

	ULIB_F_Cheats_C_CheatDeviceCooldowns_Params params;
	params.bEnable = bEnable;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatSpawnShip
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 PawnClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Mark                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          JumpIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AESPawn*                 Ship                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatSpawnShip(class UObject** WorldContextObject, class UClass** PawnClass, int* Level, int* Mark, bool* JumpIn, class UObject** __WorldContext, class AESPawn** Ship)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatSpawnShip");

	ULIB_F_Cheats_C_CheatSpawnShip_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PawnClass = PawnClass;
	params.Level = Level;
	params.Mark = Mark;
	params.JumpIn = JumpIn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ship != nullptr)
		*Ship = params.Ship;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatKillAllPawns
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          OnlyEnemies                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatKillAllPawns(bool* OnlyEnemies, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatKillAllPawns");

	ULIB_F_Cheats_C_CheatKillAllPawns_Params params;
	params.OnlyEnemies = OnlyEnemies;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatUnlimitedEnergy
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Unlimited                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatUnlimitedEnergy(bool* Unlimited, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatUnlimitedEnergy");

	ULIB_F_Cheats_C_CheatUnlimitedEnergy_Params params;
	params.Unlimited = Unlimited;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatNPCAwareness
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAware                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatNPCAwareness(bool* bAware, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatNPCAwareness");

	ULIB_F_Cheats_C_CheatNPCAwareness_Params params;
	params.bAware = bAware;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangePlayerHealth
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HealthDelta                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatChangePlayerHealth(float* HealthDelta, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangePlayerHealth");

	ULIB_F_Cheats_C_CheatChangePlayerHealth_Params params;
	params.HealthDelta = HealthDelta;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatInvincibility
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bInvincible                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_F_Cheats_C::STATIC_CheatInvincibility(bool* bInvincible, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_F_Cheats.LIB_F_Cheats_C.CheatInvincibility");

	ULIB_F_Cheats_C_CheatInvincibility_Params params;
	params.bInvincible = bInvincible;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
