// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AI.AESpawner.SwitchTeamAI
// (Final, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::SwitchTeamAI(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.SwitchTeamAI");

	AAESpawner_SwitchTeamAI_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.OnUnitTakeDamageEvent
// (Final, Native, Protected, HasOutParms)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::OnUnitTakeDamageEvent(float Damage, const struct FDamageEvent& DamageEvent, class AActor* Victim, class AActor* Causer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnUnitTakeDamageEvent");

	AAESpawner_OnUnitTakeDamageEvent_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.Victim = Victim;
	params.Causer = Causer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.OnUnitSpawned
// (Native, Public, HasOutParms)
// Parameters:
// class AActor*                  NewUnit                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FSTSpawnParam           SpawnParam                     (ConstParm, Parm, OutParm, ReferenceParm)
// class ASTSpawnerBase*          Spawner                        (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::OnUnitSpawned(class AActor* NewUnit, const struct FSTSpawnParam& SpawnParam, class ASTSpawnerBase* Spawner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnUnitSpawned");

	AAESpawner_OnUnitSpawned_Params params;
	params.NewUnit = NewUnit;
	params.SpawnParam = SpawnParam;
	params.Spawner = Spawner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.OnSpawnTimingRipe
// (Native, Protected)
// Parameters:
// bool                           IsRipe                         (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::OnSpawnTimingRipe(bool IsRipe)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnSpawnTimingRipe");

	AAESpawner_OnSpawnTimingRipe_Params params;
	params.IsRipe = IsRipe;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.OnOwnedMobDead
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class ASTExtraSimpleCharacter* DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              KillingHitInfo                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 KillingHitImpulseDir           (Parm, IsPlainOldData)
// class UClass*                  KillingHitDamageType           (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::OnOwnedMobDead(class ASTExtraSimpleCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnOwnedMobDead");

	AAESpawner_OnOwnedMobDead_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.OnOwnedFakePlayerDead
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class ASTExtraBaseCharacter*   DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              KillingHitInfo                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 KillingHitImpulseDir           (Parm, IsPlainOldData)
// class UClass*                  KillingHitDamageType           (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::OnOwnedFakePlayerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnOwnedFakePlayerDead");

	AAESpawner_OnOwnedFakePlayerDead_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.GetSpeciesCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EBotCategray>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EBotCategray> AAESpawner::GetSpeciesCategory()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.GetSpeciesCategory");

	AAESpawner_GetSpeciesCategory_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawner.GetSpawnerTeamID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAESpawner::GetSpawnerTeamID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.GetSpawnerTeamID");

	AAESpawner_GetSpawnerTeamID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawner.GetSpawnerGroupID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAESpawner::GetSpawnerGroupID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.GetSpawnerGroupID");

	AAESpawner_GetSpawnerGroupID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawner.GenerateParamID
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            ConfigId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            BaseParamID                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FSTSpawnParam           SpawnParam                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AAESpawner::GenerateParamID(int ConfigId, int BaseParamID, const struct FSTSpawnParam& SpawnParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.GenerateParamID");

	AAESpawner_GenerateParamID_Params params;
	params.ConfigId = ConfigId;
	params.BaseParamID = BaseParamID;
	params.SpawnParam = SpawnParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawner.DeactivateSpawner
// (Native, Public, BlueprintCallable)

void AAESpawner::DeactivateSpawner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.DeactivateSpawner");

	AAESpawner_DeactivateSpawner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.BPOnUnitSpawned
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class APawn*                   AIPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConfigId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSTSpawnParam           SpawnParam                     (ConstParm, Parm, OutParm, ReferenceParm)

void AAESpawner::BPOnUnitSpawned(class APawn* AIPawn, int ConfigId, const struct FSTSpawnParam& SpawnParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.BPOnUnitSpawned");

	AAESpawner_BPOnUnitSpawned_Params params;
	params.AIPawn = AIPawn;
	params.ConfigId = ConfigId;
	params.SpawnParam = SpawnParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.ActivateSpawner
// (Native, Public, BlueprintCallable)

void AAESpawner::ActivateSpawner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.ActivateSpawner");

	AAESpawner_ActivateSpawner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawnSubsystem.SpawnUnit
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FSTSpawnParam           SpawnParam                     (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAESpawnSubsystem::SpawnUnit(const struct FSTSpawnParam& SpawnParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.SpawnUnit");

	UAESpawnSubsystem_SpawnUnit_Params params;
	params.SpawnParam = SpawnParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawnSubsystem.RegisterSpawner
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASTSpawnerBase*          Spawner                        (Parm, ZeroConstructor, IsPlainOldData)

void UAESpawnSubsystem::RegisterSpawner(class ASTSpawnerBase* Spawner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.RegisterSpawner");

	UAESpawnSubsystem_RegisterSpawner_Params params;
	params.Spawner = Spawner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawnSubsystem.PreCheck
// (Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAESpawnSubsystem::PreCheck()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.PreCheck");

	UAESpawnSubsystem_PreCheck_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawnSubsystem.ModifyThreshold
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TEnumAsByte<EBotCategray>      Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Threshold                      (Parm, ZeroConstructor, IsPlainOldData)

void UAESpawnSubsystem::ModifyThreshold(TEnumAsByte<EBotCategray> Category, int Threshold)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.ModifyThreshold");

	UAESpawnSubsystem_ModifyThreshold_Params params;
	params.Category = Category;
	params.Threshold = Threshold;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawnSubsystem.GetUnitsNumByCategory
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TEnumAsByte<EBotCategray>      Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAESpawnSubsystem::GetUnitsNumByCategory(TEnumAsByte<EBotCategray> Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.GetUnitsNumByCategory");

	UAESpawnSubsystem_GetUnitsNumByCategory_Params params;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawnSubsystem.GetUnitConfigID
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Unit                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAESpawnSubsystem::GetUnitConfigID(class AActor* Unit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.GetUnitConfigID");

	UAESpawnSubsystem_GetUnitConfigID_Params params;
	params.Unit = Unit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawnSubsystem.GetGroupedSpawners
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            InGroupID                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ASTSpawnerBase*>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ASTSpawnerBase*> UAESpawnSubsystem::GetGroupedSpawners(int InGroupID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.GetGroupedSpawners");

	UAESpawnSubsystem_GetGroupedSpawners_Params params;
	params.InGroupID = InGroupID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawnSubsystem.EnQueue
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSTSpawnParam           SpawnParam                     (Parm, OutParm)
// class ASTSpawnerBase*          Spawner                        (Parm, ZeroConstructor, IsPlainOldData)

void UAESpawnSubsystem::EnQueue(class ASTSpawnerBase* Spawner, struct FSTSpawnParam* SpawnParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.EnQueue");

	UAESpawnSubsystem_EnQueue_Params params;
	params.Spawner = Spawner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpawnParam != nullptr)
		*SpawnParam = params.SpawnParam;
}


// Function AI.AESpawnSubsystem.CleanQueue
// (Native, Public, BlueprintCallable)

void UAESpawnSubsystem::CleanQueue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.CleanQueue");

	UAESpawnSubsystem_CleanQueue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawnSubsystem.CheckCategoryLimit
// (Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// class ASTSpawnerBase*          Spawner                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            AvailableBalance               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAESpawnSubsystem::CheckCategoryLimit(class ASTSpawnerBase* Spawner, int* AvailableBalance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.CheckCategoryLimit");

	UAESpawnSubsystem_CheckCategoryLimit_Params params;
	params.Spawner = Spawner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AvailableBalance != nullptr)
		*AvailableBalance = params.AvailableBalance;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.UseItem
// (Final, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponSlot                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::UseItem(int ItemId, int WeaponSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.UseItem");

	UAIActionExecutionComponent_UseItem_Params params;
	params.ItemId = ItemId;
	params.WeaponSlot = WeaponSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.SwapAttachmentItem
// (Final, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SourceWeaponSlot               (Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetWeaponSlot               (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::SwapAttachmentItem(int ItemId, int SourceWeaponSlot, int TargetWeaponSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SwapAttachmentItem");

	UAIActionExecutionComponent_SwapAttachmentItem_Params params;
	params.ItemId = ItemId;
	params.SourceWeaponSlot = SourceWeaponSlot;
	params.TargetWeaponSlot = TargetWeaponSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.SetGrenadeLastSelectID
// (Final, Native, Public)
// Parameters:
// int                            WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::SetGrenadeLastSelectID(int WeaponId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SetGrenadeLastSelectID");

	UAIActionExecutionComponent_SetGrenadeLastSelectID_Params params;
	params.WeaponId = WeaponId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.SetFocusRotation
// (Final, Native, Public)
// Parameters:
// float                          InPitch                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InYaw                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRoll                         (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::SetFocusRotation(float InPitch, float InYaw, float InRoll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SetFocusRotation");

	UAIActionExecutionComponent_SetFocusRotation_Params params;
	params.InPitch = InPitch;
	params.InYaw = InYaw;
	params.InRoll = InRoll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.SetCurShootingPose
// (Final, Native, Public)

void UAIActionExecutionComponent::SetCurShootingPose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SetCurShootingPose");

	UAIActionExecutionComponent_SetCurShootingPose_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.RescueTarget
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   RescueCharacter                (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::RescueTarget(class ASTExtraBaseCharacter* RescueCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.RescueTarget");

	UAIActionExecutionComponent_RescueTarget_Params params;
	params.RescueCharacter = RescueCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.OpenFixedRateOfDoors
// (Final, Native, Public)
// Parameters:
// float                          fCheckRealPlayerDistance       (Parm, ZeroConstructor, IsPlainOldData)
// float                          fOpenDoorDistance              (Parm, ZeroConstructor, IsPlainOldData)
// float                          fOpenDoorRate                  (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::OpenFixedRateOfDoors(float fCheckRealPlayerDistance, float fOpenDoorDistance, float fOpenDoorRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.OpenFixedRateOfDoors");

	UAIActionExecutionComponent_OpenFixedRateOfDoors_Params params;
	params.fCheckRealPlayerDistance = fCheckRealPlayerDistance;
	params.fOpenDoorDistance = fOpenDoorDistance;
	params.fOpenDoorRate = fOpenDoorRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.OpenDoor
// (Final, Native, Public)

void UAIActionExecutionComponent::OpenDoor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.OpenDoor");

	UAIActionExecutionComponent_OpenDoor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.OnPlayerRespawn
// (Final, Native, Public)
// Parameters:
// class AUAEPlayerController*    PC                             (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::OnPlayerRespawn(class AUAEPlayerController* PC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.OnPlayerRespawn");

	UAIActionExecutionComponent_OnPlayerRespawn_Params params;
	params.PC = PC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.OnFakePlayerRespawn
// (Final, Native, Public)

void UAIActionExecutionComponent::OnFakePlayerRespawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.OnFakePlayerRespawn");

	UAIActionExecutionComponent_OnFakePlayerRespawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.IsValid
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIActionExecutionComponent::IsValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.IsValid");

	UAIActionExecutionComponent_IsValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.IsFreeCamera
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIActionExecutionComponent::IsFreeCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.IsFreeCamera");

	UAIActionExecutionComponent_IsFreeCamera_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.GetPickActorWithID
// (Final, Native, Public)
// Parameters:
// int                            UID                            (Parm, ZeroConstructor, IsPlainOldData)
// class APickUpWrapperActor*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APickUpWrapperActor* UAIActionExecutionComponent::GetPickActorWithID(int UID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.GetPickActorWithID");

	UAIActionExecutionComponent_GetPickActorWithID_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.GetOwnerBaseCharacter
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraBaseCharacter* UAIActionExecutionComponent::GetOwnerBaseCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.GetOwnerBaseCharacter");

	UAIActionExecutionComponent_GetOwnerBaseCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.GetBackpackComponent
// (Final, Native, Public)
// Parameters:
// class UBackpackComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBackpackComponent* UAIActionExecutionComponent::GetBackpackComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.GetBackpackComponent");

	UAIActionExecutionComponent_GetBackpackComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.DropItem
// (Final, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::DropItem(int ItemId, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DropItem");

	UAIActionExecutionComponent_DropItem_Params params;
	params.ItemId = ItemId;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.DoActionQuickMark
// (Final, Native, Public)
// Parameters:
// int                            actorUID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            CheckRange                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::DoActionQuickMark(int actorUID, int ItemId, int CheckRange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DoActionQuickMark");

	UAIActionExecutionComponent_DoActionQuickMark_Params params;
	params.actorUID = actorUID;
	params.ItemId = ItemId;
	params.CheckRange = CheckRange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.DoActionMoveNew
// (Final, Native, Public)
// Parameters:
// bool                           IsStop                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRun                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          DirectionX                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DirectionY                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DirectionZ                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            SwimUpRate                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::DoActionMoveNew(bool IsStop, bool IsRun, float DirectionX, float DirectionY, float DirectionZ, int SwimUpRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DoActionMoveNew");

	UAIActionExecutionComponent_DoActionMoveNew_Params params;
	params.IsStop = IsStop;
	params.IsRun = IsRun;
	params.DirectionX = DirectionX;
	params.DirectionY = DirectionY;
	params.DirectionZ = DirectionZ;
	params.SwimUpRate = SwimUpRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.DoActionMove
// (Final, Native, Public)
// Parameters:
// bool                           IsRun                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          DirectionX                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DirectionY                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DirectionZ                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::DoActionMove(bool IsRun, float DirectionX, float DirectionY, float DirectionZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DoActionMove");

	UAIActionExecutionComponent_DoActionMove_Params params;
	params.IsRun = IsRun;
	params.DirectionX = DirectionX;
	params.DirectionY = DirectionY;
	params.DirectionZ = DirectionZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.DoActionFreeCamera
// (Final, Native, Public)
// Parameters:
// bool                           IsEnter                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPitch                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InYaw                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRoll                         (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DoActionFreeCamera");

	UAIActionExecutionComponent_DoActionFreeCamera_Params params;
	params.IsEnter = IsEnter;
	params.InPitch = InPitch;
	params.InYaw = InYaw;
	params.InRoll = InRoll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.DisuseItem
// (Final, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponSlot                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::DisuseItem(int ItemId, int WeaponSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DisuseItem");

	UAIActionExecutionComponent_DisuseItem_Params params;
	params.ItemId = ItemId;
	params.WeaponSlot = WeaponSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.CloseDoor
// (Final, Native, Public)

void UAIActionExecutionComponent::CloseDoor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.CloseDoor");

	UAIActionExecutionComponent_CloseDoor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBasicStateInfoComponent.OnItemStateChanged
// (Native, Public, HasDefaults)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)

void UAIBasicStateInfoComponent::OnItemStateChanged(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBasicStateInfoComponent.OnItemStateChanged");

	UAIBasicStateInfoComponent_OnItemStateChanged_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBasicStateInfoComponent.GetTLogAIShootInfo
// (Native, Public)
// Parameters:
// struct FTLogAIShootInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTLogAIShootInfo UAIBasicStateInfoComponent::GetTLogAIShootInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBasicStateInfoComponent.GetTLogAIShootInfo");

	UAIBasicStateInfoComponent_GetTLogAIShootInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBasicStateInfoComponent.GetPickActorWithID
// (Native, Public)
// Parameters:
// int                            UID                            (Parm, ZeroConstructor, IsPlainOldData)
// class APickUpWrapperActor*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APickUpWrapperActor* UAIBasicStateInfoComponent::GetPickActorWithID(int UID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBasicStateInfoComponent.GetPickActorWithID");

	UAIBasicStateInfoComponent_GetPickActorWithID_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_VehicleBase.Suicide
// (Native, Public)

void UAIBehaviorAdapter_VehicleBase::Suicide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.Suicide");

	UAIBehaviorAdapter_VehicleBase_Suicide_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.RPC_Client_SetServiceDebugInfo
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FString                 Info                           (Parm, ZeroConstructor)

void UAIBehaviorAdapter_VehicleBase::RPC_Client_SetServiceDebugInfo(const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.RPC_Client_SetServiceDebugInfo");

	UAIBehaviorAdapter_VehicleBase_RPC_Client_SetServiceDebugInfo_Params params;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.OnInit
// (Native, Public)

void UAIBehaviorAdapter_VehicleBase::OnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.OnInit");

	UAIBehaviorAdapter_VehicleBase_OnInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.OnDeath
// (Native, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIBehaviorAdapter_VehicleBase::OnDeath(class AController* InstigatedBy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.OnDeath");

	UAIBehaviorAdapter_VehicleBase_OnDeath_Params params;
	params.InstigatedBy = InstigatedBy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.OnAICPossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             InController                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIBehaviorAdapter_VehicleBase::OnAICPossessed(class AController* InController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.OnAICPossessed");

	UAIBehaviorAdapter_VehicleBase_OnAICPossessed_Params params;
	params.InController = InController;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.LuaCalculateHitRate
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseHitRate                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAIBehaviorAdapter_VehicleBase::LuaCalculateHitRate(float Distance, float BaseHitRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.LuaCalculateHitRate");

	UAIBehaviorAdapter_VehicleBase_LuaCalculateHitRate_Params params;
	params.Distance = Distance;
	params.BaseHitRate = BaseHitRate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_VehicleBase.IsAlive
// (Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIBehaviorAdapter_VehicleBase::IsAlive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.IsAlive");

	UAIBehaviorAdapter_VehicleBase_IsAlive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_VehicleBase.HandleOnVehicleUnderAttack
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void UAIBehaviorAdapter_VehicleBase::HandleOnVehicleUnderAttack(class AController* EventInstigator, const struct FDamageEvent& DamageEvent, class AActor* DamageCauser, float Damage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.HandleOnVehicleUnderAttack");

	UAIBehaviorAdapter_VehicleBase_HandleOnVehicleUnderAttack_Params params;
	params.EventInstigator = EventInstigator;
	params.DamageEvent = DamageEvent;
	params.DamageCauser = DamageCauser;
	params.Damage = Damage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.HandleOnVehicleHealthStateChanged
// (Native, Protected)
// Parameters:
// ESTExtraVehicleHealthState     InVehicleHealthState           (Parm, ZeroConstructor, IsPlainOldData)

void UAIBehaviorAdapter_VehicleBase::HandleOnVehicleHealthStateChanged(ESTExtraVehicleHealthState InVehicleHealthState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.HandleOnVehicleHealthStateChanged");

	UAIBehaviorAdapter_VehicleBase_HandleOnVehicleHealthStateChanged_Params params;
	params.InVehicleHealthState = InVehicleHealthState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.HandleOnMeshHit
// (Native, Protected, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UAIBehaviorAdapter_VehicleBase::HandleOnMeshHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.HandleOnMeshHit");

	UAIBehaviorAdapter_VehicleBase_HandleOnMeshHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.BroadcastServiceDebugInfo
// (Native, Public)

void UAIBehaviorAdapter_VehicleBase::BroadcastServiceDebugInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.BroadcastServiceDebugInfo");

	UAIBehaviorAdapter_VehicleBase_BroadcastServiceDebugInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.BPReceiveDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDamageType>       DamageEventType                (Parm, ZeroConstructor, IsPlainOldData)

void UAIBehaviorAdapter_VehicleBase::BPReceiveDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, TEnumAsByte<EDamageType> DamageEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.BPReceiveDamage");

	UAIBehaviorAdapter_VehicleBase_BPReceiveDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.DamageEventType = DamageEventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_Tank.UpdateTurretAimingTarget
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FailedWhenCollided             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIBehaviorAdapter_Tank::UpdateTurretAimingTarget(const struct FVector& TargetLocation, float DeltaSeconds, bool FailedWhenCollided)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.UpdateTurretAimingTarget");

	UAIBehaviorAdapter_Tank_UpdateTurretAimingTarget_Params params;
	params.TargetLocation = TargetLocation;
	params.DeltaSeconds = DeltaSeconds;
	params.FailedWhenCollided = FailedWhenCollided;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_Tank.ShootTurret
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIBehaviorAdapter_Tank::ShootTurret()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.ShootTurret");

	UAIBehaviorAdapter_Tank_ShootTurret_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_Tank.ShootMachineGun
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIBehaviorAdapter_Tank::ShootMachineGun()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.ShootMachineGun");

	UAIBehaviorAdapter_Tank_ShootMachineGun_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_Tank.OnInit
// (Native, Public)

void UAIBehaviorAdapter_Tank::OnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.OnInit");

	UAIBehaviorAdapter_Tank_OnInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_Tank.OnDeath
// (Native, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIBehaviorAdapter_Tank::OnDeath(class AController* InstigatedBy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.OnDeath");

	UAIBehaviorAdapter_Tank_OnDeath_Params params;
	params.InstigatedBy = InstigatedBy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_Tank.IsTurretLockTarget
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          LockRadius                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIBehaviorAdapter_Tank::IsTurretLockTarget(const struct FVector& TargetLocation, float LockRadius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.IsTurretLockTarget");

	UAIBehaviorAdapter_Tank_IsTurretLockTarget_Params params;
	params.TargetLocation = TargetLocation;
	params.LockRadius = LockRadius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_Tank.IsAlive
// (Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIBehaviorAdapter_Tank::IsAlive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.IsAlive");

	UAIBehaviorAdapter_Tank_IsAlive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_Tank.HandleOnVehicleHealthStateChanged
// (Native, Public)
// Parameters:
// ESTExtraVehicleHealthState     InVehicleHealthState           (Parm, ZeroConstructor, IsPlainOldData)

void UAIBehaviorAdapter_Tank::HandleOnVehicleHealthStateChanged(ESTExtraVehicleHealthState InVehicleHealthState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.HandleOnVehicleHealthStateChanged");

	UAIBehaviorAdapter_Tank_HandleOnVehicleHealthStateChanged_Params params;
	params.InVehicleHealthState = InVehicleHealthState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_Tank.BroadcastTankShootWeapon
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           IsTurret                       (Parm, ZeroConstructor, IsPlainOldData)

void UAIBehaviorAdapter_Tank::BroadcastTankShootWeapon(bool IsTurret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.BroadcastTankShootWeapon");

	UAIBehaviorAdapter_Tank_BroadcastTankShootWeapon_Params params;
	params.IsTurret = IsTurret;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIPerceptionChildPickUpComponent.OnPickUpWrapperHideStateChange
// (Final, Native, Public)
// Parameters:
// class APickUpWrapperActor*     PickUpActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHide                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIPerceptionChildPickUpComponent::OnPickUpWrapperHideStateChange(class APickUpWrapperActor* PickUpActor, bool bHide)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIPerceptionChildPickUpComponent.OnPickUpWrapperHideStateChange");

	UAIPerceptionChildPickUpComponent_OnPickUpWrapperHideStateChange_Params params;
	params.PickUpActor = PickUpActor;
	params.bHide = bHide;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIPerceptionDynamicItemComponent.GetUniqueID
// (Final, Native, Public)
// Parameters:
// class AActor*                  DynamicItem                    (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UAIPerceptionDynamicItemComponent::GetUniqueID(class AActor* DynamicItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIPerceptionDynamicItemComponent.GetUniqueID");

	UAIPerceptionDynamicItemComponent_GetUniqueID_Params params;
	params.DynamicItem = DynamicItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AISoundCollectionComponent.OnCollectionHearSound
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// ESoundType                     soundType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InPos                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  InSourceActor                  (Parm, ZeroConstructor, IsPlainOldData)

void UAISoundCollectionComponent::OnCollectionHearSound(ESoundType soundType, const struct FVector& InPos, class AActor* InSourceActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AISoundCollectionComponent.OnCollectionHearSound");

	UAISoundCollectionComponent_OnCollectionHearSound_Params params;
	params.soundType = soundType;
	params.InPos = InPos;
	params.InSourceActor = InSourceActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AISoundCollectionComponent.OnAISoundManagerHear
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  InTargetActor                  (Parm, ZeroConstructor, IsPlainOldData)
// ESoundType                     soundType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InPos                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  InSourceActor                  (Parm, ZeroConstructor, IsPlainOldData)

void UAISoundCollectionComponent::OnAISoundManagerHear(class AActor* InTargetActor, ESoundType soundType, const struct FVector& InPos, class AActor* InSourceActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AISoundCollectionComponent.OnAISoundManagerHear");

	UAISoundCollectionComponent_OnAISoundManagerHear_Params params;
	params.InTargetActor = InTargetActor;
	params.soundType = soundType;
	params.InPos = InPos;
	params.InSourceActor = InSourceActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AISoundCollectionComponent.GetCollectSoundInfo
// (Final, Native, Public)
// Parameters:
// TArray<struct FSoundState>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSoundState> UAISoundCollectionComponent::GetCollectSoundInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AISoundCollectionComponent.GetCollectSoundInfo");

	UAISoundCollectionComponent_GetCollectSoundInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.QueryItemStates
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            MaxBoxNum                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxItemNum                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          AirDropBoxRangeInner           (Parm, ZeroConstructor, IsPlainOldData)
// float                          AirDropBoxRangeOuter           (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeathBoxRange                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          PickUpWrapperRange             (Parm, ZeroConstructor, IsPlainOldData)
// float                          FindBuildingRange              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsUseItemSpotLoc             (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxTreasureChestNum            (Parm, ZeroConstructor, IsPlainOldData)
// float                          TreasureChestRange             (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxWeedNum                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          WeedRange                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FItemStateData>  ItemStateDatas                 (Parm, OutParm, ZeroConstructor)

void UAIStateInfoComponentBase::QueryItemStates(int MaxBoxNum, int MaxItemNum, float AirDropBoxRangeInner, float AirDropBoxRangeOuter, float DeathBoxRange, float PickUpWrapperRange, float FindBuildingRange, bool InIsUseItemSpotLoc, int MaxTreasureChestNum, float TreasureChestRange, int MaxWeedNum, float WeedRange, TArray<struct FItemStateData>* ItemStateDatas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.QueryItemStates");

	UAIStateInfoComponentBase_QueryItemStates_Params params;
	params.MaxBoxNum = MaxBoxNum;
	params.MaxItemNum = MaxItemNum;
	params.AirDropBoxRangeInner = AirDropBoxRangeInner;
	params.AirDropBoxRangeOuter = AirDropBoxRangeOuter;
	params.DeathBoxRange = DeathBoxRange;
	params.PickUpWrapperRange = PickUpWrapperRange;
	params.FindBuildingRange = FindBuildingRange;
	params.InIsUseItemSpotLoc = InIsUseItemSpotLoc;
	params.MaxTreasureChestNum = MaxTreasureChestNum;
	params.TreasureChestRange = TreasureChestRange;
	params.MaxWeedNum = MaxWeedNum;
	params.WeedRange = WeedRange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ItemStateDatas != nullptr)
		*ItemStateDatas = params.ItemStateDatas;
}


// Function AI.AIStateInfoComponentBase.PrintCacheAINearbyItem
// (Final, Native, Protected)

void UAIStateInfoComponentBase::PrintCacheAINearbyItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.PrintCacheAINearbyItem");

	UAIStateInfoComponentBase_PrintCacheAINearbyItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.OnPlayerRespawn
// (Final, Native, Public)
// Parameters:
// class AUAEPlayerController*    PC                             (Parm, ZeroConstructor, IsPlainOldData)

void UAIStateInfoComponentBase::OnPlayerRespawn(class AUAEPlayerController* PC)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.OnPlayerRespawn");

	UAIStateInfoComponentBase_OnPlayerRespawn_Params params;
	params.PC = PC;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.OnFakePlayerRespawn
// (Final, Native, Public)

void UAIStateInfoComponentBase::OnFakePlayerRespawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.OnFakePlayerRespawn");

	UAIStateInfoComponentBase_OnFakePlayerRespawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.OnAIStateRequestEnd
// (Final, Native, Public)

void UAIStateInfoComponentBase::OnAIStateRequestEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.OnAIStateRequestEnd");

	UAIStateInfoComponentBase_OnAIStateRequestEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.IsValid
// (Final, Native, Protected, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStateInfoComponentBase::IsValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.IsValid");

	UAIStateInfoComponentBase_IsValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.IsAvailableNearbyItemType
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStateInfoComponentBase::IsAvailableNearbyItemType(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.IsAvailableNearbyItemType");

	UAIStateInfoComponentBase_IsAvailableNearbyItemType_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.IsAvailableBackpackItemType
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStateInfoComponentBase::IsAvailableBackpackItemType(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.IsAvailableBackpackItemType");

	UAIStateInfoComponentBase_IsAvailableBackpackItemType_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.HasPlayerAround
// (Final, Native, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStateInfoComponentBase::HasPlayerAround()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.HasPlayerAround");

	UAIStateInfoComponentBase_HasPlayerAround_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetViewForwardVector
// (Final, Native, Protected, HasDefaults, Const)
// Parameters:
// class ACharacter*              InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAIStateInfoComponentBase::GetViewForwardVector(class ACharacter* InCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetViewForwardVector");

	UAIStateInfoComponentBase_GetViewForwardVector_Params params;
	params.InCharacter = InCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetSoundInfo
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FSoundState>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSoundState> UAIStateInfoComponentBase::GetSoundInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetSoundInfo");

	UAIStateInfoComponentBase_GetSoundInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetProgressBarState
// (Final, Native, Public)
// Parameters:
// struct FProgressBarState       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FProgressBarState UAIStateInfoComponentBase::GetProgressBarState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetProgressBarState");

	UAIStateInfoComponentBase_GetProgressBarState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetPlayerInteractInfo
// (Final, Native, Public, Const)
// Parameters:
// struct FAIPlayerInteractInfo   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIPlayerInteractInfo UAIStateInfoComponentBase::GetPlayerInteractInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetPlayerInteractInfo");

	UAIStateInfoComponentBase_GetPlayerInteractInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetOwnerBaseCharacter
// (Final, Native, Protected, Const)
// Parameters:
// class ASTExtraBaseCharacter*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraBaseCharacter* UAIStateInfoComponentBase::GetOwnerBaseCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetOwnerBaseCharacter");

	UAIStateInfoComponentBase_GetOwnerBaseCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetObstaclesState
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ASTExtraBaseCharacter*   InPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FObstacleState>  ObstaclesState                 (Parm, OutParm, ZeroConstructor)

void UAIStateInfoComponentBase::GetObstaclesState(class ASTExtraBaseCharacter* InPawn, float Range, TArray<struct FObstacleState>* ObstaclesState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetObstaclesState");

	UAIStateInfoComponentBase_GetObstaclesState_Params params;
	params.InPawn = InPawn;
	params.Range = Range;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ObstaclesState != nullptr)
		*ObstaclesState = params.ObstaclesState;
}


// Function AI.AIStateInfoComponentBase.GetFrameNo
// (Final, Native, Protected)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UAIStateInfoComponentBase::GetFrameNo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetFrameNo");

	UAIStateInfoComponentBase_GetFrameNo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetDiffAIStateInfoToCacheGeneral
// (Native, Public)

void UAIStateInfoComponentBase::GetDiffAIStateInfoToCacheGeneral()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetDiffAIStateInfoToCacheGeneral");

	UAIStateInfoComponentBase_GetDiffAIStateInfoToCacheGeneral_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.GetDiffAIStateInfoToCache
// (Native, Public)

void UAIStateInfoComponentBase::GetDiffAIStateInfoToCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetDiffAIStateInfoToCache");

	UAIStateInfoComponentBase_GetDiffAIStateInfoToCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.GetDamageSourcesNew
// (Final, Native, Public)
// Parameters:
// TArray<struct FDamageSource>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FDamageSource> UAIStateInfoComponentBase::GetDamageSourcesNew()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetDamageSourcesNew");

	UAIStateInfoComponentBase_GetDamageSourcesNew_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetDamageSources
// (Final, Native, Public)
// Parameters:
// struct FAIDamageSources        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIDamageSources UAIStateInfoComponentBase::GetDamageSources()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetDamageSources");

	UAIStateInfoComponentBase_GetDamageSources_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetCameraState
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FCameraState            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCameraState UAIStateInfoComponentBase::GetCameraState(class ASTExtraBaseCharacter* InCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetCameraState");

	UAIStateInfoComponentBase_GetCameraState_Params params;
	params.InCharacter = InCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetAIStateInfoToCache
// (Native, Public)

void UAIStateInfoComponentBase::GetAIStateInfoToCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetAIStateInfoToCache");

	UAIStateInfoComponentBase_GetAIStateInfoToCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.GetAIStateInfoBaseModInternal
// (Final, Native, Public)

void UAIStateInfoComponentBase::GetAIStateInfoBaseModInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetAIStateInfoBaseModInternal");

	UAIStateInfoComponentBase_GetAIStateInfoBaseModInternal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.GetAIPlayerBackpackItems
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<struct FAIBackpackItem> Items                          (Parm, OutParm, ZeroConstructor)

void UAIStateInfoComponentBase::GetAIPlayerBackpackItems(TArray<struct FAIBackpackItem>* Items)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetAIPlayerBackpackItems");

	UAIStateInfoComponentBase_GetAIPlayerBackpackItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function AI.AIStateInfoComponentBase.GetAINearbyThrownState
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ASTExtraBaseCharacter*   InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRange                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InCheckAngle                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxNum                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          InSmokeRange                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAINearbyThrown> Ret                            (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStateInfoComponentBase::GetAINearbyThrownState(class ASTExtraBaseCharacter* InCharacter, float InRange, float InCheckAngle, int MaxNum, float InSmokeRange, TArray<struct FAINearbyThrown>* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetAINearbyThrownState");

	UAIStateInfoComponentBase_GetAINearbyThrownState_Params params;
	params.InCharacter = InCharacter;
	params.InRange = InRange;
	params.InCheckAngle = InCheckAngle;
	params.MaxNum = MaxNum;
	params.InSmokeRange = InSmokeRange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetAIDestroyBulletProbInfo
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<struct FAIDestroyBulletProbInfo> AIDestroyBulletProbInfoList    (Parm, OutParm, ZeroConstructor)

void UAIStateInfoComponentBase::GetAIDestroyBulletProbInfo(TArray<struct FAIDestroyBulletProbInfo>* AIDestroyBulletProbInfoList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetAIDestroyBulletProbInfo");

	UAIStateInfoComponentBase_GetAIDestroyBulletProbInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AIDestroyBulletProbInfoList != nullptr)
		*AIDestroyBulletProbInfoList = params.AIDestroyBulletProbInfoList;
}


// Function AI.AIStateInfoComponentBase.ClearDamageSources
// (Final, Native, Public)

void UAIStateInfoComponentBase::ClearDamageSources()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.ClearDamageSources");

	UAIStateInfoComponentBase_ClearDamageSources_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.BaseStateInfoCollector.RemoveBackpackItemUpdatedMap
// (Final, Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllRemove                      (Parm, ZeroConstructor, IsPlainOldData)

void UBaseStateInfoCollector::RemoveBackpackItemUpdatedMap(uint32_t PlayerKey, bool AllRemove)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.BaseStateInfoCollector.RemoveBackpackItemUpdatedMap");

	UBaseStateInfoCollector_RemoveBackpackItemUpdatedMap_Params params;
	params.PlayerKey = PlayerKey;
	params.AllRemove = AllRemove;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.BaseStateInfoCollector.OnBackpackItemListUpdated
// (Final, Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)

void UBaseStateInfoCollector::OnBackpackItemListUpdated(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.BaseStateInfoCollector.OnBackpackItemListUpdated");

	UBaseStateInfoCollector_OnBackpackItemListUpdated_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.BaseStateInfoCollector.AddBackpackItemListUpdatedDelegate
// (Final, Native, Public)
// Parameters:
// class UBackpackComponent*      InBackpackComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)

void UBaseStateInfoCollector::AddBackpackItemListUpdatedDelegate(class UBackpackComponent* InBackpackComp, uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.BaseStateInfoCollector.AddBackpackItemListUpdatedDelegate");

	UBaseStateInfoCollector_AddBackpackItemListUpdatedDelegate_Params params;
	params.InBackpackComp = InBackpackComp;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.BTService_DebugInfo.GetInfo
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBTService_DebugInfo::GetInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.BTService_DebugInfo.GetInfo");

	UBTService_DebugInfo_GetInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.BTTask_SummonActor.GetSummonLocations
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Invoker                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UBTTask_SummonActor::GetSummonLocations(class AActor* Invoker)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.BTTask_SummonActor.GetSummonLocations");

	UBTTask_SummonActor_GetSummonLocations_Params params;
	params.Invoker = Invoker;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.BTTaskNode_NewParachuteJumpBase.DelayClearParachute
// (Final, Native, Protected)
// Parameters:
// class ASTExtraPlayerCharacter* ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UBTTaskNode_NewParachuteJumpBase::DelayClearParachute(class ASTExtraPlayerCharacter* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.BTTaskNode_NewParachuteJumpBase.DelayClearParachute");

	UBTTaskNode_NewParachuteJumpBase_DelayClearParachute_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.CustomDamageEventComponent.OnRep_ClientEvents
// (Final, Native, Protected)

void UCustomDamageEventComponent::OnRep_ClientEvents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.CustomDamageEventComponent.OnRep_ClientEvents");

	UCustomDamageEventComponent_OnRep_ClientEvents_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.CharacterCustomDamageEventComponent.OnTakeDamageEvent
// (Final, Native, Public, HasOutParms)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCustomDamageEventComponent::OnTakeDamageEvent(float Damage, const struct FDamageEvent& DamageEvent, class AActor* Victim, class AActor* Causer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.CharacterCustomDamageEventComponent.OnTakeDamageEvent");

	UCharacterCustomDamageEventComponent_OnTakeDamageEvent_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.Victim = Victim;
	params.Causer = Causer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.UnBindDelegates
// (Final, Native, Public)
// Parameters:
// bool                           IsEndPlay                      (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::UnBindDelegates(bool IsEndPlay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.UnBindDelegates");

	UMLAIControllerComponent_UnBindDelegates_Params params;
	params.IsEndPlay = IsEndPlay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.SetShowDebugAILevelTime
// (Final, Native, Static, Public)
// Parameters:
// float                          InSetShowDebugAILevelTime      (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::SetShowDebugAILevelTime(float InSetShowDebugAILevelTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetShowDebugAILevelTime");

	UMLAIControllerComponent_SetShowDebugAILevelTime_Params params;
	params.InSetShowDebugAILevelTime = InSetShowDebugAILevelTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.SetMLAIStyle
// (Final, Native, Public)
// Parameters:
// uint32_t                       NewAIStyle                     (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::SetMLAIStyle(uint32_t NewAIStyle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetMLAIStyle");

	UMLAIControllerComponent_SetMLAIStyle_Params params;
	params.NewAIStyle = NewAIStyle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.SetLuaAIParamConfigString
// (Final, Native, Public)
// Parameters:
// struct FString                 InAIParamConfigString          (Parm, ZeroConstructor)
// int                            InLuaAIParamType               (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::SetLuaAIParamConfigString(const struct FString& InAIParamConfigString, int InLuaAIParamType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetLuaAIParamConfigString");

	UMLAIControllerComponent_SetLuaAIParamConfigString_Params params;
	params.InAIParamConfigString = InAIParamConfigString;
	params.InLuaAIParamType = InLuaAIParamType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.SetIsMLAI
// (Final, Native, Public)
// Parameters:
// bool                           InIsMLAI                       (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::SetIsMLAI(bool InIsMLAI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetIsMLAI");

	UMLAIControllerComponent_SetIsMLAI_Params params;
	params.InIsMLAI = InIsMLAI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.SetCurShootingPose
// (Final, Native, Public)
// Parameters:
// EAIShootingPose                InCurAIShootingPose            (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::SetCurShootingPose(EAIShootingPose InCurAIShootingPose)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetCurShootingPose");

	UMLAIControllerComponent_SetCurShootingPose_Params params;
	params.InCurAIShootingPose = InCurAIShootingPose;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.SetAllyMasterID
// (Final, Native, Public)
// Parameters:
// uint32_t                       InAllyMasterID                 (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::SetAllyMasterID(uint32_t InAllyMasterID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetAllyMasterID");

	UMLAIControllerComponent_SetAllyMasterID_Params params;
	params.InAllyMasterID = InAllyMasterID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.SetAIParams
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameModeAIPlayerParams InAIParams                     (Parm, OutParm)

void UMLAIControllerComponent::SetAIParams(struct FGameModeAIPlayerParams* InAIParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetAIParams");

	UMLAIControllerComponent_SetAIParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InAIParams != nullptr)
		*InAIParams = params.InAIParams;
}


// Function AI.MLAIControllerComponent.SetAILevel
// (Final, Native, Public)
// Parameters:
// uint32_t                       NewAILevel                     (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::SetAILevel(uint32_t NewAILevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetAILevel");

	UMLAIControllerComponent_SetAILevel_Params params;
	params.NewAILevel = NewAILevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.IsValid
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAIControllerComponent::IsValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.IsValid");

	UMLAIControllerComponent_IsValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.IsTeammateMLAI
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAIControllerComponent::IsTeammateMLAI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.IsTeammateMLAI");

	UMLAIControllerComponent_IsTeammateMLAI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.IsFreeCamera
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAIControllerComponent::IsFreeCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.IsFreeCamera");

	UMLAIControllerComponent_IsFreeCamera_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.InitAIStateInfoComponent
// (Final, Native, Public)
// Parameters:
// class UAIBasicStateInfoComponent* AIStateInfoComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMLAIControllerComponent::InitAIStateInfoComponent(class UAIBasicStateInfoComponent* AIStateInfoComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.InitAIStateInfoComponent");

	UMLAIControllerComponent_InitAIStateInfoComponent_Params params;
	params.AIStateInfoComponent = AIStateInfoComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.GetViewRotation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UMLAIControllerComponent::GetViewRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetViewRotation");

	UMLAIControllerComponent_GetViewRotation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetViewForwardVector
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UMLAIControllerComponent::GetViewForwardVector()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetViewForwardVector");

	UMLAIControllerComponent_GetViewForwardVector_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetOwnerBaseCharacter
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraBaseCharacter* UMLAIControllerComponent::GetOwnerBaseCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetOwnerBaseCharacter");

	UMLAIControllerComponent_GetOwnerBaseCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetMLAIStyle
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UMLAIControllerComponent::GetMLAIStyle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetMLAIStyle");

	UMLAIControllerComponent_GetMLAIStyle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetMLAIParachuteJumpComp
// (Final, Native, Public, Const)
// Parameters:
// class UMLAIParachuteJumpComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMLAIParachuteJumpComponent* UMLAIControllerComponent::GetMLAIParachuteJumpComp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetMLAIParachuteJumpComp");

	UMLAIControllerComponent_GetMLAIParachuteJumpComp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetIsMLAI
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAIControllerComponent::GetIsMLAI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetIsMLAI");

	UMLAIControllerComponent_GetIsMLAI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetBackpackComponent
// (Final, Native, Public)
// Parameters:
// class UBackpackComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBackpackComponent* UMLAIControllerComponent::GetBackpackComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetBackpackComponent");

	UMLAIControllerComponent_GetBackpackComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetAllyMasterID
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UMLAIControllerComponent::GetAllyMasterID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAllyMasterID");

	UMLAIControllerComponent_GetAllyMasterID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetAIStateInfoComp
// (Final, Native, Public, Const)
// Parameters:
// class UAIBasicStateInfoComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIBasicStateInfoComponent* UMLAIControllerComponent::GetAIStateInfoComp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAIStateInfoComp");

	UMLAIControllerComponent_GetAIStateInfoComp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetAIParams
// (Final, Native, Public, Const)
// Parameters:
// struct FGameModeAIPlayerParams ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGameModeAIPlayerParams UMLAIControllerComponent::GetAIParams()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAIParams");

	UMLAIControllerComponent_GetAIParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetAILevel
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UMLAIControllerComponent::GetAILevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAILevel");

	UMLAIControllerComponent_GetAILevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetAIActionExecutionComp
// (Final, Native, Public, Const)
// Parameters:
// class UAIActionExecutionComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIActionExecutionComponent* UMLAIControllerComponent::GetAIActionExecutionComp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAIActionExecutionComp");

	UMLAIControllerComponent_GetAIActionExecutionComp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.FreshShootingPose
// (Final, Native, Public)

void UMLAIControllerComponent::FreshShootingPose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.FreshShootingPose");

	UMLAIControllerComponent_FreshShootingPose_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.DoActionFreeCamera
// (Final, Native, Public)
// Parameters:
// bool                           IsEnter                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPitch                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InYaw                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRoll                         (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.DoActionFreeCamera");

	UMLAIControllerComponent_DoActionFreeCamera_Params params;
	params.IsEnter = IsEnter;
	params.InPitch = InPitch;
	params.InYaw = InYaw;
	params.InRoll = InRoll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.CheckCameraViewPitchLimit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FRotator                InOutTargetRot                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAIControllerComponent::CheckCameraViewPitchLimit(struct FRotator* InOutTargetRot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.CheckCameraViewPitchLimit");

	UMLAIControllerComponent_CheckCameraViewPitchLimit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InOutTargetRot != nullptr)
		*InOutTargetRot = params.InOutTargetRot;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.BindDelegates
// (Final, Native, Public)

void UMLAIControllerComponent::BindDelegates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.BindDelegates");

	UMLAIControllerComponent_BindDelegates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIParachuteJumpComponent.ParachuteMove
// (Final, Native, Public)
// Parameters:
// float                          ForwardRate                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          RightRate                      (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIParachuteJumpComponent::ParachuteMove(float ForwardRate, float RightRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.ParachuteMove");

	UMLAIParachuteJumpComponent_ParachuteMove_Params params;
	params.ForwardRate = ForwardRate;
	params.RightRate = RightRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIParachuteJumpComponent.OpenParachute
// (Final, Native, Public)

void UMLAIParachuteJumpComponent::OpenParachute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.OpenParachute");

	UMLAIParachuteJumpComponent_OpenParachute_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIParachuteJumpComponent.OnAIEnterFighting
// (Final, Native, Public)

void UMLAIParachuteJumpComponent::OnAIEnterFighting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.OnAIEnterFighting");

	UMLAIParachuteJumpComponent_OnAIEnterFighting_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIParachuteJumpComponent.JumpFromPoint
// (Final, Native, Public)

void UMLAIParachuteJumpComponent::JumpFromPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.JumpFromPoint");

	UMLAIParachuteJumpComponent_JumpFromPoint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIParachuteJumpComponent.JumpFromPlane
// (Final, Native, Public)

void UMLAIParachuteJumpComponent::JumpFromPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.JumpFromPlane");

	UMLAIParachuteJumpComponent_JumpFromPlane_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIParachuteJumpComponent.EnterParachuteJumpPhase
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 StartLoc                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                StartRot                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UMLAIParachuteJumpComponent::EnterParachuteJumpPhase(const struct FVector& StartLoc, const struct FRotator& StartRot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.EnterParachuteJumpPhase");

	UMLAIParachuteJumpComponent_EnterParachuteJumpPhase_Params params;
	params.StartLoc = StartLoc;
	params.StartRot = StartRot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIParachuteJumpComponent.EndJump
// (Final, Native, Public)
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIParachuteJumpComponent::EndJump(bool bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.EndJump");

	UMLAIParachuteJumpComponent_EndJump_Params params;
	params.bSuccess = bSuccess;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIParachuteJumpComponent.CloseParachute
// (Final, Native, Public)

void UMLAIParachuteJumpComponent::CloseParachute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.CloseParachute");

	UMLAIParachuteJumpComponent_CloseParachute_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIStateInfoManager.StartRequestCache
// (Native, Public)

void UMLAIStateInfoManager::StartRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.StartRequestCache");

	UMLAIStateInfoManager_StartRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIStateInfoManager.InitCollectorList
// (Final, Native, Public)
// Parameters:
// TArray<struct FCollectorInitInfo> CollectorInitInfoList          (Parm, ZeroConstructor)

void UMLAIStateInfoManager::InitCollectorList(TArray<struct FCollectorInitInfo> CollectorInitInfoList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.InitCollectorList");

	UMLAIStateInfoManager_InitCollectorList_Params params;
	params.CollectorInitInfoList = CollectorInitInfoList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIStateInfoManager.Init
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIStateInfoManager::Init(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.Init");

	UMLAIStateInfoManager_Init_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIStateInfoManager.GetGlobalGameStateToCache
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIStateInfoManager::GetGlobalGameStateToCache(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.GetGlobalGameStateToCache");

	UMLAIStateInfoManager_GetGlobalGameStateToCache_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIStateInfoManager.GetDiffGlobalGameStateToCacheGeneral
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIStateInfoManager::GetDiffGlobalGameStateToCacheGeneral(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.GetDiffGlobalGameStateToCacheGeneral");

	UMLAIStateInfoManager_GetDiffGlobalGameStateToCacheGeneral_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIStateInfoManager.GetDiffGlobalGameStateToCacheCCS
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIStateInfoManager::GetDiffGlobalGameStateToCacheCCS(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.GetDiffGlobalGameStateToCacheCCS");

	UMLAIStateInfoManager_GetDiffGlobalGameStateToCacheCCS_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIStateInfoManager.GetDiffAllPlayerStateInfoToCacheCCS
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseDiff                       (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIStateInfoManager::GetDiffAllPlayerStateInfoToCacheCCS(class UWorld* InWorld, bool bUseDiff)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.GetDiffAllPlayerStateInfoToCacheCCS");

	UMLAIStateInfoManager_GetDiffAllPlayerStateInfoToCacheCCS_Params params;
	params.InWorld = InWorld;
	params.bUseDiff = bUseDiff;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIStateInfoManager.GetDiffAllPlayerAIStateInfoToCacheGeneral
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIStateInfoManager::GetDiffAllPlayerAIStateInfoToCacheGeneral(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.GetDiffAllPlayerAIStateInfoToCacheGeneral");

	UMLAIStateInfoManager_GetDiffAllPlayerAIStateInfoToCacheGeneral_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIStateInfoManager.GetAllPlayerStateInfoToCache
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIStateInfoManager::GetAllPlayerStateInfoToCache(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.GetAllPlayerStateInfoToCache");

	UMLAIStateInfoManager_GetAllPlayerStateInfoToCache_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIStateInfoManager.EndRequestCache
// (Native, Public)

void UMLAIStateInfoManager::EndRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.EndRequestCache");

	UMLAIStateInfoManager_EndRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIStateInfoManager.CollectCandidateAIStateInfoToCache
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// EStatePlayerType               CollectPlayerType              (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActingCandidateData  CandidateData                  (Parm, OutParm)

void UMLAIStateInfoManager::CollectCandidateAIStateInfoToCache(class UWorld* InWorld, EStatePlayerType CollectPlayerType, struct FAIActingCandidateData* CandidateData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.CollectCandidateAIStateInfoToCache");

	UMLAIStateInfoManager_CollectCandidateAIStateInfoToCache_Params params;
	params.InWorld = InWorld;
	params.CollectPlayerType = CollectPlayerType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (CandidateData != nullptr)
		*CandidateData = params.CandidateData;
}


// Function AI.MLAIStateInfoManager.CollectAIStateInfoToCache
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// EStatePlayerType               CollectPlayerType              (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraBaseCharacter*   PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIStateInfoManager::CollectAIStateInfoToCache(class UWorld* InWorld, EStatePlayerType CollectPlayerType, class ASTExtraBaseCharacter* PlayerPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIStateInfoManager.CollectAIStateInfoToCache");

	UMLAIStateInfoManager_CollectAIStateInfoToCache_Params params;
	params.InWorld = InWorld;
	params.CollectPlayerType = CollectPlayerType;
	params.PlayerPawn = PlayerPawn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.UpdateSpecialZoneInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSpecialZoneState       NewZoneInfo                    (Parm, OutParm)

void UMLAISubSystem::UpdateSpecialZoneInfo(struct FSpecialZoneState* NewZoneInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.UpdateSpecialZoneInfo");

	UMLAISubSystem_UpdateSpecialZoneInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewZoneInfo != nullptr)
		*NewZoneInfo = params.NewZoneInfo;
}


// Function AI.MLAISubSystem.UpdateRedZoneState
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::UpdateRedZoneState(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.UpdateRedZoneState");

	UMLAISubSystem_UpdateRedZoneState_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.UpdateAirDropBoxStates
// (Final, Native, Public)

void UMLAISubSystem::UpdateAirDropBoxStates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.UpdateAirDropBoxStates");

	UMLAISubSystem_UpdateAirDropBoxStates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.StartRequestCache
// (Final, Native, Public)

void UMLAISubSystem::StartRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.StartRequestCache");

	UMLAISubSystem_StartRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.SetUseTablePool
// (Final, Native, Public)
// Parameters:
// int                            InUseTablePool                 (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::SetUseTablePool(int InUseTablePool)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetUseTablePool");

	UMLAISubSystem_SetUseTablePool_Params params;
	params.InUseTablePool = InUseTablePool;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.SetSpecialZoneCustomState
// (Final, Native, Public)
// Parameters:
// class AActor*                  InParent                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            InCustomState                  (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::SetSpecialZoneCustomState(class AActor* InParent, int InCustomState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetSpecialZoneCustomState");

	UMLAISubSystem_SetSpecialZoneCustomState_Params params;
	params.InParent = InParent;
	params.InCustomState = InCustomState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.SetPlayerRevivalType
// (Final, Native, Public)
// Parameters:
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            InRevivalType                  (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::SetPlayerRevivalType(uint32_t InPlayerKey, int InRevivalType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetPlayerRevivalType");

	UMLAISubSystem_SetPlayerRevivalType_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InRevivalType = InRevivalType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.SetOpenBTCameraInfo
// (Final, Native, Static, Public)
// Parameters:
// bool                           InOpenBTCameraInfo             (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::SetOpenBTCameraInfo(bool InOpenBTCameraInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetOpenBTCameraInfo");

	UMLAISubSystem_SetOpenBTCameraInfo_Params params;
	params.InOpenBTCameraInfo = InOpenBTCameraInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.SetNeedAllInfo
// (Final, Native, Static, Public)
// Parameters:
// bool                           bInNeedAllInfo                 (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::SetNeedAllInfo(bool bInNeedAllInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetNeedAllInfo");

	UMLAISubSystem_SetNeedAllInfo_Params params;
	params.bInNeedAllInfo = bInNeedAllInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.SetMLAIUtils
// (Final, Native, Public)
// Parameters:
// class UMLAIUtilsBase*          MLAIUtils                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::SetMLAIUtils(class UMLAIUtilsBase* MLAIUtils)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetMLAIUtils");

	UMLAISubSystem_SetMLAIUtils_Params params;
	params.MLAIUtils = MLAIUtils;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.SetMLAIStateInfoManager
// (Final, Native, Public)
// Parameters:
// class UMLAIStateInfoManager*   InMLAIStateInfoManager         (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::SetMLAIStateInfoManager(class UMLAIStateInfoManager* InMLAIStateInfoManager)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetMLAIStateInfoManager");

	UMLAISubSystem_SetMLAIStateInfoManager_Params params;
	params.InMLAIStateInfoManager = InMLAIStateInfoManager;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.SetCDSkillConfig
// (Final, Native, Public)
// Parameters:
// TArray<int>                    InSkillIDs                     (Parm, ZeroConstructor)

void UMLAISubSystem::SetCDSkillConfig(TArray<int> InSkillIDs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetCDSkillConfig");

	UMLAISubSystem_SetCDSkillConfig_Params params;
	params.InSkillIDs = InSkillIDs;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.SetBackpackItemUpdatedMapSwitch
// (Final, Native, Static, Public)
// Parameters:
// bool                           bInSwitch                      (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::SetBackpackItemUpdatedMapSwitch(bool bInSwitch)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetBackpackItemUpdatedMapSwitch");

	UMLAISubSystem_SetBackpackItemUpdatedMapSwitch_Params params;
	params.bInSwitch = bInSwitch;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.SetAirDropLocation
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// int                            InAirDropTag                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AirDropLocation                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UMLAISubSystem::SetAirDropLocation(int InAirDropTag, const struct FVector& AirDropLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetAirDropLocation");

	UMLAISubSystem_SetAirDropLocation_Params params;
	params.InAirDropTag = InAirDropTag;
	params.AirDropLocation = AirDropLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.SetAIAttribute_CastEnergyWithCount
// (Final, Native, Public)
// Parameters:
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       InAttributeID                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            InCurCount                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          InCurEnergy                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          InLastActiveTime               (Parm, ZeroConstructor, IsPlainOldData)
// int                            InMaxCount                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          InMaxEnergy                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          InDeltaEnergy                  (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::SetAIAttribute_CastEnergyWithCount(uint32_t InPlayerKey, uint32_t InAttributeID, int InCurCount, float InCurEnergy, float InLastActiveTime, int InMaxCount, float InMaxEnergy, float InDeltaEnergy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetAIAttribute_CastEnergyWithCount");

	UMLAISubSystem_SetAIAttribute_CastEnergyWithCount_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InAttributeID = InAttributeID;
	params.InCurCount = InCurCount;
	params.InCurEnergy = InCurEnergy;
	params.InLastActiveTime = InLastActiveTime;
	params.InMaxCount = InMaxCount;
	params.InMaxEnergy = InMaxEnergy;
	params.InDeltaEnergy = InDeltaEnergy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.SetAIAttribute
// (Final, Native, Public)
// Parameters:
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       InAttributeID                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          InAttributeValue               (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::SetAIAttribute(uint32_t InPlayerKey, uint32_t InAttributeID, float InAttributeValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetAIAttribute");

	UMLAISubSystem_SetAIAttribute_Params params;
	params.InPlayerKey = InPlayerKey;
	params.InAttributeID = InAttributeID;
	params.InAttributeValue = InAttributeValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.RemoveSpecialZoneInfo
// (Final, Native, Public)
// Parameters:
// uint32_t                       ZoneID                         (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::RemoveSpecialZoneInfo(uint32_t ZoneID, uint32_t Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.RemoveSpecialZoneInfo");

	UMLAISubSystem_RemoveSpecialZoneInfo_Params params;
	params.ZoneID = ZoneID;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.RemoveFromSilentMLAIList
// (Final, Native, Public)
// Parameters:
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::RemoveFromSilentMLAIList(uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.RemoveFromSilentMLAIList");

	UMLAISubSystem_RemoveFromSilentMLAIList_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnVehicleDamageInfo
// (Final, Native, Public)
// Parameters:
// class AController*             InstigatorController           (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             VictimController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageTypeId                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFatalHealthCost             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  VictimVehicle                  (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::OnVehicleDamageInfo(class AController* InstigatorController, class AController* VictimController, int DamageTypeId, float Damage, bool bIsFatalHealthCost, class AActor* DamageCauser, class AActor* VictimVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnVehicleDamageInfo");

	UMLAISubSystem_OnVehicleDamageInfo_Params params;
	params.InstigatorController = InstigatorController;
	params.VictimController = VictimController;
	params.DamageTypeId = DamageTypeId;
	params.Damage = Damage;
	params.bIsFatalHealthCost = bIsFatalHealthCost;
	params.DamageCauser = DamageCauser;
	params.VictimVehicle = VictimVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnPlayerStartFire
// (Final, Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::OnPlayerStartFire(uint32_t PlayerKey, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnPlayerStartFire");

	UMLAISubSystem_OnPlayerStartFire_Params params;
	params.PlayerKey = PlayerKey;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnPlayerPickUpItem
// (Final, Native, Public)
// Parameters:
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::OnPlayerPickUpItem(uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnPlayerPickUpItem");

	UMLAISubSystem_OnPlayerPickUpItem_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnPlayerDamageInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ASTExtraPlayerState*     InstigatorPlayerState          (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraPlayerState*     VictimPlayerState              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DamageBeforeCalArmor           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFatalHealthCost             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsNearDeathHealthCost         (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::OnPlayerDamageInfo(class ASTExtraPlayerState* InstigatorPlayerState, class ASTExtraPlayerState* VictimPlayerState, float Damage, const struct FDamageEvent& DamageEvent, float DamageBeforeCalArmor, bool bIsFatalHealthCost, class AActor* DamageCauser, bool bIsNearDeathHealthCost)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnPlayerDamageInfo");

	UMLAISubSystem_OnPlayerDamageInfo_Params params;
	params.InstigatorPlayerState = InstigatorPlayerState;
	params.VictimPlayerState = VictimPlayerState;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.DamageBeforeCalArmor = DamageBeforeCalArmor;
	params.bIsFatalHealthCost = bIsFatalHealthCost;
	params.DamageCauser = DamageCauser;
	params.bIsNearDeathHealthCost = bIsNearDeathHealthCost;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnItemStateChanged
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)

void UMLAISubSystem::OnItemStateChanged(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnItemStateChanged");

	UMLAISubSystem_OnItemStateChanged_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnAirDropBoxSpawn
// (Final, Native, Public)
// Parameters:
// class AAirDropBoxActor*        AirDropBoxActor                (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::OnAirDropBoxSpawn(class AAirDropBoxActor* AirDropBoxActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnAirDropBoxSpawn");

	UMLAISubSystem_OnAirDropBoxSpawn_Params params;
	params.AirDropBoxActor = AirDropBoxActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnAirAttackInfo
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// EAirAttackInfo                 airattacktype                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            waveIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAirAttackOrder         InAirAttackOrder               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 InAirAttackArea                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UMLAISubSystem::OnAirAttackInfo(EAirAttackInfo airattacktype, int waveIndex, const struct FAirAttackOrder& InAirAttackOrder, const struct FVector& InAirAttackArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnAirAttackInfo");

	UMLAISubSystem_OnAirAttackInfo_Params params;
	params.airattacktype = airattacktype;
	params.waveIndex = waveIndex;
	params.InAirAttackOrder = InAirAttackOrder;
	params.InAirAttackArea = InAirAttackArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.IsAvailableBackpackItemType
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAISubSystem::IsAvailableBackpackItemType(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.IsAvailableBackpackItemType");

	UMLAISubSystem_IsAvailableBackpackItemType_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAISubSystem.IsAIBotGame
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAISubSystem::IsAIBotGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.IsAIBotGame");

	UMLAISubSystem_IsAIBotGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAISubSystem.InsertIntoSilentMLAIList
// (Final, Native, Public)
// Parameters:
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::InsertIntoSilentMLAIList(uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.InsertIntoSilentMLAIList");

	UMLAISubSystem_InsertIntoSilentMLAIList_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.GetVoiceRoomInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FBattleVoiceRoomInfo> BattleVoiceRoomInfos           (Parm, OutParm, ZeroConstructor)

void UMLAISubSystem::GetVoiceRoomInfo(TArray<struct FBattleVoiceRoomInfo>* BattleVoiceRoomInfos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetVoiceRoomInfo");

	UMLAISubSystem_GetVoiceRoomInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (BattleVoiceRoomInfos != nullptr)
		*BattleVoiceRoomInfos = params.BattleVoiceRoomInfos;
}


// Function AI.MLAISubSystem.GetLossTime
// (Final, Native, Public)
// Parameters:
// class ASTExtraPlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMLAISubSystem::GetLossTime(class ASTExtraPlayerController* PlayerController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetLossTime");

	UMLAISubSystem_GetLossTime_Params params;
	params.PlayerController = PlayerController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAISubSystem.GetCacheAIAttributes
// (Final, Native, Public, HasOutParms)
// Parameters:
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAIAttribute>    Attributes                     (Parm, OutParm, ZeroConstructor)

void UMLAISubSystem::GetCacheAIAttributes(uint32_t InPlayerKey, TArray<struct FAIAttribute>* Attributes)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetCacheAIAttributes");

	UMLAISubSystem_GetCacheAIAttributes_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Attributes != nullptr)
		*Attributes = params.Attributes;
}


// Function AI.MLAISubSystem.GetAndCheckAirDopTag
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMLAISubSystem::GetAndCheckAirDopTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetAndCheckAirDopTag");

	UMLAISubSystem_GetAndCheckAirDopTag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAISubSystem.EndRequestCache
// (Final, Native, Public)

void UMLAISubSystem::EndRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.EndRequestCache");

	UMLAISubSystem_EndRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.ChangeMLAIInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AFakePlayerAIController* AIController                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// uint64_t                       DisplayUID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FPlayerOBInfo           OBInfo                         (Parm, OutParm)

void UMLAISubSystem::ChangeMLAIInfo(class AFakePlayerAIController* AIController, const struct FString& Name, uint64_t DisplayUID, struct FPlayerOBInfo* OBInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.ChangeMLAIInfo");

	UMLAISubSystem_ChangeMLAIInfo_Params params;
	params.AIController = AIController;
	params.Name = Name;
	params.DisplayUID = DisplayUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OBInfo != nullptr)
		*OBInfo = params.OBInfo;
}


// Function AI.MLAISubSystem.CanFindInSilentMLAIList
// (Final, Native, Public)
// Parameters:
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAISubSystem::CanFindInSilentMLAIList(uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.CanFindInSilentMLAIList");

	UMLAISubSystem_CanFindInSilentMLAIList_Params params;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAISubSystem.AddVoiceRoomInfo
// (Final, Native, Public)
// Parameters:
// uint32_t                       TeamID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BattleVoiceRoomID              (Parm, ZeroConstructor)

void UMLAISubSystem::AddVoiceRoomInfo(uint32_t TeamID, const struct FString& BattleVoiceRoomID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.AddVoiceRoomInfo");

	UMLAISubSystem_AddVoiceRoomInfo_Params params;
	params.TeamID = TeamID;
	params.BattleVoiceRoomID = BattleVoiceRoomID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.AddTeammateMLAITeamID
// (Final, Native, Public)
// Parameters:
// uint32_t                       TeamID                         (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::AddTeammateMLAITeamID(uint32_t TeamID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.AddTeammateMLAITeamID");

	UMLAISubSystem_AddTeammateMLAITeamID_Params params;
	params.TeamID = TeamID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.AddAIAttributeConfig
// (Final, Native, Public)
// Parameters:
// uint32_t                       InID                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InKey                          (Parm, ZeroConstructor)

void UMLAISubSystem::AddAIAttributeConfig(uint32_t InID, const struct FString& InKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.AddAIAttributeConfig");

	UMLAISubSystem_AddAIAttributeConfig_Params params;
	params.InID = InID;
	params.InKey = InKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAITrainingComponent.StopRunnable
// (Final, Native, Public)

void UMLAITrainingComponent::StopRunnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.StopRunnable");

	UMLAITrainingComponent_StopRunnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAITrainingComponent.SetPauseGamePlayerState
// (Final, Native, Public)
// Parameters:
// class APlayerState*            InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData)

void UMLAITrainingComponent::SetPauseGamePlayerState(class APlayerState* InPlayerState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.SetPauseGamePlayerState");

	UMLAITrainingComponent_SetPauseGamePlayerState_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAITrainingComponent.SetPause
// (Final, Native, Public)
// Parameters:
// bool                           bInPause                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPauseTime                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAITrainingComponent::SetPause(bool bInPause, float InPauseTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.SetPause");

	UMLAITrainingComponent_SetPause_Params params;
	params.bInPause = bInPause;
	params.InPauseTime = InPauseTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAITrainingComponent.SendAIStateRequest
// (Final, Native, Public)
// Parameters:
// TArray<unsigned char>          Packet                         (Parm, ZeroConstructor)

void UMLAITrainingComponent::SendAIStateRequest(TArray<unsigned char> Packet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.SendAIStateRequest");

	UMLAITrainingComponent_SendAIStateRequest_Params params;
	params.Packet = Packet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAITrainingComponent.IsRequestAIState
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAITrainingComponent::IsRequestAIState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.IsRequestAIState");

	UMLAITrainingComponent_IsRequestAIState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAITrainingComponent.InitRunnable
// (Final, Native, Public)
// Parameters:
// float                          InStartCollectingInterval      (Parm, ZeroConstructor, IsPlainOldData)
// float                          InSendInterval                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InTimeOutInterval              (Parm, ZeroConstructor, IsPlainOldData)

void UMLAITrainingComponent::InitRunnable(float InStartCollectingInterval, float InSendInterval, float InTimeOutInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.InitRunnable");

	UMLAITrainingComponent_InitRunnable_Params params;
	params.InStartCollectingInterval = InStartCollectingInterval;
	params.InSendInterval = InSendInterval;
	params.InTimeOutInterval = InTimeOutInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAITrainingComponent.EndRequestAIState
// (Final, Native, Public)

void UMLAITrainingComponent::EndRequestAIState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.EndRequestAIState");

	UMLAITrainingComponent_EndRequestAIState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.StartRequestCache
// (Native, Public)

void UMLAIUtilsBase::StartRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.StartRequestCache");

	UMLAIUtilsBase_StartRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.SetUseNewDiffCmds
// (Final, Native, Static, Public)
// Parameters:
// bool                           InUseNewDiffCmds               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InUseNewDiffField              (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::SetUseNewDiffCmds(bool InUseNewDiffCmds, bool InUseNewDiffField)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.SetUseNewDiffCmds");

	UMLAIUtilsBase_SetUseNewDiffCmds_Params params;
	params.InUseNewDiffCmds = InUseNewDiffCmds;
	params.InUseNewDiffField = InUseNewDiffField;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.SetOpenHeadAndMuzzleInfo
// (Final, Native, Public)
// Parameters:
// bool                           InOpenHeadAndMuzzleInfo        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::SetOpenHeadAndMuzzleInfo(bool InOpenHeadAndMuzzleInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.SetOpenHeadAndMuzzleInfo");

	UMLAIUtilsBase_SetOpenHeadAndMuzzleInfo_Params params;
	params.InOpenHeadAndMuzzleInfo = InOpenHeadAndMuzzleInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.RemoveBackpackItemUpdatedMap
// (Final, Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllRemove                      (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::RemoveBackpackItemUpdatedMap(uint32_t PlayerKey, bool AllRemove)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.RemoveBackpackItemUpdatedMap");

	UMLAIUtilsBase_RemoveBackpackItemUpdatedMap_Params params;
	params.PlayerKey = PlayerKey;
	params.AllRemove = AllRemove;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.OnBackpackItemListUpdated
// (Final, Native, Public)
// Parameters:
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::OnBackpackItemListUpdated(uint32_t PlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.OnBackpackItemListUpdated");

	UMLAIUtilsBase_OnBackpackItemListUpdated_Params params;
	params.PlayerKey = PlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetGlobalGameStateInfoToCache
// (Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetGlobalGameStateInfoToCache(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetGlobalGameStateInfoToCache");

	UMLAIUtilsBase_GetGlobalGameStateInfoToCache_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetDiffGlobalGameStateInfoToCache
// (Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetDiffGlobalGameStateInfoToCache(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetDiffGlobalGameStateInfoToCache");

	UMLAIUtilsBase_GetDiffGlobalGameStateInfoToCache_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetDiffGlobalGameStateBaseModToCacheGeneral
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetDiffGlobalGameStateBaseModToCacheGeneral(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetDiffGlobalGameStateBaseModToCacheGeneral");

	UMLAIUtilsBase_GetDiffGlobalGameStateBaseModToCacheGeneral_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetDiffGlobalGameStatBaseModToCache
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetDiffGlobalGameStatBaseModToCache(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetDiffGlobalGameStatBaseModToCache");

	UMLAIUtilsBase_GetDiffGlobalGameStatBaseModToCache_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetDiffAllPlayerStateInfoToCacheCSS
// (Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseDiff                       (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetDiffAllPlayerStateInfoToCacheCSS(class UWorld* InWorld, bool bUseDiff)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetDiffAllPlayerStateInfoToCacheCSS");

	UMLAIUtilsBase_GetDiffAllPlayerStateInfoToCacheCSS_Params params;
	params.InWorld = InWorld;
	params.bUseDiff = bUseDiff;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetDiffAllPlayerStateInfoToCache
// (Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetDiffAllPlayerStateInfoToCache(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetDiffAllPlayerStateInfoToCache");

	UMLAIUtilsBase_GetDiffAllPlayerStateInfoToCache_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetDiffAllPlayerStateInfoBaseModToCacheCCS
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseDiff                       (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetDiffAllPlayerStateInfoBaseModToCacheCCS(class UWorld* InWorld, bool bUseDiff)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetDiffAllPlayerStateInfoBaseModToCacheCCS");

	UMLAIUtilsBase_GetDiffAllPlayerStateInfoBaseModToCacheCCS_Params params;
	params.InWorld = InWorld;
	params.bUseDiff = bUseDiff;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetAllPlayerStateInfoToCache
// (Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetAllPlayerStateInfoToCache(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetAllPlayerStateInfoToCache");

	UMLAIUtilsBase_GetAllPlayerStateInfoToCache_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.EndRequestCache
// (Native, Public)

void UMLAIUtilsBase::EndRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.EndRequestCache");

	UMLAIUtilsBase_EndRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.AddBackpackItemListUpdatedDelegate
// (Final, Native, Public)
// Parameters:
// class UBackpackComponent*      InBackpackComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// uint32_t                       InPlayerKey                    (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::AddBackpackItemListUpdatedDelegate(class UBackpackComponent* InBackpackComp, uint32_t InPlayerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.AddBackpackItemListUpdatedDelegate");

	UMLAIUtilsBase_AddBackpackItemListUpdatedDelegate_Params params;
	params.InBackpackComp = InBackpackComp;
	params.InPlayerKey = InPlayerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBRBase.HandleGameModeStateChanged
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameModeStateChangedParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UMLAIUtilsBRBase::HandleGameModeStateChanged(const struct FGameModeStateChangedParams& Params)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBRBase.HandleGameModeStateChanged");

	UMLAIUtilsBRBase_HandleGameModeStateChanged_Params params;
	params.Params = Params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBRBase.GetRedZoneState
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRedZoneState           ZoneState                      (Parm, OutParm)

void UMLAIUtilsBRBase::GetRedZoneState(class UWorld* InWorld, struct FRedZoneState* ZoneState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBRBase.GetRedZoneState");

	UMLAIUtilsBRBase_GetRedZoneState_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ZoneState != nullptr)
		*ZoneState = params.ZoneState;
}


// Function AI.MLAIUtilsBRBase.GetAIPlayerStateBRBase
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ASTExtraBaseCharacter*   InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIPlayerStateBRBase    Ret                            (Parm, OutParm)

void UMLAIUtilsBRBase::GetAIPlayerStateBRBase(class ASTExtraBaseCharacter* InCharacter, struct FAIPlayerStateBRBase* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBRBase.GetAIPlayerStateBRBase");

	UMLAIUtilsBRBase_GetAIPlayerStateBRBase_Params params;
	params.InCharacter = InCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function AI.SpecialZoneActor.UpdateCustomState
// (Final, Native, Public)
// Parameters:
// int                            InCustomState                  (Parm, ZeroConstructor, IsPlainOldData)

void ASpecialZoneActor::UpdateCustomState(int InCustomState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.UpdateCustomState");

	ASpecialZoneActor_UpdateCustomState_Params params;
	params.InCustomState = InCustomState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.SpecialZoneActor.HandleFragmentsStateChanged
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            FragmentItemIndex              (Parm, ZeroConstructor, IsPlainOldData)
// EPhotonFracturedMeshFragmentState State                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<EPhotonFracturedMeshFragmentState> FragmentState                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ASpecialZoneActor::HandleFragmentsStateChanged(int FragmentItemIndex, EPhotonFracturedMeshFragmentState State, TArray<EPhotonFracturedMeshFragmentState> FragmentState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.HandleFragmentsStateChanged");

	ASpecialZoneActor_HandleFragmentsStateChanged_Params params;
	params.FragmentItemIndex = FragmentItemIndex;
	params.State = State;
	params.FragmentState = FragmentState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.SpecialZoneActor.GetSpecialZoneState
// (Final, Native, Public)
// Parameters:
// struct FSpecialZoneState       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSpecialZoneState ASpecialZoneActor::GetSpecialZoneState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.GetSpecialZoneState");

	ASpecialZoneActor_GetSpecialZoneState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.STStrategyLocation_Range.ModifyBaseLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InLocation                     (Parm, IsPlainOldData)

void USTStrategyLocation_Range::ModifyBaseLocation(const struct FVector& InLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.ModifyBaseLocation");

	USTStrategyLocation_Range_ModifyBaseLocation_Params params;
	params.InLocation = InLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategyLocation_Range.GetSpawnLocation
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Requester                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReferenceCount                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  OutArr                         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTStrategyLocation_Range::GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.GetSpawnLocation");

	USTStrategyLocation_Range_GetSpawnLocation_Params params;
	params.Requester = Requester;
	params.ReferenceCount = ReferenceCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutArr != nullptr)
		*OutArr = params.OutArr;

	return params.ReturnValue;
}


// Function AI.STStrategyLocation_Range.AddSpawnArea
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSpawnArea              NewArea                        (Parm)
// bool                           ForceAdd                       (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyLocation_Range::AddSpawnArea(const struct FSpawnArea& NewArea, bool ForceAdd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.AddSpawnArea");

	USTStrategyLocation_Range_AddSpawnArea_Params params;
	params.NewArea = NewArea;
	params.ForceAdd = ForceAdd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategyLocation_Range.ActivateStrategy
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyLocation_Range::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.ActivateStrategy");

	USTStrategyLocation_Range_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategySpecies_Candidate.Supply
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  SpotSpecies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FUnitConfig>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FUnitConfig> USTStrategySpecies_Candidate::Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Candidate.Supply");

	USTStrategySpecies_Candidate_Supply_Params params;
	params.ReferencedCount = ReferencedCount;
	params.SpotSpecies = SpotSpecies;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.STStrategySpecies_Candidate.ActivateStrategy
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategySpecies_Candidate::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Candidate.ActivateStrategy");

	USTStrategySpecies_Candidate_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategySpecies_Lua.Supply
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  SpotSpecies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FUnitConfig>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FUnitConfig> USTStrategySpecies_Lua::Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Lua.Supply");

	USTStrategySpecies_Lua_Supply_Params params;
	params.ReferencedCount = ReferencedCount;
	params.SpotSpecies = SpotSpecies;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.STStrategySpecies_Lua.LuaSupply
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategySpecies_Lua::LuaSupply(int ReferencedCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Lua.LuaSupply");

	USTStrategySpecies_Lua_LuaSupply_Params params;
	params.ReferencedCount = ReferencedCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategyTiming_Event.TickStrategy
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyTiming_Event::TickStrategy(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyTiming_Event.TickStrategy");

	USTStrategyTiming_Event_TickStrategy_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategyTiming_Event.OnSpawnEventBroadcast
// (Final, Native, Public)
// Parameters:
// uint32_t                       SpawnerID                      (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyTiming_Event::OnSpawnEventBroadcast(uint32_t SpawnerID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyTiming_Event.OnSpawnEventBroadcast");

	USTStrategyTiming_Event_OnSpawnEventBroadcast_Params params;
	params.SpawnerID = SpawnerID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategyTiming_Event.ActivateStrategy
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyTiming_Event::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyTiming_Event.ActivateStrategy");

	USTStrategyTiming_Event_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.TeammateMLAIControllerComponent.SetMLAIStyle
// (Final, Native, Public)
// Parameters:
// uint32_t                       NewAIStyle                     (Parm, ZeroConstructor, IsPlainOldData)

void UTeammateMLAIControllerComponent::SetMLAIStyle(uint32_t NewAIStyle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.SetMLAIStyle");

	UTeammateMLAIControllerComponent_SetMLAIStyle_Params params;
	params.NewAIStyle = NewAIStyle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.TeammateMLAIControllerComponent.SetIsMLAI
// (Final, Native, Public)
// Parameters:
// bool                           InIsMLAI                       (Parm, ZeroConstructor, IsPlainOldData)

void UTeammateMLAIControllerComponent::SetIsMLAI(bool InIsMLAI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.SetIsMLAI");

	UTeammateMLAIControllerComponent_SetIsMLAI_Params params;
	params.InIsMLAI = InIsMLAI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.TeammateMLAIControllerComponent.SetAIParams
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameModeAIPlayerParams InAIParams                     (Parm, OutParm)

void UTeammateMLAIControllerComponent::SetAIParams(struct FGameModeAIPlayerParams* InAIParams)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.SetAIParams");

	UTeammateMLAIControllerComponent_SetAIParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InAIParams != nullptr)
		*InAIParams = params.InAIParams;
}


// Function AI.TeammateMLAIControllerComponent.SetAILevel
// (Final, Native, Public)
// Parameters:
// uint32_t                       NewAILevel                     (Parm, ZeroConstructor, IsPlainOldData)

void UTeammateMLAIControllerComponent::SetAILevel(uint32_t NewAILevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.SetAILevel");

	UTeammateMLAIControllerComponent_SetAILevel_Params params;
	params.NewAILevel = NewAILevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.TeammateMLAIControllerComponent.OnTeammateMLAILost
// (Final, Native, Public)

void UTeammateMLAIControllerComponent::OnTeammateMLAILost()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.OnTeammateMLAILost");

	UTeammateMLAIControllerComponent_OnTeammateMLAILost_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.TeammateMLAIControllerComponent.OnTeammateMLAIExit
// (Final, Native, Public, Const)

void UTeammateMLAIControllerComponent::OnTeammateMLAIExit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.OnTeammateMLAIExit");

	UTeammateMLAIControllerComponent_OnTeammateMLAIExit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.TeammateMLAIControllerComponent.OnControllerStateChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EStateType                     StateType                      (Parm, ZeroConstructor, IsPlainOldData)

void UTeammateMLAIControllerComponent::OnControllerStateChanged(EStateType StateType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.OnControllerStateChanged");

	UTeammateMLAIControllerComponent_OnControllerStateChanged_Params params;
	params.StateType = StateType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.TeammateMLAIControllerComponent.IsTakeOverTeammate
// (Final, Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeammateMLAIControllerComponent::IsTakeOverTeammate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.IsTakeOverTeammate");

	UTeammateMLAIControllerComponent_IsTakeOverTeammate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.TeammateMLAIControllerComponent.GetMLAIStyle
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UTeammateMLAIControllerComponent::GetMLAIStyle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.GetMLAIStyle");

	UTeammateMLAIControllerComponent_GetMLAIStyle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.TeammateMLAIControllerComponent.GetAIParams
// (Final, Native, Public, Const)
// Parameters:
// struct FGameModeAIPlayerParams ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGameModeAIPlayerParams UTeammateMLAIControllerComponent::GetAIParams()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.GetAIParams");

	UTeammateMLAIControllerComponent_GetAIParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.TeammateMLAIControllerComponent.GetAILevel
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UTeammateMLAIControllerComponent::GetAILevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.GetAILevel");

	UTeammateMLAIControllerComponent_GetAILevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.VehicleAIController.SetCurEnemy
// (Native, Public)
// Parameters:
// class APawn*                   NewEnemy                       (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleAIController::SetCurEnemy(class APawn* NewEnemy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.SetCurEnemy");

	AVehicleAIController_SetCurEnemy_Params params;
	params.NewEnemy = NewEnemy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIController.GetVehiclePathFollow
// (Final, Native, Public)
// Parameters:
// class UVehiclePathFollowingComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVehiclePathFollowingComponent* AVehicleAIController::GetVehiclePathFollow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.GetVehiclePathFollow");

	AVehicleAIController_GetVehiclePathFollow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.VehicleAIController.GetCurEnemy
// (Native, Public)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* AVehicleAIController::GetCurEnemy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.GetCurEnemy");

	AVehicleAIController_GetCurEnemy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.VehicleAIController.GetAIHitRate
// (Native, Public)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AVehicleAIController::GetAIHitRate(float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.GetAIHitRate");

	AVehicleAIController_GetAIHitRate_Params params;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.VehicleAIController.ExplodeAndDeath
// (Native, Public)

void AVehicleAIController::ExplodeAndDeath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.ExplodeAndDeath");

	AVehicleAIController_ExplodeAndDeath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIController.DelayInitVehicleWeapon
// (Final, Native, Protected)

void AVehicleAIController::DelayInitVehicleWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.DelayInitVehicleWeapon");

	AVehicleAIController_DelayInitVehicleWeapon_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.ServerVehicleLeanOut
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bLeanOut                       (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::ServerVehicleLeanOut(bool bLeanOut)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerVehicleLeanOut");

	UVehicleAIUserComponent_ServerVehicleLeanOut_Params params;
	params.bLeanOut = bLeanOut;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.ServerExitVehicleEx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bMustExit                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::ServerExitVehicleEx(bool bMustExit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerExitVehicleEx");

	UVehicleAIUserComponent_ServerExitVehicleEx_Params params;
	params.bMustExit = bMustExit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.ServerExitVehicle
// (Final, Native, Public, BlueprintCallable)

void UVehicleAIUserComponent::ServerExitVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerExitVehicle");

	UVehicleAIUserComponent_ServerExitVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.ServerEnterVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::ServerEnterVehicle(class ASTExtraVehicleBase* InVehicle, unsigned char SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerEnterVehicle");

	UVehicleAIUserComponent_ServerEnterVehicle_Params params;
	params.InVehicle = InVehicle;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.ServerChangeVehicleSeat
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InSeatIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::ServerChangeVehicleSeat(int InSeatIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerChangeVehicleSeat");

	UVehicleAIUserComponent_ServerChangeVehicleSeat_Params params;
	params.InSeatIndex = InSeatIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.MulticastExitVehicle
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void UVehicleAIUserComponent::MulticastExitVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.MulticastExitVehicle");

	UVehicleAIUserComponent_MulticastExitVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.MulticastEnterVehicle
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraPlayerCharacter* Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::MulticastEnterVehicle(class ASTExtraVehicleBase* InVehicle, class ASTExtraPlayerCharacter* Pawn, bool bSuccess, unsigned char SeatType, int SeatIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.MulticastEnterVehicle");

	UVehicleAIUserComponent_MulticastEnterVehicle_Params params;
	params.InVehicle = InVehicle;
	params.Pawn = Pawn;
	params.bSuccess = bSuccess;
	params.SeatType = SeatType;
	params.SeatIndex = SeatIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.MulticastChangeVehicleSeat
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            InSeatIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::MulticastChangeVehicleSeat(int InSeatIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.MulticastChangeVehicleSeat");

	UVehicleAIUserComponent_MulticastChangeVehicleSeat_Params params;
	params.InSeatIndex = InSeatIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleCustomDamageEventComponent.OnVehicleHPFuelChanged
// (Final, Native, Public)
// Parameters:
// float                          HP                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Fuel                           (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleCustomDamageEventComponent::OnVehicleHPFuelChanged(float HP, float Fuel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleCustomDamageEventComponent.OnVehicleHPFuelChanged");

	UVehicleCustomDamageEventComponent_OnVehicleHPFuelChanged_Params params;
	params.HP = HP;
	params.Fuel = Fuel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleStateInfoCollector.HandleGameModeStateChanged
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameModeStateChangedParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UVehicleStateInfoCollector::HandleGameModeStateChanged(const struct FGameModeStateChangedParams& Params)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleStateInfoCollector.HandleGameModeStateChanged");

	UVehicleStateInfoCollector_HandleGameModeStateChanged_Params params;
	params.Params = Params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

