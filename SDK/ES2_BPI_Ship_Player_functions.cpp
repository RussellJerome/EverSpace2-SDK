// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_Ship_Player_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_Ship_Player.BPI_Ship_Player_C.ISetCameraVFXFOVOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Ship_Player_C::ISetCameraVFXFOVOffset(float* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Ship_Player.BPI_Ship_Player_C.ISetCameraVFXFOVOffset");

	UBPI_Ship_Player_C_ISetCameraVFXFOVOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Ship_Player.BPI_Ship_Player_C.ISetFreelookEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Ship_Player_C::ISetFreelookEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Ship_Player.BPI_Ship_Player_C.ISetFreelookEnabled");

	UBPI_Ship_Player_C_ISetFreelookEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Ship_Player.BPI_Ship_Player_C.ICycleCameraView
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_Ship_Player_C::ICycleCameraView()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Ship_Player.BPI_Ship_Player_C.ICycleCameraView");

	UBPI_Ship_Player_C_ICycleCameraView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Ship_Player.BPI_Ship_Player_C.ISetCameraView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerShip_CameraViews>* CameraView                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_Ship_Player_C::ISetCameraView(TEnumAsByte<EPlayerShip_CameraViews>* CameraView)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Ship_Player.BPI_Ship_Player_C.ISetCameraView");

	UBPI_Ship_Player_C_ISetCameraView_Params params;
	params.CameraView = CameraView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_Ship_Player.BPI_Ship_Player_C.IGetCameraView
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerShip_CameraViews> Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_Ship_Player_C::IGetCameraView(TEnumAsByte<EPlayerShip_CameraViews>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Ship_Player.BPI_Ship_Player_C.IGetCameraView");

	UBPI_Ship_Player_C_IGetCameraView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
