#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_LIB_F_Cheats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatGetAllPlayerShipsAsESPawns
struct ULIB_F_Cheats_C_CheatGetAllPlayerShipsAsESPawns_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AESPawn*>                             Ships;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatGetAllPlayerShips
struct ULIB_F_Cheats_C_CheatGetAllPlayerShips_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_ShipBase_C*>                      Ships;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatEnterTempLocationAtCurrentPosition
struct ULIB_F_Cheats_C_CheatEnterTempLocationAtCurrentPosition_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatUnlimitedAmmo
struct ULIB_F_Cheats_C_CheatUnlimitedAmmo_Params
{
	bool*                                              On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatSetPlayerLevel
struct ULIB_F_Cheats_C_CheatSetPlayerLevel_Params
{
	int*                                               NewLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatInstallAllPrimaryWeaponTypes
struct ULIB_F_Cheats_C_CheatInstallAllPrimaryWeaponTypes_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatUnlimitedSensorRange
struct ULIB_F_Cheats_C_CheatUnlimitedSensorRange_Params
{
	bool*                                              Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifierHandle*                            ModifierHandle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FModifierHandle                             Handle;                                                   // (Parm, OutParm)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatToggleDebugShipLook
struct ULIB_F_Cheats_C_CheatToggleDebugShipLook_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatSetDebugShipLook
struct ULIB_F_Cheats_C_CheatSetDebugShipLook_Params
{
	struct FName*                                      ShipLookID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatRandomPlayerShip
struct ULIB_F_Cheats_C_CheatRandomPlayerShip_Params
{
	TArray<TEnumAsByte<EShip>>                         PossibleShipTypes;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatShowShipSpeed
struct ULIB_F_Cheats_C_CheatShowShipSpeed_Params
{
	bool*                                              bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatSkipInterception
struct ULIB_F_Cheats_C_CheatSkipInterception_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatCreateAndRespawnNewPlayerShip
struct ULIB_F_Cheats_C_CheatCreateAndRespawnNewPlayerShip_Params
{
	struct FName*                                      ShipTemplateID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChooseTestShipColorSet
struct ULIB_F_Cheats_C_CheatChooseTestShipColorSet_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatShuffleShipModulesColorsDecals
struct ULIB_F_Cheats_C_CheatShuffleShipModulesColorsDecals_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangeShipDecals
struct ULIB_F_Cheats_C_CheatChangeShipDecals_Params
{
	bool*                                              bPrevious;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangeShipColorSet
struct ULIB_F_Cheats_C_CheatChangeShipColorSet_Params
{
	bool*                                              bPrevious;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangeCredits
struct ULIB_F_Cheats_C_CheatChangeCredits_Params
{
	int*                                               credits;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatLockedNPCJumpsAway
struct ULIB_F_Cheats_C_CheatLockedNPCJumpsAway_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatShowMusicInfo
struct ULIB_F_Cheats_C_CheatShowMusicInfo_Params
{
	bool*                                              bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatReloadLocation
struct ULIB_F_Cheats_C_CheatReloadLocation_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangeShipModule
struct ULIB_F_Cheats_C_CheatChangeShipModule_Params
{
	TEnumAsByte<EShipModule>*                          ModuleType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPrevious;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatShowNPCInfo
struct ULIB_F_Cheats_C_CheatShowNPCInfo_Params
{
	bool*                                              bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatEnemySpawning
struct ULIB_F_Cheats_C_CheatEnemySpawning_Params
{
	bool*                                              bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangeXP
struct ULIB_F_Cheats_C_CheatChangeXP_Params
{
	float*                                             XP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatDeviceCooldowns
struct ULIB_F_Cheats_C_CheatDeviceCooldowns_Params
{
	bool*                                              bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatSpawnShip
struct ULIB_F_Cheats_C_CheatSpawnShip_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     PawnClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Mark;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              JumpIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AESPawn*                                     Ship;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatKillAllPawns
struct ULIB_F_Cheats_C_CheatKillAllPawns_Params
{
	bool*                                              OnlyEnemies;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatUnlimitedEnergy
struct ULIB_F_Cheats_C_CheatUnlimitedEnergy_Params
{
	bool*                                              Unlimited;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatNPCAwareness
struct ULIB_F_Cheats_C_CheatNPCAwareness_Params
{
	bool*                                              bAware;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatChangePlayerHealth
struct ULIB_F_Cheats_C_CheatChangePlayerHealth_Params
{
	float*                                             HealthDelta;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_F_Cheats.LIB_F_Cheats_C.CheatInvincibility
struct ULIB_F_Cheats_C_CheatInvincibility_Params
{
	bool*                                              bInvincible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
