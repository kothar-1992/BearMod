#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Gameplay.UAECharacter
// 0x01E0 (0x0A60 - 0x0880)
class AUAECharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0880(0x0058) MISSED OFFSET
	int                                                iRegionCharacter;                                         // 0x08D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08DC(0x0004) MISSED OFFSET
	struct FName                                       RepPropertyCategory;                                      // 0x08E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PlayerType;                                               // 0x08E8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x08F0(0x0010) (Net, ZeroConstructor)
	struct FString                                     Nation;                                                   // 0x0900(0x0010) (Net, ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0910(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0914(0x0004) MISSED OFFSET
	struct FString                                     PlayerUID;                                                // 0x0918(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                TeamID;                                                   // 0x0928(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bTeamLeader;                                              // 0x092C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x092D(0x0003) MISSED OFFSET
	int                                                Campid;                                                   // 0x0930(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                resID;                                                    // 0x0934(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	ECharacterGender                                   DefaultCharacterGender;                                   // 0x0938(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0939(0x0007) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 InitialItemList;                                          // 0x0940(0x0010) (ZeroConstructor)
	struct FGameModePlayerUpassInfo                    UpassInfo;                                                // 0x0950(0x0038)
	struct FGameModePlayerPetInfo                      PetInfo;                                                  // 0x0988(0x0020) (BlueprintVisible)
	int                                                planeAvatarId;                                            // 0x09A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DyeDebugFlag;                                             // 0x09AC(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGameModePlayerTaskData>             InitialTaskDataList;                                      // 0x09B0(0x0010) (ZeroConstructor)
	bool                                               bIsAI;                                                    // 0x09C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMLAI;                                                  // 0x09C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAIWithPet;                                             // 0x09C2(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAINeedCheckBullets;                                      // 0x09C3(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DestinyValue;                                             // 0x09C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x09C8(0x000C) MISSED OFFSET
	float                                              RatingScore;                                              // 0x09D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseWholeBodyModel;                                        // 0x09D8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bEnsure;                                                  // 0x09D9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bMEnsure;                                                 // 0x09DA(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRepEnsure;                                               // 0x09DB(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRepMEnsure;                                              // 0x09DC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DefaultIsUseWholeBodyModel;                               // 0x09DD(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x12];                                      // 0x09DE(0x0012) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x09F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x0A00(0x0050) (Net)
	unsigned char                                      UnknownData07[0x10];                                      // 0x0A50(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAECharacter");
		return pStaticClass;
	}


	void SetNetCullDistanceSquared(float fNetCullDistanceSquared);
	void SetMEnsure(bool bMValue);
	void SetEnsure(bool bValue);
	void SendLuaDSToClient(int ID, TArray<unsigned char> Content);
	void RPC_LuaDSToClient(int ID, TArray<unsigned char> Content);
	void OnRep_UseWholeModel();
	void OnRep_TeamID();
	void OnRep_ResId();
	void OnRep_PlayerUID();
	void OnRep_PlayerKey();
	void OnRep_CampID();
	bool IsDefaultCharType();
	int GetTeamId();
	bool GetRepMEnsure();
	bool GetRepEnsure();
	struct FString GetPlayerKey();
	TArray<class UActorComponent*> GetNonSimulatedComponents_OnFighting();
	TArray<class UActorComponent*> GetNonSimulatedComponents_NonTeammates();
	TArray<class UActorComponent*> GetNonSimulatedComponents();
	TArray<class UActorComponent*> GetNonDedicatedComponents();
	class UPrimitiveComponent* GetMovementBaseComponent();
	bool GetMEnsure();
	bool GetEnsure();
	int GetCampId();
	void ClientAcknowledgeReconnection_3(uint32_t Token);
};


// Class Gameplay.UAEGameMode
// 0x10B8 (0x1628 - 0x0570)
class AUAEGameMode : public ALuaGameMode
{
public:
	TWeakObjectPtr<class UObject>                      UtilsPtr;                                                 // 0x0570(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              GridCheckSize;                                            // 0x0578(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeepCheckSize;                                            // 0x057C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightCheckSize;                                          // 0x0580(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPlayerLimit;                                           // 0x0584(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0588(0x000C) MISSED OFFSET
	bool                                               bEnableClimbing;                                          // 0x0594(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseFpsVault;                                            // 0x0595(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBornWithApple;                                           // 0x0596(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultResultRules;                                   // 0x0597(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AntiDataCD;                                               // 0x0598(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerValidCheckResult;                                   // 0x059C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x059D(0x0003) MISSED OFFSET
	int                                                WeatherID;                                                // 0x05A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	struct FString                                     WeatherName;                                              // 0x05A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                RoomMode;                                                 // 0x05B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SeasonIdx;                                                // 0x05BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MeteorShowerRatio;                                        // 0x05C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET
	struct FString                                     ItemTableName;                                            // 0x05C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData04[0x28];                                      // 0x05D8(0x0028) UNKNOWN PROPERTY: SoftClassProperty Gameplay.UAEGameMode.ItemClassPath
	struct FString                                     ReplayPushURL;                                            // 0x0600(0x0010) (ZeroConstructor)
	int                                                ReplayType;                                               // 0x0610(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0614(0x0004) MISSED OFFSET
	struct FString                                     ReplayTitle;                                              // 0x0618(0x0010) (ZeroConstructor)
	EObserverEnemyTraceType                            EnableObserverEnemyTrace;                                 // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0629(0x0007) MISSED OFFSET
	TArray<struct FString>                             ItemSpawnTableList;                                       // 0x0630(0x0010) (ZeroConstructor)
	TArray<struct FString>                             IgnoreItemClassPathList;                                  // 0x0640(0x0010) (ZeroConstructor)
	TArray<struct FDSSwitchInfo>                       DsSwitch;                                                 // 0x0650(0x0010) (ZeroConstructor)
	TMap<uint64_t, struct FCharacterMoveDragData>      CharacterMoveDragDataMap;                                 // 0x0660(0x0050) (ZeroConstructor)
	TMap<uint64_t, struct FParachuteDragData>          ParachuteDragDataMap;                                     // 0x06B0(0x0050) (ZeroConstructor)
	TMap<uint64_t, struct FVehicleMoveDragDataFriendly> VehicleMoveDrag;                                          // 0x0700(0x0050) (ZeroConstructor)
	TMap<uint64_t, struct FCharacterShootVerifyData>   CharacterShootVerifyDataMap;                              // 0x0750(0x0050) (ZeroConstructor)
	TMap<uint64_t, struct FCharacterShootVerifyStat>   CharacterShootVerifyStatMap;                              // 0x07A0(0x0050) (ZeroConstructor)
	uint32_t                                           ServerStartTime;                                          // 0x07F0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bOpenChangeWearing;                                       // 0x07F4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableVehicleInReady;                                    // 0x07F5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x07F6(0x0002) MISSED OFFSET
	unsigned char                                      UnknownData08[0x28];                                      // 0x07F6(0x0028) UNKNOWN PROPERTY: SoftClassProperty Gameplay.UAEGameMode.PickupBoxConfigClassPath
	bool                                               bUseAutoGroupParachuteTeam;                               // 0x0820(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0821(0x0007) MISSED OFFSET
	struct FString                                     PickupBoxConfigDataTableName;                             // 0x0828(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     VehicleTableName;                                         // 0x0838(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData10[0x28];                                      // 0x0848(0x0028) UNKNOWN PROPERTY: SoftClassProperty Gameplay.UAEGameMode.VehicleClassPath
	bool                                               IsUsingSceneDropWeight;                                   // 0x0870(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsRegionItemGenerate;                                     // 0x0871(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0872(0x0002) MISSED OFFSET
	struct FVector                                     RegionCenter;                                             // 0x0874(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              RegionRadius;                                             // 0x0880(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0884(0x0004) MISSED OFFSET
	TMap<struct FString, float>                        BattleCustomConfig;                                       // 0x0888(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MaxAllowReplicatedCharacterCount;                         // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AINoRepTimeInReady;                                       // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ObserverPlayerStateClass;                                 // 0x08E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData)
	bool                                               bEnableDamage;                                            // 0x08E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x08E9(0x0003) MISSED OFFSET
	float                                              NearDeathRestoredOriginHealth;                            // 0x08EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearDeathDecreateBreathRate;                              // 0x08F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RescueOtherRestoreDuration;                               // 0x08F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RescueSelfRestoreDuration;                                // 0x08F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadTombBoxLifeSpan;                                      // 0x08FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultPlayerBornPointID;                                 // 0x0900(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayerExitClearPlayerData;                               // 0x0904(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableDSTickLua;                                         // 0x0905(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bClientIgnoreMLAI;                                        // 0x0906(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData14[0x1];                                       // 0x0907(0x0001) MISSED OFFSET
	struct FString                                     ActorGridGeneratorClassPath;                              // 0x0908(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UGroupSpotSceneComponent*>            ItemGroupComponents;                                      // 0x0918(0x0010) (ExportObject, ZeroConstructor)
	class AActor*                                      ChosenPlayerStartBuildingGroup;                           // 0x0928(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FDynamicTriggerConfig>               DynamicTriggerConfigs;                                    // 0x0930(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              DynamicTriggers;                                          // 0x0940(0x0010) (ZeroConstructor)
	int                                                IsGameModeFpp;                                            // 0x0950(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsGameModeBandSpot;                                       // 0x0954(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0955(0x0003) MISSED OFFSET
	TArray<struct FDynamicLoadItem>                    DynamicLoadItemArray;                                     // 0x0958(0x0010) (ZeroConstructor)
	TMap<struct FDynamicLoadItem, struct FDynamicLoadActors> DynamicLoadItemMap;                                       // 0x0968(0x0050) (ZeroConstructor)
	TArray<struct FVehicleAvatarReplaceCfg>            VehicleAvatarReplaceCfgList;                              // 0x09B8(0x0010) (ZeroConstructor)
	bool                                               IsOpenItemGenerate;                                       // 0x09C8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsOpenVehicleGenerate;                                    // 0x09C9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x6];                                       // 0x09CA(0x0006) MISSED OFFSET
	TArray<int>                                        BuffEffectIDArray;                                        // 0x09D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        BuffEffectDisplayIDArray;                                 // 0x09E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        DynamicLevelArray;                                        // 0x09F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     RoomType;                                                 // 0x0A00(0x0010) (ZeroConstructor)
	bool                                               bCanLedgeGrab;                                            // 0x0A10(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenForbitTeammatePickUp;                                // 0x0A11(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOpenTeammateImprisonment;                                // 0x0A12(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x1];                                       // 0x0A13(0x0001) MISSED OFFSET
	int                                                ZoneID;                                                   // 0x0A14(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                nClientType;                                              // 0x0A18(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MainModeID;                                               // 0x0A1C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RealPlayerNums;                                           // 0x0A20(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bABTestModify;                                            // 0x0A24(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4B];                                      // 0x0A25(0x004B) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGameModeStateChanged;                                   // 0x0A70(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData19[0x110];                                     // 0x0A80(0x0110) MISSED OFFSET
	struct FScriptDelegate                             SendTeammateResultWhenChicken;                            // 0x0B90(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             HaveSentTeamBattleResult;                                 // 0x0BA0(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    SendTeamBattleResult;                                     // 0x0BB0(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData20[0x110];                                     // 0x0BC0(0x0110) MISSED OFFSET
	struct FScriptMulticastDelegate                    SendGameStopJoin;                                         // 0x0CD0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData21[0x410];                                     // 0x0CE0(0x0410) MISSED OFFSET
	bool                                               bIsPreCreatingPlayerController;                           // 0x10F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x13F];                                     // 0x10F1(0x013F) MISSED OFFSET
	float                                              OBInfoTimeStep;                                           // 0x1230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2C];                                      // 0x1234(0x002C) MISSED OFFSET
	TArray<struct FAirDropBoxInOb>                     AirDropBoxInfoList;                                       // 0x1260(0x0010) (ZeroConstructor)
	TArray<class AUAEPlayerController*>                KickFlagControllerList;                                   // 0x1270(0x0010) (ZeroConstructor)
	TArray<class AUAEPlayerController*>                ObserverControllerList;                                   // 0x1280(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData24[0xD8];                                      // 0x1290(0x00D8) MISSED OFFSET
	class UClass*                                      AdvertisementActorBP;                                     // 0x1368(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FAdvertisementActorConfig>           AdvConfigList;                                            // 0x1370(0x0010) (ZeroConstructor)
	TArray<class AUAEAdvertisementActor*>              AdvActorList;                                             // 0x1380(0x0010) (ZeroConstructor, Transient)
	TArray<struct FMissionBoardConfig>                 MissionBoardConfigList;                                   // 0x1390(0x0010) (ZeroConstructor)
	bool                                               bEnablePlaneBanner;                                       // 0x13A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x13A1(0x0007) MISSED OFFSET
	struct FString                                     HttpPlaneBannerLeftImgPath;                               // 0x13A8(0x0010) (ZeroConstructor)
	struct FString                                     HttpPlaneBannerRightImgPath;                              // 0x13B8(0x0010) (ZeroConstructor)
	struct FString                                     GrenadeEffectPath;                                        // 0x13C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bUseSpecialGrenadeEffect;                                 // 0x13D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnniversarySignalGunEffect;                              // 0x13D9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAvatarDownloadInBattle;                                  // 0x13DA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenAnniversaryActivity;                                 // 0x13DB(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x4];                                       // 0x13DC(0x0004) MISSED OFFSET
	struct FString                                     FestivalAirDropBoxMesh;                                   // 0x13E0(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bUseFestivalAirDropBox;                                   // 0x13F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x13F1(0x0003) MISSED OFFSET
	float                                              FestivalAirDropProb;                                      // 0x13F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MonsterDropPar;                                           // 0x13F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SceneDropParam;                                           // 0x13FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint32_t                                           DSOpenSwtich;                                             // 0x1400(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x1404(0x0004) MISSED OFFSET
	class UItemGeneratorComponent*                     ItemGenerator;                                            // 0x1408(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVehicleAndTreasureBoxGeneratorComponent*    VehicleGenerator;                                         // 0x1410(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bGameNeedReplay;                                          // 0x1418(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x1419(0x0007) MISSED OFFSET
	TArray<uint32_t>                                   NeedReplayPlayers;                                        // 0x1420(0x0010) (ZeroConstructor)
	TArray<struct FSeasonStatueData>                   SeasonStatueList;                                         // 0x1430(0x0010) (ZeroConstructor)
	struct FString                                     SeasonStatueClassPath;                                    // 0x1440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     StatueBaseClassPath;                                      // 0x1450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FStatueBaseData                             StatueBaseInfo;                                           // 0x1460(0x0068) (BlueprintVisible)
	int                                                BattleStopJoin;                                           // 0x14C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                nSignalGunEffectId;                                       // 0x14CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FCharacterOverrideAttrData>          CharacterOverrideAttrs;                                   // 0x14D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData30[0xA0];                                      // 0x14E0(0x00A0) MISSED OFFSET
	bool                                               UseGMSpawnItemSpotDefaultTag;                             // 0x1580(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x1581(0x0007) MISSED OFFSET
	struct FString                                     GMSpawnItemSpotDefaultTag;                                // 0x1588(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData32[0x80];                                      // 0x1598(0x0080) MISSED OFFSET
	bool                                               bStandAloneGameMode;                                      // 0x1618(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStandAloneLuaGenAIData;                                  // 0x1619(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData33[0x2];                                       // 0x161A(0x0002) MISSED OFFSET
	int                                                StandAloneTestPlayerKey;                                  // 0x161C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       StandAloneTestPlayerType;                                 // 0x1620(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEGameMode");
		return pStaticClass;
	}


	void WriteStatistics();
	void SyncPlayerNames();
	void SyncNewCorpsData(TArray<struct FDSCorpsInfo> OutCorpsData);
	class APawn* SpawnUAEPawnFor(class AController* NewPlayer, const struct FTransform& Trans);
	void SetVehicleReportEntry(uint32_t InUniqueID, const struct FVehicleReportEntry& InEntry);
	void SetPlayerOpenId(uint32_t InPlayerKey, const struct FString& InPlayerOpenID);
	void SetMaxWeaponReportNum(int Num);
	void SetKillerPlayerKey(class AController* VictimPlayer, uint32_t KillerPlayerKey);
	void SetGameEndReportData();
	struct FGameModeTeamBattleResultData RetrieveTeamBattleResultData(int TeamID);
	void RetrieveBattleData(struct FBattleData* OutBattleData);
	void RestartPlayerAtPlayerStart(class AController* NewPlayer, class AActor* StartSpot);
	void ResetGameParamsFromGameMode();
	void Rescue(class APawn* RescueWho, class APawn* Hero);
	void RegisterItemGroupSpotsByTag(const struct FName& Tag, class UGroupSpotSceneComponent* GroupSpotComponent);
	void RegisterItemGroupSpots(class UGroupSpotSceneComponent* GroupSpotComponent);
	void RefreshWorldActiveRange();
	void RefreshWatchTeammates(class AUAEPlayerController* InController, int InTeamID);
	void RefreshPlayerNames(uint32_t InPlayerKey, const struct FString& InPlayerName, int TeamID, bool IsLogin, uint64_t UID, int IdxInTeam);
	int RecoardAlivePlayerNum();
	class APlayerController* PreCreatePlayerController(uint32_t PlayerKey);
	void OnStandAloneGameEnd();
	void OnReportNetworkData();
	void OnPlayerFiring(uint32_t InPlayerKey);
	void OnPlayerControlDestroyEnd(uint32_t PlayerKey);
	void OnPlayerBreathChange(uint32_t InPlayerKey, float InBreath);
	void OnObserverLogout(class AUAEPlayerController* InController);
	void OnObserverLogin(class AUAEPlayerController* InController);
	void OnMsg(const struct FString& Msg);
	void OnAirDropBoxLanded(int boxId, const struct FVector& Pos);
	void OnAirDropBoxEmpty(int boxId);
	void NotifyPlayerExitWhenNotStarted(uint32_t PlayerKey, const struct FName& PlayerType, const struct FString& Reason);
	void NotifyPlayerExit(uint32_t PlayerKey, const struct FName& PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, const struct FString& FailureMessage, const struct FName& ParamState, const struct FString& ParamReason);
	void NotifyPlayerAbleToExitSafely(uint32_t PlayerKey, const struct FName& PlayerType);
	void NotifyGameModeParamsChanged(const struct FGameModeParams& GameModeParams);
	void NotifyGameModeLuckmate(int64_t MyUID, int64_t LuckmateUID);
	void NotifyGameModeInit();
	void NotifyExistPlayerReEnter(uint32_t PlayerKey);
	void NotifyAIPlayerEnter(uint32_t PlayerKey, bool IsMLAI, bool bTeammateAI);
	void NotifyAIDropInfo(int NewAI, const struct FDSAIDropInfo& Info);
	float ModifyVehicleDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* VictimVehicle, class AActor* DamageCauser);
	float ModifyDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AController* VictimController, class AActor* DamageCauser);
	void Killed(class AController* Killer, class AController* VictimPlayer, class AActor* DamageCauser, class APawn* VictimPawn, const struct FDamageEvent& DamageEvent);
	bool IsStandAloneGameMode();
	bool IsSatisfyGeneratorArea(const struct FVector& Location);
	void InitWorldActiveRange();
	void InitSeasonStatue();
	void InitMissionBoard();
	void InitGenerator();
	void InitGameParamsFromGameMode();
	void InitDynamicTriggers();
	void InitDynamicBuildingGroups();
	void InitBornWithApple();
	void Heartbeat();
	bool HasVehicleReportEntry(uint32_t InUniqueID);
	bool HasDynamicBuildingGroup();
	void HandlePlayerPaintDecalResponse(uint32_t PlayerKey, const struct FName& PlayerType, int Result, int DecalId, int Count);
	void GotoNearDeath(class AController* DamageInstigator, class APawn* VictimPawn);
	struct FOnePlayerWeapon GetWeaponReportByWeaponRecord(const struct FString& PlayerKey);
	float GetWeaponDamageFromRecord(const struct FString& PlayerKey, int TargetWeaponType);
	struct FVehicleReportEntry GetVehicleReportEntry(uint32_t InUniqueID);
	int GetSurvivingTeamCount();
	int GetSurvivingCharacterCount();
	float GetRescueDuration(class AActor* WhoRescue, class AActor* RescueWho);
	int GetPlayerTotalShootNum(const struct FString& PlayerKey);
	TArray<class AUAEPlayerState*> GetPlayerStateListWithTeamID(int TeamID, const struct FName& PlayerType);
	void GetPlayerRealtimeVerifyInfo(uint32_t PlayerKey, struct FRealtimeVerifyInfo* RealtimeVerifyInfo);
	class AUAEPlayerController* GetPlayerControllerWithUID(uint64_t UID);
	TArray<class AUAEPlayerController*> GetPlayerControllerListWithTeamID(int TeamID, const struct FName& PlayerType);
	void GetPlayerAndRealAiNum(struct FHeartBeatData* Data);
	TArray<class AUAEPlayerController*> GetObserverControllerList();
	void GetMonsterNum(struct FHeartBeatData* Data);
	int GetMaxWeaponReportNum();
	struct FVector GetClassicPlaneDirection();
	class AUAEPlayerState* FindPlayerStateWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType);
	class AUAEPlayerController* FindPlayerControllerWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType);
	class APlayerController* FindPlayerControllerByUId(uint64_t UID);
	class AController* FindControllerWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType);
	void DestroyNoActiveWorldActor(struct FVector* Location, float* Radius);
	void DestroyCharacterForPlayerController(class APlayerController* PC);
	void DestroyAllPickUpObjs();
	void DeleteSeasonStatue();
	void DeleteDynamicLoadItem();
	void DebugEnterFriendObserver(class AUAEPlayerController* InController);
	void CreateDynamicBuildingGroups(const struct FVector& Offset);
	void ChangeName(class AController* Controller, const struct FString& NewName, bool bNameChange);
	void AddAirDropBox(int boxId, const struct FVector& Pos);
};


// Class Gameplay.UAEGameState
// 0x0080 (0x05D0 - 0x0550)
class AUAEGameState : public ALuaGameState
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x0550(0x0005) MISSED OFFSET
	bool                                               bTeamIDChgDeactivePawn;                                   // 0x0555(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x52];                                      // 0x0556(0x0052) MISSED OFFSET
	struct FString                                     WeaponAttrReloadTableName;                                // 0x05A8(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DamageSearchTableName;                                    // 0x05B8(0x0010) (Edit, ZeroConstructor)
	bool                                               IsInitTable;                                              // 0x05C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x05C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEGameState");
		return pStaticClass;
	}


	void SendLuaDSToClient(int ID, TArray<unsigned char> Content);
	void RPC_LuaDSToClient(int ID, TArray<unsigned char> Content);
	bool CheckDSSwitchOpen(int SwitchId);
};


// Class Gameplay.UAEPlayerState
// 0x0DE8 (0x1368 - 0x0580)
class AUAEPlayerState : public ALuaPlayerState
{
public:
	bool                                               IsForcedNetRelevant;                                      // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0581(0x0003) MISSED OFFSET
	float                                              surviveTime;                                              // 0x0584(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              surviveTimeFromPlane;                                     // 0x0588(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Pronetime;                                                // 0x058C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0590(0x0008) MISSED OFFSET
	int                                                MovingCount;                                              // 0x0598(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              marchDistance;                                            // 0x059C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              travelDistance;                                           // 0x05A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DriveDistance;                                            // 0x05A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MonsterCatchupDistance;                                   // 0x05A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                destroyVehicleNum;                                        // 0x05AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                rescueTimes;                                              // 0x05B0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	TArray<uint64_t>                                   RescueTeammatesList;                                      // 0x05B8(0x0010) (ZeroConstructor)
	int                                                NormalItemsNum;                                           // 0x05C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SeniorItemsNum;                                           // 0x05CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GVMemberID;                                               // 0x05D0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05D4(0x0004) MISSED OFFSET
	struct FName                                       PlayerType;                                               // 0x05D8(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           FinalTeamleaderUID;                                       // 0x05E0(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x05E8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x05EC(0x0004) MISSED OFFSET
	struct FString                                     PlayerUID;                                                // 0x05F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MLAIStringUID;                                            // 0x0600(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bPSEnsure;                                                // 0x0610(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0611(0x0007) MISSED OFFSET
	struct FString                                     iconUrl;                                                  // 0x0618(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                Gender;                                                   // 0x0628(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                PlayerLevel;                                              // 0x062C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                SegmentLevel;                                             // 0x0630(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              RealHiddenScore;                                          // 0x0634(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                AceImprintShowId;                                         // 0x0638(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                AceImprintBaseId;                                         // 0x063C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                AvatarBoxId;                                              // 0x0640(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                planeAvatarId;                                            // 0x0644(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                Campid;                                                   // 0x0648(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                resID;                                                    // 0x064C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint64_t                                           UID;                                                      // 0x0650(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	uint64_t                                           MLAIDisplayUID;                                           // 0x0658(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // 0x0660(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                ZoneID;                                                   // 0x0670(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0674(0x0004) MISSED OFFSET
	struct FString                                     Nation;                                                   // 0x0678(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                TeamID;                                                   // 0x0688(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x068C(0x0004) MISSED OFFSET
	int64_t                                            IdxInTeam;                                                // 0x0690(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	uint64_t                                           PreTeamID;                                                // 0x0698(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	int                                                PreTeamChatState;                                         // 0x06A0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                PlayerBornPointID;                                        // 0x06A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x06A8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                KillsBeforeDie;                                           // 0x06AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Knockouts;                                                // 0x06B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AIKills;                                                  // 0x06B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RealPlayerKills;                                          // 0x06B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BossKills;                                                // 0x06BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DeathsCount;                                              // 0x06C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x06C4(0x0004) MISSED OFFSET
	int                                                MlAIDeliverNum;                                           // 0x06C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OriginalMlAIDeliverNum;                                   // 0x06CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Assists;                                                  // 0x06D0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	TArray<uint64_t>                                   AssistTeammatesList;                                      // 0x06D8(0x0010) (ZeroConstructor)
	TMap<int, bool>                                    AssistKillPlayers;                                        // 0x06E8(0x0050) (ZeroConstructor)
	TArray<int>                                        OvertimeAssistsTime;                                      // 0x0738(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      PlatformGender;                                           // 0x0748(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0749(0x0003) MISSED OFFSET
	int                                                MatchStrategyLabel;                                       // 0x074C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                MatchLabel;                                               // 0x0750(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Killer;                                                   // 0x0754(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           KillerIGPlayerKey;                                        // 0x0758(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x075C(0x0004) MISSED OFFSET
	struct FString                                     BeKilledOpenID;                                           // 0x0760(0x0010) (ZeroConstructor)
	struct FString                                     KillerName;                                               // 0x0770(0x0010) (ZeroConstructor)
	uint32_t                                           KillerType;                                               // 0x0780(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillerWeaponID;                                           // 0x0784(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           KillerDeliveryType;                                       // 0x0788(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DeadCircleIndex;                                          // 0x078C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           MisKillTeammatePlayerKey;                                 // 0x0790(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotNum;                                       // 0x0798(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotAndHitPlayerNum;                           // 0x079C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotAndHitPlayerNumNoAI;                       // 0x07A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotHeadNum;                                   // 0x07A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotHeadNumNoAI;                               // 0x07A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HeadShotNum;                                              // 0x07AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HeadShotNumNoAI;                                          // 0x07B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KillNumByGrende;                                          // 0x07B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UseFragGrenadeNum;                                        // 0x07B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UseSmokeGrenadeNum;                                       // 0x07BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UseFlashGrenadeNum;                                       // 0x07C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UseBurnGrenadeNum;                                        // 0x07C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxKillDistance;                                          // 0x07C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HealTimes;                                                // 0x07CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x07D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RealPlayerDamageAmount;                                   // 0x07D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MeleeKillTimes;                                           // 0x07D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MeleeDamageAmount;                                        // 0x07DC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RangedDamagedAmount;                                      // 0x07E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VehicleDamageAmount;                                      // 0x07E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // 0x07E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	TArray<struct FString>                             KillFlow;                                                 // 0x07F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             KnockOutFlow;                                             // 0x0800(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FKnockOutData>                       KnockOutList;                                             // 0x0810(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              InDamageAmount;                                           // 0x0820(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x14];                                      // 0x0824(0x0014) MISSED OFFSET
	TArray<struct FTLog_PickUpItemFlow>                TLog_PickUpItemFlowData;                                  // 0x0838(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                PickUpItemTimes;                                          // 0x0848(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsForbidItemFlowMerge;                                   // 0x084C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x084D(0x0003) MISSED OFFSET
	TMap<int, int>                                     ConsumeItemUseCount;                                      // 0x0850(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FTLog_BornLandGrenadeData>        TLog_BornLandGrenadeData;                                 // 0x08A0(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FAIDeliveryTlogData                         TLog_AIDeliveryTlogData;                                  // 0x08F0(0x0058)
	bool                                               bHasSendAIDeliverData;                                    // 0x0948(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0949(0x0007) MISSED OFFSET
	TMap<int, bool>                                    TLog_PickUpItemIdMap;                                     // 0x0950(0x0050) (ZeroConstructor)
	TArray<struct FGameModeLikeResultData>             Like;                                                     // 0x09A0(0x0010) (ZeroConstructor)
	uint32_t                                           Switch;                                                   // 0x09B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x09B4(0x0004) MISSED OFFSET
	TArray<uint32_t>                                   Self;                                                     // 0x09B8(0x0010) (ZeroConstructor)
	TArray<struct FGameModeTeammateLableCheckData>     LabelCheck;                                               // 0x09C8(0x0010) (ZeroConstructor)
	TArray<struct FUseItemFlow>                        UseItemFlow;                                              // 0x09D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FUseBuffFlow>                        UseBuffFlow;                                              // 0x09E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FBuildingEnterFlow>                  BuildingEnterFlow;                                        // 0x09F8(0x0010) (ZeroConstructor)
	TArray<struct FTLog_PropEquipUnequipFlow>          TLog_PropEquipUnequipFlowData;                            // 0x0A08(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, int>                                     TLog_BulletCount;                                         // 0x0A18(0x0050) (ZeroConstructor)
	struct FTLog_SpecialStats                          TLog_SpecialStats;                                        // 0x0A68(0x0008)
	bool                                               bIsOutsideBlueCircle;                                     // 0x0A70(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0A71(0x0003) MISSED OFFSET
	float                                              OutsideBlueCircleTime;                                    // 0x0A74(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FVehicleDriveDisData>                VehicleDriveDisDataArray;                                 // 0x0A78(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                FirstOpenedAirDropBoxNum;                                 // 0x0A88(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FirstOpenedPlayerTombBoxNum;                              // 0x0A8C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FirstOpenedTreasureBoxNum;                                // 0x0A90(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HitEnemyHeadAmount;                                       // 0x0A94(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BuildFlow;                                                // 0x0A98(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        DestroyShelterFlow;                                       // 0x0AA8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              ShelterTakeDamage;                                        // 0x0AB8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HitShelterDamage;                                         // 0x0ABC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LandLocation;                                             // 0x0AC0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     ParachuteLocation;                                        // 0x0ACC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                LandTime;                                                 // 0x0AD8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DeadLocation;                                             // 0x0ADC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FString                                     DeadDamangeType;                                          // 0x0AE8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                PveDeadAttacker;                                          // 0x0AF8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PveStageId;                                               // 0x0AFC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DeadTimeStr;                                              // 0x0B00(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                NearDeathDamageType;                                      // 0x0B10(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           NearDeathCauserId;                                        // 0x0B14(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               NearDeathIsHeadShot;                                      // 0x0B18(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0B19(0x0003) MISSED OFFSET
	int                                                BeDownTimes;                                              // 0x0B1C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeSavedTimes;                                             // 0x0B20(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0B24(0x0004) MISSED OFFSET
	struct FEquipmentData                              EquipmentData;                                            // 0x0B28(0x0070)
	int                                                PersonalRank;                                             // 0x0B98(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x8];                                       // 0x0B9C(0x0008) MISSED OFFSET
	bool                                               bIsGameTerminator;                                        // 0x0BA4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0BA5(0x0003) MISSED OFFSET
	int                                                GamePlayingTime;                                          // 0x0BA8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ObserverTime;                                             // 0x0BAC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TouchDownAreaID;                                          // 0x0BB0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TouchDownLocTypeID;                                       // 0x0BB4(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        TouchDownAreaList;                                        // 0x0BB8(0x0010) (ZeroConstructor)
	bool                                               bHasTouchDownAreaList;                                    // 0x0BC8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0BC9(0x0003) MISSED OFFSET
	float                                              ReportTouchDownHeight;                                    // 0x0BCC(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGameModePlayerTaskData>             CompletedTaskList;                                        // 0x0BD0(0x0010) (ZeroConstructor)
	TArray<struct FReportCollection>                   SpecialCollectionList;                                    // 0x0BE0(0x0010) (ZeroConstructor)
	TArray<struct FWeaponDamageRecord>                 WeaponDamageRecordList;                                   // 0x0BF0(0x0010) (ZeroConstructor)
	TArray<int>                                        SecretAreaIDList;                                         // 0x0C00(0x0010) (ZeroConstructor)
	TArray<struct FSpecialPickItemState>               CollectItemRecord;                                        // 0x0C10(0x0010) (Net, ZeroConstructor)
	float                                              DrivingHelicopterTime;                                    // 0x0C20(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InHelicopterTime;                                         // 0x0C24(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RevivalNum;                                               // 0x0C28(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeRevivedNum;                                             // 0x0C2C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillNumInVehicle;                                         // 0x0C30(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxVehicleToLandHeight;                                   // 0x0C34(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxVehicleInAirInterval;                                  // 0x0C38(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillPlayerNum;                                            // 0x0C3C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KillAINum;                                                // 0x0C40(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TotalSprintDistance;                                      // 0x0C44(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalBeenDamageAmount;                                    // 0x0C48(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DestroyVehicleWheelNum;                                   // 0x0C4C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FDestroyVehicleWheelFlow>            DestroyVehicleWheelFlow;                                  // 0x0C50(0x0010) (ZeroConstructor)
	int                                                ProneTimes;                                               // 0x0C60(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CrouchTimes;                                              // 0x0C64(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                JumpTimes;                                                // 0x0C68(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillMonsterNum;                                           // 0x0C6C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TMap<int, int>                                     MonsterID2KillNum;                                        // 0x0C70(0x0050) (ZeroConstructor)
	float                                              TotalDamageAmountToMonsters;                              // 0x0CC0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalDamageAmountFromMonsters;                            // 0x0CC4(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<int, float>                                   DamageAmountToMonsters;                                   // 0x0CC8(0x0050) (ZeroConstructor)
	TMap<int, float>                                   DamageAmountFromMonsters;                                 // 0x0D18(0x0050) (ZeroConstructor)
	int                                                MonsterHeadShotKilledTimes;                               // 0x0D68(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeMonsterDownTimes;                                       // 0x0D6C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LightCandleNum;                                           // 0x0D70(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x0D74(0x0004) MISSED OFFSET
	TMap<int, int>                                     ActivityButtonCount;                                      // 0x0D78(0x0050) (BlueprintVisible, ZeroConstructor)
	TArray<struct FActivityEventReportData>            ActivityEventRecordList;                                  // 0x0DC8(0x0010) (ZeroConstructor)
	float                                              BattleStateTime;                                          // 0x0DD8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsKickedFromGame;                                        // 0x0DDC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x0DDD(0x0003) MISSED OFFSET
	float                                              DriveWithTeammateDistance;                                // 0x0DE0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FistKillingCount;                                         // 0x0DE4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OpenedAirDropBoxNum;                                      // 0x0DE8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x0DEC(0x0004) MISSED OFFSET
	TMap<uint32_t, uint32_t>                           VehicleUsedMap;                                           // 0x0DF0(0x0050) (ZeroConstructor)
	TArray<struct FString>                             DestroyVehicleFlow;                                       // 0x0E40(0x0010) (ZeroConstructor)
	int                                                UseHelicoperNum;                                          // 0x0E50(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x4];                                       // 0x0E54(0x0004) MISSED OFFSET
	TArray<struct FTLog_KillInfo>                      PlayerKillAIInfo;                                         // 0x0E58(0x0010) (ZeroConstructor)
	TArray<struct FTLog_KillInfo>                      PlayerNearDeathDuoToAI;                                   // 0x0E68(0x0010) (ZeroConstructor)
	struct FTLog_KillInfo                              AIKillPlayerInfo;                                         // 0x0E78(0x0028)
	float                                              UseHelicoperDistance;                                     // 0x0EA0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CharmRankIndex;                                           // 0x0EA4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x0EA5(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData28[0x50];                                      // 0x0EA5(0x0050) UNKNOWN PROPERTY: SetProperty Gameplay.UAEPlayerState.UseHelicoperRecord
	int                                                FollowState;                                              // 0x0EF8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                SnowBoardJumpActionCount;                                 // 0x0EFC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EmoteOnTelpherCount;                                      // 0x0F00(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillMagicWalkAI;                                          // 0x0F04(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SendMagicWalkAI;                                          // 0x0F08(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                                       // 0x0F0C(0x0004) MISSED OFFSET
	TArray<int>                                        FindBlackMonsterIDs;                                      // 0x0F10(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                KillSnowManCount;                                         // 0x0F20(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x0F24(0x0004) MISSED OFFSET
	uint64_t                                           LuckmateUID;                                              // 0x0F28(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<EEventCounterDefine, int>                     EventCounterMap;                                          // 0x0F30(0x0050) (BlueprintVisible, ZeroConstructor)
	TMap<int, int>                                     GeneralCounterMap;                                        // 0x0F80(0x0050) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData31[0x8];                                       // 0x0FD0(0x0008) MISSED OFFSET
	struct FScriptDelegate                             AllowToAddGeneralCount;                                   // 0x0FD8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnGenerelCountChanged;                                    // 0x0FE8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                VeteranRecruitIndex;                                      // 0x0FF8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x0FFC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlayerStateTeamChanged;                                   // 0x1000(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FPlayEmoteData>                      FPlayEmoteDataArray;                                      // 0x1010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FGameModePlayerAliasInfo                    AliasInfo;                                                // 0x1020(0x0048) (BlueprintVisible, BlueprintReadOnly, Net)
	int                                                MemberIdInVoiceRoom;                                      // 0x1068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerVoiceEnable;                                        // 0x106C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x106D(0x0003) MISSED OFFSET
	struct FGameModePlayerUpassInfo                    UpassInfo;                                                // 0x1070(0x0038) (BlueprintVisible, BlueprintReadOnly, Net)
	int                                                UpassShow;                                                // 0x10A8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                upassKeepBuy;                                             // 0x10AC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                upassCurValue;                                            // 0x10B0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                pass_type;                                                // 0x10B4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               UpassIsBuy;                                               // 0x10B8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x10B9(0x0003) MISSED OFFSET
	struct FTLog_Micphone                              MicphoneTlog;                                             // 0x10BC(0x0018)
	float                                              TeammateMicrophoneTime;                                   // 0x10D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeammateSpeakerTime;                                      // 0x10D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemyMicrophoneTime;                                      // 0x10DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemySpeakerTime;                                         // 0x10E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeammateInterphoneTime;                                   // 0x10E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemyInterphoneTime;                                      // 0x10E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MicrophoneUseTimeStamp;                                   // 0x10EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeakerUseTimeStamp;                                      // 0x10F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData35[0x24];                                      // 0x10F4(0x0024) MISSED OFFSET
	struct FDamageInfo                                 LuaNearDeathDamageInfo;                                   // 0x1118(0x00B8)
	struct FDamageInfo                                 LuaDeathDamageInfo;                                       // 0x11D0(0x00B8)
	struct FName                                       RepPropertyCategory;                                      // 0x1288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x10];                                      // 0x1290(0x0010) MISSED OFFSET
	bool                                               IsOnline;                                                 // 0x12A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData37[0x1F];                                      // 0x12A1(0x001F) MISSED OFFSET
	struct FGameBaseInfo                               GameBaseInfo;                                             // 0x12C0(0x0090) (Net)
	unsigned char                                      UnknownData38[0x8];                                       // 0x1350(0x0008) MISSED OFFSET
	struct FString                                     RealPlayerName;                                           // 0x1358(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEPlayerState");
		return pStaticClass;
	}


	void SetRankAndPersonalRank(int TempRank, int TempPersonalRank);
	void SetGVMemberIDServerCall(int memberID);
	void SetGVMemberID(int memberID);
	void SetDeliveryResult(uint32_t InDeliverPlayerKey, bool bInSuccess, int EventTypeId);
	void SendLuaDSToClient(int ID, TArray<unsigned char> Content);
	void RPC_ServerAddGeneralCount(int ID, int InCount, bool bReset);
	void RPC_LuaDSToClient(int ID, TArray<unsigned char> Content);
	void RPC_ChangeOnlyTeamChat(int NewPreTeamChatState);
	void ReportTaskExtInfo(int TaskId, const struct FString& ExtInfo);
	void ReportTaskData(int TaskId, int process);
	void ReportSpecialCollection(int ItemId, int Count);
	void ReportSecretAreaID(int SecretAreaID);
	void ReportLikeTeammate(int64_t BeLikeUID, int LikeType);
	void ReportLikeSwitch(int SwitchSetting);
	void ReportLikeSelf(int LikeType);
	void ReportLandLocType(int TouchDownLocType);
	void ReportLandAreaList(TArray<int>* TouchDownAreaIDs);
	void ReportLandArea(int TouchDownArea);
	void ReportLabelCheck(int TeammateUID, int Result);
	void RecordUseHelicoper(uint32_t UseHelicoperId);
	void OnRepCampIDBP();
	void OnRep_VeteranRecruitIndex();
	void OnRep_UpdateKillMonsterNum();
	void OnRep_UID();
	void OnRep_TeamID();
	void OnRep_RescueTimesChange();
	void OnRep_PreTeamID();
	void OnRep_PlayerKillsChange();
	void OnRep_PlayerKey();
	void OnRep_MLAIDisplayUID();
	void OnRep_MatchLabel();
	void OnRep_CollectItemRecord();
	void OnRep_CampID();
	void OnRep_bOnlyPreTeamChat();
	void OnRep_AliasInfo();
	void OnClientVeteranRecruitIndexUpdated();
	bool IsSpecialPickItemCollectionCompleted(int ItemId);
	bool IsSpecialPickItem(int ItemId);
	bool IsNearDeathDamageInfoValid();
	bool IsItemForbidMerge(int ItemResId);
	bool IsDeathDamageInfoValid();
	struct FOnePlayerWeapon GetWeaponReportByWeaponRecord();
	void GetWeaponRecordData(struct FOnePlayerWeapon* OutWeaponInfo);
	int GetVeteranPlayerLevel();
	uint32_t GetUserIDByMemberID(int memberID);
	struct FString GetUIDString();
	struct FGameModeTeammateBattleResultData GetTeammateBattleResultData();
	int GetTeamId();
	int GetRank();
	int GetPlayerTotalShootNum();
	uint32_t GetPlayerKey();
	struct FGameModePlayerBattleResultData_SuperCold GetPlayerBattleResultData_SuperCold();
	struct FGameModePlayerBattleResultData GetPlayerBattleResultData();
	EMentorPlayerType GetMentorPlayerType();
	void ForceUpdateCampCharacterList();
	void CopyNearDeathDamageInfo();
	void CopyDeathDamageInfo();
	void ClearTlogData();
	void ClearKillNum();
	void ChangeCollectItemRecord(int InItemID, bool InNewState);
	void AddGeneralTLogJustForDelegate(int ID, int DeltaCnt, int CurrValue);
	void AddGeneralCount(int ID, int InCount, bool bReset);
	void AddEventCount(unsigned char EventID, int InCount, bool bReset);
};


// Class Gameplay.ItemSceneComponent
// 0x0000 (0x0340 - 0x0340)
class UItemSceneComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemSceneComponent");
		return pStaticClass;
	}

};


// Class Gameplay.GroupSpotSceneComponent
// 0x0010 (0x0350 - 0x0340)
class UGroupSpotSceneComponent : public UItemSceneComponent
{
public:
	float                                              LastGenerateItemTime;                                     // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GenerateItemTimeCD;                                       // 0x0344(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPickup;                                                  // 0x0348(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRepeatGenerateItem;                                      // 0x0349(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsValidGroup;                                            // 0x034A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x034B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GroupSpotSceneComponent");
		return pStaticClass;
	}


	void SetGroupValid(bool Valid);
	bool IsValidGroup();
	int FindWorldCompositionID();
	void DoPickUp();
};


// Class Gameplay.ItemGroupSpotSceneComponent
// 0x0040 (0x0390 - 0x0350)
class UItemGroupSpotSceneComponent : public UGroupSpotSceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0350(0x0008) MISSED OFFSET
	ERegionSizeIndex                                   RegionSize;                                               // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class UItemGeneratorComponent*                     ItemGenerator;                                            // 0x0360(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UItemSpotSceneComponent*>             SpotsCacheCur;                                            // 0x0368(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UItemSpotSceneComponent*>             SpotsCacheAll;                                            // 0x0378(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemGroupSpotSceneComponent");
		return pStaticClass;
	}


	void SetGroupProperty(class UItemGeneratorComponent* Generator, const struct FSpotGroupProperty& Property);
	void RepeatSpots();
	void RepeatSingleSpot(class UItemSpotSceneComponent* Spot);
	void RandomSpotByType(TEnumAsByte<ESpotType> SpotType, const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* AllSpots);
	void RandomSingleSpot(const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* Spots);
	float RandomRepeatGenerateItemCD(const struct FSpotGroupProperty& GroupProperty);
};


// Class Gameplay.SpotSceneComponent
// 0x0020 (0x0360 - 0x0340)
class USpotSceneComponent : public UItemSceneComponent
{
public:
	int                                                WorldCompositionID;                                       // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpotProbability;                                          // 0x0348(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LineOffsetZ;                                              // 0x034C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRepeatGenerateItem;                                      // 0x0350(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpotValid;                                             // 0x0351(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0352(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.SpotSceneComponent");
		return pStaticClass;
	}


	void SetSpotValid(bool Valid);
	bool LineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool IsSpotValid();
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	bool GenerateSpot();
	class AActor* GenerateActor(class UClass* ActorClass, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, struct FVector* ActorLocation, struct FRotator* ActorRotator);
};


// Class Gameplay.ItemSpotSceneComponent
// 0x0080 (0x03E0 - 0x0360)
class UItemSpotSceneComponent : public USpotSceneComponent
{
public:
	class UItemGeneratorComponent*                     ItemGenerator;                                            // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FItemGenerateSpawnClass>             AllItems;                                                 // 0x0368(0x0010) (ZeroConstructor)
	class UGroupSpotSceneComponent*                    GroupSpotSceneComponent;                                  // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<struct FString, int>                          CacheItemValeCategory;                                    // 0x0380(0x0050) (ZeroConstructor)
	TArray<TWeakObjectPtr<class AActor>>               CacheItems;                                               // 0x03D0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemSpotSceneComponent");
		return pStaticClass;
	}


	void SetSpotProperty(int CompositionID, TEnumAsByte<ESpotGroupType> GroupType, class UItemGeneratorComponent* Generator, const struct FSpotTypeProperty& Property, class UGroupSpotSceneComponent* Component, bool RepeatGenerateItem);
	void RepeatSpotProperty(const struct FSpotTypeProperty& Property);
	bool GenerateSpot();
	void GenerateItems(TArray<struct FItemGenerateSpawnClass>* AllItemClass);
	void DoPickUp(const struct FString& ItemValue, const struct FString& ItemCategory);
	int CountCacheItemValeCategory();
	void ClearCacheItems();
};


// Class Gameplay.UAEHouseActor
// 0x00F8 (0x0600 - 0x0508)
class AUAEHouseActor : public AUAENetActor
{
public:
	int                                                iRegionHouse;                                             // 0x0508(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              WindowHideDistanceSquared;                                // 0x050C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WindowLoadDistanceSquared;                                // 0x0510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WindowLoadDistanceSquaredOnVeryLowDevice;                 // 0x0514(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WindowLoadDistanceSquaredOnServer;                        // 0x0518(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	TArray<struct FUAEWindowRepData>                   WindowList;                                               // 0x0520(0x0010) (Net, ZeroConstructor)
	TMap<int, class UUAEWindowComponent*>              WindowComponents;                                         // 0x0530(0x0050) (ExportObject, ZeroConstructor, Transient)
	bool                                               bEnableWindow;                                            // 0x0580(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShouldConsiderDistance;                                  // 0x0581(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x66];                                      // 0x0582(0x0066) MISSED OFFSET
	bool                                               SerializeDataUse;                                         // 0x05E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsStickToTheGround;                                       // 0x05E9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x05EA(0x0006) MISSED OFFSET
	TArray<unsigned char>                              SerializeData;                                            // 0x05F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEHouseActor");
		return pStaticClass;
	}


	void RecordBreakWindowTlog(class APlayerController* EventInstigator);
	static void ProcessWindowCreateList();
	void OnRep_WindowList();
	void ClearWindowList();
	void BroadcastWindowRepDataUpdated(const struct FUAEWindowRepData& InRepData);
};


// Class Gameplay.UAEGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UUAEGameplayStatics : public UGameplayStatics
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEGameplayStatics");
		return pStaticClass;
	}


	static class UGameplayDelegates* GetGameBridge(class UObject* WorldContextObject);
};


// Class Gameplay.UAEProjectile
// 0x0040 (0x0538 - 0x04F8)
class AUAEProjectile : public ALuaActor
{
public:
	bool                                               IsServerAlreadyExplodedCpp;                               // 0x04F8(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	struct FVector                                     ProjInitialRelativeOffset;                                // 0x04FC(0x000C) (BlueprintVisible, Net, IsPlainOldData)
	struct FVector                                     ProjStandOffset;                                          // 0x0508(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	struct FVector                                     ProjCrouchOffset;                                         // 0x0514(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	struct FVector                                     ProjProneOffset;                                          // 0x0520(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	TEnumAsByte<ECharacterPoseType>                    ProjPrevoisOwnerPose;                                     // 0x052C(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x052D(0x0003) MISSED OFFSET
	float                                              SpawnSeconds;                                             // 0x0530(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGrenadeWarningFlag;                                  // 0x0534(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGroundedOnServerCpp;                                   // 0x0535(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0536(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEProjectile");
		return pStaticClass;
	}


	void WorkAsBuffApplierEvent(const struct FString& BuffName, class APawn* BuffTarget);
	void TimeoutExplodeMulticast_CPP();
	void TimeoutExplodeMulticast_BPEvent();
	void SetActorInitialRelativeOffset(const struct FVector& Offset, const struct FVector& StandOffset, const struct FVector& CrouchOffset, const struct FVector& ProneOffset, TEnumAsByte<ECharacterPoseType> PrevoisOwnerPose);
	void ServerNotifyGroundEventOnClient();
	void OnRep_IsServerAlreadyExplodedCpp();
	void OnRep_IsGroundedOnServerCpp();
	void OnProjectileStopOnServer();
	void OnProjectileStopOnClient();
	void IsServerAlreadyExplodedCppNotify();
	bool IsOwnerAutomous();
	void GlassDetect(const struct FVector& Start, const struct FVector& End);
	float GetRemainingEffectTime();
	void ChangeGrenadeMarkerState(bool bNewState);
	void CallExplode();
	void BroadcastClientExplode();
};


// Class Gameplay.UAEOBState
// 0x0000 (0x04C8 - 0x04C8)
class AUAEOBState : public APlayerState
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEOBState");
		return pStaticClass;
	}

};


// Class Gameplay.UAEPlayerController
// 0x0B58 (0x13B8 - 0x0860)
class AUAEPlayerController : public ALuaPlayerController
{
public:
	struct FScriptMulticastDelegate                    OnPlayerKeyRepDelegate;                                   // 0x0860(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0870(0x0010) MISSED OFFSET
	struct FName                                       PlayerType;                                               // 0x0880(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0888(0x0010) (Net, ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0898(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x089C(0x0004) MISSED OFFSET
	uint64_t                                           UID;                                                      // 0x08A0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerOpenID;                                             // 0x08A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TeamID;                                                   // 0x08B8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	int64_t                                            IdxInTeam;                                                // 0x08C0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	int                                                Campid;                                                   // 0x08C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CharacterLocation;                                        // 0x08CC(0x000C) (Net, IsPlainOldData)
	int                                                RoomMode;                                                 // 0x08D8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x08DC(0x0004) MISSED OFFSET
	struct FWeatherInfo                                WeatherInfo;                                              // 0x08E0(0x0018) (Net)
	int                                                planeAvatarId;                                            // 0x08F8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                DyeDebugFlag;                                             // 0x08FC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                PlayerStartID;                                            // 0x0900(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedSimulation;                                          // 0x0904(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0905(0x0003) MISSED OFFSET
	struct FPlayerNetStats                             NetStats;                                                 // 0x0908(0x0040)
	bool                                               bEnablePlaneBanner;                                       // 0x0948(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0949(0x0007) MISSED OFFSET
	struct FString                                     PlanetailResLink;                                         // 0x0950(0x0010) (Net, ZeroConstructor)
	int                                                InPacketLossRate;                                         // 0x0960(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OutPacketLossRate;                                        // 0x0964(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ClientNetworkType;                                        // 0x0968(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x24];                                      // 0x096C(0x0024) MISSED OFFSET
	bool                                               bIsForReplay;                                             // 0x0990(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsGlobalObserverForReplay;                               // 0x0991(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0992(0x0002) MISSED OFFSET
	int                                                GameReplayType;                                           // 0x0994(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableProcessPlayerInput;                               // 0x0998(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoAttenuationGlobalVoice;                                // 0x0999(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x099A(0x0006) MISSED OFFSET
	struct FGameModePlayerUpassInfo                    InitialUpassInfo;                                         // 0x09A0(0x0038)
	TArray<struct FGameModePlayerUpassInfo>            InitialUpassInfoList;                                     // 0x09D8(0x0010) (ZeroConstructor)
	TArray<struct FPlayerOBInfo>                       PlayerOBInfoList;                                         // 0x09E8(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	int                                                LobbyShowWeaponID;                                        // 0x09F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGM;                                                    // 0x09FC(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x09FD(0x0003) MISSED OFFSET
	struct FString                                     Nation;                                                   // 0x0A00(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	bool                                               bIsTeammateEscaped;                                       // 0x0A10(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0A11(0x0007) MISSED OFFSET
	ECharacterGender                                   DefaultCharacterGender;                                   // 0x0A18(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0A19(0x0003) MISSED OFFSET
	int                                                DefaultCharacterHeadID;                                   // 0x0A1C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGameModePlayerItem>                 InitialItemList;                                          // 0x0A20(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FGameModePlayerRolewearInfo>         InitialAllWear;                                           // 0x0A30(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	int                                                RolewearIndex;                                            // 0x0A40(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0A44(0x0004) MISSED OFFSET
	TArray<int>                                        equip_plating_list;                                       // 0x0A48(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 InitialSharedSkin;                                        // 0x0A58(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	struct FGameModePlayerKnapsackSingleInfo           InitialSharedKnapsack;                                    // 0x0A68(0x0088) (BlueprintVisible, Net)
	bool                                               bSharedSkinOpened;                                        // 0x0AF0(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bUsingSharedSkin;                                         // 0x0AF1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bSubscribeBagOpened;                                      // 0x0AF2(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x0AF3(0x0001) MISSED OFFSET
	int                                                FashionBagStartIndex;                                     // 0x0AF4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                VehicleSkinInReady;                                       // 0x0AF8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bSpwanInVehiclePlayerStart;                               // 0x0AFC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0AFD(0x0003) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 InitialWeaponAvatarList;                                  // 0x0B00(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FGameModePlayerPetInfo                      InitialPetInfo;                                           // 0x0B10(0x0020) (BlueprintVisible, BlueprintReadOnly, Net)
	TArray<struct FGameModePlayerPetInfo>              AdditionalPetInfo;                                        // 0x0B30(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	int                                                UsingAdditionalPetIndex;                                  // 0x0B40(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0B44(0x0004) MISSED OFFSET
	TArray<struct FGameModePlayerKnapsackExtInfo>      InitialKnapsackExtInfo;                                   // 0x0B48(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TArray<struct FGameModePlayeWeaponSchemeInfo>      InitialWeaponSchemeInfo;                                  // 0x0B58(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<struct FPlayerEffectItemInfo>               InitialEffectItemInfo;                                    // 0x0B68(0x0010) (Net, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnInitialWeaponScheme;                                    // 0x0B78(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInitialEffectItem;                                      // 0x0B88(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                CurWeaponSchemeIndex;                                     // 0x0B98(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                PveLevel;                                                 // 0x0B9C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        InitialCharSkillList;                                     // 0x0BA0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 InitialVehicleAvatarList;                                 // 0x0BB0(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FGameModePlayerItems>                InitialVehicleAvatarSkinList;                             // 0x0BC0(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	int                                                nVehicleSwitchEffectId;                                   // 0x0BD0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                ShowVehicleSkin;                                          // 0x0BD4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FGameModePlayerItem>                 InitialBackPackPendantList;                               // 0x0BD8(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FVehicleAvatarData>                  InitialVehicleAdvanceAvatarList;                          // 0x0BE8(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 InitialVehicleMusicList;                                  // 0x0BF8(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	struct FGameModePlayerConsumableAvatar             InitialConsumableAvatar;                                  // 0x0C08(0x0010) (BlueprintVisible, Net)
	struct FGameModePlayerEquipmentAvatar              InitialEquipmentAvatar;                                   // 0x0C18(0x0030) (BlueprintVisible, Net)
	TMap<int, int>                                     WeaponAvatarItemList;                                     // 0x0C48(0x0050) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData16[0x50];                                      // 0x0C98(0x0050) MISSED OFFSET
	TMap<int, int>                                     GrenadeAvatarItemList;                                    // 0x0CE8(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGameModeWeaponAvatarData>           WeaponAvatarDataList;                                     // 0x0D38(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TMap<int, int>                                     VehicleAvatarList;                                        // 0x0D48(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FVehicleAvatarData>               VehicleAdvanceAvatarList;                                 // 0x0D98(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FVehicleAvatarSkinList>           VehicleAvatarSkinList;                                    // 0x0DE8(0x0050) (BlueprintVisible, ZeroConstructor)
	TArray<int>                                        VehicleMusicList;                                         // 0x0E38(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<int>                                        DefaultVehicleMusic;                                      // 0x0E48(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TArray<struct FGameModePlayerExpressionItem>       InitialExpressionItemList;                                // 0x0E58(0x0010) (ZeroConstructor)
	TArray<struct FGameModeWeaponDIYPlanData>          InitialWeaponDIYPlanData;                                 // 0x0E68(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, int>                                     WeaponDIYPlanDataMap;                                     // 0x0E78(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, int>                                     InitialWeaponPendantList;                                 // 0x0EC8(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FGameModePlayerTaskData>             InitialTaskDataList;                                      // 0x0F18(0x0010) (ZeroConstructor)
	TArray<struct FSpecialPickItem>                    InitialSpecialPickItemList;                               // 0x0F28(0x0010) (ZeroConstructor)
	TArray<struct FDailyTaskStoreInfo>                 DailyTaskStoreList;                                       // 0x0F38(0x0010) (ZeroConstructor)
	uint32_t                                           TaskSyncToDsTs;                                           // 0x0F48(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0F4C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerGotoSpectatingDelegate;                           // 0x0F50(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData18[0x10];                                      // 0x0F60(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnReceiveUIMessage;                                       // 0x0F70(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int64_t                                            LastGameResultTime;                                       // 0x0F80(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRoomCanKickPlayer;                                       // 0x0F88(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bCanDownloadInBattle;                                     // 0x0F89(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x6];                                       // 0x0F8A(0x0006) MISSED OFFSET
	struct FString                                     IpCountryStr;                                             // 0x0F90(0x0010) (ZeroConstructor)
	bool                                               bRoomOwner;                                               // 0x0FA0(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bOpenChangeWearing;                                       // 0x0FA1(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x2];                                       // 0x0FA2(0x0002) MISSED OFFSET
	uint32_t                                           ObserverFlags;                                            // 0x0FA4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpectating;                                            // 0x0FA8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0FA9(0x0003) MISSED OFFSET
	struct FLobbyWatchInfo                             LobbyWatchInfo;                                           // 0x0FAC(0x0008) (Net)
	int                                                HawkEyeSpectateMaxMatchCount;                             // 0x0FB4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                HawkEyeSpectateUsedMatchCount;                            // 0x0FB8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsWatchEnd;                                              // 0x0FBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0FBD(0x0003) MISSED OFFSET
	float                                              UpdateOBCircleCounter;                                    // 0x0FC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateOBCircleInterval;                                   // 0x0FC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowAutoSelectTeamMate;                                 // 0x0FC8(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitRetryGotoSpectating;                                 // 0x0FC9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x6];                                       // 0x0FCA(0x0006) MISSED OFFSET
	TArray<struct FString>                             FriendObservers;                                          // 0x0FD0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData24[0x1];                                       // 0x0FE0(0x0001) MISSED OFFSET
	bool                                               bCanLedgeGrab;                                            // 0x0FE1(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x6];                                       // 0x0FE2(0x0006) MISSED OFFSET
	bool                                               bIsSpectatingEnemy;                                       // 0x0FE8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x5F];                                      // 0x0FE9(0x005F) MISSED OFFSET
	TWeakObjectPtr<class UUAEUserWidget>               InGameUIRoot;                                             // 0x1048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FSoftClassPath>                      LevelUpdateNetActorClassPaths;                            // 0x1050(0x0010) (ZeroConstructor, Config)
	TArray<class UClass*>                              LevelUpdateNetActorClassList;                             // 0x1060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData27[0x53];                                      // 0x1070(0x0053) MISSED OFFSET
	bool                                               bExited;                                                  // 0x10C3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bReconnected;                                             // 0x10C4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bReconnecting;                                            // 0x10C5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x12];                                      // 0x10C6(0x0012) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlayerControllerLostDelegate;                             // 0x10D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SyncDailyTaskInfoDelegate;                                // 0x10E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerRecoveredDelegate;                        // 0x10F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerAboutToReconnectDelegate;                 // 0x1108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerReconnectedDelegate;                      // 0x1118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerAboutToRespawnDelegate;                   // 0x1128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerRespawnedDelegate;                        // 0x1138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerAboutToExitDelegate;                      // 0x1148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerQuitSpectatingForClient;                          // 0x1158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerControllerBattleBeginPlay;                        // 0x1168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInitGameUI;                                             // 0x1178(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData29[0x10];                                      // 0x1188(0x0010) MISSED OFFSET
	bool                                               bCanWatchEnemyInRoomMode;                                 // 0x1198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x107];                                     // 0x1199(0x0107) MISSED OFFSET
	TArray<class UObject*>                             SecurityObjs;                                             // 0x12A0(0x0010) (ZeroConstructor)
	TArray<int>                                        BuffEffectDisplayIDArray;                                 // 0x12B0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	bool                                               IsDelayNotifyEnterBattleUntilLevelLoad;                   // 0x12C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x12C1(0x0003) MISSED OFFSET
	float                                              NotifyTimeOut;                                            // 0x12C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayCloseLoadingTime;                                    // 0x12C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x12CC(0x0004) MISSED OFFSET
	struct FString                                     NeedLoadLevelName;                                        // 0x12D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     NeedLoadedLevelFullName;                                  // 0x12E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsTickHouse;                                              // 0x12F0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData33[0xF];                                       // 0x12F1(0x000F) MISSED OFFSET
	int                                                AntiDataCD;                                               // 0x1300(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ModeID;                                                   // 0x1304(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOpenReconnectUseCharViewPoint;                           // 0x1308(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData34[0x2B];                                      // 0x1309(0x002B) MISSED OFFSET
	float                                              ClientToDSFlowLimitTime;                                  // 0x1334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClientToDSFlowLimit;                                      // 0x1338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData35[0x24];                                      // 0x133C(0x0024) MISSED OFFSET
	struct FString                                     UsingNetObjectPathNameMappingCSV;                         // 0x1360(0x0010) (Net, ZeroConstructor)
	struct FString                                     UsingOodleNetworkDicPath;                                 // 0x1370(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData36[0x20];                                      // 0x1380(0x0020) MISSED OFFSET
	class ANetworkReportActor*                         NetworkReportActor;                                       // 0x13A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData37[0x10];                                      // 0x13A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEPlayerController");
		return pStaticClass;
	}


	bool UseingWeaponScheme();
	void TestShowLongTimeNoOperation();
	void TestCastUIMsgWithPara(const struct FString& strMsg, const struct FString& module, int TestID);
	void SyncDailyTaskStoreInfo(TArray<struct FDailyTaskStoreInfo> NewDailyTaskStoreList);
	void SetUsedSimulationCVar(bool Value);
	static void SetTargetMsgReceiveDelegate(class UGameInstance* InGameInstance, const struct FScriptDelegate& InDelegate);
	void SetPanels(TArray<class UUAEUserWidget*> panels);
	void SetIsInPetSpectator(bool inIsInPetSpectator);
	static void SetDSMsgReceiveDelegate(const struct FScriptDelegate& InDelegate);
	static void SetClientMsgReceiveDelegate(class UGameInstance* InGameInstance, const struct FScriptDelegate& InDelegate);
	void ServerUpdateLevelVisibility(const struct FName& PackageName, bool bIsVisible);
	void ServerSetVoiceId(int VoiceID);
	void ServerKickSelf();
	void ServerGotoSpectating(class APawn* ViewTarget);
	void ServerExitGame();
	void ServerAcknowledgeReconnection_2(uint32_t Token);
	void SendNetObjectPathNameMappingHashToServer(uint32_t VersionHash);
	void SendLuaDSToClient(int ID, TArray<unsigned char> Content);
	void SendLuaClientToDS(int ID, TArray<unsigned char> Content);
	void RPC_Server_SyncClientNetInfo(int InLoss, int OutLoss, int InNetworkType);
	void RPC_Server_ReportClientNetInfo(int AvgPing, int MaxPing, int MinPing, int LostPackRate, int AvgNoOutlier, int StdNoOutlier, int NumNoOutlier, int InLoss, int OutLoss);
	void RPC_LuaDSToClient(int ID, TArray<unsigned char> Content);
	void RPC_LuaClientToDS(int ID, TArray<unsigned char> Content);
	void Respawn();
	void ResetUsedSimulationCVar();
	void ReleaseInGameUI();
	void ReceivePostLoginInit();
	void PrintStatistics();
	void PlayerStartIDReceived();
	void OnRep_WeaponAvatarDataList();
	void OnRep_UsingOodleNetworkDicPath();
	void OnRep_UsingNetObjectPathNameMappingCSV();
	void OnRep_UsedSimulation();
	void OnRep_PveLevel();
	void OnRep_PlayerOBInfoList();
	void OnRep_PlayerKey();
	void OnRep_LobbyWatchInfo();
	void OnRep_LastGameResultTime();
	void OnRep_IsSpectatingEnemy();
	void OnRep_IsSpectating();
	void OnRep_IsObserver();
	void OnRep_InitialWeaponSchemeInfo();
	void OnRep_InitialEquipmentAvatar();
	void OnRep_InitialEffectItemInfo();
	void OnRep_InitialConsumableAvatar();
	void OnRep_FriendObservers();
	void OnRep_CurWeaponSchemeIndex();
	void OnRep_bRoomOwner();
	void OnPlayerKeyRepDelegate__DelegateSignature();
	void OnNetObjectPathNameMappingTableAsyncLoad();
	void NotifyEnterBattle();
	void KickSelf();
	bool IsTeammateSpectator();
	bool IsSpectatorOrDemoPlayer();
	bool IsSpectator();
	bool IsRoomMode();
	bool IsPureSpectator();
	bool IsObserver();
	bool IsInSpectatingEnemy();
	bool IsInSpectating();
	bool IsInPetSpectator();
	bool IsHawkEyeSpectator();
	bool IsFriendOrEnemySpectator();
	bool IsFriendObserver();
	bool IsFriendNotHawkEyeObserver();
	bool IsExited();
	bool IsDemoRecSpectator();
	bool IsDemoPlaySpectator();
	bool IsDemoPlayGlobalObserver();
	bool IsDeathSpectator();
	void InitWithPlayerParams(const struct FGameModePlayerParams& Params);
	void InitWeaponAvatarItems();
	void InitVehicleMusicList();
	void InitVehicleAvatarSkinList();
	void InitVehicleAvatarList();
	void InitVehicleAdvanceAvatarList();
	void InitIngameUI();
	void InitGrenadeAvatarList(bool ReInitial);
	bool HasAnySpectatorReplayFlag(uint32_t InFlag);
	int GotoSpectating(int PlayerID);
	bool GetWeaponPandentReflect(int wraponID, int* pendantID);
	int GetWeaponAvatarItemId(int ID);
	void GetVisibleLevelsLoadedName(TArray<struct FString>* VisibleLevels);
	struct FString GetLobbyWatchedPlayerKeyAsString();
	struct FPlayerEffectItemInfo GetEffectItemBySlot(unsigned char SlotIndex);
	struct FDailyTaskStoreInfo GetDailyTaskStoreInfoByTaskId(int TaskId);
	int GetCurrentWeaponSchemeMainSlotItemId();
	struct FGameModePlayerPetInfo GetCurrentPetInfo();
	uint32_t GetCurrentOBPlayerKey();
	int GetCurrentOBPlayerInfoIndex();
	int GenerateKillBroadcastItemID(int ClothAvatarID, int PlayerUID);
	void ForceNetReady();
	void ExitGame();
	void ExhaustCPU();
	void ExecDSCommand(const struct FString& DSCommand);
	void ExcuteIntRecord(const struct FString& Key, int Count);
	void ExcuteIntCounterRecord(const struct FString& Key, int Count);
	void EnableInGameUI();
	void DumpUAENetActors();
	void DumpRegions();
	void DumpNetActors();
	void DumpCharacters();
	void DumpAllUI();
	void DumpAllObjects();
	void DumpAllActors();
	void DoCrash();
	void DisableInGameUI();
	void DelayEnterBattleCheck();
	void DealWithPickUpFailed(const struct FItemDefineID& DefineID);
	void ClientShowTeammateEscapeNotice();
	void ClientSendOodleNetworkAckToServer();
	void ClientRPC_CastUIMsgWithStrings(const struct FString& strMsg, const struct FString& module, int TipsID, const struct FString& Param1, const struct FString& Param2);
	void ClientRPC_CastUIMsgParams(const struct FString& strMsg, const struct FString& module, int Type);
	void ClientRPC_CastUIMsg(const struct FString& strMsg, const struct FString& module);
	void ClientInitPlayerOBInfoButton();
	void ClientBroadcastRespawnComplete();
	void ClientBroadcastReconnectionSuccessful();
	void ClientAcknowledgeReconnection_4(uint32_t Token);
	void CheckPlayerOBInfoButtonInit();
	bool CheckAcknowledgedPawn(class APawn* InPawn);
	void CastUIMsg(const struct FString& strMsg, const struct FString& module);
	EPickUpCheckResult CanPickUpItem(const struct FItemDefineID& DefineID);
	void BroadcastUIMessage(const struct FString& MessageName, int TipsIDOrType, const struct FString& Param1, const struct FString& Param2);
	void BroadcastRespawnComplete();
};


// Class Gameplay.ActorGridGeneratorInterface
// 0x0000 (0x0028 - 0x0028)
class UActorGridGeneratorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ActorGridGeneratorInterface");
		return pStaticClass;
	}

};


// Class Gameplay.AutoRotationComponent
// 0x0020 (0x0360 - 0x0340)
class UAutoRotationComponent : public USceneComponent
{
public:
	class UCurveVector*                                CurveData;                                                // 0x0340(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0348(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.AutoRotationComponent");
		return pStaticClass;
	}

};


// Class Gameplay.BackpackComponent
// 0x0388 (0x0560 - 0x01D8)
class UBackpackComponent : public ULuaActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01D8(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    ItemListUpdatedDelegate;                                  // 0x01E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SingleItemUpdatedDelegate;                                // 0x01F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SingleItemDeleteDelegate;                                 // 0x0208(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BatchItemUpdateDelegate;                                  // 0x0218(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BatchItemDeleteDelegate;                                  // 0x0228(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AvatarItemUpdatedDelegate;                                // 0x0238(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CapacityUpdatedDelegate;                                  // 0x0248(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemOperationDelegate;                                    // 0x0258(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemOperationInfoDelegate;                                // 0x0268(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AssociationOperationDelegate;                             // 0x0278(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemOperCountDelegate;                                    // 0x0288(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemOperationFailedDelegate;                              // 0x0298(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BackPackTipsToPlayerDelegate;                             // 0x02A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemHandleAddDelegate;                                    // 0x02B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AIStateItemListUpdatedDelegate;                           // 0x02C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemUpdatedDelegate;                                      // 0x02D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ItemRemovedDelegate;                                      // 0x02E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	TArray<struct FCustomAccessoriesData>              CustomAccessoriesData;                                    // 0x02F8(0x0010) (ZeroConstructor)
	TArray<struct FBattleItemPickupAfterLand>          BattleItemPickupAfterLandList;                            // 0x0308(0x0010) (ZeroConstructor)
	TArray<struct FSpecialPickInfo>                    specialCountLimit;                                        // 0x0318(0x0010) (Net, ZeroConstructor)
	int                                                CoinsNum;                                                 // 0x0328(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPickToSafeBox;                                       // 0x032C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPickForceToBackPack;                                 // 0x032D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x032E(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    CoinsChangedDelegate;                                     // 0x0330(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0340(0x0010) MISSED OFFSET
	struct FIncNetArray                                ItemListNet;                                              // 0x0350(0x0020) (Net)
	struct FIncNetArray                                ItemListNetCache;                                         // 0x0370(0x0020)
	TMap<int, struct FBattleItemData>                  CacheBattleItemMap;                                       // 0x0390(0x0050) (ZeroConstructor)
	TArray<struct FItemDefineID>                       BroadcastInsertItemList;                                  // 0x03E0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FItemDefineID>                       BroadcastUpdateItemList;                                  // 0x03F0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FItemDefineID>                       BroadcastDeleteItemList;                                  // 0x0400(0x0010) (ZeroConstructor, Transient)
	bool                                               AutoEquipAim;                                             // 0x0410(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bForceAutoEquipAim;                                       // 0x0411(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0412(0x0006) MISSED OFFSET
	TArray<class UItemHandleBase*>                     ItemHandleList;                                           // 0x0418(0x0010) (ZeroConstructor)
	TMap<struct FItemDefineID, class UItemHandleBase*> ItemHandleMap;                                            // 0x0428(0x0050) (ZeroConstructor)
	int                                                CapacityThreshold;                                        // 0x0478(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Capacity;                                                 // 0x047C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OccupiedCapacity;                                         // 0x0480(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SafetyBoxCapacity;                                        // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SafetyBoxOccupiedCapacity;                                // 0x0488(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x048C(0x0018) MISSED OFFSET
	int                                                virtualitemid;                                            // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET
	bool                                               IsForbidAutoEquipAttachments;                             // 0x04B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04B1(0x0007) MISSED OFFSET
	TArray<int>                                        NeedToShowTypeList;                                       // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bVerifyWeaponPackageData;                                 // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableBackpackRepActor;                                  // 0x04C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x04CA(0x0006) MISSED OFFSET
	TArray<int>                                        ForceInBackpackMeelWeaponList;                            // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bShowBounty;                                              // 0x04E0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    BackpackShowBountyDelegate;                               // 0x04E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData09[0x8];                                       // 0x04F8(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    ItemChangeAreaDelegate;                                   // 0x0500(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	TMap<struct FString, class UObject*>               ProxyMap;                                                 // 0x0510(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.BackpackComponent");
		return pStaticClass;
	}


	bool UseItem(const struct FItemDefineID& DefineID, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason);
	float UpdateStoreAreaOccupiedCapacity(EItemStoreArea InItemStoreArea, float* StoreAreaOccupiedCapacity);
	void UpdateOccupiedCapacity();
	float UpdateCapacity();
	void UnlockUpdateItemListReceive();
	void TryMergeItemHandles(const struct FItemDefineID& DefineID, EItemStoreArea InItemStoreArea);
	int TakeItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandleDrop);
	bool SwapItem(const struct FItemDefineID& DefineID1, const struct FItemDefineID& DefineID2);
	void SetForceAutoEquipAim(bool bInAutoEquipAim);
	void ServerSetShowBounty(bool bInShowBounty);
	void ServerSetDropMeelWeapon(bool NewValue);
	void ServerSetCustomAccessories(int WeaponItemId, int Index, int ItemId, bool bIsSetOrRemove);
	void ServerEnableItem(const struct FItemDefineID& DefineID, bool bUse);
	int ReturnItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandlePickup);
	bool RemoveItemHandle(const struct FItemDefineID& DefineID);
	void ReceiveItemList();
	void ReceiveCapacity();
	int PreCheckCanPickupBagAvatar(class UBattleItemHandleBase* NewHandle, class UBattleItemHandleBase* OldHandle, EBattleItemUseReason reson);
	void PostItemHandleEquippingState(const struct FItemDefineID& DefineID, bool bEquipping);
	bool PickupItemFromWrapperDetail(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType);
	bool PickUpItem_Default(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	bool PickupItem(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType);
	void PickupBattleItemOnPlane();
	bool PickItem_IntoSafetyBox(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	bool PickItem_IntoBackpack(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	void OnRep_specialCountLimit();
	void OnRep_ItemListNet();
	void OnRep_CoinsNum();
	void OnRep_Capacity();
	void NotifyItemUpdated(const struct FItemDefineID& DefineID);
	void NotifyItemRemoved(const struct FItemDefineID& DefineID);
	void NotifyItemListUpdated();
	void NotifyCapacityUpdated();
	class UBattleItemHandleBase* NewItemHandle(const struct FItemDefineID& DefineID);
	struct FItemDefineID NewItemDefineID(const struct FItemDefineID& DefineID);
	void ModifyItemHandleEquippingState(class UItemHandleBase* ItemHandle, bool bEquipping);
	void ModifyItemHandleCount(class UItemHandleBase* ItemHandle, int Count);
	void ModifyAutoPickClipType(int InAutoPickClipType);
	void ModifyAimNotAutoUse(bool bAdd);
	void LockUpdateItemListReceive();
	struct FBattleItemData ItemNet2Data(const struct FNetArrayUnit& NetItem);
	bool IsNeedToShowInBackpack(int TypeDefineID);
	bool IsItemListUpdatedHasSomeItemTypes(TArray<int> ItemTypes);
	bool IsItemListUpdatedHasSomeItemSubTypes(TArray<int> ItemSubTypes);
	bool IsItemListUpdatedHasSomeItems(TArray<int> ItemTypeSpecificIDs);
	bool IsItemListUpdatedHasOneItemType(int itemType);
	bool IsItemListUpdatedHasOneItemSubType(int ItemSubType);
	bool IsItemListUpdatedHasOneItem(int ItemTypeSpecificID);
	bool IsItemExist(const struct FItemDefineID& DefineID);
	bool IsEnableWeaponAttachmentBindToWeapon();
	bool IsEnableBackpackRepActor();
	bool IsCustomIgnoreAccessories(int WeaponId, int Index);
	bool IsCustomAccessories(int WeaponId, int ItemId);
	bool IsBackPackContainItemId(int ItemId);
	bool IsAutoUse(int ItemId);
	bool HasUnEquipItemByDefindIdRange(int LowValue, int HighValue);
	bool HasTagSub(int ItemId, const struct FName& TagName);
	bool HasItemBySubType(int SubType);
	bool HasItemByDefineID(const struct FItemDefineID& DefineID);
	bool HasItemByDefindIdRange(int LowValue, int HighValue);
	TArray<int> HasAllItem(TArray<struct FBattleItemData> ItemDataArray, bool bExcludeEquippingItem);
	void HandleDropInDisuse(const struct FItemDefineID& DefineID, class UBattleItemHandleBase* ItemHandle, EBattleItemDisuseReason Reason, float OccupiedCapacityBeforeDisuse);
	class UWorld* GetWorld_BP();
	int GetUnEquipItemNumByItemId(int ItemId);
	struct FSpecialPickInfo GetSpecialItemNow(const struct FItemDefineID& DefineID);
	struct FSpecialPickInfo GetSpecialItemBefore(int ItemResId);
	float GetSafetyBoxCapacity();
	struct FBattleItemData GetLeastElectrictyBattleItemData(const struct FItemDefineID& DefineID, EBattleItemAdditionalDataType AdditionalDataNameType);
	int GetItemSubType(int ItemId);
	TArray<struct FBattleItemData> GetItemListBySpecialID(TArray<int> SpecialIDArray, bool bIgnoreEquipping, EItemStoreArea InItemStoreArea);
	TArray<struct FBattleItemData> GetItemListByDefineID(const struct FItemDefineID& DefineID);
	TMap<struct FItemDefineID, class UItemHandleBase*> GetItemHandleMap();
	TArray<class UItemHandleBase*> GetItemHandleList();
	int GetItemCountByType(int InItemType);
	int GetItemCountByItemSpecialID(int InItemSpecialID);
	struct FBattleItemData GetItemByDefineID(const struct FItemDefineID& DefineID);
	int GetItemAttrsFlag(int ItemId);
	float GetItemAssociateWeights(const struct FBattleItemData& InItemData);
	struct FBattleItemData GetFirstItemBySubType(int SubType);
	struct FBattleItemData GetFirstItemByDefineIDIgnoreInstance(const struct FItemDefineID& DefineID);
	struct FBattleItemFeatureData GetBattleItemFeatureDataByDefineID(const struct FItemDefineID& DefineID);
	TArray<struct FBattleItemData> GetAllItemList(EItemStoreArea InItemStoreArea);
	EBattleItemClientPickupType GetAIPickupType(int ItemId);
	void ForceNetUpdate();
	bool DropItem(const struct FItemDefineID& DefineID, int Count, EBattleItemDropReason Reason);
	bool DisuseItem(const struct FItemDefineID& DefineID, EBattleItemDisuseReason Reason);
	class UBattleItemHandleBase* CreateItemHandleInternal(const struct FItemDefineID& DefineID);
	class UItemHandleBase* CreateItemHandle(const struct FItemDefineID& DefineID);
	int ConsumeItem(const struct FItemDefineID& DefineID, int Count);
	void ClientBroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, EBattleItemOperationFailedReason FailedReason);
	void ClientBroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason);
	void ClientBroadcastItemChangeAreaDelegate(int TypeSpecificID, EBattleItemChangeAreaType OperationType, int Num, bool bToSafeBox);
	int CheckSpecialMaxCountForItem(const struct FItemDefineID& DefineID, int Count);
	bool CheckSkillPropItemCanBePickup(class UBackpackComponent* BackpackComp, const struct FItemDefineID& DefineID);
	bool CheckPickUpItemDefaultSuccess(const struct FItemDefineID& DefineID, bool bPickupSucc, bool bAutoEquip);
	int CheckLeftLimitCountForItem(int InItemID, int InCount);
	void CheckItemEmptyInBackpack(int InItemID);
	bool CheckItemAttrsFlag(int ItemId, EItemAttrs ItemAttrEnum);
	int CheckCapacityForItem(const struct FItemDefineID& DefineID, int Count, EItemStoreArea InItemStoreArea);
	bool ChangeItemStoreAreaNew(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
	bool ChangeItemStoreArea(const struct FItemDefineID& DefineID, int InItemNum, EItemStoreArea InItemStoreArea);
	bool CanDisuseToBackpack(const struct FItemDefineID& DefineID);
	bool CacheItemAssociationBeforeDisuse(const struct FItemDefineID& DefineID, EBattleItemDisuseReason Reason);
	void BroadcastItemOperCountDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, int Count);
	void BroadcastItemOperationInfoDelegate(const struct FItemOperationInfo& ItemOperationInfo);
	void BroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, EBattleItemOperationFailedReason FailedReason);
	void BroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType OperationType, unsigned char Reason);
	void BroadcastItemChangeAreaDelegate(int TypeSpecificID, EBattleItemChangeAreaType OperationType, int Num, bool bToSafeBox);
	bool AlternativePickupItem(struct FItemDefineID* DefineID);
	bool AddItemHandle(const struct FItemDefineID& DefineID, class UItemHandleBase* ItemHandle);
	void AddBattleItemPickupOnPlane(EBattleItemPickupReason Reason, EBattleItemClientPickupType BattleItemClientPickupType, struct FItemDefineID* DefineID, struct FBattleItemPickupInfo* PickupInfo);
};


// Class Gameplay.BackpackRepActor
// 0x0028 (0x0470 - 0x0448)
class ABackpackRepActor : public APlayerReliableSequentialSyncActor
{
public:
	class UBackpackComponent*                          BackpackComp;                                             // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FIncNetArray                                ItemListNet;                                              // 0x0450(0x0020) (Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.BackpackRepActor");
		return pStaticClass;
	}


	void OnRep_ItemListNet();
	void NotifyItemUpdated(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData);
	void NotifyItemRemoved(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData);
	void NotifyItemEmpty(int Slack);
	void NotifyItemAdded(const struct FItemDefineID& DefineID, const struct FBattleItemData& ItemData);
};


// Class Gameplay.ItemActorComponent
// 0x0000 (0x01D8 - 0x01D8)
class UItemActorComponent : public ULuaActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemActorComponent");
		return pStaticClass;
	}

};


// Class Gameplay.BaseGeneratorComponent
// 0x0100 (0x02D8 - 0x01D8)
class UBaseGeneratorComponent : public UItemActorComponent
{
public:
	struct FString                                     ItemTableName;                                            // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             ItemSpawnTableList;                                       // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UUAEDataTable*                               ItemTable;                                                // 0x01F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsWriteStatisticsToLog;                                   // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0201(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<ESpotGroupType>, struct FGroupSpotComponentArray> AllGroupSpots;                                            // 0x0208(0x0050) (ZeroConstructor)
	TArray<class USpotSceneComponent*>                 AllSpotsToTick;                                           // 0x0258(0x0010) (ExportObject, ZeroConstructor)
	TMap<int, struct FWorldTileSpotArray>              WorldTileSpots;                                           // 0x0268(0x0050) (ZeroConstructor)
	struct FString                                     CookedFilePath;                                           // 0x02B8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FString>                             CookedFileAddPathArray;                                   // 0x02C8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.BaseGeneratorComponent");
		return pStaticClass;
	}


	void RegisterWorldTileSpot(class USpotSceneComponent* Spot);
	void RegisterSpotComponentToTick(class USpotSceneComponent* SpotComponent);
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	void GeneratorWorldTileSpots(struct FWorldTileSpotArray* SpotArray);
	void GenerateSpots();
	void GenerateSpotOnTick(float DeltaTime);
	class AActor* GeneratePickupActor(class UClass* ActorClass, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, const struct FItemGenerateSpawnClass& ItemData, struct FVector* ActorLocation, struct FRotator* ActorRotator);
	void CheckTileLevelsVisible();
};


// Class Gameplay.ConfigInterface
// 0x0000 (0x0028 - 0x0028)
class UConfigInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ConfigInterface");
		return pStaticClass;
	}

};


// Class Gameplay.DynamicSpotContainerComponent
// 0x0010 (0x01E8 - 0x01D8)
class UDynamicSpotContainerComponent : public ULuaActorComponent
{
public:
	TArray<unsigned char>                              SerializeData;                                            // 0x01D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.DynamicSpotContainerComponent");
		return pStaticClass;
	}


	void UseSerializeData();
};


// Class Gameplay.FoliageFakeCollision
// 0x0008 (0x0440 - 0x0438)
class AFoliageFakeCollision : public AActor
{
public:
	class UCapsuleComponent*                           CollisionComponent;                                       // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.FoliageFakeCollision");
		return pStaticClass;
	}

};


// Class Gameplay.GameModeConfigComponent
// 0x0018 (0x0130 - 0x0118)
class UGameModeConfigComponent : public UActorComponent
{
public:
	int                                                appleGrenadeID;                                           // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                appleGrenadeCount;                                        // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        forbitPickItemTypeList;                                   // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GameModeConfigComponent");
		return pStaticClass;
	}

};


// Class Gameplay.PatchTableUtils
// 0x0000 (0x0028 - 0x0028)
class UPatchTableUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.PatchTableUtils");
		return pStaticClass;
	}

};


// Class Gameplay.GameModeStatisticsComponent
// 0x0000 (0x0118 - 0x0118)
class UGameModeStatisticsComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GameModeStatisticsComponent");
		return pStaticClass;
	}

};


// Class Gameplay.GameplayDelegates
// 0x0378 (0x03A8 - 0x0030)
class UGameplayDelegates : public UGameInstanceSubsystem
{
public:
	struct FScriptMulticastDelegate                    GameModeStateChangeEvent;                                 // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ActorOverlapEvent;                                        // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ActorDieEvent;                                            // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PawnDieEvent;                                             // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterDieEvent;                                        // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EnterAreaTriggerEvent;                                    // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ExitAreaTriggerEvent;                                     // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PawnPickupItemEvent;                                      // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    VehicleOverlapEvent;                                      // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    InteractiveActorBeginEvent;                               // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    InteractiveActorDoneEvent;                                // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterStartSkill;                                      // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterStopSkill;                                       // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterStartSkillPhase;                                 // 0x0100(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterStopSkillPhase;                                  // 0x0110(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterStartSkillCooldown;                              // 0x0120(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterStopSkillCooldown;                               // 0x0130(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterAddSkill;                                        // 0x0140(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterRemoveSkill;                                     // 0x0150(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerJoinEvent;                                          // 0x0160(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerExitEvent;                                          // 0x0170(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerRealExitEvent;                                      // 0x0180(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ProjectileStopEvent;                                      // 0x0190(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ProjectileBounceEvent;                                    // 0x01A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DecoraterActorSpawnEvent;                                 // 0x01B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    RemoteEvent;                                              // 0x01C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerDamageQueryEvent;                                   // 0x01D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PawnNearDeathEvent;                                       // 0x01E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PawnNearDeathOrRescuedEvent;                              // 0x01F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAIPawnSpawnEvent;                                       // 0x0200(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCharacterRespawnEvent;                                  // 0x0210(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ChooseEnemyLoseTargetEvent;                               // 0x0220(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FindEnemyWarningEvent;                                    // 0x0230(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ModFindEnemyWarningEvent;                                 // 0x0240(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TaskInterActiveActorBeginEvent;                           // 0x0250(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TaskInterActiveActorDoneEvent;                            // 0x0260(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LevelAddedEvent;                                          // 0x0270(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DSLuaGMEvent;                                             // 0x0280(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWeaponFireEvent;                                        // 0x0290(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerPickUpItemEvent;                                    // 0x02A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerDropItemEvent;                                      // 0x02B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerUseItemEvent;                                       // 0x02C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerDisUseItemEvent;                                    // 0x02D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerSwapItemEvent;                                      // 0x02E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerEquipItemEvent;                                     // 0x02F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerUnEquipItemEvent;                                   // 0x0300(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerConsumeEvent;                                       // 0x0310(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PawnChangeTeamEvent;                                      // 0x0320(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayReplayBegin;                                        // 0x0330(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayReplayEnd;                                          // 0x0340(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerEventForReplay;                                     // 0x0350(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0360(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GameplayDelegates");
		return pStaticClass;
	}

};


// Class Gameplay.GeneratorActorAIInterface
// 0x0000 (0x0028 - 0x0028)
class UGeneratorActorAIInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GeneratorActorAIInterface");
		return pStaticClass;
	}


	void RegisterAIPickupPoint(const struct FVector& BuildingLoc, const struct FVector& SpotLoc, class AActor* PickUpActor);
};


// Class Gameplay.GeneratorActorInterface
// 0x0000 (0x0028 - 0x0028)
class UGeneratorActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GeneratorActorInterface");
		return pStaticClass;
	}


	void SetExtendData(const struct FString& Key, int Value);
	void SetAttachedActor(class AActor* AttachedActor);
	void InitDataNew(int ItemCount, const struct FString& Value, const struct FString& Category, bool RepeatGenerateItem, int SpotDataIndex);
	void InitData(class UItemSpotSceneComponent* ItemSpotSceneComponent, int ItemCount, const struct FString& Value, const struct FString& Category, bool RepeatGenerateItem);
	int GetItemId();
};


// Class Gameplay.GeneratorVehicleInterface
// 0x0000 (0x0028 - 0x0028)
class UGeneratorVehicleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GeneratorVehicleInterface");
		return pStaticClass;
	}


	void SetSafeSpawn(bool ab_IsSafeSpawn);
	void ServerDetachAllPlayerFromSeatByGenerator(bool bMustExit, bool bApplyVehicleVelocity);
	void InitVehicle(int FuelPercent, bool bEngineOn, bool bInHouse);
	void CheckSpawnLocation(const struct FVector& SpawnLocation, float MaxSpawnDistance);
};


// Class Gameplay.GlobalConfigActor
// 0x0010 (0x0448 - 0x0438)
class AGlobalConfigActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	bool                                               bInitComponents;                                          // 0x0440(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0441(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GlobalConfigActor");
		return pStaticClass;
	}


	void Init();
};


// Class Gameplay.ImplItemRegionInterface
// 0x0000 (0x0028 - 0x0028)
class UImplItemRegionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ImplItemRegionInterface");
		return pStaticClass;
	}


	struct FItemRegionCircle GetRegion(const struct FString& Tag);
};


// Class Gameplay.ItemBandSpotSceneComponent
// 0x0040 (0x03A0 - 0x0360)
class UItemBandSpotSceneComponent : public USpotSceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0360(0x0008) MISSED OFFSET
	struct FString                                     SpotItemCategory;                                         // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ConditionItemValue;                                       // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ConditionItemCategory;                                    // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemBandSpotSceneComponent");
		return pStaticClass;
	}

};


// Class Gameplay.ItemConfigActorComponent
// 0x0060 (0x0178 - 0x0118)
class UItemConfigActorComponent : public UActorComponent
{
public:
	TArray<struct FItemSpawnData>                      ItemSpawnDatas;                                           // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, struct FGroupTypeSceneComponents>        AllSpotGroups;                                            // 0x0128(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemConfigActorComponent");
		return pStaticClass;
	}


	void RegisterGroupSceneComponent(int GroupType, class USceneComponent* GroupSceneComponent);
	TArray<struct FItemSpawnClass> RandomItemSpawnClass(const struct FString& ItemValue, const struct FString& ItemCategory);
	TArray<class USceneComponent*> RandomGroupSceneComponents(int GroupType, int Persent);
	class USceneComponent* RandomGroupSceneComponent(TArray<class USceneComponent*> AllGroups);
	class UClass* LoadActorClass(const struct FString& Path);
	TArray<struct FItemSpawnClass> GetItemSpawnClass(const struct FItemSpawnData& Data);
};


// Class Gameplay.ItemCountArea
// 0x0008 (0x0440 - 0x0438)
class AItemCountArea : public AActor
{
public:
	class UBoxComponent*                               Area;                                                     // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemCountArea");
		return pStaticClass;
	}


	bool IsInArea(struct FVector* Position);
};


// Class Gameplay.ItemGenerateInterface
// 0x0000 (0x0028 - 0x0028)
class UItemGenerateInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemGenerateInterface");
		return pStaticClass;
	}

};


// Class Gameplay.ItemGeneratorComponent
// 0x06C0 (0x0998 - 0x02D8)
class UItemGeneratorComponent : public UBaseGeneratorComponent
{
public:
	struct FVector                                     ItemGenerateOffset;                                       // 0x02D8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<ESpotGroupType>                        BornIslandGroupType;                                      // 0x02E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStatisticsValid;                                         // 0x02E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02E6(0x0002) MISSED OFFSET
	struct FItemGenerateStatisticsData                 ItemStatisticsData;                                       // 0x02E8(0x0110)
	unsigned char                                      UnknownData01[0x50];                                      // 0x03F8(0x0050) UNKNOWN PROPERTY: SetProperty Gameplay.ItemGeneratorComponent.IgnoreItemClassPathSet
	TArray<struct FSpotGroupProperty>                  SpotGroupPropertys;                                       // 0x0448(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               UseSpotGroupPropertysEx;                                  // 0x0458(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseAreaID;                                                // 0x0459(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x045A(0x0006) MISSED OFFSET
	TArray<struct FString>                             AreaIDList;                                               // 0x0460(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FItemRegionCircle>                   ReplacedGeneratorRegionMap;                               // 0x0470(0x0010) (ZeroConstructor)
	TArray<struct FSpotGroupProperty>                  SpotGroupPropertysEx;                                     // 0x0480(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FExtraItemSpawn>                     ExtraSpawnItemsList;                                      // 0x0490(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<TEnumAsByte<ESpotGroupType>, struct FSpotGroupProperty> SpotGroupPropertysDic;                                    // 0x04A0(0x0050) (ZeroConstructor)
	struct FSpotGroupProperty                          DefaultSpotGroupProperty;                                 // 0x04F0(0x0028)
	class UCurveFloat*                                 SpotRateCurve;                                            // 0x0518(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ItemRateCurve;                                            // 0x0520(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, float>                        CategoryRates;                                            // 0x0528(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, struct FItemGenerateSpawnDataArray> ItemGenerateSpawnDatas;                                   // 0x0578(0x0050) (ZeroConstructor)
	TArray<class AActor*>                              BornIslandItems;                                          // 0x05C8(0x0010) (ZeroConstructor)
	TArray<class UItemGroupSpotSceneComponent*>        AllValidGroups;                                           // 0x05D8(0x0010) (ExportObject, ZeroConstructor)
	bool                                               bIsGenerateBornIslandItems;                               // 0x05E8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGenerateMainlandItems;                                 // 0x05E9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGenerateWorldTileItems;                                // 0x05EA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x05EB(0x0005) MISSED OFFSET
	struct FDateTime                                   GenerateBornIslandTime;                                   // 0x05F0(0x0008)
	struct FDateTime                                   GenerateMainlandTime;                                     // 0x05F8(0x0008)
	bool                                               bUseLocalSpotFile;                                        // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x57];                                      // 0x0601(0x0057) MISSED OFFSET
	TArray<struct FRepeatItemSpotData>                 AllRepeatItemSpotData;                                    // 0x0658(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0668(0x0010) MISSED OFFSET
	TArray<struct FItemGenerateSpawnClass>             AllItemSpotDataToTick;                                    // 0x0678(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x50];                                      // 0x0688(0x0050) MISSED OFFSET
	struct FString                                     CookedBandFilePath;                                       // 0x06D8(0x0010) (Edit, ZeroConstructor)
	bool                                               bIsAreaItemLimit;                                         // 0x06E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x06E9(0x0007) MISSED OFFSET
	TArray<struct FAreaItemsLimitEdit>                 AreaItemsLimit;                                           // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FRegionID, struct FAreaItemsLimit>     AreaItemsLimitMaps;                                       // 0x0700(0x0050) (ZeroConstructor)
	bool                                               bUseDynamicSpotConfig;                                    // 0x0750(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0751(0x0007) MISSED OFFSET
	TArray<struct FDynamicSpotConfig>                  DynamicSpotConfigs;                                       // 0x0758(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData09[0x50];                                      // 0x0768(0x0050) MISSED OFFSET
	int                                                RandomSpotCountPerTick;                                   // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x54];                                      // 0x07BC(0x0054) MISSED OFFSET
	struct FScriptMulticastDelegate                    PreCalculateCompleted;                                    // 0x0810(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bCheckPreCalculateComplete;                               // 0x0820(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePrimeItemCircle;                                   // 0x0821(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x6];                                       // 0x0822(0x0006) MISSED OFFSET
	TArray<struct FPrimeItemCircleConfig>              PrimeItemCircleConfigs;                                   // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData12[0x30];                                      // 0x0838(0x0030) MISSED OFFSET
	TMap<struct FVector, class UUAESpotGroupObject*>   SpotGroupObjectsMapByLoc;                                 // 0x0868(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData13[0xA1];                                      // 0x08B8(0x00A1) MISSED OFFSET
	bool                                               bRemovableMode;                                           // 0x0959(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x095A(0x0002) MISSED OFFSET
	int                                                RemoveGeneratedItemPerTick;                               // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RemoveDropGroundItemPerTick;                              // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAddHouseActorSerializeData;                              // 0x0964(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x33];                                      // 0x0965(0x0033) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemGeneratorComponent");
		return pStaticClass;
	}


	void WriteItemSpotStatisticsDatas();
	void WriteItemClassStatisticsDatas_V15();
	void WriteItemClassStatisticsDatas();
	void WriteGroupStatisticsDatas();
	void WriteBuildingStatisticsDatas();
	void WriteAreaItemStatisticsDatas();
	void WriteAllStatisticsDatasToLog();
	void WriteAllStatisticsDatas();
	bool TryLoadItemSpawnTableByTableMgr(const struct FString& tableName);
	void SetRandomSeed(int Seed);
	void SetCatetoryRate(TMap<struct FString, float> Rates);
	bool RemoveSpotInfo(bool bFirstEnterState);
	void RemoveItemOnTick();
	bool RemoveDropGround(bool bFirstEnterState);
	void RegisterItemGenerateSpawnData(const struct FItemGenerateSpawnData& Data);
	void RegisterBornIslandItem(class AActor* Item);
	class UUAEDataTable* ReadItemGenerateTable(const struct FString& TablePath);
	void ReAddAllSpot();
	class UItemGroupSpotSceneComponent* RandomSingleGroup(const struct FSpotGroupProperty& GroupProperty, TArray<class UGroupSpotSceneComponent*>* Groups);
	void RandomGroupsByType(const struct FSpotGroupProperty& GroupProperty);
	void RandomBornIslandGroups();
	void OnAsyncLoadItemClassFinish(const struct FItemGenerateSpawnClass& SpawnClass);
	void LuaCustomFunctionAfterGenerate(class AActor* ItemActor, struct FItemGenerateSpawnClass* SpawnClass);
	bool LuaAddRandomItemClassArray(const struct FItemGenerateSpawnClass& SpawnClass);
	void LoadItemGenerateTable();
	bool IsCatetoryEnabled();
	void InitCatetorys();
	void InitCategoryEx();
	TArray<struct FVector> GMTrackGroundCheck(class UClass* CheckClass, float FloatUp, float FloatDown, float SinkUp, float SinkTop, bool bCheckBounds);
	bool GMGenerateAllSpot(const struct FString& ItemPath);
	void GMEnableRefreshAllSpotWithSeed(int Seed);
	TArray<struct FString> GetSpotTags();
	TArray<struct FVector> GetSpotLocsByTag(const struct FString& ExTag);
	int GetSpotLocInPolygon(TArray<struct FVector> Anchors, int RandomNum, TArray<struct FVector>* OutLocs);
	int GetSpotLocInCircle(const struct FVector& Center, float Radius, int RandomNum, TArray<struct FVector>* OutLocs);
	struct FSpotGroupProperty GetSpotGroupPropertyByGroupType(TEnumAsByte<ESpotGroupType> SpotGroupType);
	bool GetRandomItemClassArray(bool RepeatGenerateItem, class UItemSpotSceneComponent* SpotComponent, struct FString* Value, struct FString* Category, TArray<struct FItemGenerateSpawnClass>* Results);
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	int GetItemDefineID(class UClass* PickUpClass);
	float GetCatetoryRate(const struct FString& Catetory);
	void GenerateSpotOnTick(float DeltaTime);
	void GenerateNewRandomSeed();
	struct FVector FindASpawnLoc(class UWorld* InWorld, const struct FVector& TraceStart);
	void EnableRemoveItem();
	void EnableRefreshAllSpot();
	void EnablePrimeItemPolygon(TArray<struct FVector> Anchors, int PrimeConfigIndex);
	void EnablePrimeItemCircle(const struct FVector& Center, float Radius, int PrimeConfigIndex);
	void EnableDynamicSpotConfigByIndex(int DynamicIndex);
	void DoPickUp(int ItemSpotDataIndex, const struct FString& Value, const struct FString& Category);
	void DeleteBornIslandItems();
	bool CheckShouldGenerateItem(int ItemId);
	void CheckRecoverItems();
	bool CheckInPolygon(const struct FVector& Pos, TArray<struct FVector> Anchors);
	bool CheckInCircle(const struct FVector& Pos, const struct FVector& Center, float* Radius);
	void AddIgnoreItemClassPath(TArray<struct FString> IgnoreItemClassList);
	void AddDropGround(class AActor* InActor);
};


// Class Gameplay.ItemGroupRepeatSpotComponent
// 0x00C0 (0x0410 - 0x0350)
class UItemGroupRepeatSpotComponent : public UGroupSpotSceneComponent
{
public:
	float                                              RepeatGenerateItemTimer;                                  // 0x0350(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GroupID;                                                  // 0x0354(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     GroupTag;                                                 // 0x0358(0x0010) (Edit, ZeroConstructor)
	TArray<class UItemSpotSceneComponent*>             Spots;                                                    // 0x0368(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UItemSpotSceneComponent*>             PendingGenerateSpots;                                     // 0x0378(0x0010) (ExportObject, ZeroConstructor)
	class UItemGeneratorComponent*                     ItemGenerator;                                            // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSpotGroupProperty                          SpotGroupProperty;                                        // 0x0390(0x0028)
	TMap<TEnumAsByte<ESpotType>, struct FSpotTypeProperty> SpotTypePropertys;                                        // 0x03B8(0x0050) (ZeroConstructor)
	bool                                               bInitialize;                                              // 0x0408(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // 0x0409(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x040A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemGroupRepeatSpotComponent");
		return pStaticClass;
	}


	void Stop();
	void SetPropertySpotAll();
	class AUAEGameMode* GetGameMode();
	void GenerateSpotAll();
	void ClearAllSpotItems();
};


// Class Gameplay.LuaBTTaskBase
// 0x0098 (0x0108 - 0x0070)
class ULuaBTTaskBase : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0070(0x0058) MISSED OFFSET
	class AAIController*                               AIOwner;                                                  // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      ActorOwner;                                               // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00D8(0x0018) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x00F0(0x0001) (Edit, DisableEditOnTemplate)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.LuaBTTaskBase");
		return pStaticClass;
	}


	void SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID);
	void SetFinishOnMessage(const struct FName& MessageName);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};


// Class Gameplay.MissionBoardComponent
// 0x0060 (0x0178 - 0x0118)
class UMissionBoardComponent : public UActorComponent
{
public:
	struct FMissionBoardConfig                         Config;                                                   // 0x0118(0x0050) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FScriptMulticastDelegate                    OnRepConfigDelegate;                                      // 0x0168(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.MissionBoardComponent");
		return pStaticClass;
	}


	void OnRep_Config();
	int GetUtcLeftSecondsByConfig();
};


// Class Gameplay.NetworkExceptionHandleSubsystem
// 0x0010 (0x0040 - 0x0030)
class UNetworkExceptionHandleSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.NetworkExceptionHandleSubsystem");
		return pStaticClass;
	}

};


// Class Gameplay.NetworkReportActor
// 0x0050 (0x0488 - 0x0438)
class ANetworkReportActor : public AActor
{
public:
	int                                                MaxCacheLossRateArrayNum;                                 // 0x0438(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FString                                     InPacketLossRateArrayStr;                                 // 0x0440(0x0010) (ZeroConstructor)
	struct FString                                     OutPacketLossRateArrayStr;                                // 0x0450(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0460(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.NetworkReportActor");
		return pStaticClass;
	}


	void RPC_Server_SyncClientPkgLossArrayInfo(TArray<unsigned char> InLoss, TArray<unsigned char> OutLoss);
	void ResetAllNetworkData();
};


// Class Gameplay.NewWeatherComponent
// 0x0008 (0x01E0 - 0x01D8)
class UNewWeatherComponent : public ULuaActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.NewWeatherComponent");
		return pStaticClass;
	}


	void LuaInit();
};


// Class Gameplay.UAEAdvertisementActor
// 0x00E8 (0x0530 - 0x0448)
class AUAEAdvertisementActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0448(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x04A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bMultiAdvertisement;                                      // 0x04B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04B1(0x0007) MISSED OFFSET
	TMap<unsigned char, class UTexture2D*>             IdTextureMap;                                             // 0x04B8(0x0050) (BlueprintVisible, ZeroConstructor)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0508(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     StaticMeshPath;                                           // 0x0510(0x0010) (Net, ZeroConstructor)
	class UFrontendHUD*                                FrontendHUD;                                              // 0x0520(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0528(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              NetCullDistance;                                          // 0x052C(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEAdvertisementActor");
		return pStaticClass;
	}


	void SetStaticMeshPath(const struct FString& InMeshPath);
	void SetStaticMesh(class UStaticMesh* InStaticMesh);
	void SetScale(const struct FVector& inScale);
	void SetId(int InputID);
	void SetCulDistance(float CulDistance);
	void RequestHttpImageByUrl(const struct FString& PicUrl);
	void ReplaceTexture(class UTexture2D* Texture);
	void OnRequestImgSuccess(class UTexture2D* Texture, const struct FString& RequestedURL);
	void OnRep_MeshPath();
	void OnRep_Id();
	void OnClientLoadMesh();
	void InitImageDownloadUtil();
};


// Class Gameplay.RegionableAdvertisementActor
// 0x0010 (0x0540 - 0x0530)
class ARegionableAdvertisementActor : public AUAEAdvertisementActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0530(0x0008) MISSED OFFSET
	ERegionSizeIndex                                   RegionSize;                                               // 0x0538(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRegionStatic;                                            // 0x0539(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x053A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.RegionableAdvertisementActor");
		return pStaticClass;
	}


	void ReceivedPlayerActiveRegionsChanged(bool bEnter);
};


// Class Gameplay.SpotGeneratorStruct
// 0x0000 (0x0028 - 0x0028)
class USpotGeneratorStruct : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.SpotGeneratorStruct");
		return pStaticClass;
	}

};


// Class Gameplay.TriggerActionSpawnItemInterface
// 0x0000 (0x0028 - 0x0028)
class UTriggerActionSpawnItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.TriggerActionSpawnItemInterface");
		return pStaticClass;
	}

};


// Class Gameplay.UAEActorMap
// 0x0050 (0x0488 - 0x0438)
class AUAEActorMap : public AInfo
{
public:
	TMap<struct FVector, class AActor*>                ActorsMap;                                                // 0x0438(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEActorMap");
		return pStaticClass;
	}

};


// Class Gameplay.UAEBuffApplierActor
// 0x0008 (0x0440 - 0x0438)
class AUAEBuffApplierActor : public AActor
{
public:
	class AController*                                 InstigatorController;                                     // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEBuffApplierActor");
		return pStaticClass;
	}


	class AController* GetTheInstigatorController();
};


// Class Gameplay.AnimInstanceCacheCustomAnimInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimInstanceCacheCustomAnimInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.AnimInstanceCacheCustomAnimInterface");
		return pStaticClass;
	}

};


// Class Gameplay.UAECharAnimListCompBase
// 0x0010 (0x0220 - 0x0210)
class UUAECharAnimListCompBase : public UUAEAnimListComponentBase
{
public:
	TArray<struct FCharacterAsynLoadedTypeAnim>        CharacterAsynLoadedAnims;                                 // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAECharAnimListCompBase");
		return pStaticClass;
	}

};


// Class Gameplay.UAEChaCustomAnimListComponent
// 0x00E8 (0x0308 - 0x0220)
class UUAEChaCustomAnimListComponent : public UUAECharAnimListCompBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	bool                                               bLoadAnimOnBeginPlay;                                     // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0229(0x0003) MISSED OFFSET
	int                                                CharacterAnimOverrideType;                                // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, struct FName>                 CharAnimEnumName;                                         // 0x0230(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharCustomAnimData>                 CharCustomAnimDataList;                                   // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FName>                 CharFeatureAnimInstanceEnumName;                          // 0x0290(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharCustomAnimInstacneData>         CharCustomAnimInstanceDataList;                           // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x18];                                      // 0x02F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEChaCustomAnimListComponent");
		return pStaticClass;
	}


	void SetCharacterAnimOverrideType(int AnimOverrideType);
	void ReleaseCustomAnimAssets();
	bool HasAnimAsyncLoadingFinished();
	struct FString GetOwnerName();
	class UClass* GetCharacterCustomAnimInstance(const struct FString& AnimName);
	class UAnimationAsset* GetCharacterCustomAnim(const struct FString& AnimName);
	class UBlendSpace1D* GetBlendSpace1D(const struct FString& AnimAssetName);
	class UBlendSpace* GetBlendSpace(const struct FString& AnimAssetName);
	class UAnimSequence* GetAnimSequence(const struct FString& AnimAssetName);
	class UAnimMontage* GetAnimMontage(const struct FString& AnimAssetName);
	class UAimOffsetBlendSpace* GetAimOffsetBlendSpace(const struct FString& AnimAssetName);
	void CallRequestLoadAnimAssets();
};


// Class Gameplay.AnimInstanceCacheParachuteAnimInterface
// 0x0000 (0x0028 - 0x0028)
class UAnimInstanceCacheParachuteAnimInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.AnimInstanceCacheParachuteAnimInterface");
		return pStaticClass;
	}

};


// Class Gameplay.UAEChaParachuteAnimListComponent
// 0x0038 (0x0258 - 0x0220)
class UUAEChaParachuteAnimListComponent : public UUAECharAnimListCompBase
{
public:
	TArray<struct FCharParachuteAnimData>              CharParachuteAnimDataList;                                // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0230(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEChaParachuteAnimListComponent");
		return pStaticClass;
	}


	void ReleaseParachuteAnimAssets();
	void OnParachuteAnimAsyncLoadingFinished(const struct FString& AnimLoaded);
	void OnAnimListAsyncLoadingFinished();
	bool HasAnimAsyncLoadingFinished();
	void HandleAsyncLoadingFinishedEvent();
	struct FString GetOwnerName();
	class UAnimationAsset* GetCharacterParachuteAnim(TEnumAsByte<ECharacterParachuteAnimType> AnimType, int AnimOverrideType);
};


// Class Gameplay.UAECharacterAnimListComponent
// 0x00B0 (0x02D0 - 0x0220)
class UUAECharacterAnimListComponent : public UUAECharAnimListCompBase
{
public:
	TArray<struct FCharacterMovementAnimData>          CharacterMovementAnimEditList;                            // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterMovementAnimData>          CharacterFPPAnimEditList;                                 // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterJumpAnimData>              CharacterJumpEditList;                                    // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterJumpAnimData>              CharacterJumpEditListFPP;                                 // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 FallingIKCurve;                                           // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCharacterShovelAnimData>            CharacterShovelEditList;                                  // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterShovelAnimData>            CharacterShovelEditListFPP;                               // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharAnimModifyData>                 CharAnimModifyList;                                       // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterVehAnimModifyData>         CharVehAnimModifyList;                                    // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsInitByBeginPlay;                                        // 0x02A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnablePreLoadingFinish;                                   // 0x02A9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurrentIsTPP;                                             // 0x02AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CurrentHoldShield;                                        // 0x02AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	struct FGetAnimUtil                                GetAnimUtil;                                              // 0x02B0(0x0020) (Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAECharacterAnimListComponent");
		return pStaticClass;
	}


	void SetAnimListMapValueData(struct FAnimListMapValueData* AnimListValue);
	bool OnPreLoadingFinished(const struct FAsyncLoadCharAnimParams& LoadingParam);
	void OnAsyncLoadingFinishedNew2(const struct FAsyncLoadCharAnimParams& LoadingParam);
	void OnAsyncLoadingFinishedNew(const struct FAsyncLoadCharAnimParams& LoadingParam);
	void InitAnimListMap(bool IsFPP);
	TArray<struct FPlayerAnimData> GetCharacterShovelAnim();
	TArray<struct FPlayerAnimData> GetCharacterJumpAnim(TEnumAsByte<ECharacterJumpType> JumpType);
	class UAnimationAsset* GetAnimationAsset();
};


// Class Gameplay.UAECharacterAnimListSubSystem
// 0x0050 (0x0080 - 0x0030)
class UUAECharacterAnimListSubSystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAECharacterAnimListSubSystem");
		return pStaticClass;
	}

};


// Class Gameplay.UAEChaVehAnimListComponent
// 0x0030 (0x0250 - 0x0220)
class UUAEChaVehAnimListComponent : public UUAECharAnimListCompBase
{
public:
	bool                                               DefaultLoadAllAnim;                                       // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	TArray<struct FVehCharAnimData>                    VehCharAnimDataList;                                      // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0238(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEChaVehAnimListComponent");
		return pStaticClass;
	}


	void SetVehCharAnimDataList(TArray<struct FVehCharAnimData> InVehCharAnimDataList);
	void OnIdleAnimListAsyncLoadingFinished();
	void OnAnimListAsyncLoadingFinished(const struct FAsyncLoadCharVehAnimParams& LoadingParam);
	void ChangeAnimData(TArray<struct FVehCharAnimData> InAnimData);
};


// Class Gameplay.UAEIndependentSpot
// 0x0000 (0x0438 - 0x0438)
class AUAEIndependentSpot : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEIndependentSpot");
		return pStaticClass;
	}

};


// Class Gameplay.UAELevelSequenceActor
// 0x0160 (0x0638 - 0x04D8)
class AUAELevelSequenceActor : public ALevelSequenceActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x04D8(0x0058) MISSED OFFSET
	bool                                               bPlayOnServer;                                            // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	float                                              ClientSyncTime;                                           // 0x0534(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSelfTransformOrigin;                                  // 0x0538(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // 0x0539(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x053A(0x0002) MISSED OFFSET
	float                                              DestroySelfDelayTime;                                     // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInitPlayerBeforeBeginPlay;                               // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESequenceRelevantType                              RelevantType;                                             // 0x0541(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCameraOnlyOwnerUse;                                      // 0x0542(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELevelSequenceStartPlayType>           LevelSequenceStartPlayType;                               // 0x0543(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0544(0x0004) MISSED OFFSET
	TArray<struct FMovieSceneBindingOverrideData>      NetSyncBindingData;                                       // 0x0548(0x0010) (Net, ZeroConstructor)
	float                                              AuthorityStartPlayTime;                                   // 0x0558(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	struct FString                                     LevelSequenceAssetPath;                                   // 0x0560(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	TMap<struct FString, struct FString>               GreenSequenceMap;                                         // 0x0570(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x05C0(0x0008) MISSED OFFSET
	TArray<struct FSeqActorBindingData>                TrackBindingData;                                         // 0x05C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LuaFilePath;                                              // 0x05D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FLuaNetSerialization                        LuaNetSerialization;                                      // 0x05E8(0x0050) (Net)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAELevelSequenceActor");
		return pStaticClass;
	}


	void UpdateTrackBindingData();
	void UpdateSequence(const struct FString& LevelSequencePath);
	void UpdatePlayback(bool bRestoreState, bool bDisableMovementInput, bool bDisableLookAtInput, bool bHidePlayer);
	void UpdateInstanceData(const struct FVector& OffsetVector, const struct FRotator& OffsetRotation);
	void StopMontageParticle(const struct FName& SlotName);
	void Stop();
	void SetUseSelfTransformOrigin(bool bInUse);
	void SetTrackBindingInfo(TMap<struct FString, struct FString> TrackBindingInfo);
	void SetTrackBindingData(TArray<struct FSeqActorBindingData> InTrackBindingData);
	void SetNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void SetLevelSequenceAssetPath(const struct FString& InLevelSequenceAssetPath);
	void ResetNetSyncBindings();
	void ResetNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	void ReleaseCameraCutTrack();
	void ReceiveOnStop();
	void ReceiveOnPreStop();
	void ReceiveOnPlayReverse();
	void ReceiveOnPlay();
	void ReceiveOnPause();
	void ReceiveOnObjectSpawned(class UObject* InObject, const struct FGuid& InBindingID);
	void ReceiveOnFinished();
	void Play(float InPlaytime);
	void OnSequenceFinished();
	void OnRep_NetSyncBindingData();
	void OnRep_LevelSequenceAssetPath();
	void OnRep_bUseSelfTransformOrigin();
	void OnRep_AuthorityStartPlayTime();
	void OnObjectSpawnedEvent(class UObject* InObject, const struct FGuid& InBindingID, const struct FMovieSceneSequenceID& InSequenceID);
	void GoToEndAndStop();
	struct FMovieSceneObjectBindingID GetPossessableOrSpawnableByName(const struct FString& NameKeyString);
	struct FMovieSceneObjectBindingID GetFirstPossessableTrack();
	static class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* InLevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class AUAELevelSequenceActor** OutActor);
	bool CheckStartPlayValid();
	void AddNetSyncBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};


// Class Gameplay.AELobbyCharAnimListComp
// 0x0058 (0x0278 - 0x0220)
class UAELobbyCharAnimListComp : public UUAECharAnimListCompBase
{
public:
	TArray<struct FLobbyCharacterWeaponAnimData>       CharacterWeaponAnimEditList;                              // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLobbyCharacterWeaponAnimData>       AvatarSceneCharacterWeaponAnimEditList;                   // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLobbyCharacterWeaponAnimData>       LobbyWithCarCharacterWeaponAnimEditList;                  // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLobbyCharacterWeaponAnimData>       LobbySystemCharacterWeaponAnimEditList;                   // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                resultAvatarPoseIndex;                                    // 0x0260(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0264(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.AELobbyCharAnimListComp");
		return pStaticClass;
	}


	void OnAsyncLoadingFinished(const struct FLobbyAsyncLoadCharAnimParams& LoadingParam);
	void InitPendingList(TArray<struct FLobbyCharacterWeaponAnimData>* animEditList, TArray<struct FSoftObjectPath>* PendingList);
	class UAnimationAsset* GetCharacterAnim(TEnumAsByte<ELobbyCharacterPosIndex> PosIdx, TEnumAsByte<ELobbyCharacterAnimType> GenderType, int WeaponAnimType, TEnumAsByte<ECharacterShowSceneType> sceneType);
	void BuildAnimMap(TEnumAsByte<ECharacterShowSceneType> sceneType, TArray<struct FLobbyCharacterWeaponAnimData>* AnimList);
};


// Class Gameplay.UAESimpleSceneActor
// 0x0000 (0x0438 - 0x0438)
class AUAESimpleSceneActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAESimpleSceneActor");
		return pStaticClass;
	}

};


// Class Gameplay.UAESpawnActorComponent
// 0x0000 (0x0118 - 0x0118)
class UUAESpawnActorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAESpawnActorComponent");
		return pStaticClass;
	}


	class AActor* UAESpawnActor(const struct FUAESpawnActorParam& Param);
	class UClass* PrepareSpawnData(int TemplateID);
	void InitializeActor(class AActor* InActor, int TemplateID);
};


// Class Gameplay.UAESpotGroupObject
// 0x0068 (0x0090 - 0x0028)
class UUAESpotGroupObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	class UObject*                                     Host;                                                     // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAESpotGroupObject");
		return pStaticClass;
	}

};


// Class Gameplay.UAEWindowComponent
// 0x0070 (0x0A90 - 0x0A20)
class UUAEWindowComponent : public UStaticMeshComponent
{
public:
	class APawn*                                       LastInstigatorPawn;                                       // 0x0A20(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMesh*                                 BrokenMesh;                                               // 0x0A28(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BrokenEffect;                                             // 0x0A30(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0A38(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEWindowComponent");
		return pStaticClass;
	}


	void NotifyServerBroken(class APlayerController* Instigator);
	void NotifyRepDataUpdated(bool bInitial, bool bLocal);
	void LocalHandleWindowBrokenBP(bool bInitial, bool bLocal);
	void LocalHandleWindowBroken(bool bInitial, bool bLocal);
	void HandleBroken(class APlayerController* Instigator, bool bLocal);
	struct FUAEWindowRepData GetRepData();
};


// Class Gameplay.VehicleConfigActorComponent
// 0x0000 (0x0118 - 0x0118)
class UVehicleConfigActorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleConfigActorComponent");
		return pStaticClass;
	}


	class UClass* LoadActorClass(const struct FString& Path);
};


// Class Gameplay.VehicleAndTreasureBoxGeneratorComponent
// 0x0308 (0x05E0 - 0x02D8)
class UVehicleAndTreasureBoxGeneratorComponent : public UBaseGeneratorComponent
{
public:
	bool                                               bUseLocalSpotFile;                                        // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBackupVehicleSpotDatas;                               // 0x02D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02DA(0x0006) MISSED OFFSET
	TArray<class UVehicleSpotSceneComponent*>          VehicleSpotSceneComponentList;                            // 0x02E0(0x0010) (ExportObject, ZeroConstructor)
	TEnumAsByte<ERegionType>                           RegionType;                                               // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	TArray<struct FBackupVehicleSpotData>              BackupVehicleSpotDatas;                                   // 0x02F8(0x0010) (ZeroConstructor)
	TArray<struct FVehicleSpotProperty>                VehicleSpotPropertys;                                     // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FTreasureBoxSpotProperty>            TreasureBoxSpotPropertys;                                 // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bStatisticsValid;                                         // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRandom;                                                // 0x0329(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x032A(0x0006) MISSED OFFSET
	TMap<TEnumAsByte<ESpotType>, struct FVehicleSpotComponentArray> AllVehicleSpots;                                          // 0x0330(0x0050) (ZeroConstructor)
	TMap<TEnumAsByte<ESpotType>, struct FVehicleSpotComponentArray> AllTreasureBoxSpots;                                      // 0x0380(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FVehicleGenerateSpawnDataArray> VehicleGenerateSpawnDatas;                                // 0x03D0(0x0050) (ZeroConstructor)
	struct FVehicleGenerateStatisticsData              VehicleStatisticsData;                                    // 0x0420(0x0060)
	class UUAEDataTable*                               VehicleDataTable;                                         // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBackupVehicleSpotData>              AllDynamicVehicleSpot;                                    // 0x0488(0x0010) (ZeroConstructor)
	bool                                               bRemovableMode;                                           // 0x0498(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData04[0x50];                                      // 0x0499(0x0050) UNKNOWN PROPERTY: SetProperty Gameplay.VehicleAndTreasureBoxGeneratorComponent.PauseVehicleSpotObjectSet
	TArray<TWeakObjectPtr<class AActor>>               GeneratedActorArray;                                      // 0x04F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x18];                                      // 0x0500(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnVehicleGeneratedDelegate;                               // 0x0518(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnVehicleGenerateEndDelegate;                             // 0x0528(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0x50];                                      // 0x0538(0x0050) UNKNOWN PROPERTY: SetProperty Gameplay.VehicleAndTreasureBoxGeneratorComponent.IgnoreClassPathSet
	bool                                               bEnableLevelIndex;                                        // 0x0588(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x57];                                      // 0x0589(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleAndTreasureBoxGeneratorComponent");
		return pStaticClass;
	}


	void WriteVehicleSpotStatisticsFromSpotFile();
	void WriteVehicleSpotStatisticsDatas_V15();
	void WriteVehicleSpotStatisticsDatas();
	void WriteVehicleClassStatisticsDatas_V15();
	void WriteVehicleClassStatisticsDatas();
	void WriteAllVehicleStatisticsDatasToLog();
	void WriteAllVehicleStatisticsDatas_V15();
	void WriteAllVehicleStatisticsDatas();
	void SetAllVehicleNumRate(TMap<struct FString, float> Rates);
	void ResumeGenerate();
	void RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data);
	void RegisterSpotFromSingleFile(const struct FString& SpotFilePath);
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);
	void RandomTreasureBoxSpotsByType(struct FTreasureBoxSpotProperty* Property, struct FVehicleSpotComponentArray* Spots);
	void RandomTreasureBoxSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FTreasureBoxSpotProperty* Property);
	void RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots);
	void RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property);
	void RandomGroups();
	void PauseGenerate();
	void LoadVehicleGenerateTable();
	bool GMGenerateAllVehicleSpot(const struct FString& VehiclePath);
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoWithCategory(const struct FString& Category, struct FVehicleSpotProperty* SpotProperty);
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<ESpotType> SpotType, const struct FString& InCategory);
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfo(const struct FVehicleSpotProperty& SpotProperty, const struct FString& InCategory);
	struct FVehicleGenerateRandomInfo GetTreasureBoxSpotRandomInfo(struct FTreasureBoxSpotProperty* SpotProperty);
	struct FString GetTraceLevelName(const struct FString& SpotFileName, int16_t LevelIndex);
	struct FVehicleGenerateSpawnData GetRandomVehicleClass(const struct FString& Category);
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	int GetAlreadyGeneratedVehicleNum();
	void GenerateSpotOnTick(float DeltaTime);
	void EndGenerate();
	void EnableRemovableMode();
	bool DynamicSpawnVehicleBySpotId(int ID, const struct FString& Category);
	void DeleteGroups();
	bool CanDynamicSpawnVehicle(const struct FVector& SpawnLocation, const struct FVector& TestLocationOffset, const struct FVector& TestBoxSize);
	void AddVehicleSpotCount(TEnumAsByte<ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ);
	void AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count);
	void AddIgnoreClassPath(TArray<struct FString> IgnoreItemClassList);
};


// Class Gameplay.VehicleGeneratorComponent
// 0x0118 (0x03F0 - 0x02D8)
class UVehicleGeneratorComponent : public UBaseGeneratorComponent
{
public:
	TArray<struct FVehicleSpotProperty>                VehicleSpotPropertys;                                     // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bStatisticsValid;                                         // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRandom;                                                // 0x02E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02EA(0x0006) MISSED OFFSET
	TMap<TEnumAsByte<ESpotType>, struct FVehicleSpotComponentArray> AllVehicleSpots;                                          // 0x02F0(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FVehicleGenerateSpawnDataArray> VehicleGenerateSpawnDatas;                                // 0x0340(0x0050) (ZeroConstructor)
	struct FVehicleGenerateStatisticsData              VehicleStatisticsData;                                    // 0x0390(0x0060)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleGeneratorComponent");
		return pStaticClass;
	}


	void WriteVehicleSpotStatisticsDatas();
	void WriteVehicleClassStatisticsDatas();
	void WriteAllVehicleStatisticsDatas();
	void RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data);
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);
	void RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots);
	void RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property);
	void RandomGroups();
	void LoadVehicleGenerateTable();
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<ESpotType> SpotType);
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfo(struct FVehicleSpotProperty* SpotProperty);
	struct FVehicleGenerateSpawnData GetRandomVehicleClass(const struct FString& Category);
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	void GenerateSpotOnTick(float DeltaTime);
	void DeleteGroups();
	void AddVehicleSpotCount(TEnumAsByte<ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ);
	void AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count);
};


// Class Gameplay.VehicleGroupSpotSceneComponent
// 0x0000 (0x0350 - 0x0350)
class UVehicleGroupSpotSceneComponent : public UGroupSpotSceneComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleGroupSpotSceneComponent");
		return pStaticClass;
	}

};


// Class Gameplay.VehicleSpotObject
// 0x0098 (0x00C0 - 0x0028)
class UVehicleSpotObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET
	struct FVehicleGenerateRandomInfo                  SpotRandomInfo;                                           // 0x0070(0x0028)
	class UVehicleAndTreasureBoxGeneratorComponent*    VehicleGenerator;                                         // 0x0098(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleSpotObject");
		return pStaticClass;
	}


	void OnVehicleGenerateEnd();
	void OnTraceLevelShown();
};


// Class Gameplay.VehicleSpotSceneComponent
// 0x0060 (0x03C0 - 0x0360)
class UVehicleSpotSceneComponent : public USpotSceneComponent
{
public:
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            // 0x0360(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERegionType>                           RegionType;                                               // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasGenerateSpot;                                         // 0x0362(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRandomRotation;                                          // 0x0363(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomRotationMin;                                        // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomRotationMax;                                        // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	struct FVehicleGenerateRandomInfo                  SpotRandomInfo;                                           // 0x0370(0x0028)
	bool                                               IsEnableVehicleSpawnRestore;                              // 0x0398(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	float                                              VehicleSpawnRestoreOffset;                                // 0x039C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x03A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleSpotSceneComponent");
		return pStaticClass;
	}


	void SetSpotRandomInfo(struct FVehicleGenerateRandomInfo* RandomInfo);
	bool GenerateSpot();
};


// Class Gameplay.WeatherConfigComponent
// 0x0008 (0x0120 - 0x0118)
class UWeatherConfigComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.WeatherConfigComponent");
		return pStaticClass;
	}

};


}

