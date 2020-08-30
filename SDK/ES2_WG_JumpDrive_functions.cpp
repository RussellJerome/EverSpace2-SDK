// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_WG_JumpDrive_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WG_JumpDrive.WG_JumpDrive_C.LerpAnimationPositionByOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage**                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_JumpDrive_C::LerpAnimationPositionByOpacity(class UImage** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.LerpAnimationPositionByOpacity");

	UWG_JumpDrive_C_LerpAnimationPositionByOpacity_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.InitValuesForJumpCompleteAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage**                 Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_JumpDrive_C::InitValuesForJumpCompleteAnimation(class UImage** Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.InitValuesForJumpCompleteAnimation");

	UWG_JumpDrive_C_InitValuesForJumpCompleteAnimation_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.JumpCompleteAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWG_JumpDrive_C::JumpCompleteAnimation(class UImage** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.JumpCompleteAnimation");

	UWG_JumpDrive_C_JumpCompleteAnimation_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.AddToMaps
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage**                 Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void UWG_JumpDrive_C::AddToMaps(class UImage** Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.AddToMaps");

	UWG_JumpDrive_C_AddToMaps_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.LerpAnimationsPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               TranslatePosition              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWG_JumpDrive_C::LerpAnimationsPosition(class UWidgetAnimation** InAnimation, struct FVector2D* TranslatePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.LerpAnimationsPosition");

	UWG_JumpDrive_C_LerpAnimationsPosition_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TranslatePosition != nullptr)
		*TranslatePosition = params.TranslatePosition;
}


// Function WG_JumpDrive.WG_JumpDrive_C.StartNextAnimation3
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_JumpDrive_C::StartNextAnimation3()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.StartNextAnimation3");

	UWG_JumpDrive_C_StartNextAnimation3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.StartNextAnimation2
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_JumpDrive_C::StartNextAnimation2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.StartNextAnimation2");

	UWG_JumpDrive_C_StartNextAnimation2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.StartNextAnimation1
// (Public, BlueprintCallable, BlueprintEvent)

void UWG_JumpDrive_C::StartNextAnimation1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.StartNextAnimation1");

	UWG_JumpDrive_C_StartNextAnimation1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_JumpDrive_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.OnInitialized");

	UWG_JumpDrive_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.OnJumpChargeStarted
// (BlueprintCallable, BlueprintEvent)

void UWG_JumpDrive_C::OnJumpChargeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.OnJumpChargeStarted");

	UWG_JumpDrive_C_OnJumpChargeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.OnGrowAndBlink1Finished
// (BlueprintCallable, BlueprintEvent)

void UWG_JumpDrive_C::OnGrowAndBlink1Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.OnGrowAndBlink1Finished");

	UWG_JumpDrive_C_OnGrowAndBlink1Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.OnJumpChargeCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJumpMethod>*      JumpMethod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_JumpDrive_C::OnJumpChargeCompleted(TEnumAsByte<EJumpMethod>* JumpMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.OnJumpChargeCompleted");

	UWG_JumpDrive_C_OnJumpChargeCompleted_Params params;
	params.JumpMethod = JumpMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.OnJumpChargeAborted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJumpAbortType>*   AbortedType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_JumpDrive_C::OnJumpChargeAborted(TEnumAsByte<EJumpAbortType>* AbortedType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.OnJumpChargeAborted");

	UWG_JumpDrive_C_OnJumpChargeAborted_Params params;
	params.AbortedType = AbortedType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.OnGrowAndBlink2Finished
// (BlueprintCallable, BlueprintEvent)

void UWG_JumpDrive_C::OnGrowAndBlink2Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.OnGrowAndBlink2Finished");

	UWG_JumpDrive_C_OnGrowAndBlink2Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.OnGrowAndBlink3Finished
// (BlueprintCallable, BlueprintEvent)

void UWG_JumpDrive_C::OnGrowAndBlink3Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.OnGrowAndBlink3Finished");

	UWG_JumpDrive_C_OnGrowAndBlink3Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.OnGrowAndBlink4Finished
// (BlueprintCallable, BlueprintEvent)

void UWG_JumpDrive_C::OnGrowAndBlink4Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.OnGrowAndBlink4Finished");

	UWG_JumpDrive_C_OnGrowAndBlink4Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.OnJumpChargeTicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EJumpAbortType>*   AbortedType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_JumpDrive_C::OnJumpChargeTicked(float* Progress, TEnumAsByte<EJumpAbortType>* AbortedType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.OnJumpChargeTicked");

	UWG_JumpDrive_C_OnJumpChargeTicked_Params params;
	params.Progress = Progress;
	params.AbortedType = AbortedType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_JumpDrive_C::SetProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.SetProgress");

	UWG_JumpDrive_C_SetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWG_JumpDrive_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.Construct");

	UWG_JumpDrive_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_JumpDrive_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.Tick");

	UWG_JumpDrive_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.OnJumpDriveCanBeUsedChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCanBeUsed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_JumpDrive_C::OnJumpDriveCanBeUsedChange(bool* bCanBeUsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.OnJumpDriveCanBeUsedChange");

	UWG_JumpDrive_C_OnJumpDriveCanBeUsedChange_Params params;
	params.bCanBeUsed = bCanBeUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WG_JumpDrive.WG_JumpDrive_C.ExecuteUbergraph_WG_JumpDrive
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWG_JumpDrive_C::ExecuteUbergraph_WG_JumpDrive(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WG_JumpDrive.WG_JumpDrive_C.ExecuteUbergraph_WG_JumpDrive");

	UWG_JumpDrive_C_ExecuteUbergraph_WG_JumpDrive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
