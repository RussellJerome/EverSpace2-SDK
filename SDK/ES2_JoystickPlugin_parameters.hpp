#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_JoystickPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function JoystickPlugin.JoystickFunctions.RegisterForJoystickEvents
struct UJoystickFunctions_RegisterForJoystickEvents_Params
{
	class UObject**                                    Listener;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JoystickPlugin.JoystickFunctions.POVAxis
struct UJoystickFunctions_POVAxis_Params
{
	EJoystickPOVDirection*                             Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JoystickPlugin.JoystickFunctions.MapJoystickDeviceToPlayer
struct UJoystickFunctions_MapJoystickDeviceToPlayer_Params
{
	int*                                               DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JoystickPlugin.JoystickFunctions.JoystickCount
struct UJoystickFunctions_JoystickCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JoystickPlugin.JoystickFunctions.IgnoreGameControllers
struct UJoystickFunctions_IgnoreGameControllers_Params
{
	bool*                                              bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JoystickPlugin.JoystickFunctions.GetPreviousJoystickState
struct UJoystickFunctions_GetPreviousJoystickState_Params
{
	int*                                               DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJoystickState                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function JoystickPlugin.JoystickFunctions.GetJoystickState
struct UJoystickFunctions_GetJoystickState_Params
{
	int*                                               DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJoystickState                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function JoystickPlugin.JoystickFunctions.GetJoystick
struct UJoystickFunctions_GetJoystick_Params
{
	int*                                               DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJoystickInfo                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function JoystickPlugin.JoystickInterface.JoystickUnplugged
struct UJoystickInterface_JoystickUnplugged_Params
{
	int*                                               DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JoystickPlugin.JoystickInterface.JoystickPluggedIn
struct UJoystickInterface_JoystickPluggedIn_Params
{
	int*                                               DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JoystickPlugin.JoystickInterface.JoystickHatChanged
struct UJoystickInterface_JoystickHatChanged_Params
{
	int*                                               Hat;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EJoystickPOVDirection*                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJoystickState*                             State;                                                    // (Parm)
};

// Function JoystickPlugin.JoystickInterface.JoystickButtonReleased
struct UJoystickInterface_JoystickButtonReleased_Params
{
	int*                                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJoystickState*                             State;                                                    // (Parm)
};

// Function JoystickPlugin.JoystickInterface.JoystickButtonPressed
struct UJoystickInterface_JoystickButtonPressed_Params
{
	int*                                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJoystickState*                             State;                                                    // (Parm)
};

// Function JoystickPlugin.JoystickInterface.JoystickBallMoved
struct UJoystickInterface_JoystickBallMoved_Params
{
	int*                                               Ball;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJoystickState*                             State;                                                    // (Parm)
};

// Function JoystickPlugin.JoystickInterface.JoystickAxisChanged
struct UJoystickInterface_JoystickAxisChanged_Params
{
	int*                                               Axis;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             valuePrev;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJoystickState*                             State;                                                    // (Parm)
	struct FJoystickState*                             prev;                                                     // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
