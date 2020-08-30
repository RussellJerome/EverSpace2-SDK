#pragma once

// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_PlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// 0x00D0 (0x0808 - 0x0738)
class ABP_PlayerController_C : public AESPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0738(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcessActionFreeze;                                  // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bMapOpened;                                               // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0749(0x0007) MISSED OFFSET
	class APickupBase*                                 CurrentTransferPickup;                                    // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugInventoryChanged;                                    // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreActionFreezePaused;                                    // 0x0759(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x075A(0x0006) MISSED OFFSET
	class UWG_Menu_Ingame_C*                           IngameMenuWidget;                                         // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 PauseMenuWidget;                                          // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUserWidget*                                 CheatsWidget;                                             // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWG_ActionFreeze_C*                          ActionFreezeWidget;                                       // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class APawn*                                       PreActionFreezePawn;                                      // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_Pawn_ActionFreeze_C*                     ActionFreezePawn;                                         // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraInputMove;                                          // 0x0790(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraInputRotate;                                        // 0x079C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInputZoom;                                          // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      PreActionFreezeCamera;                                    // 0x07AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07AD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClosedMenu;                                             // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               HideTopLayerWhenMapIsOpened;                              // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x07C1(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       CheatsWidgetClass;                                        // 0x07C8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnMenuTabChanged;                                         // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UWG_ControlsOverlay_C*                       ControlsOverlayWidget;                                    // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C");
		return ptr;
	}


	void HandleInputForStationCamera(bool* bIsMouseEvent, struct FPointerEvent* MouseEvent, struct FAnalogInputEvent* AnalogInputEvent, class AActor** DockableStationRef, bool* ShipsForSaleShown, struct FEventReply* EventReply, bool* Handled);
	void InpActEvt_X_K2Node_InputKeyEvent_22(struct FKey* Key);
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent_21(struct FKey* Key);
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_20(struct FKey* Key);
	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_19(struct FKey* Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_18(struct FKey* Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_17(struct FKey* Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_16(struct FKey* Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_15(struct FKey* Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_14(struct FKey* Key);
	void InpActEvt_Divide_K2Node_InputKeyEvent_13(struct FKey* Key);
	void InpActEvt_Multiply_K2Node_InputKeyEvent_12(struct FKey* Key);
	void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_11(struct FKey* Key);
	void InpActEvt_NumPadThree_K2Node_InputKeyEvent_10(struct FKey* Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_9(struct FKey* Key);
	void InpActEvt_NumPadZero_K2Node_InputKeyEvent_8(struct FKey* Key);
	void InpActEvt_Decimal_K2Node_InputKeyEvent_7(struct FKey* Key);
	void InpActEvt_Alt_U_K2Node_InputKeyEvent_6(struct FKey* Key);
	void InpActEvt___K2Node_InputKeyEvent_5(struct FKey* Key);
	void InpActEvt___K2Node_InputKeyEvent_4(struct FKey* Key);
	void InpActEvt_L_K2Node_InputKeyEvent_3(struct FKey* Key);
	void InpActEvt_R_K2Node_InputKeyEvent_2(struct FKey* Key);
	void InpActEvt_Home_K2Node_InputKeyEvent_1(struct FKey* Key);
	void OnCameraPitch(float* Pitch);
	void OnCameraYaw(float* Yaw);
	void OnCameraRoll(float* Roll);
	void OnCameraZoom(float* Zoom);
	void OnCameraForward(float* AxisValue);
	void OnCameraUp(float* AxisValue);
	void OnCameraRight(float* AxisValue);
	void OnEnterOrExitActionFreeze(bool* bEnter);
	void OnToggleActionFreezeCamera();
	void OnToggleFreeLook(bool* bEnter);
	void OnToggleHeadLights();
	void OnSwitchCamera();
	void OnHighResScreenshot();
	void ReceiveBeginPlay();
	void OnCouldNotCollectPickup(class APickupBase** Pickup);
	void OnOpenInventory();
	void OnClosed_Inventory();
	void OnOpenIngameMenu();
	void QuitPauseMenu();
	void OnShowOrHidePauseMenu(bool* bShow);
	void OnOpenMap();
	void OnClosed_Map();
	void OnClosedIngameMenu();
	void OnJoystickPluggedIn(int* DeviceID, class FString* DeviceName);
	void ReceiveTick(float* DeltaSeconds);
	void OpenMap(bool* StillShowMissionAndDialogWidget);
	void OnTabOpened_Event_1(TEnumAsByte<EMenuTab>* Type);
	void OnOpenedMap(TEnumAsByte<EMenuTab>* Type);
	void UserConfirmedJoystickProfile();
	void OnEnterOrExitControlsDisplay(bool* bEnter);
	void OnClosedLoot();
	void CustomEvent_2(TEnumAsByte<EMenuTab>* Type);
	void ExecuteUbergraph_BP_PlayerController(int* EntryPoint);
	void OnMenuTabChanged__DelegateSignature(TEnumAsByte<EMenuTab>* Type);
	void OnClosedMenu__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
