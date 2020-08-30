#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BPI_Ship_Player_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Ship_Player.BPI_Ship_Player_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Ship_Player_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Ship_Player.BPI_Ship_Player_C");
		return ptr;
	}


	void ISetCameraVFXFOVOffset(float* Offset);
	void ISetFreelookEnabled(bool* Enabled);
	void ICycleCameraView();
	void ISetCameraView(TEnumAsByte<EPlayerShip_CameraViews>* CameraView);
	void IGetCameraView(TEnumAsByte<EPlayerShip_CameraViews>* Result);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
