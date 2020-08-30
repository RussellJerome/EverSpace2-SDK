#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_LIB_F_Cheats_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_F_Cheats.LIB_F_Cheats_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_F_Cheats_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_F_Cheats.LIB_F_Cheats_C");
		return ptr;
	}


	void STATIC_CheatGetAllPlayerShipsAsESPawns(class UObject** __WorldContext, TArray<class AESPawn*>* Ships);
	void STATIC_CheatGetAllPlayerShips(class UObject** __WorldContext, TArray<class ABP_ShipBase_C*>* Ships);
	void STATIC_CheatEnterTempLocationAtCurrentPosition(class UObject** __WorldContext);
	void STATIC_CheatUnlimitedAmmo(bool* On, class UObject** __WorldContext);
	void STATIC_CheatSetPlayerLevel(int* NewLevel, class UObject** __WorldContext);
	void STATIC_CheatInstallAllPrimaryWeaponTypes(class UObject** __WorldContext);
	void STATIC_CheatUnlimitedSensorRange(bool* Enable, struct FModifierHandle* ModifierHandle, class UObject** __WorldContext, struct FModifierHandle* Handle);
	void STATIC_CheatToggleDebugShipLook(class UObject** __WorldContext);
	void STATIC_CheatSetDebugShipLook(struct FName* ShipLookID, class UObject** __WorldContext);
	void STATIC_CheatRandomPlayerShip(class UObject** __WorldContext, TArray<TEnumAsByte<EShip>>* PossibleShipTypes);
	void STATIC_CheatShowShipSpeed(bool* bShow, class UObject** __WorldContext);
	void STATIC_CheatSkipInterception(class UObject** __WorldContext);
	void STATIC_CheatCreateAndRespawnNewPlayerShip(struct FName* ShipTemplateID, int* Level, class UObject** __WorldContext);
	void STATIC_CheatChooseTestShipColorSet(class UObject** __WorldContext);
	void STATIC_CheatShuffleShipModulesColorsDecals(class UObject** __WorldContext);
	void STATIC_CheatChangeShipDecals(bool* bPrevious, class UObject** __WorldContext);
	void STATIC_CheatChangeShipColorSet(bool* bPrevious, class UObject** __WorldContext);
	void STATIC_CheatChangeCredits(int* credits, class UObject** __WorldContext);
	void STATIC_CheatLockedNPCJumpsAway(class UObject** WorldContextObject, class UObject** __WorldContext);
	void STATIC_CheatShowMusicInfo(bool* bShow, class UObject** __WorldContext);
	void STATIC_CheatReloadLocation(class UObject** __WorldContext);
	void STATIC_CheatChangeShipModule(TEnumAsByte<EShipModule>* ModuleType, bool* bPrevious, class UObject** __WorldContext);
	void STATIC_CheatShowNPCInfo(bool* bShow, class UObject** __WorldContext);
	void STATIC_CheatEnemySpawning(bool* bEnable, class UObject** __WorldContext);
	void STATIC_CheatChangeXP(float* XP, class UObject** __WorldContext);
	void STATIC_CheatDeviceCooldowns(bool* bEnable, class UObject** __WorldContext);
	void STATIC_CheatSpawnShip(class UObject** WorldContextObject, class UClass** PawnClass, int* Level, int* Mark, bool* JumpIn, class UObject** __WorldContext, class AESPawn** Ship);
	void STATIC_CheatKillAllPawns(bool* OnlyEnemies, class UObject** __WorldContext);
	void STATIC_CheatUnlimitedEnergy(bool* Unlimited, class UObject** __WorldContext);
	void STATIC_CheatNPCAwareness(bool* bAware, class UObject** __WorldContext);
	void STATIC_CheatChangePlayerHealth(float* HealthDelta, class UObject** __WorldContext);
	void STATIC_CheatInvincibility(bool* bInvincible, class UObject** __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
