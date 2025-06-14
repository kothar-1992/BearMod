#pragma once

// SDKGen by @xninjaleaks | @talhaeens 
// Send message for SDKGen and Offset Finder Tool

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ClientNet.HDmpveNet
// 0x0370 (0x0398 - 0x0028)
class UHDmpveNet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x0028(0x0230) MISSED OFFSET
	class UHDmpveSDK*                                  _ConnectorInst;                                           // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    StartTickNetPackageDelegate;                              // 0x0260(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x128];                                     // 0x0270(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.HDmpveNet");
		return pStaticClass;
	}


	void SetTickNetMsgMaxTime(float MaxTime);
	void OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo);
	void OnUAAssistantNotify(const struct FUAAssistantInfoWrapper& uaAssistantInfo);
	void OnTraceCallBack(int code, const struct FString& dataJson);
	void OnTConndAuthFailDelegate();
	void OnShareNotify(int Result, int Platform);
	void OnRequestPermissionsResult(int code, const struct FString& permission, const struct FString& grantResult);
	void OnReceiveDataNotify(int Result, TArray<unsigned char> Msg);
	void OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo);
	void OnQRCodeGenQRImg(int Tag, int Ret, const struct FString& imgPath);
	void OnMigrateNotify(int Result);
	void OnLaunchInfo(const struct FString& roominfo);
	void OnIGShareUploadFinished(int Result, const struct FString& Platform);
	void OnGroupNotify(const struct FGroupInfoWrapper& groupInfo);
	void OnGetWebviewActionNotify(const struct FString& webviewinfo);
	void OnGetTicketNotify(const struct FString& TicketInfo);
	void OnGetShortUrlNotify(const struct FShortURLInfoWrapper& shorturlinfo);
	void OnGetPlatformFriendsNotify(const struct FPlatformFriendInfoMap& platformFriends);
	void OnGetCountryNoByIMSDK(int Country);
	void OnGameMasterEvent(const struct FString& EvenName, int Result);
	void OnConnectorStateChangeNotify(int State, int Param1, int Param2, int param3);
	void OnConnectorDisconnectedNotify(int Result);
	void OnConnectorConnectedNotify(int IsConnected, int nResult);
	void OnBindIntlNotify(int bindEventID);
	void OnAccountLogoutNotify(int Result);
	void OnAccountLoginNotify(int Result, const struct FString& OpenID, int Channel, const struct FString& resultMsg, int thirdRetCode);
	void OnAccountInitializeNotify(int Result);
	void OnAccessTokenRefreshedNotify(int Result);
};


// Class ClientNet.HDmpveSDK
// 0x0110 (0x0138 - 0x0028)
class UHDmpveSDK : public UObject
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0028(0x0100) MISSED OFFSET
	int                                                MaxBufferSize;                                            // 0x0128(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x012C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.HDmpveSDK");
		return pStaticClass;
	}


	static void UploadFile(const struct FString& _imgPath, int shareFileType, const struct FString& InDestKey);
	void ShareWithUploadPhotoByChannel(const struct FString& _imgPath, int _channel, const struct FString& _url, const struct FString& _destKey);
	void ShareWithPhotoByChannel_Simple(const struct FString& _imgPath, const struct FString& _title, const struct FString& _content, int _channel);
	static void ShareFacebookLink(const struct FString& ftitle, const struct FString& fdesc, const struct FString& fsharelink);
	void SetTestLogin(const struct FString& OpenID, int Channel);
	void InviteSystemOfflineFriendsExt2(const struct FString& _title, const struct FString& _content, const struct FString& _link);
	void InviteSystemOfflineFriendsExt(const struct FString& _title, const struct FString& _content, const struct FString& _link);
	void InviteFBFriendsUnregistered_Link(const struct FString& _title, const struct FString& _content, const struct FString& _link, const struct FString& _extend);
	static struct FString GetUploadUrlByFile(const struct FString& file);
	static struct FString GetUploadUrl();
	static int GetUploadStatusByFile(const struct FString& file);
	static int GetUploadStatus();
	static void ClearFileUpload(const struct FString& file);
};


// Class ClientNet.HDmpveSDKDelegates
// 0x0130 (0x0158 - 0x0028)
class UHDmpveSDKDelegates : public UObject
{
public:
	struct FScriptMulticastDelegate                    ConnectNotifyDelegate;                                    // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ConnectStateChangedNotifyDelegate;                        // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DisconnectNotifyDelegate;                                 // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReceiveDataNotifyDelegate;                                // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccountInitializeNotifyDelegate;                          // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccountLoginNotifyDelegate;                               // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccessTokenRefreshedNotifyDelegate;                       // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccountLogoutNotifyDelegate;                              // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ShareNotifyDelegate;                                      // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GroupNotifyDelegate;                                      // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    QuickLoginNotifyDelegate;                                 // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    QRCodeGenQRImgDelegate;                                   // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    QRCodeLaunchDelegate;                                     // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    WebviewNotifyDelegate;                                    // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ShortUrlNotifyDelegate;                                   // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGetTicketNotifyDelegate;                                // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GameMasterEventDelegate;                                  // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestPermissionResultDelegate;                        // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TConndAuthFailDelegate;                                   // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.HDmpveSDKDelegates");
		return pStaticClass;
	}

};


// Class ClientNet.IMSDKConfig
// 0x0300 (0x0328 - 0x0028)
class UIMSDKConfig : public UObject
{
public:
	struct FString                                     IMSDK_GAME_ID;                                            // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_SDKAPI_RELEASE;                              // 0x0038(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_SDKAPI_BACKUP_RELEASE;                       // 0x0048(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_NOTICE_RELEASE;                              // 0x0058(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_HELP_RELEASE;                                // 0x0068(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_HELP_SCHEME_RELEASE;                         // 0x0078(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_CONFIG_RELEASE;                              // 0x0088(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_LOG_LEVEL_RELEASE;                                  // 0x0098(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_DEBUG_RELEASE;                                      // 0x00A8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_INNER_VOLLEY_DEBUG_RELEASE;                         // 0x00B8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_SDKAPI_TEST;                                 // 0x00C8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_SDKAPI_BACKUP_TEST;                          // 0x00D8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_NOTICE_TEST;                                 // 0x00E8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_HELP_TEST;                                   // 0x00F8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_HELP_SCHEME_TEST;                            // 0x0108(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_CONFIG_TEST;                                 // 0x0118(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_LOG_LEVEL_TEST;                                     // 0x0128(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_DEBUG_TEST;                                         // 0x0138(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_INNER_VOLLEY_DEBUG_TEST;                            // 0x0148(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_UNIFIED_ACCOUNT_RELEASE;                     // 0x0158(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_UNIFIED_ACCOUNT_BACKUP_RELEASE;              // 0x0168(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_APP_ID_RELEASE;                     // 0x0178(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_SDK_KEY_RELEASE;                    // 0x0188(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_TWITTER_WEB_LOGIN_URL_RELEASE;                      // 0x0198(0x0010) (ZeroConstructor, Config)
	struct FString                                     MIGRATE_WEB_URL_RELEASE;                                  // 0x01A8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_CHECK_PASSWORD;                     // 0x01B8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_PLATFORM_TYPE;                      // 0x01C8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_CHANNEL_ID;                         // 0x01D8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_UNIFIED_ACCOUNT_TEST;                        // 0x01E8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_UNIFIED_ACCOUNT_BACKUP_TEST;                 // 0x01F8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_APP_ID_TEST;                        // 0x0208(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_UNIFIED_ACCOUNT_SDK_KEY_TEST;                       // 0x0218(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_TWITTER_WEB_LOGIN_URL_TEST;                         // 0x0228(0x0010) (ZeroConstructor, Config)
	struct FString                                     MIGRATE_WEB_URL_TEST;                                     // 0x0238(0x0010) (ZeroConstructor, Config)
	struct FString                                     MIGRATE_WEB_USER_AGENT_STRING;                            // 0x0248(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_ACCOUNT_CHECK_POPUP_STATUS_ENABLE;                  // 0x0258(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_ACCOUNT_VERIFY_OPT_SID_ENABLE;                      // 0x0268(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_ACCOUNT_SEND_CODE_WEB_VERIFY;                       // 0x0278(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_ADMOB_TEST_DEVICE;                                  // 0x0288(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_ACCOUNT_CAPTCHA_APP_ID_FOR_VERIFY_CODE;             // 0x0298(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_QR_CODE_RELEASE;                             // 0x02A8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_SERVER_QR_CODE_TEST;                                // 0x02B8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_QR_CODE_SDK_KEY;                                    // 0x02C8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_NEW_API_ENABLE_LEVEL_RELEASE;                       // 0x02D8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_NEW_API_ENABLE_LEVEL_TEST;                          // 0x02E8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_LOCAL_LOG_ENABLE;                                   // 0x02F8(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_WEB_LOGIN_BASE_URL_RELEASE;                         // 0x0308(0x0010) (ZeroConstructor, Config)
	struct FString                                     IMSDK_WEB_LOGIN_BASE_URL_TEST;                            // 0x0318(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.IMSDKConfig");
		return pStaticClass;
	}


	void PatchMSDKConfigWithAreaConfig();
	struct FString GetIMSDKLogLevel(int InEnv);
};


// Class ClientNet.IMSDKHelper
// 0x0088 (0x00B0 - 0x0028)
class UIMSDKHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    WebviewVerifyCallbackDelegate;                            // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnLoadAdvertiseResult;                                    // 0x0038(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnShowAdvertiseResult;                                    // 0x0048(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnGenerateQRCodeNotify;                                   // 0x0058(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnQRCodeStatusNotify;                                     // 0x0068(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnInvalidateQRCodeNotify;                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnLoginCommandDelegate;                                   // 0x0088(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnOpenAppByUrlDelegate;                                   // 0x0098(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.IMSDKHelper");
		return pStaticClass;
	}


	void UpdateIMSDKBindResult(const struct FString& InBindResult);
	bool SwitchQRCodeLoginResult(const struct FString& InOpenid);
	void StartWebVerify(const struct FString& InExtraInfo, const struct FString& InVerifyAppId, const struct FString& InAccount);
	void SetWindowEditorLoginTokenIndex(int Index);
	void SetupLoginCacheInfo(int InChannelID, bool InIsQuickLogin);
	void SetupAdjustDMA(int InEEA, int InAdPersonalization, int InAdUserData);
	void SetUgId(const struct FString& InUgId);
	void SetNoAuthOpenid(const struct FString& OpenID);
	void SetMSDKConfig(bool InClearLoginData, TMap<struct FString, struct FString>* InConfigMaps);
	struct FString SetLoginResult(const struct FString& InLoginRetJson);
	void SetIMSDKEnv(int iEnv);
	void SetChannel(const struct FString& InIMSDKChannelName);
	void SetAdvertiseUserID(const struct FString& userID);
	void SetAdvertiseCustomData(const struct FString& InCustomData);
	void SaveLastIMSDKChannelID(int channelId);
	void RequestVerifyCode(const struct FString& InPhoneOrEmail, int InAccountType, int InUseForType, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InExtraJson);
	void RefreshLogin();
	bool RecoverGuest(const struct FString& channelUserId);
	void QuickLogin();
	void QueryQRCodeStatus(const struct FString& InCodeId, const struct FString& InRandStr, const struct FString& InExtraJson);
	void PlayAdvertise();
	void OriginalLogin(const struct FString& InExtraJson, TArray<struct FString> InPermissions, bool InNeedGuid);
	void OriginalBind(const struct FString& InChannel, const struct FString& InSubChannel, const struct FString& InExtra);
	void OnCommandLogin(const struct FString& InCmd, const struct FString& InExtra);
	void ModifyAccountInfo(const struct FString& InAccount, int InAccountType, int InVerifyType, const struct FString& InVerifyData, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InMondifyToAccount, int InModifyAccountType, const struct FString& InModifyVerifyCode, const struct FString& InModifyPhoneAreaCode, const struct FString& InExtraJson);
	void LogoutWith(int InMSDKChannelId);
	void LogoutQRCode(const struct FString& InOpenid);
	void LoadAdvertise(const struct FString& InAdvertiseUnitId);
	bool IsEqualCurLoginPlatform(const struct FString& strChannel);
	bool IsChannelBound(int InMSDKChannelId);
	bool IsAlreadyBindVK();
	bool IsAlreadyBindUnifiedAccount();
	bool IsAlreadyBindTwitter();
	bool IsAlreadyBindNosChat();
	bool IsAlreadyBindLine();
	bool IsAlreadyBindHMS();
	bool IsAlreadyBindGooglePlay();
	bool IsAlreadyBindGameCenter();
	bool IsAlreadyBindFB();
	bool IsAlreadyBindDiscord();
	bool IsAlreadyBindBgBg();
	bool IsAlreadyBindApple();
	void InvalidateQRCode(const struct FString& InCodeId, const struct FString& InRandStr, const struct FString& InExtraJson);
	void InitAdvertiseSDK();
	struct FString GetVerifyAppId4SendCode();
	void GetShortUrl(const struct FString& URL, const struct FString& Mask, const struct FString& Extra);
	struct FString GetOpenId();
	struct FIMSDKLoginResult GetLoginResult();
	struct FString GetLastLoginResultJson();
	int GetLastIMSDKChannelID();
	static class UIMSDKHelper* GetInstance();
	struct FString GetIMSDKLoginToken();
	struct FString GetIMSDKClientApiParams();
	int GetHDmpveChannelID();
	struct FString GetCurLoginPlatform();
	struct FString GetChannelNickname();
	struct FString GetBindRet();
	void GetBindInfo();
	int GetBindCount();
	struct FString GetAllQRCodeLoginResults();
	void GenerateQRCode(const struct FString& InExtraJson);
	int ConvertTConndChannel2IMSDKChannel(int InTConndChannelId);
	int ConvertStrToIMSDKChannel(const struct FString& strChannel);
	struct FString ConvertIMSDKChannelToStr(int imsdkChannel, bool caseSensitive);
	int ConvertIMSDKChannel2TConndChannel(int InIMSDKChannelId);
	void CheckVerifyCodeValid(const struct FString& InAccount, int InAccountType, const struct FString& InPhoneAreaCode, const struct FString& InVerifyCode, int InCodeType, const struct FString& InLanuageCode, const struct FString& InExtraJson);
	void CheckIsRegisted(const struct FString& InAccount, int InAccountType, const struct FString& InPhoneAreaCode, const struct FString& InLanuageCode, const struct FString& InExtraJson);
	void ChangePassword(const struct FString& InAccount, int InAccountType, const struct FString& InVerifyCode, const struct FString& InNewPassword, const struct FString& InAreaCode, const struct FString& InLangType, const struct FString& InExtraJson);
	void BindVK();
	void BindUnifiedAccount(const struct FString& InExtraJson);
	void BindTwitter();
	void BindNosChat();
	void BindLine();
	void BindHMS();
	void BindGooglePlay();
	void BindGameCenter();
	void BindFB();
	void BindDiscord();
	void BindChannel(int InMSDKChannelId, const struct FString& InExtraJson);
	void BindBgBg();
	void BindApple();
};


// Class ClientNet.iTOPPrefs
// 0x00B8 (0x00E0 - 0x0028)
class UiTOPPrefs : public USaveGame
{
public:
	bool                                               bForceLogin;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bFirstLoginGuestAfterBindFB;                              // 0x0029(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                nHDmpveChannelID;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                nLastIMSDKChannelID;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedFBForceLoginForRelationChainError;                   // 0x0034(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int64_t                                            lastTimeSetFBForceLoginForRelationChainError;             // 0x0038(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedWXForceLoginForRelationChainError;                   // 0x0040(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetWXForceLoginForRelationChainError;             // 0x0048(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedVKForceLoginForRelationChainError;                   // 0x0050(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetVKForceLoginForRelationChainError;             // 0x0058(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedLineForceLoginForRelationChainError;                 // 0x0060(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetLineForceLoginForRelationChainError;           // 0x0068(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedBgBgForceLoginForRelationChainError;                 // 0x0070(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetBgBgForceLoginForRelationChainError;           // 0x0078(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedAppleForceLoginForRelationChainError;                // 0x0080(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetAppleForceLoginForRelationChainError;          // 0x0088(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedUnifiedAccountForceLoginForRelationChainError;       // 0x0090(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetUnifiedAccountForceLoginForRelationChainError; // 0x0098(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedHMSForceLoginForRelationChainError;                  // 0x00A0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetHMSForceLoginForRelationChainError;            // 0x00A8(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedDiscordForceLoginForRelationChainError;              // 0x00B0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetDiscordForceLoginForRelationChainError;        // 0x00B8(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bNeedForceLoginForRelationChainError;                     // 0x00C0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	int64_t                                            lastTimeSetForceLoginForRelationChainError;               // 0x00C8(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     lastLoginArea;                                            // 0x00D0(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.iTOPPrefs");
		return pStaticClass;
	}

};


}

