// Everspace2_Prototype SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ES2_BP_Skybox_Background_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Skybox_Background.BP_Skybox_Background_C.OnUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Skybox_Background_C::OnUpdate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skybox_Background.BP_Skybox_Background_C.OnUpdate__DelegateSignature");

	ABP_Skybox_Background_C_OnUpdate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
