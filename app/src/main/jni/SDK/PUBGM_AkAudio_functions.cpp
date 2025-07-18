// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AkAudio.AkAcousticPortal.OpenPortal
// (Final, Native, Public, BlueprintCallable)

void AAkAcousticPortal::OpenPortal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.OpenPortal");

	AAkAcousticPortal_OpenPortal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAcousticPortal.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAkAcousticPortalState         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAkAcousticPortalState AAkAcousticPortal::GetCurrentState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.GetCurrentState");

	AAkAcousticPortal_GetCurrentState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAcousticPortal.ClosePortal
// (Final, Native, Public, BlueprintCallable)

void AAkAcousticPortal::ClosePortal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.ClosePortal");

	AAkAcousticPortal_ClosePortal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAmbientSound.StopAmbientSound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)

void AAkAmbientSound::StopAmbientSound()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StopAmbientSound");

	AAkAmbientSound_StopAmbientSound_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAmbientSound.StartAmbientSound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)

void AAkAmbientSound::StartAmbientSound()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StartAmbientSound");

	AAkAmbientSound_StartAmbientSound_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAreaCheckComponent.UnRegistAKAreaVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  AreaVolume                     (Parm, ZeroConstructor, IsPlainOldData)
// ECustomAKAreaType              AreaType                       (Parm, ZeroConstructor, IsPlainOldData)

void UAkAreaCheckComponent::UnRegistAKAreaVolume(class AActor* AreaVolume, ECustomAKAreaType AreaType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAreaCheckComponent.UnRegistAKAreaVolume");

	UAkAreaCheckComponent_UnRegistAKAreaVolume_Params params;
	params.AreaVolume = AreaVolume;
	params.AreaType = AreaType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAreaCheckComponent.RegistAKAreaVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  AreaVolume                     (Parm, ZeroConstructor, IsPlainOldData)
// ECustomAKAreaType              AreaType                       (Parm, ZeroConstructor, IsPlainOldData)

void UAkAreaCheckComponent::RegistAKAreaVolume(class AActor* AreaVolume, ECustomAKAreaType AreaType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAreaCheckComponent.RegistAKAreaVolume");

	UAkAreaCheckComponent_RegistAKAreaVolume_Params params;
	params.AreaVolume = AreaVolume;
	params.AreaType = AreaType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAreaCheckComponent.CheckVoiceAvailable
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 VoicePostion                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAkAreaCheckComponent::CheckVoiceAvailable(const struct FVector& VoicePostion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAreaCheckComponent.CheckVoiceAvailable");

	UAkAreaCheckComponent_CheckVoiceAvailable_Params params;
	params.VoicePostion = VoicePostion;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAreaCheckVolume.IsInsideVolume
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 OrignPosition                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAkAreaCheckVolume::IsInsideVolume(const struct FVector& OrignPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAreaCheckVolume.IsInsideVolume");

	AAkAreaCheckVolume_IsInsideVolume_Params params;
	params.OrignPosition = OrignPosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAreaCheckVolume.GetAKAreaType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ECustomAKAreaType              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECustomAKAreaType AAkAreaCheckVolume::GetAKAreaType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAreaCheckVolume.GetAKAreaType");

	AAkAreaCheckVolume_GetAKAreaType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioDeviceSettings.InitConfig
// (Final, Native, Public)

void UAkAudioDeviceSettings::InitConfig()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioDeviceSettings.InitConfig");

	UAkAudioDeviceSettings_InitConfig_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitor.UpdateAkComponentInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TMap<struct FString, struct FAkCombinedInfo> OutList                        (Parm, OutParm, ZeroConstructor)

void UAkAudioMonitor::UpdateAkComponentInfo(TMap<struct FString, struct FAkCombinedInfo>* OutList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.UpdateAkComponentInfo");

	UAkAudioMonitor_UpdateAkComponentInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutList != nullptr)
		*OutList = params.OutList;
}


// Function AkAudio.AkAudioMonitor.Update
// (Final, Native, Static, Public)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UAkAudioMonitor::Update(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.Update");

	UAkAudioMonitor_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitor.SetUpdateInterval
// (Final, Native, Static, Public)
// Parameters:
// float                          NewUpdateInterval              (Parm, ZeroConstructor, IsPlainOldData)

void UAkAudioMonitor::SetUpdateInterval(float NewUpdateInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.SetUpdateInterval");

	UAkAudioMonitor_SetUpdateInterval_Params params;
	params.NewUpdateInterval = NewUpdateInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitor.SetMonitorFlag
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          InFlags                        (Parm, OutParm, ZeroConstructor)
// unsigned char                  TotalPlayCount                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ObjectPlayCount                (Parm, ZeroConstructor, IsPlainOldData)

void UAkAudioMonitor::SetMonitorFlag(unsigned char TotalPlayCount, unsigned char ObjectPlayCount, TArray<unsigned char>* InFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.SetMonitorFlag");

	UAkAudioMonitor_SetMonitorFlag_Params params;
	params.TotalPlayCount = TotalPlayCount;
	params.ObjectPlayCount = ObjectPlayCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InFlags != nullptr)
		*InFlags = params.InFlags;
}


// Function AkAudio.AkAudioMonitor.OnReportError
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 FunctionName                   (ConstParm, Parm, ZeroConstructor)
// unsigned char                  ErrorAkCode                    (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       NumericParam                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 StrParam                       (Parm, ZeroConstructor)

void UAkAudioMonitor::OnReportError(const struct FString& FunctionName, unsigned char ErrorAkCode, uint64_t NumericParam, const struct FString& StrParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.OnReportError");

	UAkAudioMonitor_OnReportError_Params params;
	params.FunctionName = FunctionName;
	params.ErrorAkCode = ErrorAkCode;
	params.NumericParam = NumericParam;
	params.StrParam = StrParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitor.OnAkAudioEventTrigger
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            code                           (Parm, ZeroConstructor, IsPlainOldData)

void UAkAudioMonitor::OnAkAudioEventTrigger(const struct FString& Name, int code)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.OnAkAudioEventTrigger");

	UAkAudioMonitor_OnAkAudioEventTrigger_Params params;
	params.Name = Name;
	params.code = code;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitor.OnAkAudioBankTrigger
// (Final, Native, Static, Public)
// Parameters:
// bool                           bUnload                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BankName                       (Parm, ZeroConstructor)
// int8_t                         RefCount                       (Parm, ZeroConstructor, IsPlainOldData)

void UAkAudioMonitor::OnAkAudioBankTrigger(bool bUnload, const struct FString& BankName, int8_t RefCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.OnAkAudioBankTrigger");

	UAkAudioMonitor_OnAkAudioBankTrigger_Params params;
	params.bUnload = bUnload;
	params.BankName = BankName;
	params.RefCount = RefCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitor.IsMonitorInit
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAkAudioMonitor::IsMonitorInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.IsMonitorInit");

	UAkAudioMonitor_IsMonitorInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.IsAkOutOfAttenuation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*            AkComp                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Attenuation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAkAudioMonitor::IsAkOutOfAttenuation(class UAkComponent* AkComp, float Attenuation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.IsAkOutOfAttenuation");

	UAkAudioMonitor_IsAkOutOfAttenuation_Params params;
	params.AkComp = AkComp;
	params.Attenuation = Attenuation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.InitMonitorDataPtr
// (Final, Native, Static, Public, BlueprintCallable)

void UAkAudioMonitor::InitMonitorDataPtr()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.InitMonitorDataPtr");

	UAkAudioMonitor_InitMonitorDataPtr_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitor.GetTotalPlayRecord
// (Final, Native, Static, Public)
// Parameters:
// TArray<uint16_t>               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<uint16_t> UAkAudioMonitor::GetTotalPlayRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetTotalPlayRecord");

	UAkAudioMonitor_GetTotalPlayRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetSwitchValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 SwitchName                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAkAudioMonitor::GetSwitchValue(class UAkComponent* Component, const struct FString& SwitchName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetSwitchValue");

	UAkAudioMonitor_GetSwitchValue_Params params;
	params.Component = Component;
	params.SwitchName = SwitchName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetSwitchNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UAkAudioMonitor::GetSwitchNames(class UAkComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetSwitchNames");

	UAkAudioMonitor_GetSwitchNames_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetRTPCValueByID
// (Final, Native, Static, Public)
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// uint32_t                       RTPCID                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAkAudioMonitor::GetRTPCValueByID(class UAkComponent* Component, uint32_t RTPCID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetRTPCValueByID");

	UAkAudioMonitor_GetRTPCValueByID_Params params;
	params.Component = Component;
	params.RTPCID = RTPCID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetRTPCValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 RTPCName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAkAudioMonitor::GetRTPCValue(class UAkComponent* Component, const struct FString& RTPCName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetRTPCValue");

	UAkAudioMonitor_GetRTPCValue_Params params;
	params.Component = Component;
	params.RTPCName = RTPCName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetRTPCNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UAkAudioMonitor::GetRTPCNames(class UAkComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetRTPCNames");

	UAkAudioMonitor_GetRTPCNames_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetRTPCIDs
// (Final, Native, Static, Public)
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<uint32_t>               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<uint32_t> UAkAudioMonitor::GetRTPCIDs(class UAkComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetRTPCIDs");

	UAkAudioMonitor_GetRTPCIDs_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetReportErrorRecord
// (Final, Native, Static, Public)
// Parameters:
// TMap<unsigned char, struct FAKErrorInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<unsigned char, struct FAKErrorInfo> UAkAudioMonitor::GetReportErrorRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetReportErrorRecord");

	UAkAudioMonitor_GetReportErrorRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetPostion
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAkAudioMonitor::GetPostion(class UAkComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetPostion");

	UAkAudioMonitor_GetPostion_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetPlayingID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UAkAudioMonitor::GetPlayingID(class UAkComponent* Component)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetPlayingID");

	UAkAudioMonitor_GetPlayingID_Params params;
	params.Component = Component;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetPlayEventName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*            Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            PlayID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAkAudioMonitor::GetPlayEventName(class UAkComponent* Component, int PlayID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetPlayEventName");

	UAkAudioMonitor_GetPlayEventName_Params params;
	params.Component = Component;
	params.PlayID = PlayID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetObjectPlayRecord
// (Final, Native, Static, Public)
// Parameters:
// TMap<struct FString, unsigned char> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FString, unsigned char> UAkAudioMonitor::GetObjectPlayRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetObjectPlayRecord");

	UAkAudioMonitor_GetObjectPlayRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetObjectNameByObjectID
// (Final, Native, Static, Public)
// Parameters:
// uint64_t                       ObjectID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAkAudioMonitor::GetObjectNameByObjectID(uint64_t ObjectID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetObjectNameByObjectID");

	UAkAudioMonitor_GetObjectNameByObjectID_Params params;
	params.ObjectID = ObjectID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetMonitorDataPtr
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioMonitorData*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAkAudioMonitorData* UAkAudioMonitor::GetMonitorDataPtr()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetMonitorDataPtr");

	UAkAudioMonitor_GetMonitorDataPtr_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetGlobalSwitchValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SwitchName                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAkAudioMonitor::GetGlobalSwitchValue(const struct FString& SwitchName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetGlobalSwitchValue");

	UAkAudioMonitor_GetGlobalSwitchValue_Params params;
	params.SwitchName = SwitchName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetGlobalSwitchNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UAkAudioMonitor::GetGlobalSwitchNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetGlobalSwitchNames");

	UAkAudioMonitor_GetGlobalSwitchNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetGlobalRTPCValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 RTPCName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAkAudioMonitor::GetGlobalRTPCValue(const struct FString& RTPCName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetGlobalRTPCValue");

	UAkAudioMonitor_GetGlobalRTPCValue_Params params;
	params.RTPCName = RTPCName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetGlobalRTPCNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UAkAudioMonitor::GetGlobalRTPCNames()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetGlobalRTPCNames");

	UAkAudioMonitor_GetGlobalRTPCNames_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetEventList
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<struct FString>         OutRes                         (Parm, OutParm, ZeroConstructor)

void UAkAudioMonitor::GetEventList(TArray<struct FString>* OutRes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetEventList");

	UAkAudioMonitor_GetEventList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRes != nullptr)
		*OutRes = params.OutRes;
}


// Function AkAudio.AkAudioMonitor.GetEventInMemoryByName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UAkAudioEvent*>   AllAk                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 AkName                         (Parm, ZeroConstructor)
// class UAkAudioEvent*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAkAudioEvent* UAkAudioMonitor::GetEventInMemoryByName(TArray<class UAkAudioEvent*> AllAk, const struct FString& AkName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetEventInMemoryByName");

	UAkAudioMonitor_GetEventInMemoryByName_Params params;
	params.AllAk = AllAk;
	params.AkName = AkName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetBankRefList
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TMap<struct FString, int8_t>   OutRes                         (Parm, OutParm, ZeroConstructor)

void UAkAudioMonitor::GetBankRefList(TMap<struct FString, int8_t>* OutRes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetBankRefList");

	UAkAudioMonitor_GetBankRefList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutRes != nullptr)
		*OutRes = params.OutRes;
}


// Function AkAudio.AkAudioMonitor.GetAllEventNameInMemory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContent                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UAkAudioMonitor::GetAllEventNameInMemory(class UObject* WorldContent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetAllEventNameInMemory");

	UAkAudioMonitor_GetAllEventNameInMemory_Params params;
	params.WorldContent = WorldContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkAudioMonitor.GetAllEventInMemory
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContent                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAkAudioEvent*>   AllAk                          (Parm, OutParm, ZeroConstructor)

void UAkAudioMonitor::GetAllEventInMemory(class UObject* WorldContent, TArray<class UAkAudioEvent*>* AllAk)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetAllEventInMemory");

	UAkAudioMonitor_GetAllEventInMemory_Params params;
	params.WorldContent = WorldContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AllAk != nullptr)
		*AllAk = params.AllAk;
}


// Function AkAudio.AkAudioMonitor.GetAllAkComponentFormDevice
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UAkComponent*>    AkList                         (Parm, OutParm, ZeroConstructor)
// TArray<class UAkComponent*>    recycledAkList                 (Parm, OutParm, ZeroConstructor)

void UAkAudioMonitor::GetAllAkComponentFormDevice(TArray<class UAkComponent*>* AkList, TArray<class UAkComponent*>* recycledAkList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitor.GetAllAkComponentFormDevice");

	UAkAudioMonitor_GetAllAkComponentFormDevice_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AkList != nullptr)
		*AkList = params.AkList;
	if (recycledAkList != nullptr)
		*recycledAkList = params.recycledAkList;
}


// Function AkAudio.AkAudioMonitorData.UpdateEventList
// (Final, Native, Public)
// Parameters:
// bool                           bStop                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InEventName                    (Parm, ZeroConstructor)

void UAkAudioMonitorData::UpdateEventList(bool bStop, const struct FString& InEventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitorData.UpdateEventList");

	UAkAudioMonitorData_UpdateEventList_Params params;
	params.bStop = bStop;
	params.InEventName = InEventName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitorData.UpdateBankRefList
// (Final, Native, Public)
// Parameters:
// bool                           bUnload                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BankName                       (Parm, ZeroConstructor)
// int8_t                         RefCount                       (Parm, ZeroConstructor, IsPlainOldData)

void UAkAudioMonitorData::UpdateBankRefList(bool bUnload, const struct FString& BankName, int8_t RefCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitorData.UpdateBankRefList");

	UAkAudioMonitorData_UpdateBankRefList_Params params;
	params.bUnload = bUnload;
	params.BankName = BankName;
	params.RefCount = RefCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitorData.UpdateAkComponentInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// TMap<struct FString, struct FAkCombinedInfo> OutList                        (Parm, OutParm, ZeroConstructor)

void UAkAudioMonitorData::UpdateAkComponentInfo(TMap<struct FString, struct FAkCombinedInfo>* OutList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitorData.UpdateAkComponentInfo");

	UAkAudioMonitorData_UpdateAkComponentInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutList != nullptr)
		*OutList = params.OutList;
}


// Function AkAudio.AkAudioMonitorData.SetMonitorFlagInternal
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          InFlags                        (Parm, OutParm, ZeroConstructor)
// unsigned char                  TotalPlayCount                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ObjectPlayCount                (Parm, ZeroConstructor, IsPlainOldData)

void UAkAudioMonitorData::SetMonitorFlagInternal(unsigned char TotalPlayCount, unsigned char ObjectPlayCount, TArray<unsigned char>* InFlags)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitorData.SetMonitorFlagInternal");

	UAkAudioMonitorData_SetMonitorFlagInternal_Params params;
	params.TotalPlayCount = TotalPlayCount;
	params.ObjectPlayCount = ObjectPlayCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InFlags != nullptr)
		*InFlags = params.InFlags;
}


// Function AkAudio.AkAudioMonitorData.OnReportErrorInternal
// (Final, Native, Public)
// Parameters:
// struct FString                 FunctionName                   (ConstParm, Parm, ZeroConstructor)
// unsigned char                  ErrorAkCode                    (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       NumericParam                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 StrParam                       (Parm, ZeroConstructor)

void UAkAudioMonitorData::OnReportErrorInternal(const struct FString& FunctionName, unsigned char ErrorAkCode, uint64_t NumericParam, const struct FString& StrParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitorData.OnReportErrorInternal");

	UAkAudioMonitorData_OnReportErrorInternal_Params params;
	params.FunctionName = FunctionName;
	params.ErrorAkCode = ErrorAkCode;
	params.NumericParam = NumericParam;
	params.StrParam = StrParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioMonitorData.Initialize
// (Final, Native, Public)

void UAkAudioMonitorData::Initialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioMonitorData.Initialize");

	UAkAudioMonitorData_Initialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioVisualComponent.StartOfflineTime
// (Final, Native, Public, BlueprintCallable)

void UAkAudioVisualComponent::StartOfflineTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioVisualComponent.StartOfflineTime");

	UAkAudioVisualComponent_StartOfflineTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioVisualComponent.ResetOfflineTime
// (Final, Native, Public, BlueprintCallable)

void UAkAudioVisualComponent::ResetOfflineTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioVisualComponent.ResetOfflineTime");

	UAkAudioVisualComponent_ResetOfflineTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioVisualComponent.OnTickVisualInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<float>                  VisualInfo                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAkAudioVisualComponent::OnTickVisualInfo(TArray<float> VisualInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioVisualComponent.OnTickVisualInfo");

	UAkAudioVisualComponent_OnTickVisualInfo_Params params;
	params.VisualInfo = VisualInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioVisualComponent.OnTickOfflineVisualInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAudioOfflineVisualBeatData VisualInfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void UAkAudioVisualComponent::OnTickOfflineVisualInfo(const struct FAudioOfflineVisualBeatData& VisualInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioVisualComponent.OnTickOfflineVisualInfo");

	UAkAudioVisualComponent_OnTickOfflineVisualInfo_Params params;
	params.VisualInfo = VisualInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioVisualComponent.InitOfflineDataWithBeatTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<float>                  Datas                          (Parm, ZeroConstructor)

void UAkAudioVisualComponent::InitOfflineDataWithBeatTime(TArray<float> Datas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioVisualComponent.InitOfflineDataWithBeatTime");

	UAkAudioVisualComponent_InitOfflineDataWithBeatTime_Params params;
	params.Datas = Datas;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioVisualComponent.InitOfflineData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FAudioOfflineVisualBeatData> Datas                          (Parm, ZeroConstructor)

void UAkAudioVisualComponent::InitOfflineData(TArray<struct FAudioOfflineVisualBeatData> Datas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioVisualComponent.InitOfflineData");

	UAkAudioVisualComponent_InitOfflineData_Params params;
	params.Datas = Datas;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkAudioVisualComponent.GetCurrentBeat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAudioOfflineVisualBeatData Result                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAkAudioVisualComponent::GetCurrentBeat(struct FAudioOfflineVisualBeatData* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkAudioVisualComponent.GetCurrentBeat");

	UAkAudioVisualComponent_GetCurrentBeat_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.UseReverbVolumes
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           inUseReverbVolumes             (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseReverbVolumes");

	UAkComponent_UseReverbVolumes_Params params;
	params.inUseReverbVolumes = inUseReverbVolumes;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.UseEarlyReflections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAuxBus*               AuxBus                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Left                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Right                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           floor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ceiling                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Back                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Front                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpotReflectors                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AuxBusName                     (Parm, ZeroConstructor)

void UAkComponent::UseEarlyReflections(class UAkAuxBus* AuxBus, bool Left, bool Right, bool floor, bool Ceiling, bool Back, bool Front, bool SpotReflectors, const struct FString& AuxBusName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseEarlyReflections");

	UAkComponent_UseEarlyReflections_Params params;
	params.AuxBus = AuxBus;
	params.Left = Left;
	params.Right = Right;
	params.floor = floor;
	params.Ceiling = Ceiling;
	params.Back = Back;
	params.Front = Front;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.StopPlayingID
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int                            StopEventID                    (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::StopPlayingID(int StopEventID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.StopPlayingID");

	UAkComponent_StopPlayingID_Params params;
	params.StopEventID = StopEventID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.Stop
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)

void UAkComponent::Stop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.Stop");

	UAkComponent_Stop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetSwitch
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 SwitchGroup                    (Parm, ZeroConstructor)
// struct FString                 SwitchState                    (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkComponent::SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetSwitch");

	UAkComponent_SetSwitch_Params params;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bStopWhenOwnerDestroyed        (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed");

	UAkComponent_SetStopWhenOwnerDestroyed_Params params;
	params.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetRTPCValueGlobally
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RTPC                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::SetRTPCValueGlobally(const struct FString& RTPC, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetRTPCValueGlobally");

	UAkComponent_SetRTPCValueGlobally_Params params;
	params.RTPC = RTPC;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetRTPCValue
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RTPC                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            InterpolationTimeMs            (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetRTPCValue");

	UAkComponent_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetOutputBusVolume
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                          BusVolume                      (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::SetOutputBusVolume(float BusVolume)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetOutputBusVolume");

	UAkComponent_SetOutputBusVolume_Params params;
	params.BusVolume = BusVolume;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetListeners
// (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UAkComponent*>    Listeners                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAkComponent::SetListeners(TArray<class UAkComponent*> Listeners)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetListeners");

	UAkComponent_SetListeners_Params params;
	params.Listeners = Listeners;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetEarlyReflectionOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewEarlyReflectionOrder        (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::SetEarlyReflectionOrder(int NewEarlyReflectionOrder)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetEarlyReflectionOrder");

	UAkComponent_SetEarlyReflectionOrder_Params params;
	params.NewEarlyReflectionOrder = NewEarlyReflectionOrder;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetAutoDestroy
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           in_AutoDestroy                 (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::SetAutoDestroy(bool in_AutoDestroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetAutoDestroy");

	UAkComponent_SetAutoDestroy_Params params;
	params.in_AutoDestroy = in_AutoDestroy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetAttenuationScalingFactor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkComponent::SetAttenuationScalingFactor(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetAttenuationScalingFactor");

	UAkComponent_SetAttenuationScalingFactor_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SeekOnEvent
// (Final, Native, Public)
// Parameters:
// struct FString                 in_EventName                   (Parm, ZeroConstructor)
// int                            in_iPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkComponent::SeekOnEvent(const struct FString& in_EventName, int in_iPosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SeekOnEvent");

	UAkComponent_SeekOnEvent_Params params;
	params.in_EventName = in_EventName;
	params.in_iPosition = in_iPosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostTrigger
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Trigger                        (Parm, ZeroConstructor)

void UAkComponent::PostTrigger(const struct FString& Trigger)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostTrigger");

	UAkComponent_PostTrigger_Params params;
	params.Trigger = Trigger;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.PostAssociatedAkEvent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkComponent::PostAssociatedAkEvent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEvent");

	UAkComponent_PostAssociatedAkEvent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEventByName
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 in_EventName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkComponent::PostAkEventByName(const struct FString& in_EventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventByName");

	UAkComponent_PostAkEventByName_Params params;
	params.in_EventName = in_EventName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEvent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 in_EventName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkComponent::PostAkEvent(class UAkAudioEvent* AkEvent, const struct FString& in_EventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEvent");

	UAkComponent_PostAkEvent_Params params;
	params.AkEvent = AkEvent;
	params.in_EventName = in_EventName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.GetAttenuationRadius
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAkComponent::GetAttenuationRadius()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.GetAttenuationRadius");

	UAkComponent_GetAttenuationRadius_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.GetAkGameObjectName
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void UAkComponent::GetAkGameObjectName(struct FString* Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.GetAkGameObjectName");

	UAkComponent_GetAkGameObjectName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function AkAudio.AkGameplayStatics.WakeupFromSuspend
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)

void UAkGameplayStatics::WakeupFromSuspend()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.WakeupFromSuspend");

	UAkGameplayStatics_WakeupFromSuspend_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.UseReverbVolumes
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           inUseReverbVolumes             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseReverbVolumes");

	UAkGameplayStatics_UseReverbVolumes_Params params;
	params.inUseReverbVolumes = inUseReverbVolumes;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.UseEarlyReflections
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAuxBus*               AuxBus                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Left                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Right                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           floor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ceiling                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Back                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Front                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpotReflectors                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AuxBusName                     (Parm, ZeroConstructor)

void UAkGameplayStatics::UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, bool Left, bool Right, bool floor, bool Ceiling, bool Back, bool Front, bool SpotReflectors, const struct FString& AuxBusName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseEarlyReflections");

	UAkGameplayStatics_UseEarlyReflections_Params params;
	params.Actor = Actor;
	params.AuxBus = AuxBus;
	params.Left = Left;
	params.Right = Right;
	params.floor = floor;
	params.Ceiling = Ceiling;
	params.Back = Back;
	params.Front = Front;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.UnloadBankByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor)

void UAkGameplayStatics::UnloadBankByName(const struct FString& BankName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBankByName");

	UAkGameplayStatics_UnloadBankByName_Params params;
	params.BankName = BankName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.UnloadBank
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BankName                       (Parm, ZeroConstructor)

void UAkGameplayStatics::UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBank");

	UAkGameplayStatics_UnloadBank_Params params;
	params.Bank = Bank;
	params.BankName = BankName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.Suspend
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)

void UAkGameplayStatics::Suspend()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.Suspend");

	UAkGameplayStatics_Suspend_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopProfilerCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)

void UAkGameplayStatics::StopProfilerCapture()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopProfilerCapture");

	UAkGameplayStatics_StopProfilerCapture_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopPlayingID
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            PlayingID                      (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::StopPlayingID(int PlayingID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopPlayingID");

	UAkGameplayStatics_StopPlayingID_Params params;
	params.PlayingID = PlayingID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopOutputCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)

void UAkGameplayStatics::StopOutputCapture()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopOutputCapture");

	UAkGameplayStatics_StopOutputCapture_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::StopAllAmbientSounds(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAllAmbientSounds");

	UAkGameplayStatics_StopAllAmbientSounds_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)

void UAkGameplayStatics::StopAll()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAll");

	UAkGameplayStatics_StopAll_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopAkEventByID
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::StopAkEventByID(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAkEventByID");

	UAkGameplayStatics_StopAkEventByID_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopActor
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::StopActor(class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopActor");

	UAkGameplayStatics_StopActor_Params params;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StartProfilerCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UAkGameplayStatics::StartProfilerCapture(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartProfilerCapture");

	UAkGameplayStatics_StartProfilerCapture_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StartOutputCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UAkGameplayStatics::StartOutputCapture(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartOutputCapture");

	UAkGameplayStatics_StartOutputCapture_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::StartAllAmbientSounds(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartAllAmbientSounds");

	UAkGameplayStatics_StartAllAmbientSounds_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAuxBus*               EarlyReflectionsBus            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, IsPlainOldData)
// bool                           AutoPost                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FString                 EarlyReflectionsBusName        (Parm, ZeroConstructor)
// bool                           AutoDestroy                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class UAkAuxBus* EarlyReflectionsBus, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, const struct FString& EarlyReflectionsBusName, bool AutoDestroy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation");

	UAkGameplayStatics_SpawnAkComponentAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AkEvent = AkEvent;
	params.EarlyReflectionsBus = EarlyReflectionsBus;
	params.Location = Location;
	params.Orientation = Orientation;
	params.AutoPost = AutoPost;
	params.EventName = EventName;
	params.EarlyReflectionsBusName = EarlyReflectionsBusName;
	params.AutoDestroy = AutoDestroy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.ShowAKComponentPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           _IsShow                        (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::ShowAKComponentPosition(bool _IsShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ShowAKComponentPosition");

	UAkGameplayStatics_ShowAKComponentPosition_Params params;
	params._IsShow = _IsShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.ShouldPostEvent
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VoicePosition                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAkGameplayStatics::ShouldPostEvent(class UObject* WorldContext, const struct FVector& VoicePosition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ShouldPostEvent");

	UAkGameplayStatics_ShouldPostEvent_Params params;
	params.WorldContext = WorldContext;
	params.VoicePosition = VoicePosition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.SetSwitchWithDummyActor
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   SwitchGroup                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SwitchState                    (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetSwitchWithDummyActor(const struct FName& SwitchGroup, const struct FName& SwitchState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetSwitchWithDummyActor");

	UAkGameplayStatics_SetSwitchWithDummyActor_Params params;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetSwitch
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   SwitchGroup                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SwitchState                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetSwitch");

	UAkGameplayStatics_SetSwitch_Params params;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   StateGroup                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   State                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::SetState(const struct FName& StateGroup, const struct FName& State)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetState");

	UAkGameplayStatics_SetState_Params params;
	params.StateGroup = StateGroup;
	params.State = State;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.SetRTPCValue
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   RTPC                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            InterpolationTimeMs            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetRTPCValue");

	UAkGameplayStatics_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetRegionIpMute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bMuted                         (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetRegionIpMute(bool bMuted)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetRegionIpMute");

	UAkGameplayStatics_SetRegionIpMute_Params params;
	params.bMuted = bMuted;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetPanningRule
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EPanningRule                   PanRule                        (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetPanningRule(EPanningRule PanRule)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetPanningRule");

	UAkGameplayStatics_SetPanningRule_Params params;
	params.PanRule = PanRule;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          BusVolume                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOutputBusVolume");

	UAkGameplayStatics_SetOutputBusVolume_Params params;
	params.BusVolume = BusVolume;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ScalingFactor                  (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetOcclusionScalingFactor(float ScalingFactor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor");

	UAkGameplayStatics_SetOcclusionScalingFactor_Params params;
	params.ScalingFactor = ScalingFactor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          RefreshInterval                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval");

	UAkGameplayStatics_SetOcclusionRefreshInterval_Params params;
	params.RefreshInterval = RefreshInterval;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetMultiplePositions
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FTransform>      InTransforms                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UAkComponent*            AkComponent                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAkGameplayStatics::SetMultiplePositions(TArray<struct FTransform> InTransforms, class UAkComponent* AkComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultiplePositions");

	UAkGameplayStatics_SetMultiplePositions_Params params;
	params.InTransforms = InTransforms;
	params.AkComponent = AkComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetBusConfig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 BusName                        (Parm, ZeroConstructor)
// EAkChannelConfiguration        ChannelConfiguration           (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::SetBusConfig(const struct FString& BusName, EAkChannelConfiguration ChannelConfiguration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetBusConfig");

	UAkGameplayStatics_SetBusConfig_Params params;
	params.BusName = BusName;
	params.ChannelConfiguration = ChannelConfiguration;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SeekOnEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           in_pAkEvent                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  in_pActor                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            in_iPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// bool                           in_bSeekToNearestMarker        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::SeekOnEvent(class UAkAudioEvent* in_pAkEvent, class AActor* in_pActor, int in_iPosition, const struct FString& EventName, bool in_bSeekToNearestMarker)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SeekOnEvent");

	UAkGameplayStatics_SeekOnEvent_Params params;
	params.in_pAkEvent = in_pAkEvent;
	params.in_pActor = in_pActor;
	params.in_iPosition = in_iPosition;
	params.EventName = EventName;
	params.in_bSeekToNearestMarker = in_bSeekToNearestMarker;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.RefreshModDirectories
// (Final, Native, Static, Public, BlueprintCallable)

void UAkGameplayStatics::RefreshModDirectories()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.RefreshModDirectories");

	UAkGameplayStatics_RefreshModDirectories_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.PostTrigger
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::PostTrigger(const struct FName& Trigger, class AActor* Actor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostTrigger");

	UAkGameplayStatics_PostTrigger_Params params;
	params.Trigger = Trigger;
	params.Actor = Actor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.PostEventWithVolume
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::PostEventWithVolume(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName, float Volume)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventWithVolume");

	UAkGameplayStatics_PostEventWithVolume_Params params;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;
	params.Volume = Volume;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEventWithDummyActor
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::PostEventWithDummyActor(class UAkAudioEvent* AkEvent, const struct FString& EventName, class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventWithDummyActor");

	UAkGameplayStatics_PostEventWithDummyActor_Params params;
	params.AkEvent = AkEvent;
	params.EventName = EventName;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEventByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventByName");

	UAkGameplayStatics_PostEventByName_Params params;
	params.EventName = EventName;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.PostEventAttached
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAttached");

	UAkGameplayStatics_PostEventAttached_Params params;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.AttachPointName = AttachPointName;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEventAtLocationWithVolume
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::PostEventAtLocationWithVolume(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject, float Volume)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocationWithVolume");

	UAkGameplayStatics_PostEventAtLocationWithVolume_Params params;
	params.AkEvent = AkEvent;
	params.Location = Location;
	params.Orientation = Orientation;
	params.EventName = EventName;
	params.WorldContextObject = WorldContextObject;
	params.Volume = Volume;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocationByName");

	UAkGameplayStatics_PostEventAtLocationByName_Params params;
	params.EventName = EventName;
	params.Location = Location;
	params.Orientation = Orientation;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.PostEventAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocation");

	UAkGameplayStatics_PostEventAtLocation_Params params;
	params.AkEvent = AkEvent;
	params.Location = Location;
	params.Orientation = Orientation;
	params.EventName = EventName;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEvent");

	UAkGameplayStatics_PostEvent_Params params;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.MuteListener
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            WindowID                       (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::MuteListener(class APlayerController* Controller, int WindowID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.MuteListener");

	UAkGameplayStatics_MuteListener_Params params;
	params.Controller = Controller;
	params.WindowID = WindowID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.LoadInitBank
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)

void UAkGameplayStatics::LoadInitBank()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadInitBank");

	UAkGameplayStatics_LoadInitBank_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.LoadBanks
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UAkAudioBank*>    SoundBanks                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           SynchronizeSoundBanks          (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBanks");

	UAkGameplayStatics_LoadBanks_Params params;
	params.SoundBanks = SoundBanks;
	params.SynchronizeSoundBanks = SynchronizeSoundBanks;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.LoadBankByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor)

void UAkGameplayStatics::LoadBankByName(const struct FString& BankName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBankByName");

	UAkGameplayStatics_LoadBankByName_Params params;
	params.BankName = BankName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.LoadBank
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BankName                       (Parm, ZeroConstructor)

void UAkGameplayStatics::LoadBank(class UAkAudioBank* Bank, const struct FString& BankName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBank");

	UAkGameplayStatics_LoadBank_Params params;
	params.Bank = Bank;
	params.BankName = BankName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.IsGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAkGameplayStatics::IsGame(class UObject* WorldContextObject)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsGame");

	UAkGameplayStatics_IsGame_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.IsEditor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAkGameplayStatics::IsEditor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsEditor");

	UAkGameplayStatics_IsEditor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetSourcePlayPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAkGameplayStatics::GetSourcePlayPosition(int AkEvent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetSourcePlayPosition");

	UAkGameplayStatics_GetSourcePlayPosition_Params params;
	params.AkEvent = AkEvent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAkGameplayStatics::GetOcclusionScalingFactor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor");

	UAkGameplayStatics_GetOcclusionScalingFactor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.GetAkComponent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAkComponent* UAkGameplayStatics::GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAkComponent");

	UAkGameplayStatics_GetAkComponent_Params params;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.ClearBanks
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)

void UAkGameplayStatics::ClearBanks()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ClearBanks");

	UAkGameplayStatics_ClearBanks_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.AKSetRTPCValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 RTPC                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           in_bBypassInternalValueInterpolation (Parm, ZeroConstructor, IsPlainOldData)

void UAkGameplayStatics::AKSetRTPCValue(const struct FString& RTPC, float Value, bool in_bBypassInternalValueInterpolation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.AKSetRTPCValue");

	UAkGameplayStatics_AKSetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;
	params.in_bBypassInternalValueInterpolation = in_bBypassInternalValueInterpolation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MarkerText                     (Parm, ZeroConstructor)

void UAkGameplayStatics::AddOutputCaptureMarker(const struct FString& MarkerText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker");

	UAkGameplayStatics_AddOutputCaptureMarker_Params params;
	params.MarkerText = MarkerText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.AddModDirectory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)

void UAkGameplayStatics::AddModDirectory(const struct FString& Path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.AddModDirectory");

	UAkGameplayStatics_AddModDirectory_Params params;
	params.Path = Path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkRoomComponent.RemoveSpatialAudioRoom
// (Final, Native, Public, BlueprintCallable)

void UAkRoomComponent::RemoveSpatialAudioRoom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkRoomComponent.RemoveSpatialAudioRoom");

	UAkRoomComponent_RemoveSpatialAudioRoom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkRoomComponent.AddSpatialAudioRoom
// (Final, Native, Public, BlueprintCallable)

void UAkRoomComponent::AddSpatialAudioRoom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkRoomComponent.AddSpatialAudioRoom");

	UAkRoomComponent_AddSpatialAudioRoom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
// (Final, Native, Public, BlueprintCallable)

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet");

	UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
// (Final, Native, Public, BlueprintCallable)

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet");

	UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
// (Final, Native, Public, BlueprintCallable)

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet");

	UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AudioOfflineVisual.StartBeatOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void UAudioOfflineVisual::StartBeatOffset(float Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioOfflineVisual.StartBeatOffset");

	UAudioOfflineVisual_StartBeatOffset_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AudioOfflineVisual.StartBeat
// (Final, Native, Public, BlueprintCallable)

void UAudioOfflineVisual::StartBeat()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioOfflineVisual.StartBeat");

	UAudioOfflineVisual_StartBeat_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AudioOfflineVisual.ResetBeatTime
// (Final, Native, Public, BlueprintCallable)

void UAudioOfflineVisual::ResetBeatTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioOfflineVisual.ResetBeatTime");

	UAudioOfflineVisual_ResetBeatTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AudioOfflineVisual.InitWithBeatTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<float>                  Datas                          (Parm, ZeroConstructor)

void UAudioOfflineVisual::InitWithBeatTime(TArray<float> Datas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioOfflineVisual.InitWithBeatTime");

	UAudioOfflineVisual_InitWithBeatTime_Params params;
	params.Datas = Datas;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AudioOfflineVisual.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FAudioOfflineVisualBeatData> Datas                          (Parm, ZeroConstructor)

void UAudioOfflineVisual::Init(TArray<struct FAudioOfflineVisualBeatData> Datas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioOfflineVisual.Init");

	UAudioOfflineVisual_Init_Params params;
	params.Datas = Datas;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AudioOfflineVisual.GetCurrentBeatByCustomTime
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          InBeatSecondTime               (Parm, ZeroConstructor, IsPlainOldData)
// struct FAudioOfflineVisualBeatData Result                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioOfflineVisual::GetCurrentBeatByCustomTime(float InBeatSecondTime, struct FAudioOfflineVisualBeatData* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioOfflineVisual.GetCurrentBeatByCustomTime");

	UAudioOfflineVisual_GetCurrentBeatByCustomTime_Params params;
	params.InBeatSecondTime = InBeatSecondTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AkAudio.AudioOfflineVisual.GetCurrentBeat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAudioOfflineVisualBeatData Result                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioOfflineVisual::GetCurrentBeat(struct FAudioOfflineVisualBeatData* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioOfflineVisual.GetCurrentBeat");

	UAudioOfflineVisual_GetCurrentBeat_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.TryInit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioVisual::TryInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.TryInit");

	UAudioVisual_TryInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.Reset
// (Final, Native, Public, BlueprintCallable)

void UAudioVisual::Reset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.Reset");

	UAudioVisual_Reset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AkAudio.AudioVisual.IsInited
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAudioVisual::IsInited()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.IsInited");

	UAudioVisual_IsInited_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.GetRMS
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAudioVisual::GetRMS()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.GetRMS");

	UAudioVisual_GetRMS_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.GetInstantEnergy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAudioVisual::GetInstantEnergy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.GetInstantEnergy");

	UAudioVisual_GetInstantEnergy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.GetFrequencyVol
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EFrequencyRange                freqRange                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAudioVisual::GetFrequencyVol(EFrequencyRange freqRange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.GetFrequencyVol");

	UAudioVisual_GetFrequencyVol_Params params;
	params.freqRange = freqRange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.GetFrequencyDataWithBin
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<float>                  pFreqData                      (Parm, OutParm, ZeroConstructor)
// EFrequencyRange                freqRange                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            nBin                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAbsolute                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAudioVisual::GetFrequencyDataWithBin(EFrequencyRange freqRange, int nBin, bool bAbsolute, TArray<float>* pFreqData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.GetFrequencyDataWithBin");

	UAudioVisual_GetFrequencyDataWithBin_Params params;
	params.freqRange = freqRange;
	params.nBin = nBin;
	params.bAbsolute = bAbsolute;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (pFreqData != nullptr)
		*pFreqData = params.pFreqData;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.GetFrequencyData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<float>                  pFreqData                      (Parm, OutParm, ZeroConstructor)
// EFrequencyRange                freqRange                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAudioVisual::GetFrequencyData(EFrequencyRange freqRange, TArray<float>* pFreqData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.GetFrequencyData");

	UAudioVisual_GetFrequencyData_Params params;
	params.freqRange = freqRange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (pFreqData != nullptr)
		*pFreqData = params.pFreqData;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.GetAudioSamplesWithBin
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<float>                  pAudioData                     (Parm, OutParm, ZeroConstructor)
// int                            nBin                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAbsolute                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAudioVisual::GetAudioSamplesWithBin(int nBin, bool bAbsolute, TArray<float>* pAudioData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.GetAudioSamplesWithBin");

	UAudioVisual_GetAudioSamplesWithBin_Params params;
	params.nBin = nBin;
	params.bAbsolute = bAbsolute;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (pAudioData != nullptr)
		*pAudioData = params.pAudioData;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisual.GetAudioSamples
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<float>                  pAudioData                     (Parm, OutParm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAudioVisual::GetAudioSamples(TArray<float>* pAudioData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisual.GetAudioSamples");

	UAudioVisual_GetAudioSamples_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (pAudioData != nullptr)
		*pAudioData = params.pAudioData;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisualBlueprintLibrary.GetAudioVisual
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioVisual*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAudioVisual* UAudioVisualBlueprintLibrary::GetAudioVisual(class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisualBlueprintLibrary.GetAudioVisual");

	UAudioVisualBlueprintLibrary_GetAudioVisual_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AudioVisualBlueprintLibrary.GetAudioOfflineVisual
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioOfflineVisual*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAudioOfflineVisual* UAudioVisualBlueprintLibrary::GetAudioOfflineVisual(class UObject* Outer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AkAudio.AudioVisualBlueprintLibrary.GetAudioOfflineVisual");

	UAudioVisualBlueprintLibrary_GetAudioOfflineVisual_Params params;
	params.Outer = Outer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

