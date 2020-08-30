// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_JoystickPlugin_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function JoystickPlugin.JoystickFunctions.RegisterForJoystickEvents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                Listener                       (Parm, ZeroConstructor, IsPlainOldData)

void UJoystickFunctions::STATIC_RegisterForJoystickEvents(class UObject** Listener)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.RegisterForJoystickEvents");

	UJoystickFunctions_RegisterForJoystickEvents_Params params;
	params.Listener = Listener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoystickPlugin.JoystickFunctions.POVAxis
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// EJoystickPOVDirection*         Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UJoystickFunctions::STATIC_POVAxis(EJoystickPOVDirection* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.POVAxis");

	UJoystickFunctions_POVAxis_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JoystickPlugin.JoystickFunctions.MapJoystickDeviceToPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int*                           DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UJoystickFunctions::STATIC_MapJoystickDeviceToPlayer(int* DeviceID, int* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.MapJoystickDeviceToPlayer");

	UJoystickFunctions_MapJoystickDeviceToPlayer_Params params;
	params.DeviceID = DeviceID;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoystickPlugin.JoystickFunctions.JoystickCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UJoystickFunctions::STATIC_JoystickCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.JoystickCount");

	UJoystickFunctions_JoystickCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JoystickPlugin.JoystickFunctions.IgnoreGameControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool*                          bIgnore                        (Parm, ZeroConstructor, IsPlainOldData)

void UJoystickFunctions::STATIC_IgnoreGameControllers(bool* bIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.IgnoreGameControllers");

	UJoystickFunctions_IgnoreGameControllers_Params params;
	params.bIgnore = bIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoystickPlugin.JoystickFunctions.GetPreviousJoystickState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FJoystickState          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FJoystickState UJoystickFunctions::STATIC_GetPreviousJoystickState(int* DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.GetPreviousJoystickState");

	UJoystickFunctions_GetPreviousJoystickState_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JoystickPlugin.JoystickFunctions.GetJoystickState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FJoystickState          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FJoystickState UJoystickFunctions::STATIC_GetJoystickState(int* DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.GetJoystickState");

	UJoystickFunctions_GetJoystickState_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JoystickPlugin.JoystickFunctions.GetJoystick
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FJoystickInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FJoystickInfo UJoystickFunctions::STATIC_GetJoystick(int* DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickFunctions.GetJoystick");

	UJoystickFunctions_GetJoystick_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JoystickPlugin.JoystickInterface.JoystickUnplugged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int*                           DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)

void UJoystickInterface::JoystickUnplugged(int* DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickInterface.JoystickUnplugged");

	UJoystickInterface_JoystickUnplugged_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoystickPlugin.JoystickInterface.JoystickPluggedIn
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int*                           DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)

void UJoystickInterface::JoystickPluggedIn(int* DeviceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickInterface.JoystickPluggedIn");

	UJoystickInterface_JoystickPluggedIn_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoystickPlugin.JoystickInterface.JoystickHatChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int*                           Hat                            (Parm, ZeroConstructor, IsPlainOldData)
// EJoystickPOVDirection*         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FJoystickState*         State                          (Parm)

void UJoystickInterface::JoystickHatChanged(int* Hat, EJoystickPOVDirection* Value, struct FJoystickState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickInterface.JoystickHatChanged");

	UJoystickInterface_JoystickHatChanged_Params params;
	params.Hat = Hat;
	params.Value = Value;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoystickPlugin.JoystickInterface.JoystickButtonReleased
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int*                           Button                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FJoystickState*         State                          (Parm)

void UJoystickInterface::JoystickButtonReleased(int* Button, struct FJoystickState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickInterface.JoystickButtonReleased");

	UJoystickInterface_JoystickButtonReleased_Params params;
	params.Button = Button;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoystickPlugin.JoystickInterface.JoystickButtonPressed
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int*                           Button                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FJoystickState*         State                          (Parm)

void UJoystickInterface::JoystickButtonPressed(int* Button, struct FJoystickState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickInterface.JoystickButtonPressed");

	UJoystickInterface_JoystickButtonPressed_Params params;
	params.Button = Button;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoystickPlugin.JoystickInterface.JoystickBallMoved
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// int*                           Ball                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FJoystickState*         State                          (Parm)

void UJoystickInterface::JoystickBallMoved(int* Ball, struct FVector2D* Delta, struct FJoystickState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickInterface.JoystickBallMoved");

	UJoystickInterface_JoystickBallMoved_Params params;
	params.Ball = Ball;
	params.Delta = Delta;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoystickPlugin.JoystickInterface.JoystickAxisChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int*                           Axis                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float*                         valuePrev                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FJoystickState*         State                          (Parm)
// struct FJoystickState*         prev                           (Parm)

void UJoystickInterface::JoystickAxisChanged(int* Axis, float* Value, float* valuePrev, struct FJoystickState* State, struct FJoystickState* prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoystickPlugin.JoystickInterface.JoystickAxisChanged");

	UJoystickInterface_JoystickAxisChanged_Params params;
	params.Axis = Axis;
	params.Value = Value;
	params.valuePrev = valuePrev;
	params.State = State;
	params.prev = prev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
