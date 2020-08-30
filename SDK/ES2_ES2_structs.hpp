#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Basic.hpp"
#include "ES2_Engine_classes.hpp"
#include "ES2_SlateCore_classes.hpp"
#include "ES2_CoreUObject_classes.hpp"
#include "ES2_AIModule_classes.hpp"
#include "ES2_UMG_classes.hpp"
#include "ES2_InputCore_classes.hpp"
#include "ES2_MovieScene_classes.hpp"
#include "ES2_ProceduralMeshComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ES2.EJumpAbortType
enum class EJumpAbortType : uint8_t
{
	None                           = 0,
	Manual                         = 1,
	Obstacle                       = 2,
	EscapeVector                   = 3,
	Enemies                        = 4,
	JumpSuppressor                 = 5,
	MissionActive                  = 6,
	MissionDialogActive            = 7,
	EJumpAbortType_MAX             = 8
};


// Enum ES2.EJumpMethod
enum class EJumpMethod : uint8_t
{
	None                           = 0,
	JumpDriveToSystem              = 1,
	JumpDriveToLocation            = 2,
	JumpGateToLocation             = 3,
	WormholeToLocation             = 4,
	TeleporterToLocation           = 5,
	EJumpMethod_MAX                = 6
};


// Enum ES2.EAIEvent
enum class EAIEvent : uint8_t
{
	Invalid                        = 0,
	OnBeginIdle                    = 1,
	OnBeginAttack                  = 2,
	OnBeginIsTailed                = 3,
	OnBeginFlee                    = 4,
	OnBeginGainDistance            = 5,
	OnBeginKamikazeApproach        = 6,
	OnSelfDestruct                 = 7,
	OnBeginTravelToTarget          = 8,
	OnEndTravelToTarget            = 9,
	OnArrivedAtHangar              = 10,
	OnBeginCatchUpWithLeader       = 11,
	OnEndCatchUpWithLeader         = 12,
	OnTakeoff                      = 13,
	OnEndIdle                      = 14,
	OnEndAttack                    = 15,
	OnEndIsTailed                  = 16,
	OnEndFlee                      = 17,
	OnEndGainDistance              = 18,
	OnBeginInvestigate             = 19,
	OnEndInvestigate               = 20,
	OnWaypointReached              = 21,
	OnFleeFromTurnfight            = 22,
	OnJump                         = 23,
	OnBeginBarrelRoll              = 24,
	OnEndBarrelRoll                = 25,
	OnBeginSpecialAttack           = 26,
	OnEndSpecialAttack             = 27,
	OnNoLeader                     = 28,
	EAIEvent_MAX                   = 29
};


// Enum ES2.EInteractWidgetDisplayLocation
enum class EInteractWidgetDisplayLocation : uint8_t
{
	ScreenCenter                   = 0,
	ActorLocation                  = 1,
	EInteractWidgetDisplayLocation_MAX = 2
};


// Enum ES2.EActivityHudMarkerType
enum class EActivityHudMarkerType : uint8_t
{
	None                           = 0,
	ShadowCreature                 = 1,
	RaceStart                      = 2,
	RaceGate                       = 3,
	RaceNextRing                   = 4,
	RaceRingAfterNextRing          = 5,
	RaceFinish                     = 6,
	EActivityHudMarkerType_MAX     = 7
};


// Enum ES2.ELocationCategory
enum class ELocationCategory : uint8_t
{
	None                           = 0,
	Generic                        = 1,
	DistressCall                   = 2,
	Resources                      = 3,
	Interception                   = 4,
	Count                          = 5,
	ELocationCategory_MAX          = 6
};


// Enum ES2.EPawnType
enum class EPawnType : uint8_t
{
	Undefined                      = 0,
	Drone                          = 1,
	Fighter                        = 2,
	Cruiser                        = 3,
	Capital                        = 4,
	Freighter                      = 5,
	Turret                         = 6,
	Creature                       = 7,
	EPawnType_MAX                  = 8
};


// Enum ES2.ERegisterIds
enum class ERegisterIds : uint8_t
{
	INVALID                        = 0,
	NONE                           = 1,
	Pawn                           = 2,
	ShipComponent                  = 3,
	Waypoint                       = 4,
	Missile                        = 5,
	PointOfInterest                = 6,
	HUDMarkerComponent             = 7,
	Pickup                         = 8,
	Resource                       = 9,
	JumpTarget                     = 10,
	DockingPoint                   = 11,
	Container                      = 12,
	Mission                        = 13,
	SpawnGizmo                     = 14,
	Perk                           = 15,
	TravelModeLocation             = 16,
	TravelModePlanet               = 17,
	JumpGate                       = 18,
	Mine                           = 19,
	POISpawner                     = 20,
	NavNode                        = 21,
	SpawnGizmoSelector             = 22,
	AreaGate                       = 23,
	OutlawStationStructure         = 24,
	Sequence                       = 25,
	EscapeTarget                   = 26,
	Activity                       = 27,
	Creature                       = 28,
	Glyph                          = 29,
	LocationInfo                   = 30,
	Count                          = 31,
	ERegisterIds_MAX               = 32
};


// Enum ES2.EMarkerRelation
enum class EMarkerRelation : uint8_t
{
	Friend                         = 0,
	Neutral                        = 1,
	Enemy                          = 2,
	NoRelation                     = 3,
	EMarkerRelation_MAX            = 4
};


// Enum ES2.EMarkerLook
enum class EMarkerLook : uint8_t
{
	OnScreen                       = 0,
	OffScreen                      = 1,
	EMarkerLook_MAX                = 2
};


// Enum ES2.EFactions
enum class EFactions : uint8_t
{
	Undefined                      = 0,
	Player                         = 1,
	PlayerFriend                   = 2,
	GradyAndBrunt                  = 3,
	Freelancer                     = 4,
	BountyHunter                   = 5,
	Okkar                          = 6,
	Outlaw                         = 7,
	OutlawRaven                    = 8,
	OutlawCrow                     = 9,
	OutlawCoalition                = 10,
	Scavenger                      = 11,
	RogueAI                        = 12,
	Ancient                        = 13,
	CloneHunter                    = 14,
	ElekGang                       = 15,
	CreatureHostile                = 16,
	CreatureNeutral                = 17,
	Count                          = 18,
	EFactions_MAX                  = 19
};


// Enum ES2.EItemRarity
enum class EItemRarity : uint8_t
{
	None                           = 0,
	Common                         = 1,
	Uncommon                       = 2,
	Enhanced                       = 3,
	Rare                           = 4,
	Legendary                      = 5,
	EItemRarity_MAX                = 6
};


// Enum ES2.EDialog
enum class EDialog : uint8_t
{
	Undefined                      = 0,
	SmallTalk                      = 1,
	Lore                           = 2,
	GenericMission                 = 3,
	MainMission                    = 4,
	Movie                          = 5,
	EDialog_MAX                    = 6
};


// Enum ES2.EEscapeTargetState
enum class EEscapeTargetState : uint8_t
{
	Countdown                      = 0,
	InPorgress                     = 1,
	Won                            = 2,
	Lost                           = 3,
	EEscapeTargetState_MAX         = 4
};


// Enum ES2.EActivityType
enum class EActivityType : uint8_t
{
	Invalid                        = 0,
	Activatable                    = 1,
	Passive                        = 2,
	EActivityType_MAX              = 3
};


// Enum ES2.EActivityState
enum class EActivityState : uint8_t
{
	Invalid                        = 0,
	InactiveAndHidden              = 1,
	Inactive                       = 2,
	Active                         = 3,
	Failed                         = 4,
	Succeeded                      = 5,
	Aborted                        = 6,
	AbortedAndHidden               = 7,
	EActivityState_MAX             = 8
};


// Enum ES2.EActorPoolExpansion
enum class EActorPoolExpansion : uint8_t
{
	INCREMENT                      = 0,
	Double                         = 1,
	EActorPoolExpansion_MAX        = 2
};


// Enum ES2.EIdleType
enum class EIdleType : uint8_t
{
	CouchAtHome                    = 0,
	MothAtHome                     = 1,
	MothAtTarget                   = 2,
	StraightFlight                 = 3,
	VisitPOIs                      = 4,
	VisitSurfacePoints             = 5,
	VisitPointsAroundTarget        = 6,
	ReadFromPawn                   = 7,
	CouchAtPosition                = 8,
	EIdleType_MAX                  = 9
};


// Enum ES2.EOrbitType
enum class EOrbitType : uint8_t
{
	SphereCapSurface               = 0,
	SphereCapSurfaceTrgt           = 1,
	KeepDirectionOnHorizontalOrbit = 2,
	KeepPositionOnSphereCapSurface = 3,
	EOrbitType_MAX                 = 4
};


// Enum ES2.EAttributeOp
enum class EAttributeOp : uint8_t
{
	AddFixValue                    = 0,
	AddFraction                    = 1,
	SetValue                       = 2,
	Multiply                       = 3,
	AddFixValueLast                = 4,
	Invalid                        = 5,
	EAttributeOp_MAX               = 6
};


// Enum ES2.EConditionStacktype
enum class EConditionStacktype : uint8_t
{
	Intensity                      = 0,
	Duration                       = 1,
	EConditionStacktype_MAX        = 2
};


// Enum ES2.EDeviceType
enum class EDeviceType : uint8_t
{
	Active                         = 0,
	Passive                        = 1,
	EDeviceType_MAX                = 2
};


// Enum ES2.ESpeakerMood
enum class ESpeakerMood : uint8_t
{
	Normal                         = 0,
	Happy                          = 1,
	Shocked                        = 2,
	Angry                          = 3,
	Sad                            = 4,
	Cunning                        = 5,
	ESpeakerMood_MAX               = 6
};


// Enum ES2.EBusyness
enum class EBusyness : uint8_t
{
	None                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EBusyness_MAX                  = 4
};


// Enum ES2.EDockingState
enum class EDockingState : uint8_t
{
	Free                           = 0,
	Approaching                    = 1,
	Landing                        = 2,
	Landed                         = 3,
	Launching                      = 4,
	EDockingState_MAX              = 5
};


// Enum ES2.EEquipmentInstallResult
enum class EEquipmentInstallResult : uint8_t
{
	Fail                           = 0,
	Success                        = 1,
	InsufficientResources          = 2,
	NoFreeSlots                    = 3,
	ModLimitReached                = 4,
	ModIncompatible                = 5,
	AmmoLimitReached               = 6,
	SameEquipmentAlreadyInstalled  = 7,
	IncompatibleShip               = 8,
	EEquipmentInstallResult_MAX    = 9
};


// Enum ES2.EEquipmentType
enum class EEquipmentType : uint8_t
{
	Consumable                     = 0,
	Device                         = 1,
	PrimaryWeapon                  = 2,
	SecondaryWeapon                = 3,
	Mod                            = 4,
	Any                            = 5,
	Buff                           = 6,
	None                           = 7,
	EEquipmentType_MAX             = 8
};


// Enum ES2.EControllerIconStyle
enum class EControllerIconStyle : uint8_t
{
	_Invalid_                      = 0,
	XBoxOne                        = 1,
	PS4                            = 2,
	Count                          = 3,
	EControllerIconStyle_MAX       = 4
};


// Enum ES2.EJoystickHUDBehavior
enum class EJoystickHUDBehavior : uint8_t
{
	_Invalid_                      = 0,
	Keyboard                       = 1,
	Gamepad                        = 2,
	Count                          = 3,
	EJoystickHUDBehavior_MAX       = 4
};


// Enum ES2.EInputPreset
enum class EInputPreset : uint8_t
{
	_Invalid_                      = 0,
	Custom                         = 1,
	MouseKeyboard                  = 2,
	GamepadScheme0                 = 3,
	GamepadScheme1                 = 4,
	GamepadScheme3                 = 5,
	GamepadScheme4                 = 6,
	Empty                          = 7,
	Count                          = 8,
	EInputPreset_MAX               = 9
};


// Enum ES2.EInputActionName
enum class EInputActionName : uint8_t
{
	_Invalid_                      = 0,
	ActionFreeze                   = 1,
	Boost                          = 2,
	Cancel                         = 3,
	CameraMoveForward              = 4,
	CameraMoveRight                = 5,
	CameraMoveUp                   = 6,
	CameraPitch                    = 7,
	CameraRoll                     = 8,
	CameraYaw                      = 9,
	CameraZoom                     = 10,
	ChargeCruiseMode               = 11,
	ChargeTravelMode               = 12,
	Consumable1                    = 13,
	Consumable2                    = 14,
	Consumable3                    = 15,
	Consumable4                    = 16,
	Device1                        = 17,
	Device2                        = 18,
	Device3                        = 19,
	Device4                        = 20,
	DisplayControls                = 21,
	FirePrimary                    = 22,
	FireSecondary                  = 23,
	FreeLook                       = 24,
	Headlight                      = 25,
	HighResScreenshot              = 26,
	IngameMenu                     = 27,
	Interact                       = 28,
	Inventory                      = 29,
	LockTarget                     = 30,
	LockNearestTarget              = 31,
	Map                            = 32,
	MenuAction2                    = 33,
	MenuAction3                    = 34,
	MenuChangeCompare              = 35,
	MoveForward                    = 36,
	MoveRight                      = 37,
	MoveUp                         = 38,
	NavigateAllFull                = 39,
	NavigateAllEmpty               = 40,
	NavigateDown                   = 41,
	NavigateLeft                   = 42,
	NavigateRight                  = 43,
	NavigateUp                     = 44,
	NextPrimary                    = 45,
	NextSecondary                  = 46,
	NextTarget                     = 47,
	OK                             = 48,
	Pause                          = 49,
	Pitch                          = 50,
	PreviousPrimary                = 51,
	PreviousSecondary              = 52,
	PreviousTarget                 = 53,
	Roll                           = 54,
	Scroll                         = 55,
	SubTabLeft                     = 56,
	SubTabRight                    = 57,
	SwitchCamera                   = 58,
	TabLeft                        = 59,
	TabRight                       = 60,
	ToggleFlightMode               = 61,
	ToggleHUD                      = 62,
	UseConsumable                  = 63,
	UseDevice                      = 64,
	Yaw                            = 65,
	Count                          = 66,
	EInputActionName_MAX           = 67
};


// Enum ES2.EIndicator
enum class EIndicator : uint8_t
{
	Invalid                        = 0,
	MainMission                    = 1,
	SideMission                    = 2,
	Job                            = 3,
	Waypoint                       = 4,
	Homebase                       = 5,
	JumpGate                       = 6,
	Wormhole                       = 7,
	ItemShop                       = 8,
	ShipDealer                     = 9,
	JobBoard                       = 10,
	Debuffed                       = 11,
	EIndicator_MAX                 = 12
};


// Enum ES2.ETypeOfDamage
enum class ETypeOfDamage : uint8_t
{
	Energy                         = 0,
	Kinetic                        = 1,
	Generic                        = 2,
	ETypeOfDamage_MAX              = 3
};


// Enum ES2.EJobType
enum class EJobType : uint8_t
{
	Undefined                      = 0,
	Job_Mining                     = 1,
	Job_Space_Junk                 = 2,
	Job_Maintenance                = 3,
	Job_Deliver_Items              = 4,
	Job_Lost_Found                 = 5,
	Job_Move_Containers            = 6,
	Job_Defend_Mining              = 7,
	Job_Attack_Outlaws             = 8,
	Job_Destroy_Freighters         = 9,
	Job_Attack_GB                  = 10,
	Job_Destroy_Scavengers         = 11,
	Job_Graffiti                   = 12,
	Job_Billboards                 = 13,
	Job_Taxi                       = 14,
	Job_Transport                  = 15,
	Job_Transport_Timed            = 16,
	Job_Racing                     = 17,
	Job_Assassination              = 18,
	Job_Reconnaissance             = 19,
	Count                          = 20,
	EJobType_MAX                   = 21
};


// Enum ES2.EAreaEnvironment
enum class EAreaEnvironment : uint8_t
{
	Undefined                      = 0,
	Exterior                       = 1,
	Interior                       = 2,
	Count                          = 3,
	EAreaEnvironment_MAX           = 4
};


// Enum ES2.EFactionRelation
enum class EFactionRelation : uint8_t
{
	Undefined                      = 0,
	Neutral                        = 1,
	Enemy                          = 2,
	Friend                         = 3,
	Count                          = 4,
	EFactionRelation_MAX           = 5
};


// Enum ES2.EFactionGroup
enum class EFactionGroup : uint8_t
{
	Undefined                      = 0,
	GradyAndBrunt_Mining           = 1,
	GradyAndBrunt_Trading          = 2,
	GradyAndBrunt_Defense          = 3,
	EnvMilitant                    = 4,
	EnvPacifist                    = 5,
	BeltagradesUnite               = 6,
	DMZPizza                       = 7,
	TradingGuild                   = 8,
	RacingLeague                   = 9,
	BountyHunter_Union             = 10,
	Okkar_DMZAffairs               = 11,
	Count                          = 12,
	EFactionGroup_MAX              = 13
};


// Enum ES2.EGraphicsQuality
enum class EGraphicsQuality : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Epic                           = 3,
	EGraphicsQuality_MAX           = 4
};


// Enum ES2.ELogMessage
enum class ELogMessage : uint8_t
{
	PlainMessage                   = 0,
	ItemPickup                     = 1,
	ConditionAdded                 = 2,
	ELogMessage_MAX                = 3
};


// Enum ES2.ETargetPriority
enum class ETargetPriority : uint8_t
{
	Default                        = 0,
	TargetPreference               = 1,
	Aggro                          = 2,
	BlindFury                      = 3,
	Override                       = 4,
	COUNT                          = 5,
	ETargetPriority_MAX            = 6
};


// Enum ES2.ENotifyAllies
enum class ENotifyAllies : uint8_t
{
	Notify_NoOne                   = 0,
	Notify_InRangeRecursive        = 1,
	Notify_All                     = 2,
	Notify_MAX                     = 3
};


// Enum ES2.EMenuTab
enum class EMenuTab : uint8_t
{
	Invalid                        = 0,
	StationHome                    = 1,
	Ship                           = 2,
	Hangar                         = 3,
	ItemShop                       = 4,
	ShipDealer                     = 5,
	Workshop                       = 6,
	Management                     = 7,
	Refinery                       = 8,
	Communications                 = 9,
	BlackMarket                    = 10,
	Map                            = 11,
	Missions                       = 12,
	Stats                          = 13,
	Jobs                           = 14,
	Loot                           = 15,
	EMenuTab_MAX                   = 16
};


// Enum ES2.EMenuType
enum class EMenuType : uint8_t
{
	Ingame                         = 0,
	Station                        = 1,
	Homebase                       = 2,
	Loot                           = 3,
	Count                          = 4,
	EMenuType_MAX                  = 5
};


// Enum ES2.EInventorySearchType
enum class EInventorySearchType : uint8_t
{
	InStorageOrAnyShip             = 0,
	InStorageOrCurrentShip         = 1,
	InStorageOnly                  = 2,
	InCurrentShipCargoOnly         = 3,
	InAnyShip                      = 4,
	EInventorySearchType_MAX       = 5
};


// Enum ES2.EMarkerScalingMethod
enum class EMarkerScalingMethod : uint8_t
{
	MaxDimension                   = 0,
	MinDimension                   = 1,
	X                              = 2,
	Y                              = 3,
	Z                              = 4,
	EMarkerScalingMethod_MAX       = 5
};


// Enum ES2.EAttackOnPlayer
enum class EAttackOnPlayer : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	Web                            = 2,
	Scan                           = 3,
	EAttackOnPlayer_MAX            = 4
};


// Enum ES2.EInteractState
enum class EInteractState : uint8_t
{
	Idle                           = 0,
	HoldingKey                     = 1,
	Charging                       = 2,
	ReadyToInteract                = 3,
	Interacted                     = 4,
	Done                           = 5,
	EInteractState_MAX             = 6
};


// Enum ES2.EInteractWidgetHUDMarkerBehavior
enum class EInteractWidgetHUDMarkerBehavior : uint8_t
{
	HideMarkerDetails              = 0,
	AttachToHUDMarker              = 1,
	ShowBoth                       = 2,
	EInteractWidgetHUDMarkerBehavior_MAX = 3
};


// Enum ES2.EShipBuyResult
enum class EShipBuyResult : uint8_t
{
	Success                        = 0,
	LevelTooLow                    = 1,
	NotEnoughCredits               = 2,
	NotEnoughSpaceOnHomebase       = 3,
	NotEnoughCargoForItemTransfer  = 4,
	MiscError                      = 5,
	EShipBuyResult_MAX             = 6
};


// Enum ES2.EShipBuyMode
enum class EShipBuyMode : uint8_t
{
	SendNewToHomebase              = 0,
	SendOldToHomebase              = 1,
	SellOld                        = 2,
	CheatReplaceCurrentShip        = 3,
	EShipBuyMode_MAX               = 4
};


// Enum ES2.EInventoryCategory
enum class EInventoryCategory : uint8_t
{
	PrimaryWeapon                  = 0,
	SecondaryWeapon                = 1,
	EnergyCore                     = 2,
	Sensor                         = 3,
	Shield                         = 4,
	CargoUnit                      = 5,
	Plating                        = 6,
	Thrusters                      = 7,
	Device                         = 8,
	Consumable                     = 9,
	Cargo                          = 10,
	INVALID                        = 11,
	EInventoryCategory_MAX         = 12
};


// Enum ES2.EAttributeFormat
enum class EAttributeFormat : uint8_t
{
	Float                          = 0,
	Percent                        = 1,
	Int                            = 2,
	EAttributeFormat_MAX           = 3
};


// Enum ES2.EContainerType
enum class EContainerType : uint8_t
{
	OpenOnHit                      = 0,
	OpenOnInteract                 = 1,
	OpenOnUnlocked                 = 2,
	AlreadyOpenedNoContainer       = 3,
	EContainerType_MAX             = 4
};


// Enum ES2.EPOIType
enum class EPOIType : uint8_t
{
	Invalid                        = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	Main                           = 4,
	EPOIType_MAX                   = 5
};


// Enum ES2.ESpawnGroup
enum class ESpawnGroup : uint8_t
{
	INVALID                        = 0,
	PlacedInEditor                 = 1,
	SpawnedDuringPlay              = 2,
	LocationBusyness               = 3,
	START_NPCS                     = 4,
	GnB                            = 5,
	GnB_Mixed                      = 6,
	GnB_Cargo                      = 7,
	GnB_Capital                    = 8,
	GnB_Dockables                  = 9,
	Okkar                          = 10,
	Okkar_Mixed                    = 11,
	Okkar_Drones                   = 12,
	Okkar_Swarm                    = 13,
	Okkar_Interceptors             = 14,
	Okkar_Capital                  = 15,
	Outlaw                         = 16,
	Outlaw_Mixed                   = 17,
	Outlaw_Drones                  = 18,
	Outlaw_Capital                 = 19,
	Outlaw_Dockables               = 20,
	Freelancer                     = 21,
	Freelancer_Dockables           = 22,
	Mercenary                      = 23,
	Scavenger                      = 24,
	Asteroid_Crawler               = 25,
	Scrap_Anemone                  = 26,
	Plasma_Jellyfish               = 27,
	START_CONTAINERS               = 28,
	Container_Generic              = 29,
	Container_Rare                 = 30,
	Container_Tech                 = 31,
	Container_GnB                  = 32,
	START_RESOURCES                = 33,
	Resource_Crystal               = 34,
	Resource_Crystal_Atheum        = 35,
	Resource_Crystal_Vardum        = 36,
	Resource_Ore                   = 37,
	Resource_Ore_Iron              = 38,
	Resource_Ore_Copper            = 39,
	Resource_Ore_Diluted_Osnil     = 40,
	Resource_Ore_Glacit            = 41,
	Resource_Ore_Silver            = 42,
	Resource_Ore_Clymouth          = 43,
	Resource_Ore_Osnil             = 44,
	Resource_Ore_Osnil_Core        = 45,
	Resource_Ore_Stakk             = 46,
	Resource_Ore_Gold              = 47,
	Resource_Ore_Clymouth_Core     = 48,
	Resource_Ore_Flawless_Osnil    = 49,
	Resource_Ore_Titanium          = 50,
	Resource_Ore_Stakk_Core        = 51,
	Resource_Ore_Neptan            = 52,
	Resource_Ore_Wighord           = 53,
	Resource_Ore_Wighord_Core      = 54,
	Resource_Dark_Matter           = 55,
	Resource_Plasma                = 56,
	COUNT                          = 57,
	ESpawnGroup_MAX                = 58
};


// Enum ES2.ELootType
enum class ELootType : uint8_t
{
	NoLoot                         = 0,
	Drone                          = 1,
	Fighter                        = 2,
	HeavyFighter                   = 3,
	Cruiser                        = 4,
	CapitalShip                    = 5,
	Turret                         = 6,
	Junk                           = 7,
	Credits                        = 8,
	Weapons                        = 9,
	Modules                        = 10,
	Equipment                      = 11,
	Commodities                    = 12,
	Job                            = 13,
	Resources                      = 14,
	OutlawStation                  = 15,
	Container                      = 16,
	FreightContainer               = 17,
	ELootType_MAX                  = 18
};


// Enum ES2.EItemNameElementType
enum class EItemNameElementType : uint8_t
{
	Prefix                         = 0,
	Adjective                      = 1,
	Title                          = 2,
	Suffix                         = 3,
	Invalid                        = 4,
	EItemNameElementType_MAX       = 5
};


// Enum ES2.EShipModule
enum class EShipModule : uint8_t
{
	Body                           = 0,
	Wings                          = 1,
	Rear                           = 2,
	Extension                      = 3,
	Base                           = 4,
	Cockpit                        = 5,
	Invalid                        = 6,
	EShipModule_MAX                = 7
};


// Enum ES2.EShip
enum class EShip : uint8_t
{
	_Invalid                       = 0,
	AssaultFighter                 = 1,
	Bomber                         = 2,
	Defender                       = 3,
	Interceptor                    = 4,
	Gunship                        = 5,
	PatrolShip                     = 6,
	Scout                          = 7,
	Sentinel                       = 8,
	SpecOps                        = 9,
	EShip_MAX                      = 10
};


// Enum ES2.ELocationType
enum class ELocationType : uint8_t
{
	Normal                         = 0,
	LowOrbit                       = 1,
	Surface                        = 2,
	Composite                      = 3,
	Temporary                      = 4,
	ELocationType_MAX              = 5
};


// Enum ES2.ELocationConnection
enum class ELocationConnection : uint8_t
{
	Beacon                         = 0,
	JumpGate                       = 1,
	Surface                        = 2,
	Wormhole                       = 3,
	Teleporter                     = 4,
	ELocationConnection_MAX        = 5
};


// Enum ES2.EMissionLocation
enum class EMissionLocation : uint8_t
{
	NormalLocation                 = 0,
	NormalOrTemporaryLocation      = 1,
	TemporaryLocation              = 2,
	EMissionLocation_MAX           = 3
};


// Enum ES2.EMissionType
enum class EMissionType : uint8_t
{
	Side                           = 0,
	Main                           = 1,
	Job                            = 2,
	Encounter                      = 3,
	Any                            = 4,
	EMissionType_MAX               = 5
};


// Enum ES2.EMissionTaskTimeLimit
enum class EMissionTaskTimeLimit : uint8_t
{
	NoTimeLimit                    = 0,
	TimeLimitWithFail              = 1,
	TimeLimitWithoutFail           = 2,
	EMissionTaskTimeLimit_MAX      = 3
};


// Enum ES2.EMissionTaskDisplayType
enum class EMissionTaskDisplayType : uint8_t
{
	OnlyWhenUpdated                = 0,
	Always                         = 1,
	AlwaysAtTaskLocation           = 2,
	EMissionTaskDisplayType_MAX    = 3
};


// Enum ES2.EMissionTaskState
enum class EMissionTaskState : uint8_t
{
	Invalid                        = 0,
	InactiveAndHidden              = 1,
	Inactive                       = 2,
	Active                         = 3,
	Failed                         = 4,
	Succeeded                      = 5,
	Aborted                        = 6,
	AbortedAndHidden               = 7,
	EMissionTaskState_MAX          = 8
};


// Enum ES2.EQuestItem
enum class EQuestItem : uint8_t
{
	Package                        = 0,
	Delivery                       = 1,
	Goods                          = 2,
	Towels                         = 3,
	EnergyCore                     = 4,
	DNA                            = 5,
	None                           = 6,
	EQuestItem_MAX                 = 7
};


// Enum ES2.EPickupType
enum class EPickupType : uint8_t
{
	Collectible                    = 0,
	Resource                       = 1,
	Commodity                      = 2,
	Credits                        = 3,
	Device                         = 4,
	DeviceMod                      = 5,
	PrimaryWeapon                  = 6,
	SecondaryWeapon                = 7,
	Consumable                     = 8,
	QuestItem                      = 9,
	EPickupType_MAX                = 10
};


// Enum ES2.ESpawnMethod
enum class ESpawnMethod : uint8_t
{
	SpawnedDuringPlay              = 0,
	SpawnedFromLocationPool        = 1,
	SpawnedFromDockingStation      = 2,
	SpawnedForLocationBusyness     = 3,
	PlacedInEditor                 = 4,
	SpawnedByMission               = 5,
	SpawnedFromWingmen             = 6,
	Other                          = 7,
	ESpawnMethod_MAX               = 8
};


// Enum ES2.EEngineOpacityControlledBy
enum class EEngineOpacityControlledBy : uint8_t
{
	Transform                      = 0,
	Sequencer                      = 1,
	Input                          = 2,
	EEngineOpacityControlledBy_MAX = 3
};


// Enum ES2.ESequenceType
enum class ESequenceType : uint8_t
{
	None                           = 0,
	CanBeCanceled                  = 1,
	Docking                        = 2,
	CannotBeCanceled               = 3,
	ESequenceType_MAX              = 4
};


// Enum ES2.ESystemRegion
enum class ESystemRegion : uint8_t
{
	Invalid                        = 0,
	S01A                           = 1,
	S01B                           = 2,
	S01C                           = 3,
	S01D                           = 4,
	S01E                           = 5,
	S01F                           = 6,
	S01G                           = 7,
	S02A                           = 8,
	S02B                           = 9,
	S02C                           = 10,
	S02D                           = 11,
	S02E                           = 12,
	S02F                           = 13,
	S02G                           = 14,
	S08A                           = 15,
	S08B                           = 16,
	S08C                           = 17,
	S08D                           = 18,
	S08E                           = 19,
	S08F                           = 20,
	S08G                           = 21,
	ESystemRegion_MAX              = 22
};


// Enum ES2.EWeaponImpact
enum class EWeaponImpact : uint8_t
{
	Shield                         = 0,
	Armor                          = 1,
	Hull                           = 2,
	EWeaponImpact_MAX              = 3
};


// Enum ES2.EWeaponCategory
enum class EWeaponCategory : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	EWeaponCategory_MAX            = 2
};


// Enum ES2.ETargetSearchStrategy
enum class ETargetSearchStrategy : uint8_t
{
	AnyClosestToCrosshair          = 0,
	NearestEnemy                   = 1,
	ETargetSearchStrategy_MAX      = 2
};


// Enum ES2.WidgetPauseMode
enum class EWidgetPauseMode : uint8_t
{
	KeepPrevious                   = 0,
	PauseGame                      = 1,
	WidgetPauseMode_MAX            = 2
};


// Enum ES2.WidgetStackType
enum class EWidgetStackType : uint8_t
{
	GameHud                        = 0,
	GameMenu                       = 1,
	IngameDialogModal              = 2,
	GameModalDialog                = 3,
	OsModalDialog                  = 4,
	VRFadeScreen                   = 5,
	Count                          = 6,
	WidgetStackType_MAX            = 7
};


// Enum ES2.EGainCondition
enum class EGainCondition : uint8_t
{
	HealthDepleted                 = 0,
	MissionCompleted               = 1,
	Manual                         = 2,
	EGainCondition_MAX             = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ES2.ESVariant
// 0x0018
struct FESVariant
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ES2.ActivityReward
// 0x001C
struct FActivityReward
{
	struct FName                                       ItemID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CategoryID;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           ItemRarity;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                Amount;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemLevel;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.ActivitySaveGameData
// 0x0080
struct FActivitySaveGameData
{
	class UClass*                                      ActivityClass;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActivityID;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EActivityState                                     State;                                                    // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FName                                       LocationID;                                               // 0x0014(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TMap<struct FName, struct FESVariant>              Attributes;                                               // 0x0020(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FActivityReward>                     Rewards;                                                  // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ES2.BuffableFloat
// 0x0040
struct FBuffableFloat
{
	float                                              BaseValue;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0004(0x003C) MISSED OFFSET
};

// ScriptStruct ES2.AttributeAccess
// 0x0050
struct FAttributeAccess
{
	struct FName                                       AttributeID;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FBuffableFloat                              AttributeValueSimple;                                     // 0x0008(0x0040) (Edit)
	class UItemAttribute*                              AttributeValueFromItem;                                   // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.SteeringNoiseParametersStruct
// 0x0008
struct FSteeringNoiseParametersStruct
{
	float                                              SteeringNoiseWavelength;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SteeringNoiseAmplitudeMeter;                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.ConsumableInfo
// 0x0018
struct FConsumableInfo
{
	class UItem*                                       ConsumableItem;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ConsumableClass;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AConsumableBase*                             DefaultConsumableObject;                                  // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.ConsumableCooldown
// 0x0010
struct FConsumableCooldown
{
	struct FName                                       ItemTemplateID;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RemainingCooldown;                                        // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InitialCooldown;                                          // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.KeybindingConfig
// 0x00B8
struct FKeybindingConfig
{
	TEnumAsByte<EInputActionName>                      Action;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       ActionName;                                               // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       AxisName;                                                 // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Category;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAxis;                                                  // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FKey                                        Key1;                                                     // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FKey                                        Key1Mod;                                                  // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FKey                                        Key2;                                                     // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FKey                                        Key2Mod;                                                  // 0x0068(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              Scale;                                                    // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DeadZone;                                                 // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Sensitivity;                                              // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Exponent;                                                 // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInvert;                                                  // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0098(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       GroupName;                                                // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.DamagePartEffectText
// 0x0030
struct FDamagePartEffectText
{
	struct FText                                       EffectName;                                               // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FText                                       EffectValue;                                              // 0x0018(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct ES2.DeviceInfo
// 0x0018
struct FDeviceInfo
{
	class UItem*                                       DeviceItem;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DeviceClass;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ADeviceBase*                                 SpawnedDevice;                                            // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ES2.DockableStationTemplate
// 0x0070
struct FDockableStationTemplate
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // 0x0008(0x0028) (BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EFactions>                             Faction;                                                  // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FName                                       SystemID;                                                 // 0x0024(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       LocationID;                                               // 0x002C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CanRepair;                                                // 0x0034(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CanRestock;                                               // 0x0035(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	float                                              Busyness;                                                 // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxShipsForSale;                                          // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ItemAvailibility;                                         // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              JobsAvailibility;                                         // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SellsAll;                                                 // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	TArray<struct FName>                               SellIDs;                                                  // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               MinPriceItemIDs;                                          // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ES2.ShipModuleState
// 0x000C
struct FShipModuleState
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EShipModule>                           Type;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ES2.ShipColors
// 0x00C8
struct FShipColors
{
	struct FLinearColor                                HullColor1;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HullColor1Roughness;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHullColor1Metal;                                         // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FLinearColor                                HullColor2;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HullColor2Roughness;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHullColor2Metal;                                         // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FLinearColor                                HullColor3;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HullColor3Roughness;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHullColor3Metal;                                         // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FLinearColor                                EmissiveColor1;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                EmissiveColor2;                                           // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DecalColorType1;                                          // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DecalColorType2;                                          // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DecalColorTypeBorder;                                     // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DecalColorInsignia1;                                      // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DecalColorInsignia2;                                      // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DecalColorInsigniaBorder;                                 // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ES2.ShipData
// 0x0128
struct FShipData
{
	struct FText                                       Name;                                                     // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly)
	class UInventory*                                  Inventory;                                                // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UItem*                                       ShipItemInstance;                                         // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FShipModuleState>                    ShipModules;                                              // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FShipColors                                 ShipColors;                                               // 0x0038(0x00C8) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FName>                               ShipPerks;                                                // 0x0100(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       DecalsID;                                                 // 0x0110(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HealthRatio;                                              // 0x0118(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SelectedPrimaryIndex;                                     // 0x011C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SelectedSecondaryIndex;                                   // 0x0120(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SelectedConsumableIndex;                                  // 0x0124(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.MissionReward
// 0x001C
struct FMissionReward
{
	struct FName                                       ItemID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CategoryID;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           ItemRarity;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                Amount;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemLevel;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.TaskSaveGameData
// 0x00C0
struct FTaskSaveGameData
{
	class UClass*                                      TaskClass;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskID;                                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionTaskState>                     TaskState;                                                // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionTaskDisplayType>               TaskDisplayType;                                          // 0x0011(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                Stage;                                                    // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Progress;                                                 // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SpawnedDuringMissionStage;                                // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DifficultyLevel;                                          // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionTaskTimeLimit>                 TimeLimitType;                                            // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              TimeLimit;                                                // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeRemaining;                                            // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMission;                                               // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FName                                       LocationID;                                               // 0x0034(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StationID;                                                // 0x003C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FName>                               ChildTaskIDs;                                             // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, struct FESVariant>              Attributes;                                               // 0x0058(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FMissionReward>                      Rewards;                                                  // 0x00A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bHideInMissionLog;                                        // 0x00B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHidden;                                                // 0x00B9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFactions>                             MissionFaction;                                           // 0x00BA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFactions>                             EnemyFaction;                                             // 0x00BB(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
};

// ScriptStruct ES2.SpawnParameter
// 0x0028
struct FSpawnParameter
{
	int                                                LocationLevel;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NPCLevel;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Yield;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Mark;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               JumpIn;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FFloatRange                                 JumpInDelay;                                              // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DwellTime;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.EnergyAllocation
// 0x0018
struct FEnergyAllocation
{
	float                                              Energy;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      ConsumerName;                                             // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ES2.FindReplaceTextArgument
// 0x0020
struct FFindReplaceTextArgument
{
	class FString                                      ArgumentNameNoBrackets;                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      ReplaceString;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ES2.GraphicsQualityLevels
// 0x0018
struct FGraphicsQualityLevels
{
	int                                                AntiAliasingQuality;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EffectsQuality;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PostProcessQuality;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShadowQuality;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TextureQuality;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ViewDistanceQuality;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.PausedAnimationInfo
// 0x0010
struct FPausedAnimationInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ES2.HUDTaskData
// 0x0108
struct FHUDTaskData
{
	struct FTaskSaveGameData                           TaskData;                                                 // 0x0000(0x00C0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       OwningMissionID;                                          // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskID;                                                   // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       MissionTitle;                                             // 0x00D0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ObjectiveText;                                            // 0x00E8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsNewTask;                                               // 0x0100(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStateChange;                                             // 0x0101(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bProgressChange;                                          // 0x0102(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStageChange;                                             // 0x0103(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPermanentlyDisplay;                                      // 0x0104(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
};

// ScriptStruct ES2.HUDMessage
// 0x0038
struct FHUDMessage
{
	TEnumAsByte<ELogMessage>                           MessageType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x0008(0x0028) (Edit, BlueprintVisible)
	class UItem*                                       ItemRef;                                                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemAmount;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UConditionBaseComponent*                     ConditionRef;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ES2.ShipDecalTextures
// 0x0050 (0x0058 - 0x0008)
struct FShipDecalTextures : public FTableRowBase
{
	TSoftObjectPtr<class UObject>                      TypeTexture;                                              // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TSoftObjectPtr<class UObject>                      InsigniaTexture;                                          // 0x0030(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct ES2.AimingNoiseParametersStruct
// 0x0014
struct FAimingNoiseParametersStruct
{
	float                                              AimingNoiseWavelength;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AimingNoiseMaxDeviationAngle;                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AimingNoiseMaxDeviationOffset;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AimingInertiaSeconds;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreGameDifficulty;                                     // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct ES2.PrioritizedTargetLists
// 0x0040
struct FPrioritizedTargetLists
{
	TArray<class AActor*>                              TargetOverrideList;                                       // 0x0000(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              TargetBlindFuryList;                                      // 0x0010(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              AggroList;                                                // 0x0020(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              TargetPreferenceList;                                     // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct ES2.NPCLevelingData
// 0x0080
struct FNPCLevelingData
{
	class FString                                      BlueprintName;                                            // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              HullDPSPrimary;                                           // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShieldDPSPrimary;                                         // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HullDPSSecondary;                                         // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShieldDPSSecondary;                                       // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HullHP;                                                   // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ArmorHP;                                                  // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShieldHP;                                                 // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              XP;                                                       // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      MarkLevels;                                               // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      MarkProbabilites;                                         // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      MarkDamageMultipliers;                                    // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      MarkHitpointMultipliers;                                  // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      MarkXPMultipliers;                                        // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ES2.SequenceEventData
// 0x0008
struct FSequenceEventData
{
	class ULevelSequence*                              LevelSequence;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.FactionEntry
// 0x0008
struct FFactionEntry
{
	TEnumAsByte<EFactionRelation>                      Relation;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              HitpointsDealt;                                           // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.HomebaseUpgrade
// 0x00A0
struct FHomebaseUpgrade
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // 0x0008(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0028) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FName>                               Requirements;                                             // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                EnergyCosts;                                              // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CreditCosts;                                              // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, int>                            ResourceCosts;                                            // 0x0050(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ES2.SpaceObjectAttributes
// 0x0028
struct FSpaceObjectAttributes
{
	int                                                IntValue;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     VectorValue;                                              // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               BoolValue;                                                // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FLinearColor                                LinearColorValue;                                         // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ES2.LocationSpaceObject
// 0x00C0
struct FLocationSpaceObject
{
	struct FTransform                                  AbsoluteTransform;                                        // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       ID;                                                       // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TMap<class FString, struct FSpaceObjectAttributes> Attributes;                                               // 0x0070(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ES2.SystemData
// 0x00A0
struct FSystemData
{
	struct FText                                       Name;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FName                                       SystemID;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOnMap;                                            // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorCurveValue;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Diameter;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FLocationSpaceObject>                SpaceObjects;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class FString, struct FSpaceObjectAttributes> Attributes;                                               // 0x0050(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ES2.RegionGrid
// 0x0010
struct FRegionGrid
{
	TArray<TEnumAsByte<ESystemRegion>>                 RegionIDs;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ES2.LocationConnection
// 0x0018
struct FLocationConnection
{
	TEnumAsByte<ELocationConnection>                   ConnectionType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               LocationIDs;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ES2.LocationData
// 0x0150
struct FLocationData
{
	struct FText                                       Name;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FText                                       Subtitle;                                                 // 0x0018(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FName                                       LocationID;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeverShowIngame;                                         // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FName                                       SystemID;                                                 // 0x003C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Seed;                                                     // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class FString                                      MapAssetString;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TSoftObjectPtr<class UObject>                      MapAsset;                                                 // 0x0058(0x0028) (Edit, BlueprintVisible, Transient)
	struct FVector                                     LocationOnMap;                                            // 0x0080(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector2D                                   MapLabelOffset;                                           // 0x008C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRegardOrientation;                                       // 0x0094(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0095(0x000B) MISSED OFFSET
	struct FTransform                                  LocationTransform;                                        // 0x00A0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	int                                                Level;                                                    // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Security;                                                 // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ParentLocationID;                                         // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	TArray<struct FName>                               ChildLocationIDs;                                         // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst)
	TEnumAsByte<ELocationType>                         LocationType;                                             // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELocationCategory>                     LocationCategory;                                         // 0x00F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00F2(0x0006) MISSED OFFSET
	TArray<struct FLocationConnection>                 Connections;                                              // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLocationSpaceObject>                SpaceObjects;                                             // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TArray<struct FName>                               ShowTokens;                                               // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TArray<struct FName>                               HideTokens;                                               // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	TArray<struct FName>                               LockTokens;                                               // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	bool                                               bLocked;                                                  // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bTemporaryEvent;                                          // 0x0149(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHidden;                                                  // 0x014A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bInvalidated;                                             // 0x014B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
};

// ScriptStruct ES2.Faction
// 0x0080
struct FFaction
{
	TEnumAsByte<EFactions>                             Faction;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0008(0x0028) (BlueprintVisible, BlueprintReadOnly)
	TArray<TEnumAsByte<EFactionGroup>>                 Groups;                                                   // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<TEnumAsByte<EFactions>, TEnumAsByte<EFactionRelation>> Relations;                                                // 0x0030(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ES2.FactionGroup
// 0x0030
struct FFactionGroup
{
	TEnumAsByte<EFactionGroup>                         FactionGroup;                                             // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFactions>                             ParentFaction;                                            // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0008(0x0028) (BlueprintVisible, BlueprintReadOnly)
	TArray<TEnumAsByte<EJobType>>                      JobTypes;                                                 // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ES2.Collectible
// 0x0080
struct FCollectible
{
	struct FText                                       CategoryName;                                             // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       CategoryID;                                               // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // 0x0020(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       ID;                                                       // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Description;                                              // 0x0040(0x0028) (BlueprintVisible, BlueprintReadOnly)
	TSoftObjectPtr<class UTexture2D>                   Icon;                                                     // 0x0058(0x0028) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ES2.PickupEntry
// 0x0018
struct FPickupEntry
{
	class FString                                      PickupClassPath;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UInventory*                                  PickupInventory;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.StationItemPriceInfo
// 0x0010
struct FStationItemPriceInfo
{
	int                                                MinPrice;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxPrice;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BuyFromShopPrice;                                         // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SellToShopPrice;                                          // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.DamageThreshold
// 0x0008
struct FDamageThreshold
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Probability;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.DamagePartEntry
// 0x0018
struct FDamagePartEntry
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      DamagePart;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ADamagePart*                                 DamagePartInstance;                                       // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.HullRepair
// 0x0008
struct FHullRepair
{
	float                                              HP;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepairRatePerSecond;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.DamagePartInfo
// 0x0020
struct FDamagePartInfo
{
	struct FText                                       Name;                                                     // 0x0000(0x0028) (Edit, BlueprintVisible)
	bool                                               IsDamaged;                                                // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              DamageRatio;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.HUDMarkerData
// 0x0098
struct FHUDMarkerData
{
	bool                                               bHitpointVisibility;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowHitpoints;                                           // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideHitpoints;                                           // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowDetails;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHovered;                                                 // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                Level;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Mark;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Distance;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scale;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthCurrent;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthRecentDMG;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthMax;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArmorCurrent;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArmorRecentDMG;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArmorMax;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldCurrent;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldRecentDMG;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldMax;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RenderAngle;                                              // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Opacity;                                                  // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenspaceBoundsRadius;                                  // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0048(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       AdditionalInfoText;                                       // 0x0060(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLockedTarget;                                            // 0x0079(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bJumpTarget;                                              // 0x007A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHidden;                                                  // 0x007B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsOccluded;                                              // 0x007C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOwnerJumpingIn;                                          // 0x007D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x007E(0x0002) MISSED OFFSET
	class UClass*                                      ActorClass;                                               // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFactions>                             Faction;                                                  // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMarkerLook>                           MarkerLook;                                               // 0x0089(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMarkerRelation>                       MarkerRelation;                                           // 0x008A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ERegisterIds>                          ActorType;                                                // 0x008B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPawnType>                             PawnType;                                                 // 0x008C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ELocationCategory>                     EventType;                                                // 0x008D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EActivityHudMarkerType                             AcivityHudMarkerType;                                     // 0x008E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x9];                                       // 0x008F(0x0009) MISSED OFFSET
};

// ScriptStruct ES2.InputActionButtonInfo
// 0x0030
struct FInputActionButtonInfo
{
	struct FText                                       ButtonText;                                               // 0x0000(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<EInputActionName>                      Action;                                                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHoldToTrigger;                                           // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	struct FScriptDelegate                             OnPressed;                                                // 0x001C(0x0014) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ES2.KeybindingCell
// 0x00F8
struct FKeybindingCell
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                Keys;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FKey>                                Modifiers;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FText>                               Texts;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BindingIndex;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FKeybindingConfig                           KeybindingConfig;                                         // 0x0040(0x00B8) (Edit, BlueprintVisible)
};

// ScriptStruct ES2.InputPresetBinding
// 0x0030
struct FInputPresetBinding
{
	TEnumAsByte<EInputActionName>                      Action;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAxisKey;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvert;                                                  // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	TArray<struct FKey>                                Keys;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FKey>                                Modifiers;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ES2.InputPresetContainer
// 0x0038
struct FInputPresetContainer
{
	TArray<struct FInputPresetBinding>                 KeyboardBindings;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FInputPresetBinding>                 GamepadBindings;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FInputPresetBinding>                 JoystickBindings;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bKeyboardBindingsChanged;                                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGamepadBindingsChanged;                                  // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bJoystickBindingsChanged;                                 // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
};

// ScriptStruct ES2.ItemContainerContent
// 0x001C
struct FItemContainerContent
{
	struct FName                                       ItemID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CategoryID;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                Amount;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemLevel;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.ShipSettingsTableRow
// 0x0038 (0x0040 - 0x0008)
struct FShipSettingsTableRow : public FTableRowBase
{
	float                                              CamTPRotationLagStiffness;                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamTPRotationLagPivotXOffset;                             // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamTPCloseSpringArmLength;                                // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CamTPCloseSpringArmSocketOffset;                          // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamTPFarSpringArmLength;                                  // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CamTPFarSpringArmSocketOffset;                            // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CamFreelookSpringArmLength;                               // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CamFreelookSpringArmSocketOffset;                         // 0x0034(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ES2.ModuleExtension
// 0x0030
struct FModuleExtension
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TSoftObjectPtr<class UObject>                      Asset;                                                    // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct ES2.ShipModule
// 0x0090 (0x0098 - 0x0008)
struct FShipModule : public FTableRowBase
{
	TSoftObjectPtr<class UObject>                      Asset;                                                    // 0x0008(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TEnumAsByte<EShipModule>                           Type;                                                     // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0031(0x0050) UNKNOWN PROPERTY: SetProperty ES2.ShipModule.ShipsWhiteList
	TArray<struct FModuleExtension>                    Extensions;                                               // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ES2.ItemValueRange
// 0x0014
struct FItemValueRange
{
	struct FName                                       AttributeID;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMandatory;                                               // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct ES2.ItemTemplate
// 0x00E0
struct FItemTemplate
{
	struct FText                                       CategoryName;                                             // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       CategoryID;                                               // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       SubCategoryName;                                          // 0x0020(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       SubCategoryID;                                            // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // 0x0040(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       ID;                                                       // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       LegendaryQuote;                                           // 0x0060(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0078(0x0028) (BlueprintVisible, BlueprintReadOnly)
	TSoftObjectPtr<class UTexture2D>                   Icon;                                                     // 0x0090(0x0028) (BlueprintVisible, BlueprintReadOnly)
	class FString                                      BlueprintName;                                            // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<EItemRarity>                           MinRarity;                                                // 0x00C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           MaxRarity;                                                // 0x00C9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET
	TArray<struct FItemValueRange>                     ItemValueRanges;                                          // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ES2.ItemChipValue
// 0x0014
struct FItemChipValue
{
	struct FName                                       ItemCategoryID;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeID;                                              // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.ItemChip
// 0x0058
struct FItemChip
{
	struct FText                                       Name;                                                     // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       ID;                                                       // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UTexture2D>                   Icon;                                                     // 0x0020(0x0028) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FItemChipValue>                      Values;                                                   // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ES2.ItemAttributeTemplate
// 0x00A8
struct FItemAttributeTemplate
{
	struct FText                                       Name;                                                     // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       ID;                                                       // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Description;                                              // 0x0020(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DescriptionForMandatory;                                  // 0x0038(0x0028) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsLegendaryAttribute;                                    // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHeroAttribute;                                         // 0x0051(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	struct FText                                       Prefix;                                                   // 0x0058(0x0028) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Unit;                                                     // 0x0070(0x0028) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsMeterValue;                                            // 0x0088(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsKilometerValue;                                        // 0x0089(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	float                                              Factor;                                                   // 0x008C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Exponent;                                                 // 0x0090(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLinearLeveling;                                          // 0x0094(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLargerIsBetter;                                          // 0x0095(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttributeFormat>                      Format;                                                   // 0x0096(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0097(0x0001) MISSED OFFSET
	int                                                Decimals;                                                 // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttributeToBuffID;                                        // 0x009C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct ES2.CompoundAttributeEntry
// 0x0030
struct FCompoundAttributeEntry
{
	struct FName                                       AttributeID;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DependentAttributeID;                                     // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BaseValue;                                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ConversionFactor;                                         // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Exponent;                                                 // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Constant;                                                 // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Factor;                                                   // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinMappingValue;                                          // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxMappingValue;                                          // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CalculatedValue;                                          // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.ItemNameElement
// 0x0070
struct FItemNameElement
{
	struct FText                                       Text;                                                     // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EItemNameElementType>                  ElementType;                                              // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EItemRarity>>                   Rarities;                                                 // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               Categories;                                               // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               Types;                                                    // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               AttributesAboveAverage;                                   // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               AttributesBelowAverage;                                   // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ES2.LootProbabilityForRarity
// 0x0050
struct FLootProbabilityForRarity
{
	TMap<TEnumAsByte<EItemRarity>, float>              MapRarityProbability;                                     // 0x0000(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ES2.LootDataRow
// 0x0020
struct FLootDataRow
{
	TEnumAsByte<ELootType>                             LootType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MinAmount;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmount;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<float>                                      Weights;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ES2.PickupDataRow
// 0x0018
struct FPickupDataRow
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<float>                                      Weights;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ES2.LootResourceAmountRow
// 0x0058
struct FLootResourceAmountRow
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct ES2.SpawnGroupComposition
// 0x0040
struct FSpawnGroupComposition
{
	int                                                MinGroupSize;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxGroupSize;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ClassWeights;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      SubSpawnGroupWeights;                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MinSupportGroupSize;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSupportGroupSize;                                      // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      SupportClassWeights;                                      // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ES2.GroupCountEntry
// 0x000C
struct FGroupCountEntry
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ES2.LocationSpawns
// 0x0058
struct FLocationSpawns
{
	int                                                Level;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Security;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<ESpawnGroup>, struct FGroupCountEntry> MaxGroupCountPerGroupType;                                // 0x0008(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ES2.POITemplate
// 0x0078
struct FPOITemplate
{
	class FString                                      ClassName;                                                // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<EPOIType>                              Type;                                                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FRotator                                    MaxRotationDegrees;                                       // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bRegionWhiteList;                                         // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x50];                                      // 0x0021(0x0050) UNKNOWN PROPERTY: SetProperty ES2.POITemplate.RegionWhiteOrBlackList
};

// ScriptStruct ES2.POIDistribution
// 0x0018
struct FPOIDistribution
{
	TEnumAsByte<ELocationCategory>                     LocationCategory;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<float>                                      ClassWeights;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ES2.ItemAffix
// 0x0090
struct FItemAffix
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct ES2.JumpTypeSound
// 0x0018
struct FJumpTypeSound
{
	TEnumAsByte<EJumpMethod>                           JumpMethod;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class USoundBase*                                  OrbitJumpChargeSound;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  OrbitJumpSound;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.LayerTransition
// 0x0010
struct FLayerTransition
{
	class USoundCue*                                   TransitionCue;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TransitionBar;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ES2.EndTransition
// 0x0010
struct FEndTransition
{
	class USoundCue*                                   TransitionCue;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TransitionBar;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndDelay;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ES2.Sting
// 0x0010
struct FSting
{
	class USoundBase*                                  StingSound;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BarLength;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ES2.FixedLootEntry
// 0x0014
struct FFixedLootEntry
{
	struct FName                                       ItemID;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Level;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.SpawnAmount
// 0x0010
struct FSpawnAmount
{
	class UClass*                                      Class;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LevelOffset;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.ObjectiveDescription
// 0x0020
struct FObjectiveDescription
{
	TEnumAsByte<EMissionTaskState>                     TaskState;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0008(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct ES2.ModifierHandle
// 0x0008
struct FModifierHandle
{
	uint64_t                                           Handle;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ES2.BuffableRotator
// 0x0058
struct FBuffableRotator
{
	struct FRotator                                    BaseValue;                                                // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x000C(0x004C) MISSED OFFSET
};

// ScriptStruct ES2.Modifier
// 0x0010
struct FModifier
{
	TEnumAsByte<EAttributeOp>                          AttributeMod;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FModifierHandle                             Handle;                                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ES2.PickupHUDInfo
// 0x0020
struct FPickupHUDInfo
{
	struct FText                                       PickupName;                                               // 0x0000(0x0028) (Edit, BlueprintVisible)
	int                                                Amount;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBePickedUp;                                           // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInactivePickup;                                          // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct ES2.ItemAttributeState
// 0x000C
struct FItemAttributeState
{
	struct FName                                       AttributeTemplateID;                                      // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ValuePositionInRange;                                     // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct ES2.ItemState
// 0x00A8
struct FItemState
{
	struct FName                                       ItemTemplateID;                                           // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Seed;                                                     // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                NameSeed;                                                 // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                ItemLevel;                                                // 0x0010(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              VirtualLevelOffset;                                       // 0x0014(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x0018(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                Amount;                                                   // 0x001C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Ammo;                                                     // 0x0020(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               RecentlyBoughtOrSold;                                     // 0x0024(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               IsNew;                                                    // 0x0025(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	float                                              Condition;                                                // 0x0028(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FName>                               InstalledChipIDs;                                         // 0x0030(0x0010) (ZeroConstructor, SaveGame)
	struct FName                                       AffixID;                                                  // 0x0040(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FItemAttributeState>                 AttributeStates;                                          // 0x0048(0x0010) (ZeroConstructor, SaveGame)
	TMap<struct FName, struct FESVariant>              CustomData;                                               // 0x0058(0x0050) (ZeroConstructor, SaveGame)
};

// ScriptStruct ES2.InventoryState
// 0x00B0
struct FInventoryState
{
	TArray<struct FItemState>                          PrimaryWeapons;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FItemState>                          SecondaryWeapons;                                         // 0x0010(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FItemState>                          EnergyCores;                                              // 0x0020(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FItemState>                          Sensors;                                                  // 0x0030(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FItemState>                          Shields;                                                  // 0x0040(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FItemState>                          CargoUnits;                                               // 0x0050(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FItemState>                          Platings;                                                 // 0x0060(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FItemState>                          thrusters;                                                // 0x0070(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FItemState>                          Devices;                                                  // 0x0080(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FItemState>                          Consumables;                                              // 0x0090(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FItemState>                          Cargo;                                                    // 0x00A0(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct ES2.GenericSaveDataBuffer
// 0x0010
struct FGenericSaveDataBuffer
{
	TArray<unsigned char>                              Buffer;                                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct ES2.ActorSaveState
// 0x00A0
struct FActorSaveState
{
	class FString                                      BPClassPath;                                              // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, SaveGame)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (SaveGame, IsPlainOldData)
	TMap<struct FName, struct FGenericSaveDataBuffer>  GenericSaveDataMap;                                       // 0x0040(0x0050) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
};

// ScriptStruct ES2.SpawnGroupSaveState
// 0x0028
struct FSpawnGroupSaveState
{
	struct FName                                       SpawnerID;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              LastSeenTimestamp;                                        // 0x0008(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              RemainingOffsiteLifetime;                                 // 0x000C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              RemainingDwellTime;                                       // 0x0010(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FActorSaveState>                     ActorSaveStates;                                          // 0x0018(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct ES2.SpawnGroupSaveStateArray
// 0x0010
struct FSpawnGroupSaveStateArray
{
	TArray<struct FSpawnGroupSaveState>                Array;                                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct ES2.POISpawnInfo
// 0x0028
struct FPOISpawnInfo
{
	class FString                                      ClassPath;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FRotator                                    Rotation;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       POISpawnerID;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.LocationState
// 0x00B0
struct FLocationState
{
	TMap<TEnumAsByte<ESpawnGroup>, struct FSpawnGroupSaveStateArray> SpawnGroupSaveStates;                                     // 0x0000(0x0050) (ZeroConstructor, SaveGame)
	TMap<struct FName, struct FSpawnGroupSaveStateArray> MissionGroupSaveStates;                                   // 0x0050(0x0050) (ZeroConstructor, SaveGame)
	TArray<struct FPOISpawnInfo>                       POISaveStates;                                            // 0x00A0(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct ES2.ShipDataState
// 0x0270
struct FShipDataState
{
	struct FText                                       Name;                                                     // 0x0000(0x0028) (SaveGame)
	struct FInventoryState                             Inventory;                                                // 0x0018(0x00B0) (SaveGame)
	struct FItemState                                  ShipItemState;                                            // 0x00C8(0x00A8) (SaveGame)
	TArray<struct FShipModuleState>                    ShipModules;                                              // 0x0170(0x0010) (ZeroConstructor, SaveGame)
	struct FShipColors                                 ShipColors;                                               // 0x0180(0x00C8) (SaveGame)
	TArray<struct FName>                               ShipPerks;                                                // 0x0248(0x0010) (ZeroConstructor, SaveGame)
	struct FName                                       DecalsID;                                                 // 0x0258(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Health;                                                   // 0x0260(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SelectedPrimaryIndex;                                     // 0x0264(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SelectedSecondaryIndex;                                   // 0x0268(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SelectedConsumableIndex;                                  // 0x026C(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct ES2.DockableStationInstance
// 0x00E8
struct FDockableStationInstance
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UInventory*                                  ShopInventory;                                            // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FInventoryState                             ShopInventoryState;                                       // 0x0010(0x00B0)
	TArray<struct FShipData>                           ShipsForSale;                                             // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTaskSaveGameData>                   JobOffers;                                                // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	double                                             CreationTimeStamp;                                        // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.WeaponData
// 0x0528
struct FWeaponData
{
	TEnumAsByte<EWeaponCategory>                       WeaponCategory;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FAttributeAccess                            FireRate;                                                 // 0x0008(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            EnergyConsumption;                                        // 0x0058(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            HullDamage;                                               // 0x00A8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FAttributeAccess                            ShieldDamage;                                             // 0x00F8(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            Range;                                                    // 0x0148(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            Speed;                                                    // 0x0198(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            SpreadDegrees;                                            // 0x01E8(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            RadialDamageRadius;                                       // 0x0238(0x0050) (Edit, BlueprintVisible)
	struct FAttributeAccess                            ChargeTime;                                               // 0x0288(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAttributeAccess                            RampUpTime;                                               // 0x02D8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAttributeAccess                            CriticalHitChance;                                        // 0x0328(0x0050) (BlueprintVisible, BlueprintReadOnly)
	struct FAttributeAccess                            CriticalHitDamageFactor;                                  // 0x0378(0x0050) (BlueprintVisible)
	float                                              ShieldPiercingRatio;                                      // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	struct FAttributeAccess                            FullChargeDamagePercentAdd;                               // 0x03D0(0x0050) (Edit, BlueprintVisible)
	int                                                AdditionalProjectiles;                                    // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	struct FAttributeAccess                            AdditionalProjectilesMaxCharge;                           // 0x0428(0x0050) (Edit, BlueprintVisible)
	float                                              AdditionalProjectilesSpreadDegrees;                       // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShotsPerBurst;                                            // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAttributeAccess                            AdditionalBurstShotsMaxCharge;                            // 0x0480(0x0050) (Edit, BlueprintVisible)
	float                                              BurstDelay;                                               // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHoming;                                                // 0x04D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	float                                              HomingAgility;                                            // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HomingInitialSeekDelay;                                   // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HomingFullAgilityDelay;                                   // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HomingReseekDelay;                                        // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HomingSeekInitDistanceInM;                                // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HomingFlyByTestThresholdMeter;                            // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InheritParentSpeedPercent;                                // 0x04F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FullSpeedDelay;                                           // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AddRampUpDeviation;                                       // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bASyncFireMode;                                           // 0x0504(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDealDirectDamage;                                        // 0x0505(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAlwaysAimAtFocusLocation;                                // 0x0506(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0507(0x0001) MISSED OFFSET
	float                                              AutoAimFactorMouse;                                       // 0x0508(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoAimFactorGamepad;                                     // 0x050C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDistanceAi;                                            // 0x0510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistanceAi;                                            // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WeaponSeed;                                               // 0x0518(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	class UItem*                                       WeaponItem;                                               // 0x0520(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.SensorRanges
// 0x0028
struct FSensorRanges
{
	float                                              Containers;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DockingPoint;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShipComponents;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Pickups;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              POIComponents;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Resources;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Creatures;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Turrets;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TravelModeLocations;                                      // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TravelModePlanets;                                        // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.ESSequenceInfo
// 0x005C
struct FESSequenceInfo
{
	struct FName                                       SequenceID;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESequenceType                                      SequenceType;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EEngineOpacityControlledBy                         EngineOpacityControlledBy;                                // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTimeDisplacedInputControl;                               // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReferenceLooksAtPlayer;                                  // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneObjectBindingID                  BlendToTargetBinding;                                     // 0x000C(0x0018) (BlueprintVisible)
	struct FMovieSceneObjectBindingID                  PlayerLookAtTargetBinding;                                // 0x0024(0x0018) (BlueprintVisible)
	struct FViewTargetTransitionParams                 BlendToTargetTransitionParams;                            // 0x003C(0x0010) (Edit, BlueprintVisible)
	struct FViewTargetTransitionParams                 BlendToPlayerTransitionParams;                            // 0x004C(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct ES2.SpawnGizmoSet
// 0x0028
struct FSpawnGizmoSet
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MinAmount;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmount;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ASpawnGizmoBase*>                     Spawner;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ES2.WeaponInfo
// 0x0030
struct FWeaponInfo
{
	class UItem*                                       WeaponItem;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AWeaponBase*>                         SpawnedWeapons;                                           // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct ES2.AutoaimParameters
// 0x0010
struct FAutoaimParameters
{
	float                                              MaxAngle;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoundingSphereFactor;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.Token
// 0x0028
struct FToken
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ES2.TokenHandle
// 0x0020
struct FTokenHandle
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ES2.ESRichTextStyleRow
// 0x0010 (0x0280 - 0x0270)
struct FESRichTextStyleRow : public FRichTextStyleRow
{
	class FString                                      RichTextTag;                                              // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ES2.ItemGenerationInfo
// 0x0014
struct FItemGenerationInfo
{
	struct FName                                       CategoryID;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EItemRarity>                           Rarity;                                                   // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Amount;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemLevel;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.ShipColorsTableRow
// 0x00C8 (0x00D0 - 0x0008)
struct FShipColorsTableRow : public FTableRowBase
{
	struct FShipColors                                 Colors;                                                   // 0x0008(0x00C8) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct ES2.DebugShipsTableRow
// 0x0048 (0x0050 - 0x0008)
struct FDebugShipsTableRow : public FTableRowBase
{
	bool                                               bSkipWhenToggling;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FName                                       BaseID;                                                   // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CockpitID;                                                // 0x0014(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BodyID;                                                   // 0x001C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RearID;                                                   // 0x0024(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WingsID;                                                  // 0x002C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ExtensionID;                                              // 0x0034(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ColorsID;                                                 // 0x003C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DecalsID;                                                 // 0x0044(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ES2.AxisInversions
// 0x0003
struct FAxisInversions
{
	bool                                               bPitchInverted;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bYawInverted;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRollInverted;                                            // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.QuestItemEntry
// 0x0008
struct FQuestItemEntry
{
	TEnumAsByte<EQuestItem>                            QuestItem;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Amount;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.NoiseRotationData
// 0x0020
struct FNoiseRotationData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ES2.ESSequenceEventData
// 0x0010
struct FESSequenceEventData
{
	struct FName                                       SequenceID;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResumePauseID;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ES2.TimerManagerAdvTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FTimerManagerAdvTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
