// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_DockableStation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_DockableStation.BPI_DockableStation_C.IShowPlayerShip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ShipIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_DockableStation_C::IShowPlayerShip(int* ShipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_DockableStation.BPI_DockableStation_C.IShowPlayerShip");

	UBPI_DockableStation_C_IShowPlayerShip_Params params;
	params.ShipIndex = ShipIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_DockableStation.BPI_DockableStation_C.IShowShipForSale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ShipIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_DockableStation_C::IShowShipForSale(int* ShipIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_DockableStation.BPI_DockableStation_C.IShowShipForSale");

	UBPI_DockableStation_C_IShowShipForSale_Params params;
	params.ShipIndex = ShipIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_DockableStation.BPI_DockableStation_C.IGetCurrentPlayerShipIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_DockableStation_C::IGetCurrentPlayerShipIndex(int* CurrentIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_DockableStation.BPI_DockableStation_C.IGetCurrentPlayerShipIndex");

	UBPI_DockableStation_C_IGetCurrentPlayerShipIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentIndex != nullptr)
		*CurrentIndex = params.CurrentIndex;
}


// Function BPI_DockableStation.BPI_DockableStation_C.IShowPreviousPlayerShip
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_DockableStation_C::IShowPreviousPlayerShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_DockableStation.BPI_DockableStation_C.IShowPreviousPlayerShip");

	UBPI_DockableStation_C_IShowPreviousPlayerShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_DockableStation.BPI_DockableStation_C.IShowNextPlayerShip
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_DockableStation_C::IShowNextPlayerShip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_DockableStation.BPI_DockableStation_C.IShowNextPlayerShip");

	UBPI_DockableStation_C_IShowNextPlayerShip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_DockableStation.BPI_DockableStation_C.IGetSceneRenderTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                SceneRenderTarget              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_DockableStation_C::IGetSceneRenderTarget(class UTexture** SceneRenderTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_DockableStation.BPI_DockableStation_C.IGetSceneRenderTarget");

	UBPI_DockableStation_C_IGetSceneRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SceneRenderTarget != nullptr)
		*SceneRenderTarget = params.SceneRenderTarget;
}


// Function BPI_DockableStation.BPI_DockableStation_C.IShouldUseSceneCapture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           UseSceneCapture                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_DockableStation_C::IShouldUseSceneCapture(bool* UseSceneCapture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_DockableStation.BPI_DockableStation_C.IShouldUseSceneCapture");

	UBPI_DockableStation_C_IShouldUseSceneCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UseSceneCapture != nullptr)
		*UseSceneCapture = params.UseSceneCapture;
}


// Function BPI_DockableStation.BPI_DockableStation_C.IRotateStationCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              AxisInput                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_DockableStation_C::IRotateStationCamera(struct FVector2D* AxisInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_DockableStation.BPI_DockableStation_C.IRotateStationCamera");

	UBPI_DockableStation_C_IRotateStationCamera_Params params;
	params.AxisInput = AxisInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_DockableStation.BPI_DockableStation_C.IRotateShipsForSaleCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              AxisInput                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_DockableStation_C::IRotateShipsForSaleCamera(struct FVector2D* AxisInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_DockableStation.BPI_DockableStation_C.IRotateShipsForSaleCamera");

	UBPI_DockableStation_C_IRotateShipsForSaleCamera_Params params;
	params.AxisInput = AxisInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
