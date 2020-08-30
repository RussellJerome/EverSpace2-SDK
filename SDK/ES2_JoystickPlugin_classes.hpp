#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_JoystickPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class JoystickPlugin.JoystickFunctions
// 0x0000 (0x0028 - 0x0028)
class UJoystickFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class JoystickPlugin.JoystickFunctions");
		return ptr;
	}


	void STATIC_RegisterForJoystickEvents(class UObject** Listener);
	struct FVector2D STATIC_POVAxis(EJoystickPOVDirection* Direction);
	void STATIC_MapJoystickDeviceToPlayer(int* DeviceID, int* Player);
	int STATIC_JoystickCount();
	void STATIC_IgnoreGameControllers(bool* bIgnore);
	struct FJoystickState STATIC_GetPreviousJoystickState(int* DeviceID);
	struct FJoystickState STATIC_GetJoystickState(int* DeviceID);
	struct FJoystickInfo STATIC_GetJoystick(int* DeviceID);
};


// Class JoystickPlugin.JoystickInterface
// 0x0000 (0x0028 - 0x0028)
class UJoystickInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class JoystickPlugin.JoystickInterface");
		return ptr;
	}


	void JoystickUnplugged(int* DeviceID);
	void JoystickPluggedIn(int* DeviceID);
	void JoystickHatChanged(int* Hat, EJoystickPOVDirection* Value, struct FJoystickState* State);
	void JoystickButtonReleased(int* Button, struct FJoystickState* State);
	void JoystickButtonPressed(int* Button, struct FJoystickState* State);
	void JoystickBallMoved(int* Ball, struct FVector2D* Delta, struct FJoystickState* State);
	void JoystickAxisChanged(int* Axis, float* Value, float* valuePrev, struct FJoystickState* State, struct FJoystickState* prev);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
