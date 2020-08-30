#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_Basic.hpp"
#include "ES2_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum JoystickPlugin.EJoystickPOVDirection
enum class EJoystickPOVDirection : uint8_t
{
	DIRECTION_NONE                 = 0,
	DIRECTION_UP                   = 1,
	DIRECTION_UP_RIGHT             = 2,
	DIRECTION_RIGHT                = 3,
	DIRECTION_DOWN_RIGHT           = 4,
	DIRECTION_DOWN                 = 5,
	DIRECTION_DOWN_LEFT            = 6,
	DIRECTION_LEFT                 = 7,
	DIRECTION_UP_LEFT              = 8,
	DIRECTION_MAX                  = 9
};


// Enum JoystickPlugin.EInputType
enum class EInputType : uint8_t
{
	INPUTTYPE_UNKNOWN              = 0,
	INPUTTYPE_JOYSTICK             = 1,
	INPUTTYPE_GAMECONTROLLER       = 2,
	INPUTTYPE_MAX                  = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct JoystickPlugin.JoystickState
// 0x0048
struct FJoystickState
{
	int                                                DeviceID;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<float>                                      Axes;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<bool>                                       Buttons;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<EJoystickPOVDirection>                      Hats;                                                     // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FVector2D>                           Balls;                                                    // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct JoystickPlugin.JoystickInfo
// 0x0058
struct FJoystickInfo
{
	int                                                Player;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DeviceID;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsRumbleDevice;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FGuid                                       ProductId;                                                // 0x000C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class FString                                      ProductName;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DeviceName;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               Connected;                                                // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<EInputType>                                 InputType;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
