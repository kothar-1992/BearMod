#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Client.AppBaseConfig
// 0x0128 (0x0150 - 0x0028)
class UAppBaseConfig : public UObject
{
public:
	int                                                PUBLISH_REGION_ID;                                        // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     PUBLISH_AREA;                                             // 0x0030(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_GAME_ID;                                            // 0x0040(0x0010) (ZeroConstructor, Config)
	struct FString                                     GEMAppID;                                                 // 0x0050(0x0010) (ZeroConstructor, Config)
	uint32_t                                           TSSGameId;                                                // 0x0060(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	uint64_t                                           GameID;                                                   // 0x0068(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     GameKey;                                                  // 0x0070(0x0010) (ZeroConstructor, Config)
	uint64_t                                           VoiceSdkGameId;                                           // 0x0080(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     VoiceSdkGameKey;                                          // 0x0088(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_FACEBOOK;                                           // 0x0098(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_APPLE;                                              // 0x00A8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_GOOGLE;                                             // 0x00B8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_TWITTER;                                            // 0x00C8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_NosCHAT;                                            // 0x00D8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_VK;                                                 // 0x00E8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_LINE;                                               // 0x00F8(0x0010) (ZeroConstructor, Config)
	struct FString                                     APPID_BgBg;                                               // 0x0108(0x0010) (ZeroConstructor, Config)
	struct FString                                     GUID_GAMEMASTER;                                          // 0x0118(0x0010) (ZeroConstructor, Config)
	struct FString                                     GEMCtrlURL;                                               // 0x0128(0x0010) (ZeroConstructor, Config)
	struct FString                                     TMFPCtrlURL;                                              // 0x0138(0x0010) (ZeroConstructor, Config)
	int                                                SubsideFeatureLevel;                                      // 0x0148(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x014C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AppBaseConfig");
		return pStaticClass;
	}

};


// Class Client.AsyncLoadHelper
// 0x00B8 (0x00E0 - 0x0028)
class UAsyncLoadHelper : public UObject
{
public:
	TMap<struct FString, class UObject*>               PreloadObjectMap;                                         // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0078(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncLoadHelper");
		return pStaticClass;
	}


	void SetMaxTaskNum(int Num);
	void RunNextTask();
	void OnLoadCallBack(const struct FSoftObjectPath& softObjPath);
	void ClearOneTask(const struct FString& ObjectPath);
	void ClearAllTask();
	void AddTask(const struct FString& ObjectPath, int LoadPriority);
};


// Class Client.AsyncLoadWidgetBlueprint
// 0x0058 (0x0080 - 0x0028)
class UAsyncLoadWidgetBlueprint : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    BeforeLoad;                                               // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AfterLoad;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancelled;                                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0058(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncLoadWidgetBlueprint");
		return pStaticClass;
	}


	void Cancel();
	static class UAsyncLoadWidgetBlueprint* AsyncLoadWidgetBlueprint(const struct FString& BlueprintPath, int Priority);
	void AfterLoadCallback(struct FSoftObjectPath* SoftObjectPath);
	void Activate();
};


// Class Client.AsyncTaskCDNDownloader
// 0x0070 (0x0098 - 0x0028)
class UAsyncTaskCDNDownloader : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	struct FScriptMulticastDelegate                    onRequestHandler;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0068(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncTaskCDNDownloader");
		return pStaticClass;
	}


	static class UAsyncTaskCDNDownloader* DownloadCDNContent(const struct FString& URL, int loaderType, const struct FString& savedDir, bool breakpointContinualTransfer);
};


// Class Client.AsyncTaskDownloader
// 0x0070 (0x0098 - 0x0028)
class UAsyncTaskDownloader : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	struct FScriptMulticastDelegate                    onRequestHandler;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0068(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AsyncTaskDownloader");
		return pStaticClass;
	}


	static class UAsyncTaskDownloader* DownloadContent(const struct FString& URL, int loaderType, const struct FString& savedDir, bool breakpointContinualTransfer);
};


// Class Client.BattleScriptHelper
// 0x0000 (0x0028 - 0x0028)
class UBattleScriptHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleScriptHelper");
		return pStaticClass;
	}


	static uint32_t SyncNewBattlePlayer(class UBattleUtils* Utils, uint64_t UID, const struct FPlayerInfoData& Info);
	static void SyncGameInfo(class UBattleUtils* Utils, const struct FBattleGameInfo& Info);
	static void SyncGameExit(class UBattleUtils* Utils);
	static void SyncBattlePlayerExit(class UBattleUtils* Utils, uint64_t UID, const struct FName& PlayerType, const struct FString& Reason);
	static void ResponPlayerWeaponDIYData(class UBattleUtils* Utils, uint64_t PlayerUID, const struct FWeaponDIYData& InWeaponDIYData);
	static void GenerateAIPlayerParams(class UBattleUtils* Utils, const struct FPlayerInfoData& Info);
};


// Class Client.BattlePlayer
// 0x0160 (0x0188 - 0x0028)
class UBattlePlayer : public UObject
{
public:
	uint64_t                                           UID;                                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPlayerInfoData                             PlayerInfoData;                                           // 0x0030(0x00E8)
	struct FPlayerAvatarData                           PlayerAvatarData;                                         // 0x0118(0x0018)
	TMap<int, struct FWeaponDIYData>                   WeaponDIYData;                                            // 0x0130(0x0050) (ZeroConstructor)
	class UBattleUtils*                                OwningBattleUtils;                                        // 0x0180(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattlePlayer");
		return pStaticClass;
	}


	struct FGameModePlayerParams ExtractGameModePlayerParams();
};


// Class Client.BattleAIPlayer
// 0x0000 (0x0188 - 0x0188)
class UBattleAIPlayer : public UBattlePlayer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleAIPlayer");
		return pStaticClass;
	}


	struct FGameModeAIPlayerParams ExtractGameModeAIPlayerParams();
};


// Class Client.BattleUtils
// 0x0520 (0x0548 - 0x0028)
class UBattleUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	class UGameFrontendHUD*                            OwningFrontendHUD;                                        // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
	class AUAEGameMode*                                BattleGameMode;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UBattlePlayer*>                       BattlePlayerList;                                         // 0x00A0(0x0010) (ZeroConstructor)
	struct FBattleGameInfo                             CachedBattleGameInfo;                                     // 0x00B0(0x0038)
	struct FGameModeAIPlayerParams                     CachedAIPlayerParams;                                     // 0x00E8(0x0400)
	struct FString                                     LuaFilePath;                                              // 0x04E8(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x50];                                      // 0x04F8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleUtils");
		return pStaticClass;
	}


	uint32_t SyncNewBattlePlayer(uint64_t UID, const struct FPlayerInfoData& Info);
	void SyncGameInfo(const struct FBattleGameInfo& Info);
	void SyncGameExit();
	void SyncBattlePlayerExit(uint64_t UID, const struct FName& PlayerType, const struct FString& Reason);
	struct FGameModePlayerParams RetrievePlayerParams(const struct FPlayerID& PlayerID);
	struct FGameModeAIPlayerParams RetrieveAIPlayerParams(const struct FPlayerID& PlayerID);
	void ResponPlayerWeaponDIYData(uint64_t PlayerUID, const struct FWeaponDIYData& InWeaponDIYData);
	void RequestSomePlayersBattleData(TArray<uint64_t> PlayerUIDList, unsigned char DataType);
	void RequestPlayerWeaponDIYData(uint64_t PlayerUID, int WeaponSkinID, int PlanID);
	void RequestOnePlayersBattleData(uint64_t PlayerUID, unsigned char DataType);
	void RequestAllPlayersBattleData(unsigned char DataType);
	void OnPostLoadMapWithWorld(class UWorld* World);
	class UBattlePlayer* NewBattlePlayer();
	class UBattleAIPlayer* NewBattleAIPlayer();
	void HandleGameModeStateChanged(const struct FGameModeStateChangedParams& Params);
	class AUAEGameMode* GetBattleGameMode();
	void GenerateAIPlayerParams(const struct FPlayerInfoData& Info);
	class UBattlePlayer* FindPlayerByUID(uint64_t UID, const struct FName& PlayerType);
	class UBattlePlayer* FindPlayerByPlayerName(const struct FString& PlayerName, const struct FName& PlayerType);
	class UBattlePlayer* FindPlayerByPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType);
};


// Class Client.BattleWindowMgr
// 0x0000 (0x0028 - 0x0028)
class UBattleWindowMgr : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleWindowMgr");
		return pStaticClass;
	}


	static void ShowUI(class UObject* WorldContextObject, const struct FString& WindowName, class UObject* ObjectParam);
	static void SetInstance(class UBattleWindowMgrLuaUtils* InInstance, class ULuaStateWrapper* InLuaStateWrapper);
	static void HideUI(class UObject* WorldContextObject, const struct FString& WindowName);
	static bool CheckWindowOpen(class UObject* WorldContextObject, const struct FString& WindowName);
};


// Class Client.BattleWindowMgrLuaUtils
// 0x0048 (0x0070 - 0x0028)
class UBattleWindowMgrLuaUtils : public UObject
{
public:
	TWeakObjectPtr<class ULuaStateWrapper>             LuaStateWrapper;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     LuaManagerName;                                           // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     ShowUI;                                                   // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     HideUI;                                                   // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     CheckWindowOpen;                                          // 0x0060(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BattleWindowMgrLuaUtils");
		return pStaticClass;
	}

};


// Class Client.BugReporter
// 0x0078 (0x00A0 - 0x0028)
class UBugReporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BugReporter");
		return pStaticClass;
	}


	void SendScreenShot(const struct FString& errorReason, const struct FString& errorDescription, const struct FString& ImagePath, float X, float Y, float Z);
	void SendLog(const struct FString& errorReason, const struct FString& errorDescription, float X, float Y, float Z, bool pullAll, bool zipLogUpload);
	void ReadZipLog(const struct FString& Filename);
	TArray<unsigned char> CompressLog(bool pullAllLog);
};


// Class Client.BuildConfig
// 0x0030 (0x0058 - 0x0028)
class UBuildConfig : public UObject
{
public:
	struct FString                                     branch_name;                                              // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FString                                     build_no;                                                 // 0x0038(0x0010) (ZeroConstructor, Config)
	struct FString                                     build_url;                                                // 0x0048(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BuildConfig");
		return pStaticClass;
	}

};


// Class Client.BusinessHelper
// 0x0000 (0x0028 - 0x0028)
class UBusinessHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BusinessHelper");
		return pStaticClass;
	}


	struct FString XorEncryptDecrypt(const struct FString& Data, bool bEncrypt, const struct FString& Key);
	static class UObject* UIGetResWithPath(const struct FString& DesManagerName);
	static class ALuaClassObj* UIGetLuaManagerByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName);
	static class ALuaClassObj* UIGetLuaManager(class UUAEUserWidget* pUIClass);
	static void StopUIStat(const struct FString& UIName, bool bReport);
	static float StopTimeWatch();
	static void StartUIStat(const struct FString& UIName);
	static void StartTimeWatch();
	struct FString SpecialBase64Encode(const struct FString& Data);
	struct FString SpecialBase64Decode(const struct FString& Data);
	static void SetUIStatMaxClickTimes(int Times);
	static void RemoveKnownMissingPackageRefObjectByObj(class UObject* RefedObject);
	static class UObject* LoadAssetFromPath(const struct FString& DesManagerName);
	static bool IsSplitMiniPakVersion();
	static bool IsSplitMapPakVersion();
	static bool IsFit();
	static bool IsClassOf(class UObject* Object, class UClass* Class);
	static bool IsChildOf(class UClass* ChildClass, class UClass* Class);
	static bool IsCEVersion();
	static bool IsAppFromStore();
	static bool HasDownloadedBasePak();
	static struct FString GetXORKey();
	static class UUAEUserWidget* GetWidgetByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName, const struct FString& InWidgtName);
	static uint64_t GetVoiceSdkGameId();
	static int GetTSSGameId();
	static float GetTime();
	static struct FString GetSplitMapConfigInfo();
	static int GetPublishRegionID();
	static struct FString GetPublishRegion();
	struct FString GetPathFromUserWidgetToViewport(class UUserWidget* UserWidget, bool withObjectNum);
	static struct FString GetPackChannel();
	static struct FString GetOpenId();
	static struct FString GetObjectClassName(class UObject* Object);
	static struct FString GetMobileBasePath(const struct FString& InPath);
	static class ALuaClassObj* GetLuaManagerByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName);
	static struct FString GetITopGameId();
	static struct FString GetInGameLocalConnectURL();
	static int GetIMSDKEnv();
	static int GetDeviceQualityLevel();
	static int GetDeviceOrientation();
	static class UUAEDataTable* GetDataTable(const struct FString& tableName);
	static int GetCurrentNetworkState();
	static class UWidget* GetChildByName(class UUserWidget* pParent, const struct FString& Name);
	static struct FString GetBuildURL();
	static struct FString GetBuildNo();
	static struct FString GetBranchName();
	static struct FString GetBase64Key();
	static struct FString GetAppVersion();
	static int GetAOSSHOPID();
	static struct FString GetAOSSHOP();
	static void ClearDisplayLookupTable();
	static void BroadCastMSG(class UFrontendHUD* FrontendHUD, const struct FString& DesManagerName, const struct FString& Msg);
	struct FString Base64Encode(const struct FString& Data);
	struct FString Base64Decode(const struct FString& Data);
	static void AddKnownMissingPackage(class UObject* BindObj, bool bReplace, struct FString* PackageName);
};


// Class Client.IntlHelper
// 0x0000 (0x0028 - 0x0028)
class UIntlHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.IntlHelper");
		return pStaticClass;
	}


	static void UpdateXGPushNightTag(bool bInit);
	static void UpdateXGPushDayTag(bool bInit);
	static void UpdateVoiceUrl(const struct FString& regionVoiceUrl);
	static void UnInitTweenMaker();
	static struct FString TimeFormatString(const struct FString& Format, int hours, int Mins, int secs);
	static void SaveXGTags(const struct FString& Language, const struct FString& timezone, const struct FString& Region);
	static void OnSwitchLanguage();
	static void OnChoosingZone(int ZoneID, const struct FString& AddrIP, const struct FString& regionVoiceUrl);
	static bool IsRemoteNotificationsEnabled();
	static bool IsHelpshiftEnable4CurrentChannel();
	static bool IsHelpshiftEnable();
	static bool IsAwakedByAdjust();
	static void InitTweenMaker();
	static void HelpshiftUploadLog();
	static void HelpshiftShowSingleFAQWithInfo(const struct FString& publishID, const struct FString& PlayerName, const struct FString& PlayerLevel, const struct FString& PlayerGold, int PlayerRecharge, int PlayerRegisterTime, const struct FString& ExtraTags);
	static void HelpshiftShowFAQsWithInfo(const struct FString& PlayerName, const struct FString& PlayerLevel, const struct FString& PlayerGold, int PlayerRecharge, int PlayerRegisterTime, const struct FString& ExtraTags);
	static void HelpshiftShowFAQs();
	static void HelpshiftShowConversionWithInfo(const struct FString& Name, const struct FString& Level, const struct FString& Gold);
	static void HelpshiftShowConversion();
	static void HelpshiftRequestUnreadMessagesCount();
	static int HelpshiftGetUnreadMessgesCount();
	static void HelpshiftClearUnreadMessgesCount();
	static struct FString GetTranslationText(const struct FString& Key);
	static struct FString GetSavedXGTimezoneTag();
	static struct FString GetSavedXGRegionTag();
	static struct FString GetSavedXGPushNightTag();
	static struct FString GetSavedXGPushDayTag();
	static struct FString GetSavedXGLanguageTag();
	static struct FString GetPlayerUCLevel();
	static int GetLocalTimezone();
	static struct FString GetLocalizeStringWithString(const struct FString& sourceString, int numStringIndex, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	static struct FString GetLocalizeStringWithNum(int ID, int numStringIndex, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	static struct FString GetLocalizeStrByStr(const struct FString& Source, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	static struct FString GetLocalizeStrByID(int ID, const struct FString& string1, const struct FString& string2, const struct FString& string3, const struct FString& string4);
	static struct FString GetLocalizationStringWithID(int ID);
	static struct FString GetLocalizationString(const struct FString& Key);
	static struct FString GetLocalizationBattleStringWithID(int ID);
	static struct FString GetHistoryErrorCode();
	static struct FString GetGameMasterVID();
	static struct FString GetDeepLinkUrl();
	static int GetCurrentZoneID();
	static struct FString FormatLocalizeStrByStr(const struct FString& Source, TArray<struct FString> stringArr);
	static void DirectToNotificationSetup();
	static void ClearAdjustDeepLink();
	static void AdjustParaAnalysis();
	static void AddErrorCodeToHistory(const struct FString& InErrorCode);
};


// Class Client.TestHUD
// 0x0000 (0x0438 - 0x0438)
class ATestHUD : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.TestHUD");
		return pStaticClass;
	}


	void TestFunctionNOParam();
	float TestFunctionBP_LUA();
	float TestFunctionBP();
	float Function_Lua();
	float Function_CPlus_Call();
	float Function_CPlus();
	float Function_BP_CPP();
	float Function_BP_Call_LUA();
	float Function_BP_Call_CPP();
	float Function_BP_Call_CPlus();
	float Function_BP_Call();
	float Function_BP();
};


// Class Client.CDNUpdate
// 0x0340 (0x0368 - 0x0028)
class UCDNUpdate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2A8];                                     // 0x00C0(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CDNUpdate");
		return pStaticClass;
	}


	void StartUpdateApp();
	void StartAppUpdate(bool StartGrayUpdate);
	void OnRequestProgress(const struct FCDNDownloaderInfo& Info);
	void OnRequestComplete(const struct FCDNDownloaderInfo& Info);
	bool IsUpdating();
	bool IsGrayUpdate();
	int GetCurStage(float* percent, int* GetCurVal, int* GetMaxVal);
	void FinishUpdate();
	void ContinueUpdate();
	void CancelUpdate();
};


// Class Client.CentauriManager
// 0x0190 (0x01B8 - 0x0028)
class UCentauriManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	struct FString                                     payChannel;                                               // 0x0050(0x0010) (ZeroConstructor, Config)
	struct FString                                     CentauriIdc;                                              // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     ZoneID;                                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     goodsZoneID;                                              // 0x0080(0x0010) (ZeroConstructor)
	struct FString                                     offerID;                                                  // 0x0090(0x0010) (ZeroConstructor, Config)
	int                                                iAOSShop;                                                 // 0x00A0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FString                                     offerID_H5;                                               // 0x00A8(0x0010) (ZeroConstructor, Config)
	struct FString                                     payChannel_H5;                                            // 0x00B8(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x70];                                      // 0x00C8(0x0070) MISSED OFFSET
	struct FString                                     PAY_TYPE_UC;                                              // 0x0138(0x0010) (ZeroConstructor)
	struct FString                                     PAY_TYPE_GOODS;                                           // 0x0148(0x0010) (ZeroConstructor)
	struct FString                                     PAY_TYPE_SUBSCRIBE;                                       // 0x0158(0x0010) (ZeroConstructor)
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0170(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CentauriManager");
		return pStaticClass;
	}


	void TickCentauriPackage();
	void Tick(float DeltaTime);
	void SwitchPayChannel(ECentauriMultiPayChannelSwitch switchChannel);
	void Subscribe(const struct FString& productid, const struct FString& InPayItem, const struct FString& Country, const struct FString& currency, const struct FString& serviceCode, const struct FString& serviceName, bool autoPay, const struct FString& basePlanId, const struct FString& gwOfferId, const struct FString& InChannelExtras, const struct FString& InAppExtends);
	void SetZoneID(const struct FString& inZoneID, const struct FString& inGoodsZoneID);
	void SetRoleInfo(int InChannel, const struct FString& OpenID);
	void SetFrontendHUD(class UGameFrontendHUD* InFrontendHUD);
	void SetCentauriIDC(const struct FString& idc);
	void Reprovide();
	void Pay(const struct FString& productid, const struct FString& InPayItem, const struct FString& Country, const struct FString& currency, const struct FString& InChannelExtras, const struct FString& InAppExtends);
	void ModifySubscribe(const struct FString& newProductid, const struct FString& Country, const struct FString& currency, const struct FString& serviceCode, const struct FString& serviceName, bool autoPay, const struct FString& basePlanId, const struct FString& gwOfferId, const struct FString& InChannelExtras, const struct FString& InAppExtends);
	bool IsH5PayEnable();
	void Initialize(ECentauriMultiPayChannelSwitch envior);
	void H5Pay(const struct FString& Country, const struct FString& InChannelExtras, const struct FString& InAppExtends);
	void GoodsPresent(const struct FString& productid, const struct FString& InPayItem, const struct FString& Price, const struct FString& Country, const struct FString& currency, const struct FString& MetaData, const struct FString& InChannelExtras, const struct FString& InAppExtends);
	void Goods(const struct FString& productid, const struct FString& InPayItem, const struct FString& Price, const struct FString& Country, const struct FString& currency, const struct FString& InChannelExtras, const struct FString& InAppExtends);
	void GetProductInfo(TMap<struct FString, struct FString> listProductID);
	struct FString getPF();
	struct FString GetPaymentProductId();
	struct FString GetPayEnvironment();
	struct FString GetPayChannel();
	struct FString GetPackChannel();
	struct FString GetOfferID();
	struct FString GetNativePackageTag();
	void GetMPInfo(const struct FString& Country, const struct FString& currency, const struct FString& InAppExtends, const struct FString& InDrmInfo);
	void GetIntroPrice(TMap<struct FString, struct FString> listProductID);
	static class UCentauriManager* GetInstance();
	struct FString GetInIDC();
	int GetAOSSHOP();
};


// Class Client.ClientNetInterface
// 0x0000 (0x0028 - 0x0028)
class UClientNetInterface : public UNetInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ClientNetInterface");
		return pStaticClass;
	}

};


// Class Client.CommonItemBase
// 0x0000 (0x02C8 - 0x02C8)
class UCommonItemBase : public ULuaUserWidget
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CommonItemBase");
		return pStaticClass;
	}

};


// Class Client.CompressTextureHelper
// 0x0000 (0x0028 - 0x0028)
class UCompressTextureHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CompressTextureHelper");
		return pStaticClass;
	}


	static class UTexture2D* TestGetTexture2DFromDisk_KTX2(const struct FString& PathName);
};


// Class Client.CustomLayoutProxy
// 0x0178 (0x0208 - 0x0090)
class UCustomLayoutProxy : public ULuaObject
{
public:
	bool                                               bInitInGame;                                              // 0x0090(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	TMap<int, unsigned char>                           SaveTypeMap;                                              // 0x0098(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<int, struct FUIElemLayoutDetail>              CachedLayoutDetailMap;                                    // 0x00E8(0x0050) (BlueprintVisible, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xD0];                                      // 0x0138(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CustomLayoutProxy");
		return pStaticClass;
	}


	void UnregisterCustomLayoutChange(class UUAECustomizePanel* InCustomizePanel);
	void RegisterCustomLayoutChange(class UUAECustomizePanel* InCustomizePanel);
	void OnReleaseInGame();
	void OnInitInGame();
	void ClearCacheBySaveType(unsigned char InSaveType);
	bool CheckLayoutDetail(int InCustomType, unsigned char InSaveType);
	void BroadcastCustomLayoutChangeForAll(bool bNotCheck);
	void BroadcastCustomLayoutChangeBySaveType(unsigned char InSaveType, bool bNotCheck);
	void BroadcastCustomLayoutChangeByCustomType(int InCustomType, bool bNotCheck);
	void AddInvalidCustomTypeCache(int InCustomType);
};


// Class Client.CustomPanelProxy
// 0x0108 (0x0130 - 0x0028)
class UCustomPanelProxy : public UObject
{
public:
	TWeakObjectPtr<class UUAECustomizePanel>           OwnerPanel;                                               // 0x0028(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFlashEffect;                                           // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FSlateBrush                                 SelectedImageOriginalSlateBrush;                          // 0x0038(0x00B8) (BlueprintVisible)
	class UMaterialInterface*                          SelectedImageCircularFlashEffectMaterial;                 // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          SelectedImageSquareFlashEffectMaterial;                   // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UImage>                       InvalidImage;                                             // 0x0100(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UImage>                       SelectedImage;                                            // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UBorder>                      Border_RealSize;                                          // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UWidget>                      ParentWidget;                                             // 0x0118(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UWidget>                      ExpandAssociatedWidget;                                   // 0x0120(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UWidgetSwitcher>              OptionalWidgetSwitcher;                                   // 0x0128(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.CustomPanelProxy");
		return pStaticClass;
	}


	void SetSelectedImageOriginEffect();
	void SetSelectedImageFlashEffect();
	bool IsSquareFlashEffectAssetName(const struct FString& InAssetName);
	bool IsCircleFlashEffectAssetName(const struct FString& InAssetName);
	class UWidget* GetWidgetByType(class UWidget* RootWidget, class UClass* WidgetType);
	class UWidget* GetWidgetByNameStartsWith(class UWidget* RootWidget, const struct FString& Prefix);
	class UImage* GetSelectedImage();
	struct FMargin GetScreenMargin();
	class UWidget* GetParentWidget();
	class UWidgetSwitcher* GetOptionalWidgetSwitcher();
	class UImage* GetInvalidImage();
	class UWidget* GetExpandAssociatedWidget(const struct FString& WidgetName);
	class UBorder* GetBorder_RealSize();
	struct FMargin CalculateLimitPosition();
};


// Class Client.DataTunnel
// 0x0000 (0x0028 - 0x0028)
class UDataTunnel : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.DataTunnel");
		return pStaticClass;
	}

};


// Class Client.DragDropTextBox
// 0x0000 (0x0CB0 - 0x0CB0)
class UDragDropTextBox : public UEditableTextBox
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.DragDropTextBox");
		return pStaticClass;
	}

};


// Class Client.GameBackendUtils
// 0x0000 (0x0030 - 0x0030)
class UGameBackendUtils : public UBackendUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameBackendUtils");
		return pStaticClass;
	}


	class UUAETableManager* GetTableManager();
};


// Class Client.GameBackendHUD
// 0x0000 (0x00B0 - 0x00B0)
class UGameBackendHUD : public UBackendHUD
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameBackendHUD");
		return pStaticClass;
	}


	class UGameBackendUtils* GetUtils();
	static class UGameBackendHUD* GetInstance();
	class UGameFrontendHUD* GetGameFrontendHUDByGameInstance(class UGameInstance* GameInstance);
	class UGameFrontendHUD* GetFirstGameFrontendHUD(class UObject* WorldContextObject);
};


// Class Client.GameBusinessManager
// 0x0078 (0x0170 - 0x00F8)
class UGameBusinessManager : public ULogicManagerBase
{
public:
	TArray<struct FGameWidgetConfig>                   WidgetConfigList;                                         // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0108(0x0050) MISSED OFFSET
	class AUAEPlayerController*                        OwningController;                                         // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0160(0x0008) MISSED OFFSET
	class ALuaClassObj*                                LuaObject;                                                // 0x0168(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameBusinessManager");
		return pStaticClass;
	}


	class UUAEUserWidget* GetWidget(int Index);
	class ALuaClassObj* GetLuaObject();
	class UGameFrontendHUD* GetGameFrontendHUD();
};


// Class Client.GameFrontendHUD
// 0x0900 (0x0AF8 - 0x01F8)
class UGameFrontendHUD : public UFrontendHUD
{
public:
	struct FScriptMulticastDelegate                    OnHandleWebviewActionDelegate;                            // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetTicketNotifyDelegate;                                // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHandleServerListDownload;                               // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUIStatReport;                                           // 0x0228(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCloudGMReceive;                                         // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReportClientTool;                                       // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     CSVTableRelativeDir;                                      // 0x0258(0x0010) (ZeroConstructor, Config)
	TMap<struct FString, struct FString>               GameStatusMap;                                            // 0x0268(0x0050) (ZeroConstructor)
	bool                                               EnableTickLog;                                            // 0x02B8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02B9(0x0001) MISSED OFFSET
	bool                                               bEnableReportMemory;                                      // 0x02BA(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x15];                                      // 0x02BB(0x0015) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDeleteFileNotifyEvent;                                  // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLoadODPaksBinFinishNotifyEvent;                         // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x40];                                      // 0x02F8(0x0040) MISSED OFFSET
	class UVoiceSDKInterface*                          VoiceSDK;                                                 // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBugReporter*                                GameBugReporter;                                          // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGMLogShare*                                 LogShare;                                                 // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxUpdateRetryTimes;                                      // 0x0350(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0354(0x000C) MISSED OFFSET
	class UGDolphinUpdater*                            GDolphin;                                                 // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTranslator*                                 Translator;                                               // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)
	class UHttpWrapper*                                HttpWrapper;                                              // 0x0370(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGCPufferDownloader*                         GPuffer;                                                  // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULaggingReporter*                            LaggingReporter;                                          // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	class UAsyncTaskDownloader*                        DownloadTask;                                             // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x44];                                      // 0x0398(0x0044) MISSED OFFSET
	bool                                               bUseDolphinUpdateFirst;                                   // 0x03DC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableUseDolphinUpdate;                                  // 0x03DD(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableUseCDNUpdate;                                      // 0x03DE(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseDolphinUpdateAfterCDNFailed;                          // 0x03DF(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseCDNUpdateAfterDolphinFailed;                          // 0x03E0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableEditorPufferDownload;                              // 0x03E1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsWaitingUpdateStateData;                                // 0x03E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingDolphinUpdate;                                     // 0x03E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsUsingCDNUpdate;                                         // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x13];                                      // 0x03E5(0x0013) MISSED OFFSET
	class UCDNUpdate*                                  CDNUpdater;                                               // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ODPaksPoolSize;                                           // 0x0400(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ODPaksPoolSizeLowend;                                     // 0x0404(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ODPaksPoolSizeLowendThreshold;                            // 0x0408(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               ODPaksEnable;                                             // 0x040C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x23];                                      // 0x040D(0x0023) MISSED OFFSET
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // 0x0430(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       UnrealNetworkStatus;                                      // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x18];                                      // 0x0448(0x0018) MISSED OFFSET
	float                                              UnrealNetworkConnectingTimer;                             // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x18];                                      // 0x0464(0x0018) MISSED OFFSET
	float                                              UnrealNetworkConnectingTime;                              // 0x047C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UnrealNetworkConnectingTimeAsan;                          // 0x0480(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseDynamicCreateLuaManager;                              // 0x0484(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	TArray<struct FString>                             PersistentLuaManager;                                     // 0x0488(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0498(0x0004) MISSED OFFSET
	bool                                               bPatchReInitSequence;                                     // 0x049C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	class ULuaStateWrapper*                            LuaStateWrapper;                                          // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULuaEventBridge*                             LuaEventBridgeInstace;                                    // 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBattleWindowMgrLuaUtils*                    LuaBattleWindowMgr;                                       // 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULuaBlueprintMgr*                            LuaBlueprintSysMgr;                                       // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x8];                                       // 0x04C0(0x0008) MISSED OFFSET
	struct FString                                     ScriptBPRelativeDir;                                      // 0x04C8(0x0010) (ZeroConstructor, Config)
	struct FString                                     ScriptRelativeDir;                                        // 0x04D8(0x0010) (ZeroConstructor, Config)
	struct FString                                     InGameLuaDir;                                             // 0x04E8(0x0010) (ZeroConstructor, Config)
	struct FString                                     PreloadLuaFileRelativePath;                               // 0x04F8(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             LuaDirList;                                               // 0x0508(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             NoGCPackage;                                              // 0x0518(0x0010) (ZeroConstructor, Config)
	float                                              LuaTickTime;                                              // 0x0528(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCallLuaTick;                                             // 0x052C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoLoginEnable;                                         // 0x052D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2A];                                      // 0x052E(0x002A) MISSED OFFSET
	int                                                PingFirstReportIntervalSecond;                            // 0x0558(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PingReportIntervalSecond;                                 // 0x055C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                LossSyncIntervalSecond;                                   // 0x0560(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PlayerStatusReportIntervalSecond;                         // 0x0564(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                LossArraySyncIntervalSecond;                              // 0x0568(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x056C(0x0004) MISSED OFFSET
	int                                                vmInstrumentOptimization;                                 // 0x0570(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	class UTssManager*                                 TssMgr;                                                   // 0x0578(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x30];                                      // 0x0580(0x0030) MISSED OFFSET
	float                                              PingReportInterval;                                       // 0x05B0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData19[0x10C];                                     // 0x05B4(0x010C) MISSED OFFSET
	int64_t                                            DeactivatedThreshold;                                     // 0x06C0(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	int64_t                                            TimePassThreshold;                                        // 0x06C8(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ImageDownloadClearDayCount;                               // 0x06D0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    UIStackChangeDelegate;                                    // 0x06D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIStackRecoverDelegate;                                   // 0x06E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFRefreshAdaptationUIEvent;                              // 0x06F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFRefreshAdaptationExUIEvent;                            // 0x0708(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EnterBattleStageDelegate;                                 // 0x0718(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnAfterInitedDolphinDelegate;                             // 0x0728(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDolphinVersionInfoDelegate;                             // 0x0738(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDolphinNoticeInstallApkDelegate;                        // 0x0748(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDolphinProgressDelegate;                                // 0x0758(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDolphinErrorDelegate;                                   // 0x0768(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRepairOverMaxTimesDelegate;                             // 0x0778(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateFinishedDelegate;                                 // 0x0788(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRestartGameDelegate;                                    // 0x0798(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInitIMSDKEnvDelegate;                                   // 0x07A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetEnableCDNGetVersionDelegate;                         // 0x07B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAfterLoadedEditorLoginDelegate;                         // 0x07C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClearUIBeforeReInitLuaStateDelegate;                    // 0x07D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInitStateDelegate;                                      // 0x07E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStartPufferUpdateDelegage;                              // 0x07F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetUpdateStateCDNConfigUrlDelegate;                     // 0x0808(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetCDNUpdateInfoDelegate;                               // 0x0818(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQuickLoginDelegate;                                     // 0x0828(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetRegionNoByCountryNoDelegate;                         // 0x0838(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPhoneMailLoginCallbackDelegate;                         // 0x0848(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLoginSDKCallbackDelegate;                               // 0x0858(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFileModifiedDelegate;                                   // 0x0868(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData21[0xC8];                                      // 0x0878(0x00C8) MISSED OFFSET
	class UImageDownloader*                            ImageDownloaderInGame;                                    // 0x0940(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                FpsForWindowClient;                                       // 0x0948(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	class UUDPPingCollector*                           UDPPingCollector;                                         // 0x0950(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UIElemLayoutJsonConfigSwitch;                             // 0x0958(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               NationAllSwitch;                                          // 0x0959(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               NationBattleSwitch;                                       // 0x095A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               NationRankSwitch;                                         // 0x095B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelfieSwitch;                                             // 0x095C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ReportBugSwitch;                                          // 0x095D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               FirstVoicePopupSwitch;                                    // 0x095E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               GDPRForbidVoiceSwitch;                                    // 0x095F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               GDPRSettingSwitch;                                        // 0x0960(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x0961(0x0003) MISSED OFFSET
	int                                                GDPRUserType;                                             // 0x0964(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldShowAdaptTipInLobby;                               // 0x0968(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x0969(0x0003) MISSED OFFSET
	float                                              fLaggingFPSDiffThreshold;                                 // 0x096C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFPSDiffThresholdMin;                              // 0x0970(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFPSDiffThresholdMax;                              // 0x0974(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFrameTimeThreshold;                               // 0x0978(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFrameTimeThresholdMin;                            // 0x097C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fLaggingFrameTimeThresholdMax;                            // 0x0980(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              fFPSReportInterval;                                       // 0x0984(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData25[0x10];                                      // 0x0988(0x0010) MISSED OFFSET
	bool                                               bUnLoadNoGcPackage;                                       // 0x0998(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x0999(0x0007) MISSED OFFSET
	TArray<class UPackage*>                            NoGcPackages;                                             // 0x09A0(0x0010) (ZeroConstructor)
	bool                                               bFlushAsyncLoadingBeforeGC;                               // 0x09B0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableJMLog;                                             // 0x09B1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData27[0xB6];                                      // 0x09B2(0x00B6) MISSED OFFSET
	bool                                               bEnableH5Cache;                                           // 0x0A68(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCheckWorldNameForLoadConfig;                             // 0x0A69(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData28[0x6];                                       // 0x0A6A(0x0006) MISSED OFFSET
	class UColorBlindnessMgr*                          ColorBlindnessMgrInstace;                                 // 0x0A70(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNativeHUDTickContainer>             NativeHUDTickList;                                        // 0x0A78(0x0010) (ZeroConstructor)
	bool                                               IsNativeHUDTickLock;                                      // 0x0A88(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsShutDown;                                               // 0x0A89(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x2];                                       // 0x0A8A(0x0002) MISSED OFFSET
	int                                                NativeHUDTickIndex;                                       // 0x0A8C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAsyncLoadHelper*                            AsyncLoadHelper;                                          // 0x0A90(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     BattleUtilsClassName;                                     // 0x0A98(0x0010) (ZeroConstructor, Config)
	class UBattleUtils*                                BattleUtils;                                              // 0x0AA8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x8];                                       // 0x0AB0(0x0008) MISSED OFFSET
	struct FScriptDelegate                             OnImagePickDetectEvent;                                   // 0x0AB8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnPermissionResultEvent;                                  // 0x0AC8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnDeviceRotationChangedEvent;                             // 0x0AD8(0x0010) (ZeroConstructor, InstancedReference)
	struct FString                                     CurrentMapName;                                           // 0x0AE8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameFrontendHUD");
		return pStaticClass;
	}


	void UnRegisterUIShowHideEventDelegate(const struct FString& Source);
	void TimeStatisticStop(int Type, const struct FString& Name);
	void TimeStatisticStart(int Type);
	void TickUdpCollector(float DeltaTime);
	void StatisVisibilityWidget(class UWidget* Widget);
	void StatisLoadedTexture(class UTexture* Texture);
	bool StartUpdate();
	bool StartGrayUpdate();
	void StartDolphinUpdateAfterCDNUpdateFailed();
	void StartCDNUpdateAfterDolphinUpdateFailed();
	void ShutdownUnrealNetwork();
	void SetShouldShowAdaptTipInLobby(bool bShoudShow);
	void SetGameSubMode(const struct FString& SubMode);
	void SetGameStatusMap(TMap<struct FString, struct FString>* InGameStatusMap);
	void SetClientEnterBattleStage(const struct FString& InStageStr);
	void SetAccountByWebLogin(int Channel, const struct FString& OpenID, const struct FString& userID, const struct FString& TokenID, int expireTime);
	void RetryDownload();
	void RetryCDNDownload();
	void RequestPhotoPermission(const struct FScriptDelegate& PermissionResultEvent);
	void RequestCameraPermission(const struct FScriptDelegate& PermissionResultEvent);
	void ReportNetContinuousSaturate();
	void RemoveSuppotAdaptationBind(class UPanelSlot* PanelSlot);
	void ReleaseInGameUIManager();
	void ReleaseBattleUtils();
	void RegisterUserSettingsDelegate(const struct FScriptDelegate& Delegate);
	void RegisterUIShowHideEventDelegate(const struct FString& Source, const struct FScriptDelegate& Delegate);
	void PickImageDetectQRCode(const struct FScriptDelegate& ImagePickDetectEvent);
	void OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo);
	void OnWebviewActionNotify(const struct FString& URL);
	void OnUAAssistantEvent(const struct FUAAssistantInfoWrapper& UAAssistentInfo);
	void OnSDKCallbackEvent(const struct FSDKCallbackInfoWrapper& sdkCallbackInfo);
	void OnRequestComplete(const struct FCDNDownloaderInfo& Info);
	void OnRefreshAccountInfo(bool Result, int InChannel, const struct FString& InOpenid);
	void OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo);
	void OnPlatformFriendNotify(const struct FPlatformFriendInfoMap& PlatformFriendInfoMap);
	void OnNotUpdateFinished();
	void OnLoginFlowNotify(int _Flow, int _Param, const struct FString& ExtraData);
	void OnHttpImgResponse(class UTexture2D* Texture, class UImageDownloader* downloader);
	void OnGroupNotify(const struct FGroupInfoWrapper& groupInfo);
	void OnGetTicketNotify(const struct FString& Ticket);
	void OnGetShortUrlNotify(int Ret, const struct FString& ShortUrl);
	void OnGetCountryNoNotify(int Country);
	void OnGenQRImgNotify(int Ret, int Size, const struct FString& imgPath);
	void OnGameMasterEvent(const struct FString& EventName, int Ret);
	void OnConnectorNetStateChangeNotify(int State, int EventParam1, int EventParam2, int EventParam3);
	void OnCheckUpdateStateFinished(const struct FDownloaderInfo& Info);
	void OnAreaChanged(const struct FString& InArea);
	void NotifyLoadingUIOperation(int OperationType);
	void MakeToSuppotAdaptation(class UPanelSlot* PanelSlot);
	void LuaDoString(const struct FString& LuaString);
	bool IsWindowOB();
	bool IsODPaksBinLoaded();
	bool IsInstallPlatform(const struct FString& Platform);
	bool IsCEHideLobbyUI();
	bool HasAnyNetMsgToHandle();
	bool GetWidgetRenderCanChange();
	class UVoiceSDKInterface* GetVoiceSDKInterface();
	class USaveGame* GetUserSettings();
	class UGDolphinUpdater* GetUpdater();
	class UTranslator* GetTranslator();
	bool GetShouldShowAdaptTipInLobby();
	class USettingSubsystem* GetSettingSubsystem();
	class UGCPufferDownloader* GetPufferDownloader();
	struct FString GetPlayerStatusReportInfo();
	struct FString GetPingReportInfo();
	int GetPhotoPermission();
	struct FString GetPacketLossReportInfo();
	class ULuaStateWrapper* GetLuaStateWrapper();
	class ULuaEventBridge* GetLuaEventBridge();
	class ULuaBlueprintMgr* GetLuaBlueprintSysMgr();
	class UHttpWrapper* GetHttpWrapper();
	struct FString GetGameSubMode();
	class AGameStateBase* GetGameState();
	struct FString GetFPSReportInfo();
	class UEffectSettingMgr* GetEffectSettingMgr();
	int GetDetailNetInfoFromDPM();
	class UColorBlindnessMgr* GetColorBlindnessMgr();
	class UObject* GetClientNetObj();
	struct FString GetClientEnterBattleStageCostTime();
	struct FString GetClientEnterBattleStage();
	int GetCameraPermission();
	class UBugReporter* GetBugReporter();
	class UBattleUtils* GetBattleUtils();
	struct FString GetBattleIDHexStr();
	class UAsyncLoadHelper* GetAsyncLoadHelper();
	void FinishModifyUserSettings();
	void EnableFPSAndMemoryLog(bool bEnable);
	void DispatchLongTimeNoOperation(int TimeOutCounter);
	void DestroyDolphin();
	float CvmRotateClockwise(float Yaw, float DeltaTime);
	class UTexture2D* CreateQRCodeTexture(const struct FString& Text);
	void CreateInGameUIManager();
	void CreateBattleUtils();
	void CallGlobalScriptFunction(const struct FString& InFunctionName);
	void BeginModifyUserSettings();
	void BattleUtilsGameEnd();
	void AfterLoadedEditorLogin();
	void AddAdaptationWidgetDelegateEx(class UPanelSlot* PanelSlot);
	void AddAdaptationWidgetDelegate(class UPanelSlot* PanelSlot);
};


// Class Client.GameFrontendUtils
// 0x0000 (0x0378 - 0x0378)
class UGameFrontendUtils : public UFrontendUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameFrontendUtils");
		return pStaticClass;
	}

};


// Class Client.GameJoyInterface
// 0x0020 (0x0048 - 0x0028)
class UGameJoyInterface : public UObject
{
public:
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameJoyInterface");
		return pStaticClass;
	}


	void ShareVideo(int Channel);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void OnVideoShare(const struct FString& Msg);
	void OnShowVideoPlayer(int IsShow);
	void OnRecordingStart(int Status);
	void OnRecordingEnd(int64_t Duration);
	void OnManualRecordingStart(int Status);
	void OnCheckSDKPermission(bool IsSuccess);
	void OnCheckSDKFeature(int sdkFeatureInt);
	bool IsSDKFeatureSupport();
	static class UGameJoyInterface* GetInstance();
};


// Class Client.GDolphinUpdater
// 0x0310 (0x0338 - 0x0028)
class UGDolphinUpdater : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET
	TMap<struct FString, struct FString>               pakHashList;                                              // 0x0068(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xE8];                                      // 0x00B8(0x00E8) MISSED OFFSET
	bool                                               AllowIOSBGDownload;                                       // 0x01A0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               AllowIOSBGDownloadPush;                                   // 0x01A1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DisableJPKRBGDownloadNightPush;                           // 0x01A2(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x01A3(0x0001) MISSED OFFSET
	int                                                DisableJPKRBGDownloadNightPushAfterHour;                  // 0x01A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DisableJPKRBGDownloadNightPushBeforeHour;                 // 0x01A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                IOSBGDownloadPushDelaySeconds;                            // 0x01AC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableRandomBackupURL;                                    // 0x01B0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnablePufferUpdate;                                       // 0x01B1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               UseLocalSrcVersionWhenUpdateFailed;                       // 0x01B2(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x15];                                      // 0x01B3(0x0015) MISSED OFFSET
	struct FString                                     UpdateInfoPath;                                           // 0x01C8(0x0010) (ZeroConstructor, Config)
	bool                                               OpenDebugLog;                                             // 0x01D8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x15F];                                     // 0x01D9(0x015F) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GDolphinUpdater");
		return pStaticClass;
	}


	void StartAppUpdate();
	void SetEnableCDNGetVersion(bool Enable);
	void OnUpdateError(int curVersionStage, int ErrorCode);
	void OnDolphinBGDownloadDone();
	void OnAreaChanged(const struct FString& InArea);
	bool IsUpdating();
	bool IsInstallInApp();
	bool IsGrayUpdate();
	bool IsExamine();
	void Install();
	int GetTotalValue();
	int GetCurValue();
	int GetCurStage(float* percent, int* GetCurVal, int* GetMaxVal);
	float GetCurPercent();
	uint32_t GetChannelIDWithHUD(class UGameFrontendHUD* InGameFrontendHUD);
	uint32_t GetChannelID();
	void FinishUpdate();
	void FinishPufferUpdate();
	void EnableIOSBGDownload4G(bool bEnableCellularAccess);
	bool EnableCDNGetVersion();
	void DynamicAdjustDolphinSystemParameter(TMap<int, struct FString> InConiguration);
	void ContinueUpdate();
	void CancelUpdate();
	void CancelAppUpdate();
};


// Class Client.AvatarItemDownloadPuffer
// 0x0000 (0x0030 - 0x0030)
class UAvatarItemDownloadPuffer : public UAvatarItemDownload
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AvatarItemDownloadPuffer");
		return pStaticClass;
	}


	void StartDownloadItem(uint32_t ItemId, uint32_t Priority, const struct FScriptDelegate& OnItemDownloadDelegate);
	void StartBatchDownloadItem(TArray<uint32_t> ItemIDs, uint32_t Priority, const struct FScriptDelegate& OnBatchItemDownloadDelegate);
};


// Class Client.GCPufferDownloader
// 0x0428 (0x0450 - 0x0028)
class UGCPufferDownloader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2C8];                                     // 0x0028(0x02C8) MISSED OFFSET
	bool                                               Disable;                                                  // 0x02F0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x97];                                      // 0x02F1(0x0097) MISSED OFFSET
	struct FString                                     DownloadDir;                                              // 0x0388(0x0010) (ZeroConstructor, Config)
	struct FString                                     PufferTmpDir;                                             // 0x0398(0x0010) (ZeroConstructor, Config)
	uint32_t                                           CleanFlagVer;                                             // 0x03A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	TArray<struct FString>                             CleanFileNamePattern;                                     // 0x03B0(0x0010) (ZeroConstructor, Config)
	bool                                               PreFetchPakEnable;                                        // 0x03C0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               PreFetchFileClearEnable;                                  // 0x03C1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               PreFetchConvertEnable;                                    // 0x03C2(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x03C3(0x0005) MISSED OFFSET
	TArray<struct FString>                             PreFetchPakNames;                                         // 0x03C8(0x0010) (ZeroConstructor, Config)
	uint32_t                                           PreFetchReserveredDiskSpace;                              // 0x03D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               PreFetchODPak_Enable;                                     // 0x03DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	int                                                PreFetchODPaks_MaxNum;                                    // 0x03E0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PreFetchODPaks_BatchSize;                                 // 0x03E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PreFetchODPaks_FetchedNum;                                // 0x03E8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PreFetchODPaks_FetchedIndex;                              // 0x03EC(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             PreFetchODPaks_Filenames;                                 // 0x03F0(0x0010) (ZeroConstructor, Config)
	bool                                               AllowIOSBGDownload;                                       // 0x0400(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               AllowIOSBGDownloadPush;                                   // 0x0401(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DisableJPKRBGDownloadNightPush;                           // 0x0402(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0403(0x0001) MISSED OFFSET
	int                                                DisableJPKRBGDownloadNightPushAfterHour;                  // 0x0404(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DisableJPKRBGDownloadNightPushBeforeHour;                 // 0x0408(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                IOSBGDownloadPushDelaySeconds;                            // 0x040C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DisableBGDownloadNotification;                            // 0x0410(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	int                                                OptiHttpConfig_uEnableAverageShardingStrategy;            // 0x0414(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                OptiHttpConfig_uAverageShardingSize;                      // 0x0418(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                OptiHttpConfig_uEnableDynamicExpansionMaxTask;            // 0x041C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PreFetchODPaks_StartTime;                                 // 0x0420(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	struct FString                                     PreFetchODPaks_ConfigName;                                // 0x0428(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData08[0x18];                                      // 0x0438(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GCPufferDownloader");
		return pStaticClass;
	}


	bool StopTask(uint64_t TaskId);
	int StopMergeBinDiffPak(int outterTaskID);
	bool StopCheckDownloadFileFraming(int outterTaskID);
	void StopBGDownloadNotification();
	bool StopAllTask();
	void StartDownloadItem(uint32_t ItemId, uint32_t Priority, const struct FScriptDelegate& downloadDelegate);
	void StartBGDownloadNotification(uint64_t InDownloadedSize);
	void StartBatchDownloadItem(TArray<uint32_t> ItemIDs, uint32_t Priority, const struct FScriptDelegate& OnBatchItemDownloadDelegate);
	void SetTempProductIdBase(int ProductIdRaw);
	void SetPrefetchConfig(bool pakEnable, bool fileClearEnable, bool convertEnable, int reserveredDiskSpace, const struct FString& FileList, int InPreFetchODPaksMaxNum, int InPreFetchODPaksBatchSize);
	void SetIOSBGDownloadAttribute(bool bEnableCellularAccess, bool bEnableResumeData, int nMinFileSize, int nMaxTasks);
	bool SetImmDLPollingTime(int InPollingTime);
	bool SetImmDLMaxTask(int InMaxTask);
	bool SetImmDLMaxSpeed(uint64_t MaxSpeed);
	bool SetImmDLMaxDownloadsPerTask(int InMaxDownloadsPerTask);
	bool SetImmDLGapSize(int InGapSize);
	void SetBattleDownloadSwitch(bool Enable);
	static int ReturnSplitMiniPakFilelist_LuaState();
	static int ReturnLocalFiles_LuaState();
	uint64_t RequestFile(const struct FString& FilePath, bool ForceUpdate, const struct FString& InUA);
	bool RemountPakFiles();
	struct FString ReadFile(const struct FString& Filename);
	bool PreFetchPakFiles();
	int PreFetchODPakFilesUpdate();
	bool PreFetchODPakFilesPreProcess(bool Start);
	bool PreFetchODPakFilesPostProcess(int ErrorCode);
	bool PreFetchODPakFiles(bool Start);
	void OnItemDownloadedInFighting(const struct FString& PackHash, const struct FString& ErrorCode);
	void OnHashGenerateFinished(int outterTaskID, const struct FString& hashCode);
	int MoveFileTo(const struct FString& Filename, const struct FString& from, const struct FString& to);
	int MoveFile(const struct FString& from, const struct FString& to);
	int MergeBinDiffPak(int outterTaskID, const struct FString& PakFilenameOld, const struct FString& PakFilenameDiff, const struct FString& PakFilenameNew, bool fast);
	bool IsODPaks(const struct FString& FilePath);
	bool IsODFileExists(const struct FString& Path);
	bool IsInitSuccess();
	bool IsFileReady(const struct FString& FilePath);
	bool IsFileExist(const struct FString& Filename, const struct FString& extension);
	bool InitializeODPaks();
	struct FString GetTempWorkPath();
	void GetProductIDBase(TArray<int>* ProductIDs);
	void GetProductID(TArray<int>* ProductIDs);
	int GetODPakNum();
	struct FString GetODPakName(const struct FString& Path);
	uint32_t GetInitErrcode();
	uint64_t GetFileSizeCompressed(const struct FString& FilePath);
	float GetFileSize(const struct FString& Filename);
	struct FString GetDownloadPath();
	float GetCurrentSpeed();
	int GetBatchODPaksDownloadList_LuaState();
	void EnableUseOldInterface(bool Enable);
	void DynamicAdjustPufferSystemParameter(int InPufferParameterKey, const struct FString& InPufferParameterValue);
	bool DeleteFileEvenIfUnfinished(const struct FString& FilePath);
	static bool DeleteFile(const struct FString& fullPath);
	bool ConvertPreFetchFiles();
	struct FString ConvertItemIdToPakName(uint32_t ItemId);
	bool ClearUselessODPaks();
	bool ClearPreFetchODPaksFiles();
	bool ClearPreFetchFiles();
	bool CheckDownloadFileFraming(int outterTaskID, const struct FString& Filename, int chunkSize);
};


// Class Client.GMLogShare
// 0x0008 (0x0030 - 0x0028)
class UGMLogShare : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GMLogShare");
		return pStaticClass;
	}


	static void ShareLogFile(const struct FString& InLogFileName);
	static void Init();
};


// Class Client.IMSDKNotice
// 0x0070 (0x0098 - 0x0028)
class UIMSDKNotice : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.IMSDKNotice");
		return pStaticClass;
	}


	TArray<struct FIMSDKNoticeInfo> GetNotice(const struct FString& Scene);
	static class UIMSDKNotice* GetInstance();
	void ClearNotice();
};


// Class Client.HttpWrapper
// 0x0088 (0x00B0 - 0x0028)
class UHttpWrapper : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnResponseEvent;                                          // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnImageDownloadResponseEvent;                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0048(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.HttpWrapper");
		return pStaticClass;
	}


	void SimplePostForLua(const struct FString& URL, const struct FString& Content, int Priority, int QueueType);
	void SetQueueSize(int QueueType, int InSize);
	void SetQueueEnable(bool InEnableQueue);
	void SetPoolEnable(bool InEnablePool);
	int RequestForLua(const struct FString& URL, const struct FString& Verb, const struct FString& Content, int Priority, int QueueType, TMap<struct FString, struct FString>* Headers);
	int ImageDownloadRequestForLua(const struct FString& URL, const struct FString& Verb, const struct FString& Content, int Priority, TMap<struct FString, struct FString>* Headers);
	bool GetQueueEnable();
	bool GetPoolEnable();
	int GetInternalIndex();
	void CancelRequestAll(int QueueType);
	void CancelRequest(int QueueType, int ReqIndex);
};


// Class Client.ImageDownloader
// 0x0088 (0x00B0 - 0x0028)
class UImageDownloader : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     FileURL;                                                  // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CompreesedFileUrl;                                        // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     FileSavePath;                                             // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CompreesedFileSavePath;                                   // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     UrlHash;                                                  // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CompreesedUrlHash;                                        // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               InvalidImageFormat;                                       // 0x00A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SaveDiskFile;                                             // 0x00A9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceUpdate;                                              // 0x00AA(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00AB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ImageDownloader");
		return pStaticClass;
	}


	void Start(const struct FString& URL);
	static class UImageDownloader* MakeDownloaderInGame();
	static class UImageDownloader* MakeDownloader();
	class UTexture2D* GetTextureFromUrlWithoutDownload(const struct FString& URL);
	static struct FString CheckAndGetEncryptUrl(struct FString* InURL);
};


// Class Client.ImageDownloadUtil
// 0x0000 (0x0028 - 0x0028)
class UImageDownloadUtil : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ImageDownloadUtil");
		return pStaticClass;
	}


	void SaveImageDownloadDiskFile(TArray<unsigned char> OutArray, const struct FString& SavePath);
	class UTexture2D* GetTextureFromMemory(const struct FString& PathName);
	class UTexture2D* GetTexture2DFromDisk(const struct FString& SavePath, bool IsCompressed);
	class UTexture2D* GetTexture2DFromArray(TArray<unsigned char> OutArray, bool IsCompressed);
	int GetLocalImageFormat(const struct FString& Path);
	void CheckDiskFile(const struct FString& ImgDir, const struct FString& SubDir);
};


// Class Client.InGameUIManager
// 0x01F8 (0x0368 - 0x0170)
class UInGameUIManager : public UGameBusinessManager
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0170(0x0008) MISSED OFFSET
	TArray<class UClass*>                              InGameUIList;                                             // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0188(0x0068) MISSED OFFSET
	TMap<struct FString, TWeakObjectPtr<class UUAEUserWidget>> WidgetsMap;                                               // 0x01F0(0x0050) (ExportObject, ZeroConstructor)
	TMap<int, struct FDynamicWidgetAsyncLoadData>      PendingAsyncLoadRequests;                                 // 0x0240(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xD8];                                      // 0x0290(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.InGameUIManager");
		return pStaticClass;
	}


	void SubUIWidgetListWithMountData(TArray<struct FInGameWidgetData> InGameWidgetDataList, TArray<struct FString> GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly, int inUIControlState);
	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly);
	void SubDynamicUIWidgetList(TArray<struct FDynamicWidgetData> DynamicWidgetMap);
	void OnAsyncLoadWidgetClassObj(class UObject* InClassObj, int RequestID);
	void HandleUIMessage(const struct FString& UIMessage);
	void HandleMountWidget(class UInGameUIManager* IngameManager);
	void HandleDynamicDestroy();
	void HandleDynamicCreation(bool isAsyncLoad);
	void GetWidgetHandleAsyncWithCallBack(const struct FString& WidgetKey, const struct FScriptDelegate& InCallback);
	class UUAEUserWidget* GetWidgetHandle(const struct FString& WidgetKey);
	class UCanvasPanel* GetMountCanvasPanel(const struct FString& MountOuterName, const struct FString& MountName);
	void ChangeSubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList);
};


// Class Client.IntlSDKComplianceHelper
// 0x0068 (0x0090 - 0x0028)
class UIntlSDKComplianceHelper : public UObject
{
public:
	struct FString                                     IntlSdkGameId;                                            // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FString                                     IntlSdkUrl;                                               // 0x0038(0x0010) (ZeroConstructor, Config)
	struct FString                                     IntlSdkUrlDebug;                                          // 0x0048(0x0010) (ZeroConstructor, Config)
	struct FString                                     IntlSdkKey;                                               // 0x0058(0x0010) (ZeroConstructor, Config)
	bool                                               IntlSdkEnable;                                            // 0x0068(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               IntlLogEnable;                                            // 0x0069(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
	struct FString                                     IntlHttpDnsIP;                                            // 0x0070(0x0010) (ZeroConstructor, Config)
	struct FString                                     IntlPf;                                                   // 0x0080(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.IntlSDKComplianceHelper");
		return pStaticClass;
	}


	bool SetUserProfile(const struct FString& InRegion);
	void SetParentStatus(int ParentCertificateStatus);
	void SetLogConfig(bool enableConsoleLog, bool enableFileLog, int LogLevel);
	void SetEUAgreeStatus(int AgreeStatus);
	void SetAdulthood(int AgeStatus);
	void SendVoiceControlEmail(const struct FString& InEmail, const struct FString& InUserName);
	void SendEmail(const struct FString& InEmail, const struct FString& UserName);
	void QueryUserStatus();
	void QueryIsEEA(const struct FString& InRegion);
	void QueryConfig();
	void OnMSDKEvnSwitched(int Env);
	static class UIntlSDKComplianceHelper* GetInstance();
	void ComplianceInit();
	void CommitBirthday(const struct FString& InBirthday);
	void ChangeRegion(const struct FString& InRegion);
};


// Class Client.LaggingReporter
// 0x0070 (0x0098 - 0x0028)
class ULaggingReporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0050(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LaggingReporter");
		return pStaticClass;
	}

};


// Class Client.LiveBroadcast
// 0x0010 (0x0038 - 0x0028)
class ULiveBroadcast : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LiveBroadcast");
		return pStaticClass;
	}


	void SetFullScreen(bool FullScreen);
	void OpenLiveBroadcast(const struct FString& URL, float Margin);
	static class ULiveBroadcast* GetInstance();
	void CloseWebView();
	static void C2JSetString(const struct FString& str);
	void C2JSetIndex(int Index);
};


// Class Client.LoadTexture
// 0x0000 (0x0028 - 0x0028)
class ULoadTexture : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LoadTexture");
		return pStaticClass;
	}


	static class UTexture2D* LoadTexture2D(const struct FString& ImagePath, bool* IsValid, int* OutWidth, int* OutHeight);
	static class UTexture2D* GetTexture2DFromDiskFile(const struct FString& FilePath);
};


// Class Client.LobbyChatSecurity
// 0x0000 (0x0028 - 0x0028)
class ULobbyChatSecurity : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbyChatSecurity");
		return pStaticClass;
	}


	static struct FString GetKey(const struct FString& OpenID);
};


// Class Client.LobbyDecalBakingComponent
// 0x0030 (0x0370 - 0x0340)
class ULobbyDecalBakingComponent : public USceneComponent
{
public:
	TArray<struct FDecalParameter>                     DecalParams;                                              // 0x0340(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UTextureRenderTarget2D*                      DecalRenderTarget;                                        // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ADecalBakingActor*                           DecalBakingActor;                                         // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                RTSize;                                                   // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0364(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbyDecalBakingComponent");
		return pStaticClass;
	}


	void SwitchDecalParam(int from, int to);
	bool SavePng(class USceneCaptureComponent2D* SceneCapComp, const struct FString& ImagePath, const struct FLinearColor& ClearColor);
	void ReplaceOneDecalParam(class UStaticMeshComponent* MeshComp, int Index, class UDecalBakingParameterComponent* DecalParamComponent);
	void Init();
	void DelOneDecalParam(int Index);
	void Baking(class UStaticMeshComponent* MeshComp, class UMaterial* DecaledMaterial, bool Async);
	void AddOneDecalParam(class UStaticMeshComponent* MeshComp, class UDecalBakingParameterComponent* DecalParamComponent);
};


// Class Client.LobbyMatChgActor
// 0x0018 (0x0450 - 0x0438)
class ALobbyMatChgActor : public AActor
{
public:
	class UStaticMeshComponent*                        stMesh;                                                   // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FLobbyBgMatData>                     matWaitToChangeList;                                      // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbyMatChgActor");
		return pStaticClass;
	}


	void ChangeMaterialToIdx(int idx);
};


// Class Client.LobbyModelUtils
// 0x0000 (0x0028 - 0x0028)
class ULobbyModelUtils : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbyModelUtils");
		return pStaticClass;
	}


	static void TickAndRefreshBoneForGivenSkMeshComp(class USkeletalMeshComponent* InSkMesh);
	static struct FAABBBox GetActorBoundingBox(class AActor* InActor, bool EnableDrawDebugBox);
	static bool DeprojectScreenToWorldFast(class APlayerController* Player, const struct FVector2D& ScreenPosition, struct FVector* WorldPosition, struct FVector* WorldDirection);
};


// Class Client.LobbySceneCaptureActor
// 0x0070 (0x04A8 - 0x0438)
class ALobbySceneCaptureActor : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnCaptureError;                                           // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     PicturePath;                                              // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector2D                                   RTSize;                                                   // 0x0458(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               AlphaFullCorrect;                                         // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlphaReverse;                                             // 0x0461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0462(0x0002) MISSED OFFSET
	float                                              AlphaRate;                                                // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlphaChannelEnable;                                       // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GammaCorrect;                                             // 0x0469(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HSSave;                                                   // 0x046A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ClearDrawRT;                                              // 0x046B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	class UMaterialInstance*                           WriteMat;                                                 // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      DrawRT;                                                   // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneCaptureComponent2D*                    Capture2D;                                                // 0x0480(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D*                    AlphaCapture2D;                                           // 0x0488(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScreenWidth;                                              // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenHeight;                                             // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   AABBBoxLeftPoint;                                         // 0x0498(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   AABBBoxRightPoint;                                        // 0x04A0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LobbySceneCaptureActor");
		return pStaticClass;
	}


	void ResizeRT();
	void LogError(const struct FString& FilePath);
	void Capture();
};


// Class Client.LuaBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULuaBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaBlueprintLibrary");
		return pStaticClass;
	}


	static struct FLuaBPVar StringToLVar(class UObject* WorldContextObject, const struct FString& Value);
	static void SetMemAllocLog(class UObject* WorldContextObject, bool bMemAllocLog);
	static void RequireAndCallLuaWithArgs(class UObject* WorldContextObject, const struct FLuaBPVar& InD, const struct FLuaBPVar& InC, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, struct FString* FunctionName, struct FString* ModulePath, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	static struct FLuaBPVar ObjectToLVar(class UObject* WorldContextObject, class UObject* O);
	static struct FString LVarToString(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	static class UObject* LVarToObject(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	static int LVarToInt(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	static float LVarToFloat(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	static bool LVarToBool(class UObject* WorldContextObject, const struct FLuaBPVar& Value);
	static struct FLuaBPVar IntToLVar(class UObject* WorldContextObject, int Value);
	static struct FLuaBPVar FloatToLVar(class UObject* WorldContextObject, float Value);
	static void CallLuaWithMultiArgs(class UObject* WorldContextObject, const struct FLuaBPVar& InF, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, const struct FLuaBPVar& InC, const struct FLuaBPVar& InD, const struct FLuaBPVar& InE, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	static void CallLuaWithHUD(class UObject* WorldContextObject, class UGameFrontendHUD* GameFrontendHUD, const struct FLuaBPVar& InD, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, const struct FLuaBPVar& InC, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	static void CallLuaWithArgs(class UObject* WorldContextObject, const struct FLuaBPVar& InD, const struct FLuaBPVar& InA, const struct FLuaBPVar& InB, const struct FLuaBPVar& InC, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	static void CallLua(class UObject* WorldContextObject, struct FString* Function, struct FLuaBPVar* OutA, struct FLuaBPVar* OutB, struct FLuaBPVar* OutC, struct FLuaBPVar* OutD);
	static struct FLuaBPVar BoolToLVar(class UObject* WorldContextObject, bool Value);
};


// Class Client.LuaBlueprintMgr
// 0x0058 (0x0080 - 0x0028)
class ULuaBlueprintMgr : public UObject
{
public:
	TMap<struct FString, class ULuaBluepirntSys*>      SystemMap;                                                // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaBlueprintMgr");
		return pStaticClass;
	}


	class ULuaBluepirntSys* GetSystemByName(const struct FString& SystemName);
	void AddSystem(const struct FString& SystemName, const struct FString& BPPath);
};


// Class Client.LuaBluepirntSys
// 0x0070 (0x0098 - 0x0028)
class ULuaBluepirntSys : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	struct FString                                     LuaFilePath;                                              // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaBluepirntSys");
		return pStaticClass;
	}


	void Init();
};


// Class Client.LuaClassObj
// 0x0050 (0x04A0 - 0x0450)
class ALuaClassObj : public ALuaContext
{
public:
	class UGameBusinessManager*                        pManager;                                                 // 0x0450(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0458(0x0002) MISSED OFFSET
	bool                                               bClearSourceCodeAfterInitialized;                         // 0x045A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x45];                                      // 0x045B(0x0045) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaClassObj");
		return pStaticClass;
	}


	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool bPersistentUI, bool InStatusConcern, bool bDynamicWidget, bool bKeepDynamicWidget);
	void SubShowHideEvent(TArray<struct FString> WidgetPathList);
	void SubDefaultSceneCamera(int sceneCameraIndex);
	void SubDefaultChildUI(TArray<struct FString> childList);
	void SubDefaultBaseUI(const struct FString& baseUI);
	void SubCollapseWidgetList(const struct FString& RootWidgetName, TArray<struct FString>* ChildWidgetNames);
	void SetWidgetZorder(int Index, int ZOrder);
	void RestoreWidgetZorder(int Index);
	void RestoreAllWidgetZorder();
	bool IsTopStackPanel();
	bool IsPushedPanel();
	void HandleUIMessageNoFetch(const struct FString& UIMessage);
	void HandleUIMessage(const struct FString& UIMessage);
	void HandleStopAsyncLoad();
	void HandleDynamicDestroy();
	void HandleDynamicCreationInternal(bool isAsyncLoad);
	void HandleDynamicCreation(bool isAsyncLoad);
	void HandleCollapseWidgetList(const struct FString& RootWidgetName);
	struct FString GetTopStackPanelSrcTag();
	struct FString GetTopStackPanelDstTag();
	struct FString GetGameStatus();
	void ChangeSubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList);
	void AddToTopStackPanel();
};


// Class Client.MaskBox
// 0x0048 (0x0160 - 0x0118)
class UMaskBox : public UContentWidget
{
public:
	int                                                Phase;                                                    // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PhaseCount;                                               // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreStretch;                                            // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateRenderTarget;                                       // 0x0121(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0122(0x0002) MISSED OFFSET
	int                                                MaskType;                                                 // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MaskTransformPivot;                                       // 0x0128(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   MaskTransformScale;                                       // 0x0130(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MaskTransformAngle;                                       // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          MaskMaterial;                                             // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MaskTexture;                                              // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0150(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.MaskBox");
		return pStaticClass;
	}


	void SetMaskTransformScale(const struct FVector2D& Scale);
	void SetMaskTransformPivot(const struct FVector2D& Pivot);
	void SetMaskTransformAngle(float Angle);
	void SetMaskMaterial(class UMaterialInterface* EffectMaterial);
	void SetBrushFromTexture(class UTexture2D* Texture);
	struct FVector2D GetVector2D__DelegateSignature();
	class UMaterialInstanceDynamic* GetMaskMaterial();
};


// Class Client.MaskImage
// 0x0038 (0x02A8 - 0x0270)
class UMaskImage : public UImage
{
public:
	int                                                MaskType;                                                 // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MaskTransformPivot;                                       // 0x0274(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   MaskTransformScale;                                       // 0x027C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MaskTransformAngle;                                       // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaskMaterial;                                             // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MaskTexture;                                              // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0298(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.MaskImage");
		return pStaticClass;
	}


	void SetMaskTransformScale(const struct FVector2D& Scale);
	void SetMaskTransformPivot(const struct FVector2D& Pivot);
	void SetMaskTransformAngle(float Angle);
	void SetMaskTexture(class UTexture2D* Texture);
	void SetMaskMaterial(class UMaterialInterface* InEffectMaterial);
	class UMaterialInstanceDynamic* GetMaskMaterial();
};


// Class Client.NewButton
// 0x0000 (0x0520 - 0x0520)
class UNewButton : public UButton
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.NewButton");
		return pStaticClass;
	}


	void SetClickSound(EButtonClickSoundTypes inSoundType);
};


// Class Client.PandoraV2Helper
// 0x00A8 (0x00D0 - 0x0028)
class UPandoraV2Helper : public UObject
{
public:
	struct FScriptMulticastDelegate                    CallGameDelegate;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    JumpDelegate;                                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    AddUserWidgetToGameDelegate;                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    RemoveUserWidgetFromGameDelegate;                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    PlaySoundDelegate;                                        // 0x0068(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    GetAccountTokenDelegate;                                  // 0x0078(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    GetCurrencyDelegate;                                      // 0x0088(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ShowItemTipsDelegate;                                     // 0x0098(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ShowItemIconDelegate;                                     // 0x00A8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ShowItemDelegate;                                         // 0x00B8(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.PandoraV2Helper");
		return pStaticClass;
	}


	void SetUserData(TMap<struct FString, struct FString> InUserdata);
	void SetSDKVersion(int InSDKVer);
	void SetSDKCoreDataPath(const struct FString& InPath);
	void SetPandoraEnable(bool Enable);
	static void SetLogEnable(bool Enable);
	void RefreshUserDataTokens();
	void Init(bool InEnable, int InEnv, bool InEnablePixUI);
	int GetSDKVersion();
	static class UPandoraV2Helper* Get();
	void Do(const struct FString& InCmdJson, int InMsgType);
	void Deinit();
	void Close();
};


// Class Client.PlatformAppraise
// 0x0000 (0x0028 - 0x0028)
class UPlatformAppraise : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.PlatformAppraise");
		return pStaticClass;
	}

};


// Class Client.PublishAreaMgr
// 0x0000 (0x0028 - 0x0028)
class UPublishAreaMgr : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.PublishAreaMgr");
		return pStaticClass;
	}


	static void SelectArea(const struct FString& InArea);
	static bool IsMultiAreaBuild();
	static struct FString GetString(const struct FString& InKey, const struct FString& InDefaultValue);
	static struct FString GetPublishAreas();
	static int GetInt(const struct FString& InKey, int InDefaultValue);
	static bool GetBool(const struct FString& InKey, bool InDefaultValue);
	static struct FString GetArea();
};


// Class Client.SavedFileUtil
// 0x0000 (0x0028 - 0x0028)
class USavedFileUtil : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.SavedFileUtil");
		return pStaticClass;
	}


	static int64_t GetFileCreationTime(const struct FString& Filename);
	static void GetDirSizeAsync(const struct FString& Dir, bool Recursive, const struct FSluaBPVar& Callback);
	static int64_t GetDirSize(const struct FString& Dir, bool Recursive);
	static void FindFilesAsync(const struct FString& Dir, const struct FString& Pattern, bool Recursive, const struct FSluaBPVar& Callback);
	static TArray<struct FString> FindFiles(const struct FString& dirPath, const struct FString& extension, bool Recursive);
	static void DeleteDirectoryAsync(const struct FString& Dir, const struct FSluaBPVar& Callback);
	static bool CancelLoadSavedImage(int Handle);
	static int AsyncLoadSavedImage(const struct FString& AssetPath, bool IsCompressed, const struct FSluaBPVar& Callback);
};


// Class Client.ScreenInput
// 0x0058 (0x0080 - 0x0028)
class UScreenInput : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnScreenTouch;                                            // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseButtonUp;                                          // 0x0038(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseButtonDown;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMotionDetected;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScreenInput");
		return pStaticClass;
	}


	void Shutdown();
	void OnScreenTouch__DelegateSignature();
	void OnMouseButtonDown__DelegateSignature(const struct FVector2D& ContainerPos);
	void OnMotionDetected__DelegateSignature(const struct FVector& Tilt, const struct FVector& RotationRate, const struct FVector& Gravity, const struct FVector& Acceleration);
	void Init();
};


// Class Client.ScreenshotMaker
// 0x0000 (0x0028 - 0x0028)
class UScreenshotMaker : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScreenshotMaker");
		return pStaticClass;
	}


	static void SetDefaultShowUI(bool ShowUI);
	static bool SaveToPhotosAlbumEx(const struct FString& pathStr);
	static bool SaveToPhotosAlbum(const struct FString& pathStr);
	static void ResizePicture(const struct FString& pathStr, float Scale, const struct FString& savePathStr);
	static void ReMakePicture(const struct FString& pathStr, const struct FVector4& Vector4);
	static struct FString ReMakeMomentPicture(const struct FString& srcPath, const struct FVector4& Vector4);
	static bool MosaicPictureByLocalImage(TArray<struct FString> Paths, const struct FString& toPath, int Width, float Scale);
	static class UTextureRenderTarget2D* MakeWidgetScreenshot(class UWidget* Widget, const struct FVector2D& DrawSize, float Scale);
	static struct FString MakePictureWithName(const struct FString& PicName);
	static struct FString MakePictureToLua(class UGameFrontendHUD* InFrontendHUD, const struct FString& tableName, const struct FString& FunctionName, bool isShowUI);
	static struct FString MakePictureByName(const struct FString& PicName, bool ShowUI);
	static struct FString MakePicture(bool isShowUI);
	static struct FString MakeBugReprotPic(bool isShowUI);
	static bool HasCaptured(const struct FString& pathStr);
	static int GetSaveStatus();
	static int GetPhotoHash(const struct FString& pathStr, int algorithmVersion);
	static TArray<struct FString> GetMomentThumbPictureFullPathFiles();
	static TArray<struct FString> GetMomentPictureFullPathFiles();
	static int GetHashFromArray(TArray<unsigned char> inArray, int algorithmVersion);
	static void CropAndResizePicture(const struct FString& pathStr, float Scale, float cropWidthScale, float cropHeightScale, const struct FString& savePathStr);
};


// Class Client.ScriptHelperClient
// 0x0000 (0x0028 - 0x0028)
class UScriptHelperClient : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScriptHelperClient");
		return pStaticClass;
	}


	static struct FString ZLIBDecompress(const struct FString& CompressedData, int CompressedSize, int UnCompressedSize, bool IsHEX);
	static int ZLIBCompress_LuaState();
	static void WakeupFromSuspendSound();
	static int VPNTearDown();
	static int VPNSetUserInfo(const struct FString& InUserId, const struct FString& InUserToken, const struct FString& InAppId);
	static int VPNSetPortRange(int Min, int Max);
	static int VPNSetNodelist(const struct FString& InNodelist);
	static int VPNPrepare();
	static int VPNHandUp();
	static struct FString VPNGetNodeRegionList();
	static int VPNDialUp(const struct FString& InRegion);
	static void Vibrate(int Param);
	static bool VerifySavFileData(int CompressedSize, int UnCompressedSize, int ToCheckEndWithCDLength, TArray<unsigned char>* ByteArray);
	static bool USFSIsNewestVersion();
	static TArray<struct FString> USFSGetUpgradeDiffList();
	static void USFSDeletePkg_V2(const struct FString& PkgOrig);
	static void USFSDeletePkg(const struct FString& PkgOrig);
	static void USFSCacheSysContextUpdatePkgPatch(TMap<struct FString, int> PkgPaths);
	static void USFSCacheSysContextUpdatePkgDiff(TArray<struct FString> PkgDiffPaths);
	static void USFSCacheSysContextUpdatePkgBinDiff(TArray<struct FString> PkgDiffPaths);
	static void USFSCacheSysContextUpdatePkg(TArray<struct FString> PkgPaths);
	static void USFSCacheSysContextSwitchWrite(bool bSwitch);
	static void USFSCacheSysContextSwitchAll(bool bSwitch);
	static void USFSCacheSysContextStart();
	static void USFSCacheSysContextChangePkgName(TArray<struct FString> PkgChgInfo);
	static void USFSCacheSysContexInit(TMap<struct FString, struct FString> PkgNameToConHash);
	static struct FString UserName();
	static struct FString UrlEncode(const struct FString& UnencodedString);
	static void UQMSetAppVersion(const struct FString& Version);
	static void UQMCrashPutUserData(const struct FString& Key, const struct FString& Value);
	static void UQMCrashPostExceptionFull(int Category, const struct FString& Name, const struct FString& Msg, const struct FString& stack, int dumpNativeType);
	static void UQMCrashPostException(int Category, const struct FString& Reason, int dumpNativeType);
	static void UQMCrashLog(int Level, const struct FString& Tag, const struct FString& Log, bool needDump);
	static void UploadGainCrashLogBackground();
	static void UpdateServerTimeInSec();
	static void UpdatePublishRegionForBattle();
	static bool UpdatePkgCompressionInfo(TArray<struct FString> PkgList, const struct FString& CompressMethod);
	static void UpdateMemResource(const struct FString& ResType, const struct FString& KeyWord);
	static void UpdateAkAudioDeviceBluetoothDelay(int InDelayTime);
	static void UnsubscribeFromTopic(const struct FString& Topic);
	static bool UnmountPakFile(const struct FString& InPakFilename);
	static void UnmapUnusedMap();
	static void UnitTestODPaksOpen(int fileCount, int Times, int threadNum);
	static void TVMacroTesting();
	static void TrimEngineMemory();
	static void TriggerTouchEvent(float X, float Y, int event_type);
	static void TriggerTestCmd(const struct FString& Cmd);
	static void TriggerOOMCrash();
	static void TriggerNativeDump(int DumpCount, double Timespan, int NativeDumpType);
	static void TriggerLoginCrashTest(int Type);
	static void TriggerLobbyCrashTest(int Type);
	static void TriggerBlockAndroidANR();
	static void TPerforPlatReport(int Type, const struct FString& ExtraInfo, bool Send);
	static void TPerforPlatPostLargeValueS(const struct FString& catgory, const struct FString& Key, const struct FString& Value);
	static void TPerforPlatMarkTime(int Type);
	static void TPerforPlatMarkLevelFin();
	static void TPerforPlatDisconnectReport(class UGameFrontendHUD* GameFrontendHUD, int EventID);
	static void TPerforPlatDataReport(class UGameFrontendHUD* GameFrontendHUD, int EventID, const struct FString& EventInfo);
	static void TMFPSwitchRichTapMode(const struct FString& Mode);
	static void TMFPStopRichTap();
	static void TMFPStartRichTapWithData(const struct FString& InKey, TMap<struct FString, struct FString> InMapData);
	static void TMFPStartRichTap(const struct FString& Filename);
	static struct FString TMFPLoadHeFile(const struct FString& StrFilePath);
	static struct FString TMFPGetRichTapSupport();
	static struct FString TMFPGetRichTapAmplitudeSupport();
	static void TestSaveStringToFile(const struct FString& String, const struct FString& TargetDir, const struct FString& FullPathName);
	static void TestLoadGameSlotMultiThread();
	static void TestLoadGameSlot();
	static uint64_t TestCallCvmFuncWithVarArg(int FuncID, TArray<struct FString> Arguments);
	static int Tea2Encrypt_LuaState();
	static int Tea2Decrypt_LuaState();
	static struct FString SystemLanguageId();
	static void SyncLoadPackageUpdateCurrentWorldStage(const struct FString& WorldStage);
	static void SyncLoadPackageUpdateCurrentWorldName(const struct FString& WorldName);
	static void SyncLoadPackageInfoCollect(const struct FString& PackageName, const struct FString& WorldName);
	static TArray<struct FString> SyncLoadPackageGetPackageListForWorld(const struct FString& WorldName);
	static void SyncLoadInfoCollector_Reset();
	static void SyncLoadInfoCollector_OnLevelStart();
	static void SyncLoadInfoCollector_OnLevelEnd();
	static void SwitchUser(bool useExternalAccount, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void SwitchSceneCamera(class UGameFrontendHUD* GameFrontendHUD, const struct FString& SceneCameraName, float BlendTime, bool bForce);
	static void SwitchOutputDeviceFileLog();
	static void SuspendSound();
	static void SubscribeToTopic(const struct FString& Topic);
	static struct FString StringToJsonString(const struct FString& String);
	static struct FMargin StringToFMargin(const struct FString& MarginStr);
	static void StopUIStat(const struct FString& UIName, bool bReport);
	static struct FTouchInputRecord StopTouchRecord();
	static bool StopTask(class UGameFrontendHUD* GameFrontendHUD, uint64_t TaskId);
	static bool StopShaderPrecompile();
	static void StopPuffer(class UGameFrontendHUD* GameFrontendHUD);
	static void StopMonitorFileModified();
	static void StopHapticsEngine();
	static void StopH5Downloading();
	static void StartUIStat(const struct FString& UIName);
	static void StartTrace(const struct FString& InHost, int InStartTTL, int InMaxTTL, int InCount, const struct FString& InExtraData);
	static void StartTouchRecord();
	static bool StartShaderPrecompile();
	static void StartOpenReadCollect(class UGameFrontendHUD* GameFrontendHUD, bool bStart);
	static void StartMonitorFileModified(const struct FString& Filename, int Mask);
	static void StartHapticsEngine(const struct FScriptDelegate& Callback);
	static bool StartGrayUpdate(class UGameFrontendHUD* GameFrontendHUD);
	static void StartDownloadItem(uint32_t ItemId, uint32_t Priority, const struct FScriptDelegate& OnItemDownloadDelegate);
	static void StartDolphinResourceUpdate(class UGameFrontendHUD* GameFrontendHUD);
	static void StartCDNUpdateAfterDolphinUpdateFailed(class UGameFrontendHUD* GameFrontendHUD);
	static void StartBatchDownloadItem(uint32_t Priority, const struct FScriptDelegate& OnBatchItemDownloadDelegate, TArray<uint32_t>* ItemIDs);
	static void ShutdownUnrealNetwork(class UGameFrontendHUD* GameFrontendHUD);
	static void ShutdownPuffer(class UGameFrontendHUD* GameFrontendHUD);
	static void ShrinkUObjectHashTables();
	static void ShowWebView(bool Show);
	static void ShowVLink(const struct FString& jsonString, const struct FString& signString);
	static void ShowVideoListDialog();
	static void ShowScreenDebugMessage(const struct FString& Message);
	static void ShowH5WebView();
	static void ShorterStreamingDistanceWhenGameEnd(uint32_t Distance);
	static void ShareWithPhotoByChannel(const struct FString& _messageExt, const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _url, const struct FString& _messageAction, int _channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void ShareLogFile(const struct FString& InLogFileName);
	static struct FString SHA256(const struct FString& str);
	static struct FString SHA1(const struct FString& str);
	static void SetWebviewPosition(int X, int Y, int W, int H);
	static void SetWebViewCacheInfoDelegate(const struct FScriptDelegate& Delegate);
	static bool SetVpnServiceStrategy(const struct FString& InKey, int InValue);
	static void SetVoiceSwitch(class UGameFrontendHUD* GameFrontendHUD, bool FirstVoicePopupSwitch, bool GDPRForbidVoiceSwitch, bool GDPRSettingSwitch);
	static void SetVoiceReEneterInfo(class UGameFrontendHUD* GameFrontendHUD, float Duration, int MaxCount);
	static void SetUserVulkanSetting(bool Enable);
	static void SetUserTMFPTapEnableFlag(int EnableFlag);
	static void SetUserProperty(const struct FString& propertyKey, const struct FString& propertyValue);
	static void SetUseMouseForTouch(bool bUse);
	static bool SetUpdatedSoPatchFile(const struct FString& InSourceFile, int InABI);
	static void SetupAkAudioDeviceListener();
	static void SetUIStatMaxClickTimes(int Times);
	static void SetUIRectOffset(const struct FString& uirect);
	static void SetUIElemLayoutJsonConfigSwitch(class UGameFrontendHUD* GameFrontendHUD, bool UIElemLayoutJsonConfigSwitch);
	static void SetUIConfigTMFPTapEnableFlag(int uiEnable);
	static void SetUDPPingControlFlag(int Lock, int BindType);
	static void SetTssNetworkStatus(class UGameFrontendHUD* GameFrontendHUD, int Status);
	static void SetTMFPTapWhiteListFlag(int TapWhiteList);
	static void SetTextureGroupLODBias(unsigned char GroupID, int MipBias);
	static void SetTestEditorNum(int PlayerCount, const struct FString& Num, const struct FString& SceneName, int Platform);
	static bool SetSoundEffectQuality(int Type);
	static void SetShowFriendObservers(class UGameFrontendHUD* GameFrontendHUD, bool bShow);
	static void SetServerTimeInSec(int64_t InServerTimeInSec);
	static void SetSelfieSwitch(class UGameFrontendHUD* GameFrontendHUD, bool SelfieSwitch);
	static int SetSdkIoctl(class UGameFrontendHUD* GameFrontendHUD, int request, struct FString* Token);
	static void SetReportBugSwitch(class UGameFrontendHUD* GameFrontendHUD, bool ReportBugSwitch);
	static void SetRemoteResource(class UObject* DescObj, struct FString* AssetId);
	static void SetRegionNoByLua(int regionNo, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void SetRedBloodSwitch(bool redBloodSwitch);
	static void SetPufferBuildInfo(const struct FString& PipeLineID, const struct FString& BuildNo);
	static void SetPublishRegion(const struct FString& Region);
	static void SetPlayerBaseInfo(class UGameFrontendHUD* GameFrontendHUD, const struct FString& OpenID, uint64_t RoleID, const struct FString& PlayerName, const struct FString& HeadIconUrl);
	static void SetNationSwitch(class UGameFrontendHUD* GameFrontendHUD, bool NationAllSwitch, bool NationBattleSwitch, bool NationRankSwitch);
	static void SetMyFriendObserversDetail(class UGameFrontendHUD* GameFrontendHUD, TArray<struct FFriendObserver>* FriendObserversDetails);
	static void SetMiniGameFinalAwardResId(class UGameFrontendHUD* GameFrontendHUD, int AwardResId);
	static void SetMatchNoAuthMode(bool bUsingNoAuth);
	static void SetLuaFastGCMode(int Mode);
	static bool SetLinkStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool ShowUnderline, const struct FString& PathHyperLinkNormalBrush, const struct FString& PathHyperLinkHoveredrBrush);
	static void SetLevelStreamingUnloadTimeslice(bool Enabled);
	static void SetLevelGamePlayLoadPriority(class ULevelStreaming* TargetLevel, int Priority);
	static void SetiTOPLbsDelay(int Delay);
	static void SetIPRegion(int region_no);
	static void SetIosStuckEnableByServerConfig(int bEnable);
	static void SetIOSBGDownloadAttribute(class UGameFrontendHUD* GameFrontendHUD, bool bEnableCellularAccess, bool bEnableResumeData, int nMinFileSize, int nMaxTasks);
	static void SetImageVersionString(const struct FString& oldVersion, const struct FString& newVersion);
	static bool SetImageStyle(const struct FString& StyleName, int ImageSize, const struct FString& ImagePath, const struct FString& ImageColor, bool bPreLoad);
	static void SetIGProxyData(const struct FString& InJsonData);
	static void SetHapticsEngineEnable(bool bEnable);
	static void SetGlobalRedBloodSwitch(bool redBloodSwitch);
	static void SetGDPRUserType(class UGameFrontendHUD* GameFrontendHUD, int GDPRUserType);
	static void SetGameThreadPriority(int NewPriority);
	static void SetGameThreadName(const struct FString& GameThreadName);
	static void SetGameStatusMap(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FString, struct FString>* GameStatusMap);
	static void SetGameSrvID(class UGameFrontendHUD* GameFrontendHUD, int GameSrvID);
	static void SetForceVulkanAvailable(bool Enable);
	static bool SetFontStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool UseShadow, bool IsBold);
	static void SetExtraLocalizationMap(TMap<struct FString, struct FString> translationMap);
	static void SetExtraItemTableMappingByFix(TMap<int, struct FItemFixTableItem> ItemFixMap);
	static void SetDynamicLevels(class UGameFrontendHUD* GameFrontendHUD, TArray<struct FString>* DynamicLevels);
	static void SetDumpShaderCompile(int iDumpVal);
	static void SetDownLoadLanguageName(const struct FString& Language);
	static bool SetDisableGyrSensor(bool InDisableSensor);
	static void SetCrashContextReportLevel(int Level);
	static void SetConfigString(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName, const struct FString& Value);
	static void SetConfigInt(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName, int Value);
	static void SetConfigBool(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName, bool Value);
	static int SetCentauriZoneID_LuaState();
	static void SetCentauriIDC(const struct FString& CentauriIdc);
	static void SetCanWatchEnemy(class UGameFrontendHUD* GameFrontendHUD, bool bCan);
	static void SetBtnClickInCdFunc();
	static void SetAppDetailInfo(const struct FString& appInfo);
	static void SetAllLinkStyle();
	static void SetAllImageStyle();
	static void SetAllFontStyle();
	static void SetActivePufferTick(class UGameFrontendHUD* GameFrontendHUD, bool ActivePufferTick);
	static void SetAccountRegion(const struct FString& Region);
	static void SendRetriveBeginnerFinisheGuideReq(class UGameFrontendHUD* GameFrontendHUD);
	static void SendRecordFinishedGuideReq(class UGameFrontendHUD* GameFrontendHUD, const struct FString& TipsID);
	static void SendPlayEmote(class UGameFrontendHUD* GameFrontendHUD, int EmoteIndex);
	static void SendLobbyChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Content);
	static void SendDirtyToFilter(class UGameFrontendHUD* GameFrontendHUD, const struct FString& dirtyString, const struct FString& prefixString, int UID);
	static void SendClientLog(class UGameFrontendHUD* GameFrontendHUD, const struct FString& errorReason, const struct FString& errorDescription, bool pullAll);
	static void ScheduleLocalNotificationAtTime(int Year, int Month, int Day, int Hour, int Minute, int Second, bool LocalTime, const struct FString& Title, const struct FString& Body, const struct FString& Action, int NotificationID);
	static void SaveStringToIntermediateFile(const struct FString& String, const struct FString& Filename);
	static void SaveStringToFile(const struct FString& String, const struct FString& Filename);
	static void SaveStringArrayToFile(TArray<struct FString> Lines, const struct FString& Filename);
	static void SaveSMapsFile();
	static bool SaveSavFileByByteArray(const struct FString& Filename, int CompressedSize, int UnCompressedSize, TArray<unsigned char>* ByteArray);
	static bool SaveSavFile(const struct FString& CompressedData, const struct FString& Filename, int CompressedSize, int UnCompressedSize, bool IsHEX);
	static void SaveLuaMemoryFile(const struct FString& Filename, const struct FString& InputContent, bool RmExistFile);
	static void SaveLoadGameSlotCrashFlag();
	static void SaveJankInfoToLocalFile(const struct FString& Filename);
	static void SaveGameSlotMultiThread();
	static bool SaveArrayToFile(TArray<unsigned char> Content, const struct FString& Filename);
	static void SaveAOSMemMapsInfo();
	static void RunTestCreateLobbyActor();
	static uint64_t RunCvmTestCases();
	static struct FString RunConsoleCommondAndGetString(const struct FString& commond);
	static void RunConsoleCommond(const struct FString& commond);
	static void RoomOwnerInterruptGame(class UGameFrontendHUD* GameFrontendHUD);
	static void ReturnToLobby(class UGameFrontendHUD* GameFrontendHUD);
	static void RestartShaderPrecompileBackend();
	static void RestartShaderPrecompile();
	static void RestartPuffer(class UGameFrontendHUD* GameFrontendHUD, bool needCheck, int maxDownloadsPerTask, int maxDownTask, int maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, int versionType, const struct FString& InDownloadFuncDict);
	static void RestartGame();
	static TArray<struct FString> ResolveDNSWithServerIP(const struct FString& DomainName, const struct FString& ServerIP);
	static TArray<struct FString> ResolveDNS(const struct FString& DomainName);
	static void ResetSlateTickEveryFrame(int SlateUIID);
	static void ResetAllSlateTickEveryFrame();
	static void RequireSlateTickEveryFrameBeforeTargetFrame(int FrameNum);
	static void RequireSlateTickEveryFrame(int SlateUIID);
	static uint64_t RequestFile(class UGameFrontendHUD* GameFrontendHUD, const struct FString& FilePath, bool ForceUpdate, const struct FString& InUA);
	static void ReportFirebaseEventWithString(const struct FString& eventTypeString, const struct FString& bundleExtraKey, const struct FString& bundleExtraValue, bool isUnique);
	static void ReportFirebaseEventWithParam(const struct FString& eventTypeString, TMap<struct FString, struct FString> _params, bool isUnique);
	static void ReportEventRegisterCompleted();
	static void ReportEventPurchaseConsider();
	static void ReportEventLoadingCompleted();
	static void ReportCrashLogWithFDNum(const struct FString& baseLogInfo);
	static void ReportContextValuesOnCrash(const struct FString& Json);
	static void ReportBattleChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Msg, int MsgExtraParam);
	static void ReplyInvite(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, bool bReply);
	static bool RemoveWebView();
	static void RemoveKnownMissingPackage(const struct FString& PackageName);
	static void RemoveBPClassManager();
	static bool RemountPakFiles(class UGameFrontendHUD* GameFrontendHUD);
	static void RemapMemMap(const struct FString& Name, int NewSize);
	static void ReleaseSplashScreenImage();
	static void ReleaseSlateTickEveryFrame(int SlateUIID);
	static void ReleaseRTPoolSnapShots();
	static void ReleaseRTPoolResources();
	static void ReInitializePuffer(class UGameFrontendHUD* GameFrontendHUD, bool needCheck, int maxDownloadsPerTask, int maxDownTask, int maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, int versionType, const struct FString& InDownloadFuncDict);
	static bool ReInitializeCvm();
	static void RegisterMemoryWarningHandle(const struct FScriptDelegate& OnMemoryWarning);
	static void ReduceVirMem(int Low, int Dec);
	static bool RecoverWebView();
	static bool RecoverShrunkODPaksBins(TMap<uint32_t, struct FString> Keys);
	static void RecordVirMemInfo();
	static void RecordLuaExceptionInfo(const struct FString& exception);
	static void RebuildHISM(class UHierarchicalInstancedStaticMeshComponent* comp, bool Async, bool ForceUpdate);
	static void QuitFightChat(class UGameFrontendHUD* GameFrontendHUD);
	static void QuickLogin(int refreshTokenBeforeExpDays, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString ProjectSavedDir();
	static struct FString ProjectDir();
	static struct FString ProjectContentDir();
	static bool ProcessSoPatch(const struct FString& InAppVerStr);
	static void ProcessServerRelationChainError(const struct FString& ErrorMsg, int iForceLoginInterval, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void PrintUAEDataTableManagerMemDetail();
	static void PostGameStatusToTMFPSMap(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Key, TMap<struct FString, struct FString>* mapData);
	static void PlayHapticsFile(const struct FString& FilePath, int Duration, const struct FScriptDelegate& Callback);
	static void OpenWebviewInGameProcess(const struct FString& URL, int Left, int Top, int Right, int Bottom);
	static void OpenURLInSDK(const struct FString& InURL, bool InVisibleToolbar, bool InSystemWebBrowser, bool InFullScreen, const struct FString& ExtraJson);
	static bool OpenShaderCodeLibrary(const struct FString& Path, const struct FString& VersionNum, bool bForceOpen);
	static void OpenH5FromCache(class UGameFrontendHUD* GameFrontendHUD, const struct FString& ModuleName, const struct FString& Language, int netType, int Top, int Left, int Right, const struct FString& ViewParam);
	void OnWebViewCacheInfoDelegate__DelegateSignature(int code);
	static void OnWebViewCache(int code);
	static void OnPakFileCRCCheck(const struct FString& PakFileName);
	static void OnNotifyFightFriendChat(class UGameFrontendHUD* GameFrontendHUD, const struct FFightFriendChat& Data);
	static void OnIslandPlayerInfoNotify(class UGameFrontendHUD* GameFrontendHUD, int LandId);
	static bool OnInviteNextBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Name);
	static void OnGetUpdateStateCDNConfigUrl(class UGameFrontendHUD* GameFrontendHUD, const struct FString& URL);
	struct FString OnGetItemBigIcon__DelegateSignature(const struct FString& strPath);
	static void OnFilterFinish(class UGameFrontendHUD* GameFrontendHUD, const struct FString& filterText);
	static void OnEnterLobbyReloadLocalizationResource(class UGameFrontendHUD* GameFrontendHUD);
	static void OnEnterGameReleaseLocalizationResource(class UGameFrontendHUD* GameFrontendHUD);
	static void OnDolphinAppUpdateFinished(class UGameFrontendHUD* GameFrontendHUD);
	static void OnCombatHitFeedback(class UGameFrontendHUD* GameFrontendHUD, bool bCombatHitFeedbackEnable);
	static void OnBattleResultCallBack(class UGameFrontendHUD* GameFrontendHUD, struct FBattleResultData* BattleResultData);
	static void OnBattleResult(class UGameFrontendHUD* GameFrontendHUD, struct FBattleResultData* BattleResultData);
	static void ObjectPoolServerSwitch(bool bSwitchOn);
	static void NotifyBeginnerFinishedGuideUpdated(class UGameFrontendHUD* GameFrontendHUD, bool GuideSwitch, TArray<struct FPlayerFinishedGuide> finished_guide, int player_level, int player_exp_type);
	static void NoschatShareWithUrlInfo(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _url, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void NoschatShareToFriend(const struct FString& mediaId, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& msdkExtInfo, const struct FString& messageExt, const struct FString& mediaTagName, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void NoschatShare(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _messageExt, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void MSDKWebViewCallJS(const struct FString& strJS);
	static void MoveFollowTarget(class UGameFrontendHUD* GameFrontendHUD, int FollowType, uint64_t UID);
	static bool MoveFile(const struct FString& SrcFullPath, const struct FString& DesFullPath);
	static bool MountPakFile(const struct FString& InPakFilename, const struct FString& Key);
	static void MessageBoxExt(const struct FString& Caption, const struct FString& Text);
	static bool MediaCopyFromPakToLocal(const struct FString& from, bool bForce);
	static int MD5LuaString_LuaState();
	static struct FString MD5HashAnsiString(const struct FString& str);
	static void ManualSleep(float Seconds);
	static struct FString LuaLoadFileToString(const struct FString& InFileName);
	static void LogoutAllDevices(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void Logout(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void LoginWithExtraInfo(uint32_t Channel, const struct FString& InExtraJson, bool SkipLocalCacheCheck, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void Login(uint32_t Channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void LobbySetUserRegion(int InRegion);
	static void LobbySetProxyPortlist(const struct FString& InNodePortList);
	static void LobbySetProxyNodelist(const struct FString& InNodeIpList);
	static void LobbySetEchoPortlist(const struct FString& InEchoPortList);
	static bool LobbyIsLinkProxy(const struct FString& InIp, int InPort);
	static void LobbyAddAddress(const struct FString& InProtocol, const struct FString& InIp, int InPort);
	static bool LoadSOFromOBB();
	static struct FSavFileData LoadSavFileAsByteArray(const struct FString& Filename);
	static int LoadSavFile_LuaState();
	static struct FString LoadIntermediateFileToString(const struct FString& Filename);
	static void LoadH5FromCache(class UGameFrontendHUD* GameFrontendHUD, const struct FString& ModuleName, const struct FString& Language, int netType, int Top, int Left, int Right, const struct FString& ViewParam);
	static struct FString LoadFileToStringByFullPath(const struct FString& FullPathName);
	static struct FString LoadFileToString(const struct FString& Filename);
	static TArray<unsigned char> LoadFileToArrayByFullPath(const struct FString& FullPathName);
	static TArray<unsigned char> LoadFileToArray(const struct FString& Filename);
	static bool LoadAmendODs(TMap<uint32_t, struct FString> Keys);
	static void LoadAFDTranslation();
	static TArray<struct FString> ListDirectoryFiles(const struct FString& DirectoryPath);
	static void ListAllLoadedSymbols();
	static void LaunchUrl(const struct FString& URL);
	static bool IsWindowsClientReplay(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsWindows();
	static bool IsWindowOB(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsUsingBluetooth();
	static bool IsUseTypicalResultFlowMode(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsUpdateSkip(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsTypicalMode(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsTest();
	static bool IsSystemVPNOpened();
	static bool IsSupportVulkan();
	static bool IsSplitMiniPakVersion();
	static bool IsSplitMapPakVersion();
	static bool isSkipUpdateByRepair(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsShipping();
	static bool IsSavFileData(const struct FString& CompressedData, int CompressedSize, int UnCompressedSize, int ToCheckEndWithCDLenght, bool IsHEX);
	static bool IsRuningOnVulkan(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsReleaseVersion(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsPVEMode(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsOpenAOS90FPSConfig();
	static int IsOpenAOS120FPSConfig();
	static bool IsODPakMonted(const struct FString& Filename);
	static bool IsNotificationEnabled();
	static bool IsNoAuthMode();
	static bool IsNetworkReachable();
	static bool IsNeedClearHiddenUI(class UFrontendHUD* GameFrontendHUD);
	static bool IsMounted(const struct FString& Filename);
	static bool IsMlAIDebug();
	static bool IsMatchVersion();
	static bool IsMatchNoAuthMode();
	static bool IsLowMemoryDevice();
	static bool IsLaunchedByLocalNotification();
	static bool IsLastSessionCrash();
	static bool IsJaguar();
	static bool IsIPhoneFiveSOriginal();
	static bool IsIPhoneFiveS(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsIOSVersionAbove13();
	static bool IsInstallWX(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallWhatsapp(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallVK(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallTwitter(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallOpenRec(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallMirrativ(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallMessenger(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallLite(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallLine(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallFaceBook(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallDiscord(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallBgBgByiTOP(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInReplayState(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsHOS();
	static bool IsHapticsEngineEnable();
	static bool IsGameFileExistsWithPakCheck(const struct FString& Filename);
	static bool IsForCE();
	static bool IsFileReady(class UGameFrontendHUD* GameFrontendHUD, const struct FString& FilePath);
	static bool IsFileExistsWithPakCheckMatchExt(const struct FString& Filename);
	static bool IsFileExistsWithPakCheck(const struct FString& Filename);
	static bool IsFileExistsWithOutPakCheck(const struct FString& Path);
	static bool IsFileExistInCSCWithCheck(const struct FString& Path);
	static bool IsFileExistByFileName(const struct FString& Filename);
	static bool IsFileExistByExtension(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Filename, const struct FString& fileExtension);
	static bool IsFileExist(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Filename);
	static bool IsEnableDSGrayPublishFlag(uint64_t nGrayPublishFlag);
	static bool IsEmulatorWhenInit();
	static bool IsEmulator();
	static bool IsEditorDedicatedServer();
	static bool IsEditor();
	static int IsEarlyZPassEnable();
	static bool IsDolbyAtmosSupported();
	static bool IsDeviceSupportsViberation();
	static bool IsDeviceSupportsHapticsEngine();
	static bool IsDeviceSupportGyrSensor();
	static bool IsDeviceOverheat();
	static bool IsDeviceHWSupportVulkan();
	static bool IsDevelopment();
	static bool IsConnected(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsCloudVersion();
	static bool IsCEVersion();
	static bool IsCEHideLobbyUI(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsBasePrefecthOpen();
	static bool IsAsanVersion();
	static bool IsAndroidHasGyr();
	static void InviteWhatsappOfflineFriends(const struct FString& Title, const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InviteSystemOfflineFriends(const struct FString& Title, const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InviteSMSOfflineFriends(const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InviteLineOfflineFriends(const struct FString& Title, const struct FString& Content, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InviteFBOfflineFriends(const struct FString& Title, const struct FString& Content, const struct FString& link, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InstallNewApp(class UGameFrontendHUD* GameFrontendHUD);
	static void InitWebViewManager();
	static int InitVPN(const struct FString& InVPNGUID, const struct FString& InClientVersion);
	static void InitVlink();
	static void InitQPlatformMisc();
	static void InitLoginAccount(uint64_t AccUin, const struct FString& AccPswd, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InitJavaFunctions();
	static void InitIOSNotchSize();
	static void InitIMSDKEnv(uint32_t iEnv, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InitializePuffer(class UGameFrontendHUD* GameFrontendHUD, bool needCheck, int maxDownloadsPerTask, int maxDownTask, int maxDownloadSpeed, bool useOldInterface, bool removeOldWhenUpdate, int versionType, const struct FString& InDownloadFuncDict);
	static void InitializeLaggingReporter(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	static void InitHF();
	static void InitHDmpveRemoteConfig();
	static int InitDH(const struct FString& gen, const struct FString& prime, int v_srand);
	static struct FString HtmlEncode(const struct FString& UnencodedString);
	static void HideH5WebView();
	static void HDmpveRemoteConfigStartOnce();
	static void HDmpveRemoteConfigSetUrl(const struct FString& InRemoteConfigUrl);
	static struct FString HDmpveRemoteConfigGetStringNotDefalut(const struct FString& InKey);
	static struct FString HDmpveRemoteConfigGetString(const struct FString& InKey, const struct FString& InDefaultValue);
	static int HDmpveRemoteConfigGetIntNotDefalut(const struct FString& InKe);
	static int HDmpveRemoteConfigGetInt(const struct FString& InKey, int InDefaultValue);
	static bool HDmpveRemoteConfigGetBoolNotDefalut(const struct FString& InKey);
	static bool HDmpveRemoteConfigGetBool(const struct FString& InKey, bool InDefaultValue);
	static void HDmpveRemoteConfigClear();
	static bool HaveReceivedNoticeCallback();
	static bool HasRemoteConfigReady();
	static bool HasNotice(int Type, const struct FString& Scene);
	static bool HasNotchInScreen();
	static bool HasLoadGameSlotCrashFlag();
	static bool HasDownloadedBasePak();
	static bool HasActiveWifi();
	static void GuestLogin();
	static void GotoPlatformAppraise();
	static void GMTestAllocUObjs(class UGameFrontendHUD* GameFrontendHUD, int Num);
	static void GMH5Enable(bool Flag);
	static int GetYYXDeviceModel();
	static void GetWidgetsByClass(class UWidget* Parent, class UClass* Type, TArray<class UWidget*>* Children);
	static struct FString GetWebViewTicket(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString GetWebviewFullScreenSize(int* OutSurfaceWidth, int* OutSurfaceHeight);
	static struct FString GetWeaponDIYIconPath(const struct FString& PlayerUID, int WeaponId, const struct FString& PlanID, bool relativePath, int Width, int Height);
	static int GetVolume(int InStreamType);
	static void GetVoiceSdkReconnectInfo(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FString, struct FString> Data);
	static bool GetUserVulkanSetting();
	static int GetUserTMFPTapEnableFlag();
	static bool GetUseMouseForTouch();
	static struct FString GetUObjectName(class UObject* uObj);
	static struct FString GetUnrealNetworkStatus(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetUIRectOffset();
	static struct FString GetToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static int GetTMFPTapDeviceSupportFlag();
	static struct FString GetTimezoneName();
	static float GetTimeInMiliSeconds();
	static struct FString GetTelecomSvr();
	static int GetTCDeviceLevel();
	static int GetTableCount(const struct FString& tableName);
	static struct FString GetSystemProperty(const struct FString& InKey);
	static int GetSystemLanguage_LuaState();
	static uint32_t GetSubsideFeatureLevel();
	static struct FString GetSrcVersion();
	static struct FString GetSplitMapConfigInfo();
	static struct FString GetSpecialData();
	static int GetSoundEffectQuality();
	static int GetShaderPrecompileProgress();
	static int GetServerDelay(const struct FString& ServerAddress);
	static int GetScreenWidthForWebview();
	static int GetScreenWidth();
	static int GetScreenHight();
	static int GetScreenHeightForWebview();
	static int GetScreenDensity();
	static int GetRingMode();
	static struct FString GetRemarkNameByGIDWithObj(class UObject* Obj, const struct FString& gid, const struct FString& PlayerName);
	static struct FString GetRemarkNameByGID(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& PlayerName);
	static struct FString GetRegisterChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool GetRedFlameSwitch();
	static bool GetRedBloodSwitch();
	static bool GetPufferInitResult(class UGameFrontendHUD* GameFrontendHUD);
	static uint32_t GetPufferInitErrCode(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetPublishRegion();
	static struct FString GetPublicKey(const struct FString& cli_pri_key);
	static struct FString GetPUBGModuleBaseAddr(const struct FString& ParamModuleName);
	static struct FString GetPrivateKey();
	static TArray<struct FString> GetPkgsFromDir(bool bUseCheck, const struct FString& InDir);
	static struct FString GetPingReportInfo(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetPingReportData(class UGameFrontendHUD* GameFrontendHUD);
	static int GetPhysicalScreenWidth();
	static int GetPhysicalScreenHeight();
	static int64_t GetPhysicalFileTime(const struct FString& InPath);
	static struct FString GetPhoneType();
	static struct FString GetPhoneDeviceID();
	static struct FString GetPhoneAdvertisingID();
	static struct FString GetPackChannel();
	static struct FString GetOSVersion();
	static struct FString GetOperator();
	static TArray<struct FString> GetODPaksFileUseTime(const struct FString& DumpFilename);
	static int GetObjectArrayNum();
	static TArray<int> GetNotchSize();
	static struct FString GetNetWorkType();
	static struct FString GetNativeVersion();
	static struct FString GetNativePackageTag();
	static TArray<struct FString> GetMyFriendObservers(class UGameFrontendHUD* GameFrontendHUD);
	static TArray<struct FString> GetMountedPaks();
	static int GetMemoryStats_LuaState();
	static int GetMemorySize();
	static struct FString GetLuaRootDir();
	static int GetLoginChannel(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString GetLoadGameSlotCrashInfo();
	static struct FString GetLoadCostUseTime();
	static struct FString GetLaunchLocalNotificationID();
	static struct FString GetLastSessionUserId();
	static TArray<struct FString> GetKnownMissingPackage(const struct FString& PackageName, const struct FString& DumpFilename);
	static int GetiTOPLbsDelay();
	static struct FString GetITopGameId(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static int GetIsSecretVersion();
	static bool GetIsPlayerUsingVPN();
	static bool GetIsOpenBattlePlayback(class UGameFrontendHUD* GameFrontendHUD);
	static int GetIPRegion();
	static struct FString GetIpAddrByHost(const struct FString& Host);
	static struct FString GetIpAddr();
	static struct FString GetInstallChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static int GetIMSDKEnv();
	static struct FString GetHDmpveInstanceId();
	static bool GetH5CacheStatus(const struct FString& ModuleName);
	static struct FGroupInfoWrapper GetGroupInfo(int SnsAction, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString GetGPUFamily();
	static int GetGoogleServiceVersionCode();
	static struct FString GetGLVersion();
	static struct FString GetGLType();
	static struct FString GetGameStatus(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetGameModeID(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetGameMasterGUID();
	static int64_t GetFrameCounter();
	static float GetFPS();
	static bool GetForceVulkanAvailable();
	static struct FString GetFireBaseFCMToken();
	static int64_t GetFileSizeOnDiskBytes(const struct FString& FilePath);
	static uint32_t GetFileSizeOnDisk(const struct FString& FilePath);
	static uint64_t GetFileSizeCompressed(class UGameFrontendHUD* GameFrontendHUD, const struct FString& FilePath);
	static struct FString GetFileHash(const struct FString& FilePath);
	static struct FString GetFileDirPath(const struct FString& FilePath);
	static void GetFBFriendsUnregistered(uint32_t page, uint32_t Count, uint32_t Type, const struct FString& extend, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static int GetExactDeviceLevel();
	static struct FString GetEncodeUrl(const struct FString& URL);
	static struct FString GetEmulatorName();
	static struct FString GetDSVersion(class UGameFrontendHUD* GameFrontendHUD);
	static int GetDSConnectionState();
	static struct FString GetDSConnectionIP();
	static struct FString GetDownLoadLanguageName();
	static struct FString GetDeviceXID();
	static int GetDeviceQualityLevel();
	static struct FString GetDevicePlatformName();
	static struct FString GetDeviceName();
	static struct FString GetDeviceModel();
	static int GetDeviceMaxSupportSoundEffect();
	static struct FString GetDeviceMake();
	static struct FString GetDeviceInfo();
	static uint64_t GetDeviceFreeSpace();
	static struct FString GetDeviceABIInfoJson();
	static struct FString GetDeivceNickName();
	static struct FString GetDataTime_MDHMS();
	static struct FString GetCurrentRHILevel(class UGameFrontendHUD* GameFrontendHUD);
	static int GetCurrentLanguage_LuaState();
	static int GetCurrentChannel(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetCpuType();
	static struct FString GetConfigString(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName);
	static int GetConfigInt(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName);
	static bool GetConfigBool(const struct FString& IniFileName, const struct FString& SectionName, const struct FString& KeyName);
	static struct FString GetCleanFileName(struct FString* FilePath);
	static int GetCentauriPF_LuaState();
	static int GetCentauriPayChannel_LuaState();
	static void GetCDNUpdateInfo(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FString, struct FString> Data);
	static struct FString GetCarrierInfo();
	static struct FString GetBuildVersion();
	static uint32_t GetBlockCRC(const struct FString& Filename, int64_t Offset, uint32_t Size);
	static struct FString GetBattleKey(const struct FString& svr_pub_key, const struct FString& cli_pri_key);
	static struct FString GetAreaIPNo();
	static struct FString GetAppVersion();
	static struct FString GetAppMountHandleInfo();
	static struct FString GetApplicationVersion();
	static struct FString GetAOSSHOP();
	static struct FString GetAndroidVersion();
	static struct FString GetAndroidSysInfo();
	static int GetAndroidSOVersion();
	static uint32_t GetAndroidMaxStackSize();
	static uint32_t GetAndroidMaxFDNum();
	static uint32_t GetAndroidCurrentFDNum();
	static int GetAndroidBuildForArm();
	static TArray<int> GetAllLocalNotificationIDs();
	static TArray<struct FString> GetAllFilesInDir(const struct FString& Dir, const struct FString& Pattern);
	static struct FString GetAccountRegion();
	static struct FString GetAccessToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void GenerateQRImage(int Tag, int Size, const struct FString& Content, const struct FString& logoPath, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void GEMReportSubEvent(class UGameFrontendHUD* GameFrontendHUD, const struct FString& EventName, const struct FString& SubEventName, TArray<struct FString> eventParams);
	static void GEMReportLobbyCustomEvent(class UGameFrontendHUD* GameFrontendHUD, int EventID, bool IsSuccess, const struct FString& strDesc);
	static void GEMReportEvent(class UGameFrontendHUD* GameFrontendHUD, const struct FString& EventName, TMap<struct FString, struct FString>* eventParams);
	static void GEMReportEnterLobbyEvent(class UGameFrontendHUD* GameFrontendHUD, bool IsSuccess, const struct FString& strDesc);
	static void GameMasterSetUserInfo(const struct FString& InPaidInfo, const struct FString& InUserToken, const struct FString& InAppId);
	static void GameMasterSetUsableRegion(const struct FString& InRegion);
	static void GameMasterSetUdpEchoPort(int InPort);
	static void GameMasterSetOnlyWifiAccel(bool InOn);
	static void GameMasterSetFreeFlowUser(int InType);
	static void GameMasterOnNetDelay(int InMillis);
	static bool GameMasterIsAccelOpened();
	static int GameMasterInit(int InHookType, const struct FString& InGuid, const struct FString& InLibs, int InEchoPort);
	static struct FString GameMasterGetWebUIUrl(int InType);
	static struct FString GameMasterGetVIPValidTime();
	static struct FString GameMasterGetUserID();
	static int GameMasterGetAccelerationStatus();
	static void GameMasterClearAccelAddr();
	static void GameMasterBeginRound(const struct FString& InOpenid, const struct FString& InPvpId);
	static void GameMasterAddNewArenaAddress(const struct FString& InProtocol, const struct FString& InIp, int InPort);
	static void GameMasterAddAccelAddr(const struct FString& InProtocol, const struct FString& InIp, int InPort);
	static void GameJoySwitchOn(int isOn);
	static void GameJoyStopManualRecord();
	static void GameJoyStartMomentsRecord();
	static void GameJoyStartManualRecord();
	static void GameJoySetVideoQuality(int Quality);
	static void GameJoySetMomentRecordSwitchOn(int isOn);
	static void GameJoySetLuaguage();
	static void GameJoySetCurrentRecorderPosition(float X, float Y);
	static bool GameJoyIsSDKFeatureSupport();
	static void GameJoyEndMomentsRecord();
	static void GameJoyClearMomentsVideo();
	static int GainSystemLog();
	static bool FullPathFileExist(const struct FString& Filename);
	static void FullGC(class UGameFrontendHUD* GameFrontendHUD);
	static void FlushKnownMissingPackageRefObject();
	static bool FlushAndroidWindowMemory();
	static void FinishPufferUpdateInDolphin(class UGameFrontendHUD* GameFrontendHUD, bool IsFinished);
	static class UObject* FindObjectByPath(const struct FString& ObjectPath);
	static TArray<struct FString> FindFilesRecursiveSkipPakPlatform(const struct FString& Dir, const struct FString& Pattern);
	static class UClass* FindClassByPath(const struct FString& ObjectPath);
	static void FileSystemTesting(uint32_t Count);
	static int FetchFileFromPAK(const struct FString& InFilePathInPak, const struct FString& InLocalFilePath, bool Override);
	static void ExitGameForSafety();
	static void ExitGame();
	static void ExeMemoryWarningHandle();
	static void EnterLoading(class UGameFrontendHUD* GameFrontendHUD);
	static void EnterFightChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid);
	static void EnterBattleStandAlone(class UGameFrontendHUD* GameFrontendHUD, const struct FString& MapPath, uint32_t PlayerKey, const struct FString& PlayerName, const struct FString& DynamicLevelsOp, const struct FString& AdditionalURLSuffixes, uint32_t ModeID);
	static void EnterBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& HostnameOrIP, uint32_t Port, uint32_t PlayerKey, const struct FString& PlayerName, const struct FString& PacketKey, uint64_t GameID, bool IsObserver, const struct FString& DynamicLevelsOp, int WaterType, uint32_t WaterUserID, uint32_t ModeID, uint32_t MainModeID, TMap<int, struct FString>* AdvConfig);
	static struct FString EncryptUID(const struct FString& sUid, const struct FString& sKey);
	static void EncryptItemData(TArray<int> EncryptionItemList);
	static void EnableUseOldInterface(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	static void EnableUrlCheck(bool bShouldEnable);
	static void EnableTxtCheck();
	static bool EnableShaderGroup(const struct FString& GroupName);
	static void EnableReportVoiceSdkEvent(class UGameFrontendHUD* GameFrontendHUD, bool InitVoiceSdkComponentReportEnable, bool VoiceSdkJoinRoomReportEnable, bool VoiceSdkQuitRoomReportEnable, bool VoiceSdkJoinLbsRoomReportEnable, bool VoiceSdkQuitLbsRoomReportEnable, bool VoiceSdkOnJoinTeamRoomReportEnable, bool VoiceSdkOnJoinLbsRoomReportEnable);
	static void EnableNativeDump(int EnableDump);
	static bool EnableMergeVirtual();
	static void EnableLowMemoryDevice(bool bEnable);
	static void EnableLocalizationStatus(class UGameFrontendHUD* GameFrontendHUD, bool Status);
	static void EnableIosStuckWork(class UGameFrontendHUD* GameFrontendHUD, bool bEnable);
	static void EnableDataTunnelReport(bool InEnable);
	static void EnableAutoObjectRefreshStage(bool bEnable);
	static void EnableAkAudioSilenceMode(bool InEnable);
	static void DynamicUpdatePakOrderBackUp(const struct FString& Filename);
	static void DynamicUpdatePakOrder(const struct FString& Filename);
	static void DumpPhysScene(const struct FString& Filename);
	static struct FString DumpPackageMemInfo(TArray<struct FString>* AssetList);
	static void DumpOpenReadCollect(class UGameFrontendHUD* GameFrontendHUD, const struct FString& DumpFilename);
	static void DumpLogFile(bool backup);
	static void Disconnect(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void DisableRepairResource(class UGameFrontendHUD* GameFrontendHUD);
	static void DisableAndroidHardwareAcceleration();
	static void DirectToSetting();
	static void DestroyConnector(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool DeleteFile(const struct FString& fullPath);
	static void DeleteDirectory(const struct FString& FilePath);
	static void DelayToSetAutoInitFacebookLog(bool IsAutoInit);
	static void DelayToInitFacebookSDK(bool IsAutoInit, bool WithLaunchOption);
	static void DelayInitThirdPartSDK();
	static struct FString CSCGetStatInfo();
	static class UTexture2D* CreateQRCodeTexture(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Text);
	static void CreateHapticsEngine(const struct FScriptDelegate& Callback);
	static void CrashSetAppVersion(const struct FString& Version, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void CrashPutUserData(const struct FString& Key, const struct FString& Value, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void CrashPostExceptionFull(int Category, const struct FString& Name, const struct FString& Msg, const struct FString& stack, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void CrashPostException(int Category, const struct FString& Reason, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void CrashLog(int Level, const struct FString& Tag, const struct FString& Log, bool needDump, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString ConvertToAbsolutePathForExternalAppForWrite(const struct FString& FilePath);
	static struct FString ConvertToAbsolutePathForExternalAppForRead(const struct FString& FilePath);
	static struct FString ConvertTMap2JsonStr(TMap<struct FString, struct FString> mapData);
	static struct FString ConvertRelativePathToFull(const struct FString& InPath);
	static struct FString ConvertGamePathToRelativeFilePath(const struct FString& Path);
	static struct FString ConvertDataToHEX(const struct FString& CompressedData, int CompressedSize);
	static void ConsumeLocalNotificationLaunchApp();
	static struct FString ConsoleCommand(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Command);
	static void ConnectToURLWithDNSProxy(const struct FString& ProxyIP, const struct FString& URL, int ConnectTimeOutSeconds, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void ConnectToURL(const struct FString& URL, int ConnectTimeOutSeconds, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString ComputerName();
	static bool CloudVersionPipe_SendDataWithKey(const struct FString& MsgKey, const struct FString& MsgInfo);
	static bool CloudVersionPipe_SendData(const struct FString& MsgInfo);
	static bool CloudVersionPipe_RecvDataTest(const struct FString& MsgInfo);
	static class UObject* CloudVersionPipe_PipeHelper();
	static bool CloudVersionPipe_Log(const struct FString& LogInfo);
	static bool CloudVersionInitDataPipeline();
	static void CloseWebView();
	static void CloseVLink();
	static void CloseVideoListDialog();
	static void CloseH5WebView(class UGameFrontendHUD* GameFrontendHUD);
	static void ClipBoardCopy(const struct FString& Text);
	static void ClientKickPlayerFromGame(class UGameFrontendHUD* GameFrontendHUD);
	static void ClientEnterWarMode(class UGameFrontendHUD* GameFrontendHUD);
	static void ClientConfirmReturnToGame(class UGameFrontendHUD* GameFrontendHUD);
	static void ClientConfirmMisKill(class UGameFrontendHUD* GameFrontendHUD, int bConfirm);
	static void ClearUpdatedSoPatch();
	static void ClearSyncLoadCacheSystem();
	static void ClearNotifications();
	static void ClearNotice();
	static void ClearJankStats();
	static void ClearIGProxyData();
	static void ClearHasLoadGameSlotCrashFlag();
	static void ClearChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void ClearAllLocalNotifications();
	static void CheckRegisterGestureConflictWithZoom();
	static bool CheckLocalPakContentHash(const struct FString& Filename);
	static bool CheckLocalizationExist();
	static TArray<struct FString> CheckFilesInPakLite(TArray<struct FString> Files);
	static TArray<struct FString> CheckFilesInPak(TArray<struct FString> Files);
	static bool CheckCanUseUrl(const struct FString& URL);
	static void CheckBeforeInitPuffer();
	static void ChangeLocalizationReleaseTestStatus(class UGameFrontendHUD* GameFrontendHUD, bool Status);
	static int CentauriSDKInit_LuaState();
	static int CentauriReprovide_LuaState();
	static bool CanUseHapticsEngine();
	static void CancelLocalNotification(int NotificationID);
	static void CallIngameFirstTimeTips(class UGameFrontendHUD* GameFrontendHUD, const struct FString& tableName, const struct FString& FunctionName);
	static void CallEngineGC();
	static void CacheH5WebView(const struct FString& ModuleName);
	static void BqBqShareToFriend(const struct FString& targetUrl, int act, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& msdkExtInfo, const struct FString& imgUrl, const struct FString& previewText, const struct FString& gameTag, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void BqBqShareH5WithPhoto(const struct FString& _title, const struct FString& _fullURL, int Channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void BqBqShare(const struct FString& _imgPath, const struct FString& _descShare, const struct FString& _titleShare, int _shareScene, const struct FString& _imgUrl, const struct FString& _url, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void BqBqAddFriend(const struct FString& OpenID, const struct FString& Desc, const struct FString& Message, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void BindMotionDetectedDelegate(class ASTExtraPlayerController* PlayerController, class UScreenInput* InScreenInput);
	static void AskForNotificationPermission();
	static bool AppendForcedKeepODPaks(TArray<struct FString> Filenames);
	static bool AndroidShouldShowPermissionRationale();
	static bool AndroidCheckPermission();
	static void AllocVirMem(int64_t XMiB);
	static void AkAudio_UnloadInitBank();
	static void AkAudio_UnloadAllFilePackages();
	static void AkAudio_StopAllSounds(bool bShouldStopUISounds);
	static void AkAudio_LoadInitBank();
	static void AkAudio_Flush(class UWorld* WorldToFlush);
	static void AkAudio_ClearBanks();
	static bool AddStreamingLevel(class UWorld* World, const struct FString& SubLevel, bool bShouldBeLoaded, bool bShouldBeVisible, bool bShouldBlockOnLoad);
	static void AddOnScreenDebugMessage(const struct FString& Message, int Key, float TimeToDisplay, const struct FVector2D& TextScale, struct FColor* Color);
	static int AddMemoryLogSize(int b_size);
	static void AddKnownMissingPackage(class UObject* BindObj, bool bReplace, struct FString* PackageName);
	static void AddCrashContextData(int Key, const struct FString& Val, bool bAppendTimeStamp, int reportLevel);
	static void AddAttachFileString(const struct FString& Type, bool bClear, const struct FString& strinfo);
	static void AddAttachDataString(const struct FString& Type, bool bClear, const struct FString& strinfo);
};


// Class Client.ScriptHelperEngine
// 0x0000 (0x0028 - 0x0028)
class UScriptHelperEngine : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScriptHelperEngine");
		return pStaticClass;
	}


	static TArray<unsigned char> TestLz4Decompress(TArray<unsigned char> Source, bool bEnable);
	static TArray<unsigned char> TestLz4Compress(TArray<unsigned char> Source);
	static struct FString ReplaceEmoji(const struct FString& Content, int MaxEmojiNum, const struct FString& SpecialCharacter);
	static bool IsLowMemoryDevice();
	bool Is64BitVersion();
	static float GetMemoryUsedVirtualInKB();
	static float GetMemoryUsedPhysicalInKB();
};


// Class Client.SDKCallbackHelper
// 0x0048 (0x0070 - 0x0028)
class USDKCallbackHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    SDKCallbackDelegate;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.SDKCallbackHelper");
		return pStaticClass;
	}


	void Init();
	static class USDKCallbackHelper* GetInstance();
};


// Class Client.SettingSubsystem
// 0x0350 (0x0380 - 0x0030)
class USettingSubsystem : public UGameInstanceSubsystem
{
public:
	bool                                               bUseRegisterDelegateOptimize;                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TMap<struct FString, bool>                         CacheRegisterProperties_Bool;                             // 0x0038(0x0050) (ZeroConstructor)
	TMap<struct FString, int>                          CacheRegisterProperties_Int;                              // 0x0088(0x0050) (ZeroConstructor)
	TMap<struct FString, float>                        CacheRegisterProperties_Float;                            // 0x00D8(0x0050) (ZeroConstructor)
	class UCustomLayoutProxy*                          CustomLayoutProxy;                                        // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<unsigned char, struct FString>                ReportSettingConfig;                                      // 0x0130(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0180(0x0050) MISSED OFFSET
	struct FString                                     CachedSaveGameName;                                       // 0x01D0(0x0010) (ZeroConstructor, Config)
	TArray<struct FCustomSettingSaveGame>              CustomSettingSaveGames;                                   // 0x01E0(0x0010) (ZeroConstructor)
	struct FScriptDelegate                             GetUserSettingsDelegate;                                  // 0x01F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	class UEffectSettingMgr*                           EffectSettingMgrInstace;                                  // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData)
	class USaveGame*                                   UserSettings;                                             // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData)
	class USaveGame*                                   UserSettingsShadowData;                                   // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	class UClass*                                      UserSettingsClass;                                        // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     UserSettingsClassName;                                    // 0x0228(0x0010) (ZeroConstructor, Config)
	struct FString                                     ActiveSaveGameName;                                       // 0x0238(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0248(0x0008) MISSED OFFSET
	struct FString                                     LanguageSettingsClassName;                                // 0x0250(0x0010) (ZeroConstructor, Config)
	struct FString                                     LanguageSaveGameName;                                     // 0x0260(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData04[0xB0];                                      // 0x0270(0x00B0) MISSED OFFSET
	TMap<struct FString, bool>                         LanguageMap;                                              // 0x0320(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0370(0x0008) MISSED OFFSET
	class UClass*                                      SaveGameUIElemLayoutClass;                                // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.SettingSubsystem");
		return pStaticClass;
	}


	bool UpdateCustomSetting(const struct FString& InSlotName, class USaveGame* InSaveGame);
	void UnregisterUserSettingDelegate(int Handle);
	bool SetUserSettings_String(const struct FString& PropertyName, const struct FString& Val);
	bool SetUserSettings_Int(const struct FString& PropertyName, int Value);
	bool SetUserSettings_Float(const struct FString& PropertyName, float Value);
	bool SetUserSettings_Bool(const struct FString& PropertyName, bool Value, bool IngoreSave);
	int RegisterUserSettingsDelegate_Int(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	int RegisterUserSettingsDelegate_Float(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	int RegisterUserSettingsDelegate_Bool(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate(const struct FScriptDelegate& Delegate);
	void RefreshSettingDataForReport();
	void OnReportSettingConfigStart();
	void OnRefreshReportSettingConfig();
	class USaveGame* GetUserSettingsByDelegate(const struct FString& LayoutName);
	struct FString GetUserSettings_String(const struct FString& PropertyName);
	int GetUserSettings_Int(const struct FString& PropertyName);
	float GetUserSettings_Float(const struct FString& PropertyName);
	bool GetUserSettings_Bool(const struct FString& PropertyName);
	class USaveGame* GetUserSettings();
	struct FString GetUserLanguageSettingsProperty_String(const struct FString& PropertyName);
	class UEffectSettingMgr* GetEffectSettingMgr();
	class USaveGame* GetCustomSetting(const struct FString& InSlotName);
	void FinishModifyUserSettings();
	void ClearCustomSetting();
	void CheckLocalizationLanguage();
	bool CheckChangeWithCache(class UObject* Source, class UProperty* Property, const struct FString& PropertyName);
	void CacheRegisterValue(class UObject* Source, class UProperty* Property, const struct FString& PropertyName);
	void BeginModifyUserSettings();
	void AddCustomSetting(const struct FString& InSlotName, class USaveGame* InSaveGame);
};


// Class Client.SoundTools
// 0x0120 (0x0148 - 0x0028)
class USoundTools : public UObject
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0028(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.SoundTools");
		return pStaticClass;
	}


	void StopConversionByUser(int Index);
	void SaveWavInIOS(const struct FString& GameFilePath);
	void SaveToAndroidPath(const struct FString& GameFilePath);
	int GetSizeOfWwiseAudioToWav(const struct FString& EventName, const struct FString& BankName, const struct FString& OutFilePath);
	float GetConversionPercent(int Index);
	int ConvertWwiseAudioToWavSync(const struct FString& EventName, const struct FString& BankName, const struct FString& OutFilePath);
	int ConvertWwiseAudioToWav(const struct FString& EventName, const struct FString& BankName, const struct FString& OutFilePath);
	bool CanWwiseAudioToWav();
};


// Class Client.STExtraClientUtils
// 0x0000 (0x0028 - 0x0028)
class USTExtraClientUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.STExtraClientUtils");
		return pStaticClass;
	}


	static void GetWidgetHandleAsyncWithCallBack(class UObject* WorldContext, const struct FString& ModuleName, const struct FString& WidgetKey, const struct FScriptDelegate& Callback);
	class UUAEUserWidget* GetDynamicWidgetHandle(class UObject* WorldContext, const struct FString& ModuleName, const struct FString& WidetKey);
	static class USTExtraClientUIBPUtils* GetBPUtils();
	static int AsyncLoadAssetInstWithCallback(const struct FString& InPath, const struct FScriptDelegate& Callback);
};


// Class Client.STExtraClientUIBPUtils
// 0x0128 (0x0150 - 0x0028)
class USTExtraClientUIBPUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET
	TMap<int, struct FAssetAsyncRequest>               PendingAsyncAssetRequests;                                // 0x0100(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.STExtraClientUIBPUtils");
		return pStaticClass;
	}


	void OnAsyncAssetLoaded(const struct FSoftObjectPath& InSoftPath, int RequestIdx);
	int AsyncLoadAssetInstWithCallback(const struct FString& InPath, const struct FScriptDelegate& Callback);
};


// Class Client.TPerfPlat
// 0x0000 (0x0028 - 0x0028)
class UTPerfPlat : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.TPerfPlat");
		return pStaticClass;
	}


	static void SetQuality(int Quality);
	static void requestResourceGuarantee(int Condition, int LoadType, int applyType);
	static void PostGameStatusToTMFPIS(int Key, const struct FString& Value);
	static int GetDeviceLevel();
};


// Class Client.Translator
// 0x00F8 (0x0120 - 0x0028)
class UTranslator : public UObject
{
public:
	struct FString                                     SubscriptionKey;                                          // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	struct FString                                     StoredAccessToken;                                        // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptDelegate                             OnGetAccessTokenDelegate;                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnDetectDelegate;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnTranslateDelegate;                                      // 0x0068(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0078(0x0080) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.Translator");
		return pStaticClass;
	}


	void TranslateV2(int Channel, int ID, const struct FString& Text);
	void Translate(const struct FString& URL, const struct FString& Verb, TMap<struct FString, struct FString> Headers, const struct FString& Content);
	void PostMsg(const struct FString& URL, const struct FString& Content);
	void OnTranslateV2(bool Success, const struct FString& Data);
	void OnTranslate__DelegateSignature(bool IsSuccess, const struct FString& LanguageFrom, const struct FString& Translation);
	void OnTranslate(bool Success, const struct FString& Data);
	void OnGetAccessTokenV2(bool Success, const struct FString& Data);
	void OnGetAccessToken__DelegateSignature(bool IsSuccess, const struct FString& Token);
	void OnGetAccessToken(bool Success, const struct FString& Data);
	void OnDetectV2(bool Success, const struct FString& Data);
	void OnDetect__DelegateSignature(bool IsSuccess, const struct FString& from, const struct FString& to);
	void OnDetect(bool Success, const struct FString& Data);
	bool HasTranslating();
	void GetAccessToken(bool bForceGet, const struct FString& URL, const struct FString& Verb, TMap<struct FString, struct FString> Headers, const struct FString& Content);
	void Detect(const struct FString& URL, const struct FString& Verb, TMap<struct FString, struct FString> Headers, const struct FString& Content);
};


// Class Client.TssManager
// 0x0038 (0x0060 - 0x0028)
class UTssManager : public UObject
{
public:
	struct FString                                     TssHostInfo;                                              // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FString                                     TssCDNHostInfo;                                           // 0x0038(0x0010) (ZeroConstructor, Config)
	struct FString                                     TssBuildInIpInfo;                                         // 0x0048(0x0010) (ZeroConstructor, Config)
	int                                                TssLocal;                                                 // 0x0058(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.TssManager");
		return pStaticClass;
	}


	static int SendSkdData_LuaState();
	static int SendEigeninfoData_LuaState();
	static uint32_t SaveSendEigeninfoCode_LuaState();
	static int OnRecvData_LuaState();
	static uint32_t InvokeSDKIoctl(int Command, const struct FString& InCmdData);
	static int GetUserTag4Lua_LuaState();
	static int GetDeviceFeature_LuaState();
	static int EigenArrayObfuscationVerify_LuaState();
};


// Class Client.UAEClientGameMode
// 0x0000 (0x0508 - 0x0508)
class AUAEClientGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UAEClientGameMode");
		return pStaticClass;
	}

};


// Class Client.UAELobbyGameMode
// 0x0000 (0x0508 - 0x0508)
class AUAELobbyGameMode : public AUAEClientGameMode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UAELobbyGameMode");
		return pStaticClass;
	}

};


// Class Client.UAELobbyPlayerController
// 0x0000 (0x07A8 - 0x07A8)
class AUAELobbyPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UAELobbyPlayerController");
		return pStaticClass;
	}

};


// Class Client.UTRichTextBlock
// 0x0A08 (0x0B08 - 0x0100)
class UUTRichTextBlock : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHyperlinkClicked;                                       // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     ContentText;                                              // 0x0118(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0128(0x0010) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0138(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bSupportHyLink;                                           // 0x0190(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportImage;                                            // 0x0191(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0192(0x0002) MISSED OFFSET
	struct FLinearColor                                TextColor;                                                // 0x0194(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x01A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextVerticalJustify>                  TextVerticalJustification;                                // 0x01A5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x01A6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x01A7(0x0001) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x01A8(0x0680) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FMargin                                     HScrollBarPadding;                                        // 0x0828(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FMargin                                     VScrollBarPadding;                                        // 0x0838(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              WrapTextAt;                                               // 0x0848(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x084C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x085C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     HyperlinkDecoratorTag;                                    // 0x0860(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HyperlinkCallBackFunctionName;                            // 0x0870(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HyperlinkCallBackTableName;                               // 0x0880(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData04[0x270];                                     // 0x0890(0x0270) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0B00(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UTRichTextBlock");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void OnHyperlinkClickedEvent__DelegateSignature(const struct FMetaDataHolder& MetaDataHolder);
	TArray<struct FVector2D> GetViewSizes();
	struct FText GetText();
	struct FVector2D EstimateDesiredSize();
};


// Class Client.AEVarButton
// 0x0438 (0x0550 - 0x0118)
class UAEVarButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0118(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FButtonStyle                                WidgetStyle;                                              // 0x0120(0x0338) (Edit, BlueprintVisible)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0458(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0468(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x0478(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x0479(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x047A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassMouseEvent;                                         // 0x047B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	struct FString                                     ButtonVar;                                                // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnButtonClicked;                                          // 0x0490(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonPressed;                                          // 0x04A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonReleased;                                         // 0x04B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonHovered;                                          // 0x04C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnButtonUnhovered;                                        // 0x04D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x04E0(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04F0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0500(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnPressed;                                                // 0x0510(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnReleased;                                               // 0x0520(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x0530(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnUnhovered;                                              // 0x0540(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.AEVarButton");
		return pStaticClass;
	}


	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
	void SetStyle(const struct FButtonStyle& InStyle);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool IsPressed();
};


// Class Client.ReuseFallC
// 0x0CA8 (0x0F08 - 0x0260)
class UReuseFallC : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnBeforeNewItem;                                          // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAfterNewItem;                                           // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRefreshItem;                                            // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemCreated;                                            // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTouchFinish;                                            // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOverscrollState;                                        // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x02C0(0x02E8) (Edit)
	EWidgetClipping                                    ScrollBoxClipping;                                        // 0x05A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05A9(0x0007) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x05B0(0x0680) (Edit)
	ESlateVisibility                                   ScrollBarVisibility;                                      // 0x0C30(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C31(0x0003) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x0C34(0x0008) (Edit, IsPlainOldData)
	int                                                ColumnNum;                                                // 0x0C3C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemHeight;                                               // 0x0C40(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemPaddingX;                                             // 0x0C44(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemPaddingY;                                             // 0x0C48(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverscrollLength;                                         // 0x0C4C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // 0x0C50(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UClass*>                OtherItemClass;                                           // 0x0C58(0x0050) (Edit, ZeroConstructor)
	int                                                PreviewCount;                                             // 0x0CA8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemPoolMaxNum;                                           // 0x0CAC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TopSpaceReserved;                                         // 0x0CB0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BottomSpaceReserved;                                      // 0x0CB4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0CB8(0x0038) MISSED OFFSET
	class UClass*                                      CurItemClass;                                             // 0x0CF0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x210];                                     // 0x0CF8(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ReuseFallC");
		return pStaticClass;
	}


	void SetScrollOffset(float NewScrollOffset);
	void SetItemSize(int __Idx, float __Size);
	void SetItemFullStyle(int idx);
	bool SetCurItemClass(const struct FString& StrName);
	void ScrollToStart();
	void ScrollToEnd();
	void ResetCurItemClassToDefault();
	void Reload(int __ItemCount);
	void RefreshOne(int __Idx);
	void Refresh();
	void OnUpdateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnTouchFinishDelegate__DelegateSignature();
	void OnTouchFinishCallback();
	void OnOverscrollStateDelegate__DelegateSignature(EReuseFallOverscrollState State);
	void OnCreateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnBeforeNewItemDelegate__DelegateSignature(int idx);
	void OnAfterNewItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void JumpByIdx(int __Idx, bool bImmedia);
	struct FVector2D GetViewSize();
	float GetScrollOffset();
	class UScrollBox* GetScrollBox();
	EReuseFallOverscrollState GetOverscrollState();
	struct FVector2D GetContentSize();
	void ClearItemFullStyle();
	void Clear();
};


// Class Client.ReuseListC
// 0x0AD0 (0x0D30 - 0x0260)
class UReuseListC : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnUpdateItemParam;                                        // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUpdateItem;                                             // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScrollItem;                                             // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCreateItem;                                             // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x02A0(0x02E8) (Edit)
	EWidgetClipping                                    ScrollBoxClipping;                                        // 0x0588(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   ScrollBoxVisibility;                                      // 0x0589(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x058A(0x0006) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0590(0x0680) (Edit)
	ESlateVisibility                                   ScrollBarVisibility;                                      // 0x0C10(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C11(0x0003) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x0C14(0x0008) (Edit, IsPlainOldData)
	int                                                ItemWidth;                                                // 0x0C1C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemHeight;                                               // 0x0C20(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PaddingX;                                                 // 0x0C24(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PaddingY;                                                 // 0x0C28(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TitleSize;                                                // 0x0C2C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TitlePadding;                                             // 0x0C30(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AutoTitleSize;                                            // 0x0C34(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EReuseListStyle                                    Style;                                                    // 0x0C35(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0C36(0x0002) MISSED OFFSET
	class UClass*                                      ItemClass;                                                // 0x0C38(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PreviewCount;                                             // 0x0C40(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EReuseListNotFullAlignStyle                        NotFullAlignStyle;                                        // 0x0C44(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NotFullScrollBoxHitTestInvisible;                         // 0x0C45(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateForceLayoutPrepass;                                 // 0x0C46(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0C47(0x0001) MISSED OFFSET
	int                                                ItemCacheNum;                                             // 0x0C48(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DelayUpdateTimeLimitMS;                                   // 0x0C4C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xE0];                                      // 0x0C50(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ReuseListC");
		return pStaticClass;
	}


	void SetTitleSlotAutoSize(bool as);
	void SetTitleSize(int sz);
	void SetScrollOffset(float NewScrollOffset);
	void ScrollToStart();
	void ScrollToEnd();
	void Reset(class UClass* __ItemClass, EReuseListStyle __Style, int __ItemWidth, int __ItemHeight, int __PaddingX, int __PaddingY);
	void Reload(int __ItemCount);
	void RefreshParam(const struct FString& _Param);
	void RefreshOneParam(int __Idx, const struct FString& _Param);
	void RefreshOne(int __Idx);
	void Refresh();
	void OnUpdateItemParamDelegate__DelegateSignature(class UUserWidget* Widget, int idx, const struct FString& Param);
	void OnUpdateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnScrollItemDelegate__DelegateSignature(int BeginIdx, int EndIdx);
	void OnCreateItemDelegate__DelegateSignature(class UUserWidget* Widget);
	void JumpByIdxStyle(int __Idx, EReuseListJumpStyle __Style);
	void JumpByIdx(int __Idx);
	struct FVector2D GetViewSize();
	float GetScrollOffset();
	int GetPaddingY();
	int GetPaddingX();
	int GetItemWidthAndPaddingX();
	int GetItemWidth();
	int GetItemHeightAndPaddingY();
	int GetItemHeight();
	struct FVector2D GetContentSize();
	void GetAllWidgetItems(TArray<class UUserWidget*>* ResultItemList);
	class UUserWidget* FindItem(int idx);
	void Clear();
};


// Class Client.ReusePageC
// 0x0138 (0x0398 - 0x0260)
class UReusePageC : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnUpdateItem;                                             // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPageChanged;                                            // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCreateItem;                                             // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginDrag;                                              // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndDrag;                                                // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndScroll;                                              // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UClass*                                      ItemClass;                                                // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsLoopPage : 1;                                           // 0x02C8(0x0001) (Edit)
	unsigned char                                      IsVertical : 1;                                           // 0x02C8(0x0001) (Edit)
	unsigned char                                      CanDrag : 1;                                              // 0x02C8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C9(0x0003) MISSED OFFSET
	int                                                CanDragLimit;                                             // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AutoPlayRate;                                             // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShowPageNum;                                              // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DragPageNum;                                              // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DChgPageParam;                                            // 0x02DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScrollInertial;                                           // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScrollRate;                                               // 0x02E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x02E8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ReusePageC");
		return pStaticClass;
	}


	void SetAutoPlayRate(float Rate);
	void SelectPage(int __Idx);
	void Reload(int __Count);
	void Play(bool bPlay);
	void OnUpdateItemDelegate__DelegateSignature(class UUserWidget* Widget, int idx);
	void OnPageChangedDelegate__DelegateSignature(int PageIdx);
	void OnEndScrollDelegate__DelegateSignature(int PageIdx);
	void OnEndDragDelegate__DelegateSignature(int PageIdx);
	void OnCreateItemDelegate__DelegateSignature(class UUserWidget* Widget);
	void OnBeginDragDelegate__DelegateSignature();
	void MovePrePage();
	void MoveNextPage();
	bool IsDraging();
	int GetPageCount();
	int GetPage();
	float GetOffset();
	float GetAutoPlayRate();
	void GetAllItems(bool OnlyVisible, TArray<class UUserWidget*>* ResultItemList);
	void ClearCache();
};


// Class Client.UDPPingCollector
// 0x0138 (0x0160 - 0x0028)
class UUDPPingCollector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET
	TMap<struct FString, struct FPingServerInfo>       mUDPPingInfoMap;                                          // 0x0070(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x30];                                      // 0x00C0(0x0030) MISSED OFFSET
	struct FScriptMulticastDelegate                    UDPPingShadowResultToLuaDelegate;                         // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0100(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UDPPingCollector");
		return pStaticClass;
	}


	void TickUDPPing(float DeltaTime);
	void setUDPPingServerAddress(const struct FString& ServerIP, const struct FString& ServerPort, int ZoneID, int WaterMarkType);
	void SetPingSystemControlFlag(int TakeEffectModule, int ThreadReportTlog, int EpollReportTlog);
	void PingServer(const struct FString& address, float Timeout, int WaterMarkType);
	void OnPreSwitchGameStatus(const struct FString& MapName);
	void OnPingServerResultDelegate__DelegateSignature(const struct FString& address, int IsSuccess, float Time, int PingSystemType);
	bool IsChooingZoneAccess();
	bool isAllZoneHasPingValue();
	void Init(float MinPingintervalTime, float pingintervalTime, float pingTimeoutSecond, float normalDelayMilliSecond, float maxAutoChooseZoneDelayMilliSecond);
	float GetZoneServerDelay(const struct FString& ServerAddress);
	int GetMinDealyAddress();
	void ChoosingZone(int ZoneID, const struct FString& AddrIP);
};


// Class Client.ViberateEngine
// 0x0000 (0x0028 - 0x0028)
class UViberateEngine : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ViberateEngine");
		return pStaticClass;
	}

};


// Class Client.VibrateSystemManager
// 0x0468 (0x0498 - 0x0030)
class UVibrateSystemManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FString                                     ClassPath;                                                // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     VibrateAssetTablePath;                                    // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	int                                                MaxAmplitude;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                GroundSpesificMatVibrationMinGrear;                       // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VehicleBreakingMinSpeedThreshold;                         // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VehicleGearMinSpeedThreshold;                             // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<int>                                        TriggerVehicleVibrateGroundPhysicMatList;                 // 0x0070(0x0010) (Edit, ZeroConstructor, Config)
	float                                              TriggerVehicleVibrateMinSlip;                             // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TriggerVehicleVibrateMinSuspensionRaisePercent;           // 0x0084(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              VehicleRaiseSuspensionVibrateInerval;                     // 0x0088(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                InitAssetProccessNumFrames;                               // 0x008C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     LoopTime;                                                 // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00A0(0x0050) MISSED OFFSET
	TMap<int, EVibrateTriggerEventType>                LoadedVibrateAssetIDAndEventTypeMap;                      // 0x00F0(0x0050) (ZeroConstructor)
	TMap<EVibrateStrengthLevel, float>                 VibrateStrengthLevelModifireMap;                          // 0x0140(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<EVibrateTriggerEventType, float>              VibrateEventMinIntervalMap;                               // 0x0190(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   CharacterVibrateEventList;                                // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   WeaponVibrateEventList;                                   // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   VehicleVibrateEventList;                                  // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   SoundUIVibrateEventList;                                  // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   CharacterBeHitVibrateEventList;                           // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   VehicleEngineVibrateEventList;                            // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EVibrateTriggerEventType>                   VehicleBeHitVibrateEventList;                             // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bEntireVibrationSwitch;                                   // 0x0250(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterVibrationSwitch;                                // 0x0251(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWeaponVibrationSwitch;                                   // 0x0252(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleVibrationSwitch;                                  // 0x0253(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundUIVibrationSwitch;                                  // 0x0254(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	int                                                CharacterVibrationLevel;                                  // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WeaponVibrationLevel;                                     // 0x025C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VehicleVibrationLevel;                                    // 0x0260(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SoundUIVibrationLevel;                                    // 0x0264(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EntireVibrationLevel;                                     // 0x0268(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterVibrate;                                        // 0x026C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWeaponVibrate;                                           // 0x026D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleVibrate;                                          // 0x026E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundUIVibrate;                                          // 0x026F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterBeHitVibrate;                                   // 0x0270(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterClimbVibrate;                                   // 0x0271(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterFallVibrate;                                    // 0x0272(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCharacterSwimVibrate;                                    // 0x0273(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoWeaponVibrate;                                       // 0x0274(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSemiAutoWeaponVibrate;                                   // 0x0275(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBoltWeaponVibrate;                                       // 0x0276(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOtherWeaponVibrate;                                      // 0x0277(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleEngineVibrate;                                    // 0x0278(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleBeHitVibrate;                                     // 0x0279(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleCrashVibrate;                                     // 0x027A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFootstepSoundUIVibrate;                                  // 0x027B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFireShotSoundUIVibrate;                                  // 0x027C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGlassBrokenSoundUIVibrate;                               // 0x027D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVehicleSoundUIVibrate;                                   // 0x027E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x027F(0x0001) MISSED OFFSET
	struct FTimerHandle                                StopVibrateHandle;                                        // 0x0280(0x0008) (BlueprintVisible)
	int                                                CurPlayingVibrateAssetIndex;                              // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurLoopPlayingVibrateAssetIndex;                          // 0x028C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DeviceSupportVibrateType;                                 // 0x0290(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInGameVibration;                                         // 0x0294(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHandBreaking;                                          // 0x0295(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x52];                                      // 0x0296(0x0052) MISSED OFFSET
	bool                                               bHasLastVehicle;                                          // 0x02E8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	int                                                LastVehicleGear;                                          // 0x02EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLastVehicleBreaking;                                   // 0x02F0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLastVehicleSlipping;                                   // 0x02F1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x02F2(0x0002) MISSED OFFSET
	int                                                LastVehicleGroundContactMaterialSurfaceType;              // 0x02F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<int, bool>                                    LastVehicleGearVibrateCache;                              // 0x02F8(0x0050) (BlueprintVisible, ZeroConstructor)
	TMap<EVibrateTriggerEventType, float>              LastVibrateEventTimeMap;                                  // 0x0348(0x0050) (BlueprintVisible, ZeroConstructor)
	float                                              CurVehicleRaiseSuspensionVibrateCD;                       // 0x0398(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7C];                                      // 0x039C(0x007C) MISSED OFFSET
	TArray<struct FVibrateEntity>                      CacheVibrateEntityList;                                   // 0x0418(0x0010) (BlueprintVisible, ZeroConstructor)
	TMap<struct FString, struct FString>               VibratePath2Json;                                         // 0x0428(0x0050) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData08[0x20];                                      // 0x0478(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.VibrateSystemManager");
		return pStaticClass;
	}


	void StopVibrate();
	void SetVibrationLoopTime(const struct FString& InLoopTime);
	void PostVibrateTriggerActionDirectly(int SpesifyID, int Amplitude);
	void PostVibrateTriggerAction(const struct FVibrateTriggerAction& Action, bool bCheckGate, bool bCheckInterval, int SpesifyID);
	void PlayVibrateEntity(const struct FVibrateEntity& Entity);
	void ModifyWeaponVibrationSwitch(bool Val);
	void ModifyWeaponVibrationLevel(int InVal);
	void ModifyVehicleVibrationSwitch(bool Val);
	void ModifyVehicleVibrationLevel(int InVal);
	void ModifyVehicleSoundUIVibrateSetting(bool Val);
	void ModifyVehicleEngineVibrationSetting(bool Val);
	void ModifyVehicleCrashVibrateSetting(bool Val);
	void ModifyVehicleBeHitVibrateSetting(bool Val);
	void ModifySoundUIVibrationSwitch(bool Val);
	void ModifySoundUIVibrationLevel(int InVal);
	void ModifySemiAutoWeaponVibrateSetting(bool Val);
	void ModifyOtherWeaponVibrateSetting(bool Val);
	void ModifyGlassBrokenSoundUIVibrateSetting(bool Val);
	void ModifyFootstepSoundUIVibrateSetting(bool Val);
	void ModifyFireShotSoundUIVibrateSetting(bool Val);
	void ModifyEntireVibrationSwitch(bool Val);
	void ModifyEntireVibrationLevel(int InValue);
	void ModifyCharacterVibrationSwitch(bool Val);
	void ModifyCharacterVibrationLevel(int InVal);
	void ModifyCharacterSwimVibrateSetting(bool Val);
	void ModifyCharacterFallVibrateSetting(bool Val);
	void ModifyCharacterClimbVibrateSetting(bool Val);
	void ModifyCharacterBeHitVibrateSetting(bool Val);
	void ModifyBoltWeaponVibrateSetting(bool Val);
	void ModifyAutoWeaponVibrateSetting(bool Val);
	void LoadUserSettingData(int inCharacterVibrationLevel, int inWeaponVibrationLevel, int inVehicleVibrationLevel, int inSoundUIVibrationLevel, bool binCharacterBeHitVibrate, bool binCharacterClimbVibrate, bool binCharacterFallVibrate, bool binCharacterSwimVibrate, bool binVehicleEngineVibrate, bool binVehicleBeHitVibrate, bool binVehicleCrashVibrate, bool binFootstepSoundUIVibrate, bool binFireShotSoundUIVibrate, bool binGlassBrokenSoundUIVibrate, bool binVehicleSoundUIVibrate, int inEntireVibrationLevel, bool binAutoWeaponVibrate, bool binSemiAutoWeaponVibrate, bool binBoltWeaponVibrate, bool binOtherWeaponVibrate);
	void InvalidateVibrateEntityByEventType(EVibrateTriggerEventType EventType);
	void InitUserSetting();
	void InitSystem();
	void HandleApplicationWillTerminate();
	void HandleApplicationWillEnterBackground();
	void HandleApplicationWillDeactivate();
	void HandleApplicationHasReactivated();
	void HandleApplicationHasEnteredForeground();
	static class UVibrateSystemManager* GetInstance(class UObject* WorldContext, bool bAutoCreate);
	int GetEntireVibrationLevel();
	struct FString GetCurrentPlayingVibrationDebugInfo();
	int GetAmplitudeByAlpha(float Alpha);
	void ClearVibratePath2Json();
	void ClearAllVibration();
	bool CheckShootWeaponTypeVibrateGate(class ASTExtraWeapon* Weapon);
	static void CheckAndCopyFilesToSavedDir(class UVibrateSystemManager* Mgr);
	void ActiveInGameVibration(bool Inactive);
};


// Class Client.VoiceSDKInterface
// 0x04A8 (0x04D0 - 0x0028)
class UVoiceSDKInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                lbsRoomMemberID;                                          // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0034(0x001C) MISSED OFFSET
	struct FScriptDelegate                             OnSTTReportCallback;                                      // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRSTSCallback;                                           // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRSTSSpeechToTextCallback;                               // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRSTSSubtitleCallback;                                   // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
	struct FString                                     ServerInfo;                                               // 0x00A0(0x0010) (ZeroConstructor, Config)
	uint32_t                                           openVoiceSDKLog;                                          // 0x00B0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           MicVolumeMUFactor;                                        // 0x00B4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           SpeekerVolumeMUFactor;                                    // 0x00B8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                RoomOperationTimeout;                                     // 0x00BC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x90];                                      // 0x00C8(0x0090) MISSED OFFSET
	struct FScriptDelegate                             OpenMicFail;                                              // 0x0158(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OpenMicSuccess;                                           // 0x0168(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CloseMicFail;                                             // 0x0178(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CloseMicSuccess;                                          // 0x0188(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OpenSpeakerFail;                                          // 0x0198(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OpenSpeakerSuccess;                                       // 0x01A8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CloseSpeakerFail;                                         // 0x01B8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             CloseSpeakerSuccess;                                      // 0x01C8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             JoinRoomFail;                                             // 0x01D8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             JoinRoomNotify;                                           // 0x01E8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             QuitRoomNotify;                                           // 0x01F8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             JoinLbsRoomNotify;                                        // 0x0208(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             QuitLbsRoomNotify;                                        // 0x0218(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             RoomStatusUpdatedNotify;                                  // 0x0228(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             SetAppInfoSuccess;                                        // 0x0238(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             SetAppInfoFail;                                           // 0x0248(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             GetReconnectInfo;                                         // 0x0258(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ImSpeakingNotify;                                         // 0x0268(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             TestMicFail;                                              // 0x0278(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             TestMicSuccess;                                           // 0x0288(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             QuitRoomFail;                                             // 0x0298(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DownLoadFileNotify;                                       // 0x02A8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             UploadFileNotify;                                         // 0x02B8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             KwsNotify;                                                // 0x02C8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ApplyMessageKeyNotify;                                    // 0x02D8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             MemberIsSpeakingNotify;                                   // 0x02E8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             LbsMemberIsSpeakingNotify;                                // 0x02F8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMuteSwitchResult;                                       // 0x0308(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ReportVoiceTimeToServer;                                  // 0x0318(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             RecordSuccess;                                            // 0x0328(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             RecordFail;                                               // 0x0338(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             UploadSuccess;                                            // 0x0348(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             UploadFail;                                               // 0x0358(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DownloadFileSuccess;                                      // 0x0368(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             DownloadFileFail;                                         // 0x0378(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             EnableRoomMicrophone;                                     // 0x0388(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ExitInfectionGameMode;                                    // 0x0398(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             JoinInfectionGameMode;                                    // 0x03A8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             RequestPrivacyInSetting;                                  // 0x03B8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnReportPlayerCallback;                                   // 0x03C8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnVoiceSDKEvent;                                          // 0x03D8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             BeforeVoiceSDKInitDelegate;                               // 0x03E8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             AfterVoiceSDKInitDelegate;                                // 0x03F8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             AudioRouteChangedAfterSpeakerDelegate;                    // 0x0408(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             AudioSessionInterruptedDelegate;                          // 0x0418(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnRoomMemeberInfoDelegate;                                // 0x0428(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData04[0x88];                                      // 0x0438(0x0088) MISSED OFFSET
	struct FScriptDelegate                             OnDeliverDataCallback;                                    // 0x04C0(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.VoiceSDKInterface");
		return pStaticClass;
	}


	void UploadRecordFile(bool InPermanent);
	int UploadRecordedFile(const struct FString& InFilePath, int InTimeout, bool InPermanent);
	int UpdateVoiceCoordinate(const struct FString& InRoomName, int64_t X, int64_t Y, int64_t Z, int64_t Radius);
	void TestMic();
	bool TeamSpeakerEnable();
	bool TeamMicphoneEnable();
	void SwitchMode(ECharacterMainType CharMode);
	void SwitchMicphoneWhenCorpsMode();
	int StopRecording();
	void StopRecord();
	void StopPlayRecordFile();
	void StopInterphone();
	int StartRecording(const struct FString& InFilePath, bool InNotVoip);
	void StartRecord();
	void StartInterphone();
	void ShowOpenSpeakerAtFirstMsg();
	void ShowCorpsModeCannotUseLBSVoice();
	void SetVoiceServer(const struct FString& ServerInfo);
	void SetVoiceSDKSupportBackgroundChat(bool isSupportBGChat);
	void SetVoiceSDKChatServiceEnable(bool IsEnable);
	void SetVoiceMode(int Type);
	int SetUserInfo(const struct FString& InUserInfo);
	void SetTransSecInfo(const struct FString& InTransSecInfo);
	void SetSpeakerVolum(float Value);
	void SetSpeakerStatus(bool Flag);
	int SetServerInfo(const struct FString& URL, const struct FString& InDefaultIpSvr);
	void SetRoomOperationTimeout(int InTimeout);
	int SetResourePath(const struct FString& InResourcePath);
	void SetReportBufferTime(int nTimeSec);
	void SetPlayerVolume(const struct FString& InPlayerId, int InVol);
	int SetNotify();
	int SetMode(int InGVMode);
	void SetMicphoneVolum(float Value);
	void SetMicphoneStatus(bool Flag);
	void SetLbsVoiceRadius(float Radius);
	void SetLbsRoomEnableStatus(bool Flag);
	int SetKwsModelPath(const struct FString& KwsPath);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void SetFeature(int8_t InFeature, bool Inactive);
	int SetDeliverData(int Len, TArray<unsigned char>* pbuf);
	void SetCurrentDownloadFieldID(const struct FString& filedId);
	int SetAppInfo(const struct FString& InAppId, const struct FString& InAppKey, const struct FString& InOpenid);
	void SetAllVoiceStatus(bool Flag);
	void RSTSStopRecording();
	int RSTSSpeechToText(int InSrcLang);
	void ResetWhenLogOut();
	bool ReportPlayers(const struct FString& InExtraInfo, TArray<struct FString> InOpenids);
	int ReportFileForAbroad(const struct FString& InFilePath, bool InTranslate, bool InChangeVoice, int InTime);
	void RecoverPlayersVolume(int InVol);
	void ReactiveLbsStatus();
	int QuitVoiceRoom(const struct FString& InRoomName);
	void QuitRoom();
	bool QuitLbsRoom(bool needReenterLbs);
	void QuitCommonRoom(const struct FString& InRoomName);
	int Poll();
	void PlayRecordFile();
	int PlayRecordedFile(const struct FString& InDownloadInFilePath);
	int OpenVoiceSpeaker();
	int OpenVoiceMic();
	void OpenTeamSpeakerOnly(bool ShowTips);
	int OpenTeamMicphoneOnly(bool ShowTips);
	int OpenTeamInterphone();
	int OpenSpeaker();
	void OpenMicAndSpeakerAfterJoinLbsRoom();
	int OpenMic();
	void OpenIngameSpeaker();
	int OpenIngameMicphone();
	void OpenAllSpeaker(bool ShowTips);
	int OpenAllMicphone(bool ShowTips);
	int OpenAllInterphone();
	void OnRoomTypeChanged(const struct FString& itemtext);
	void OnResume();
	void OnPause();
	void OnDeliverData(TArray<unsigned char> pbuf, int Len, const struct FString& OpenID);
	bool LbsSpeakerEnable();
	bool LbsMicphoneEnable();
	int JoinTeamRoom(const struct FString& InRoomName);
	void JoinRoom(const struct FString& room, const struct FString& userID);
	int JoinRangeRoom(const struct FString& InRoomName);
	void JoinLbsRoom(const struct FString& lbsRoom, const struct FString& userID);
	void JoinCommonRoom(const struct FString& InRoomName);
	bool IsVoiceSDKEnable();
	bool IsTeamInterphoneOpenned();
	bool IsSpeaking();
	bool IsLbsInterphoneOpenned();
	bool IsInterphoneMode();
	bool IsEnableCivilFile();
	int Invoke(uint32_t InCmd, uint32_t InParam1, uint32_t InParam2, const struct FString& InExterInfo);
	void InstallSystemAudioEventListener(bool InEnable);
	void InitVoiceSDKComponent(const struct FString& userID);
	int InitVoiceSDK();
	void Init();
	bool HaveTeamRoom();
	bool HaveLbsRoom();
	float GetVoiceLength();
	struct FString GetTeamRoomName();
	int GetRoomStatus(const struct FString& InRoomName);
	int GetRoomMemberVoiceData(const struct FString& InOpenid, int InIndexType, int DataType, bool OnlyIncludeLatest);
	int GetPlayerVolume(const struct FString& InPlayerId);
	int GetMicState();
	struct FString GetLocalRecordFilePath(const struct FString& InFileName);
	struct FString GetLbsRoomName();
	void GetAuthKey();
	int GetAudioDeviceConnectionState();
	void ForbidTeammateVoiceById(int memberID, bool IsEnable);
	int ForbidMemberVoice(int InMember, bool InEnable, const struct FString& InRoomName);
	void ForbidLbsMemberVoiceById(int memberID, bool IsEnable);
	void EnableVoiceSdk(class UGameFrontendHUD* GameFrontendHUD, bool Enable);
	int EnableVoiceRoomMicrophone(const struct FString& InRoomName, bool InEnable);
	void EnableVoiceChat(bool InEnable);
	int EnableRSTSSubtitle(bool InEnable, int InSrcLang);
	int EnableRoomSpeaker(const struct FString& InRoomName, bool InEnable);
	int EnableReportForAbroad(bool InIsWholeRoundaudit);
	bool EnableReportALLAbroad(bool InEnable, bool InWithEncryption, int InTimeout);
	int EnableMultiRoom(bool InEnable);
	void EnableLog(bool InEnable);
	int EnableKws(bool bEnable);
	int EnableCivilFile(bool Enable);
	void EnableBluetoothSCO(bool InEnable);
	void DownloadRecordFile(bool InPermanent);
	int DownloadRecordedFile(const struct FString& InFileID, const struct FString& InDownloadInFilePath, int InTimeout, bool InPermanent);
	void CommonTestMic();
	int CloseVoiceSpeaker();
	int CloseVoiceMic();
	void CloseSpeaker();
	void CloseMic();
	void CloseIngameSpeaker();
	void CloseIngameMicphone();
	void CloseAllSpeaker(bool ShowTips);
	void CloseAllMicphone(bool ShowTips);
	int CheckDeviceMuteState();
	void CheckAndEnableRoomSpeaker();
	void ChatShowAgeRestrictionMsgInLobby();
	void ChatShowAgeRestrictionMsgInFighting();
	void ChatShowAgeRestrictionMsgInChat();
	void ChatRequestPrivacyInSetting();
	void ChatRequestPrivacyInGame();
	int ApplyMessageKey();
	void AlwaysDisableRoomMic(const struct FString& InRoomName, bool WithClear);
};


// Class Client.WeaponDIYCaptureActor
// 0x0000 (0x0438 - 0x0438)
class AWeaponDIYCaptureActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.WeaponDIYCaptureActor");
		return pStaticClass;
	}


	void ResizeRT(class UTextureRenderTarget2D* RenderTarget, int Width, int Height);
};


// Class Client.WINSDKFBWebLogin
// 0x0030 (0x0130 - 0x0100)
class UWINSDKFBWebLogin : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnUrlChanged;                                             // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHttpResponed;                                           // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     InitialURL;                                               // 0x0120(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.WINSDKFBWebLogin");
		return pStaticClass;
	}


	void OnWINSDKHttpResponed__DelegateSignature(bool requestSucc, const struct FString& txtContent);
	void OnUrlChanged__DelegateSignature(const struct FText& Text);
	void LoadURL(const struct FString& NewURL);
	void DoHttpRequest(const struct FString& URL);
};


// Class Client.WINWebSocketServer
// 0x0030 (0x0058 - 0x0028)
class UWINWebSocketServer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnWebSocketConnectEvent;                                  // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnWebSocketErrorEvent;                                    // 0x0038(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnWebSocketMessageEvent;                                  // 0x0048(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.WINWebSocketServer");
		return pStaticClass;
	}


	void Tick(int DeltaTime);
	void Stop();
	void Start(int InPort);
	void Send(const struct FString& InMsg);
	static class UWINWebSocketServer* GetInstance();
};


}

