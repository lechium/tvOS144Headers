/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCTunnelParser.h>

@class MCMDMServer, NSString, CATOperationQueue;

@interface MCMDMParser : MCTunnelParser {

	BOOL _isChaperoned;
	BOOL _isMDM;
	MCMDMServer* _server;
	NSString* _managingProfileIdentifier;
	CATOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSString * managingProfileIdentifier;              //@synthesize managingProfileIdentifier=_managingProfileIdentifier - In the implementation block
@property (nonatomic,retain) CATOperationQueue * operationQueue;                //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic,__weak) MCMDMServer * server;                       //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) BOOL isChaperoned;                               //@synthesize isChaperoned=_isChaperoned - In the implementation block
@property (assign,nonatomic) BOOL isMDM;                                        //@synthesize isMDM=_isMDM - In the implementation block
+(id)malformedRequestErrorResult;
+(id)_MCKeysToDMFKeys;
+(id)_DMFKeysToMCKeys;
+(id)_stringForAppState:(unsigned long long)arg1 ;
+(BOOL)_dmfAction:(unsigned long long*)arg1 fromMDMActionString:(id)arg2 ;
+(unsigned long long)_shouldUseDelayWithRequest:(id)arg1 ;
+(id)_errorFromDMFSoftwareUpdateError:(id)arg1 ;
+(id)_resolvedInstallActionStringForAction:(unsigned long long)arg1 ;
+(id)_statusFromError:(id)arg1 action:(unsigned long long)arg2 ;
+(id)errorChainFromError:(id)arg1 ;
+(id)_updateDictionaryFromUpdate:(id)arg1 ;
+(id)_errorWithDomain:(id)arg1 code:(long long)arg2 descriptionKey:(id)arg3 underlyingError:(id)arg4 type:(id)arg5 ;
+(BOOL)_useDelayFlagAllowed;
-(CATOperationQueue *)operationQueue;
-(void)setOperationQueue:(CATOperationQueue *)arg1 ;
-(MCMDMServer *)server;
-(void)setServer:(MCMDMServer *)arg1 ;
-(BOOL)isChaperoned;
-(NSString *)managingProfileIdentifier;
-(id)_originator;
-(void)setManagingProfileIdentifier:(NSString *)arg1 ;
-(id)_allCommands;
-(id)_profileList:(id)arg1 filterFlags:(int)arg2 ;
-(id)_installProfile:(id)arg1 accessRights:(int)arg2 installationType:(long long)arg3 ;
-(id)_removeProfileWithIdentifier:(id)arg1 forInstalledProfilesWithFilterFlags:(int)arg2 ;
-(id)_restrictions:(id)arg1 withProfileFilterFlags:(int)arg2 ;
-(id)_analyticsCommandNameFromRequest:(id)arg1 ;
-(id)_analyticsErrorFromResponse:(id)arg1 ;
-(BOOL)_analyticsRequiresNetworkTetheringFromRequest:(id)arg1 ;
-(id)_profileList:(id)arg1 ;
-(id)_installProfile:(id)arg1 accessRights:(int)arg2 ;
-(id)_removeProfile:(id)arg1 ;
-(id)_restrictions:(id)arg1 ;
-(id)_allowedDeviceQueriesForAccessRights:(int)arg1 ;
-(void)_sendAnalyticsMDMCommandEventWithRequest:(id)arg1 response:(id)arg2 ;
-(id)_invalidRequestTypeError:(id)arg1 ;
-(id)_unavailableCommandsWhileLocked;
-(id)_unavailableCommandsBeforeFirstUnlock;
-(id)_unavailableCommandsWhileInAppWhitelistModes;
-(id)_invalidRequestTypeInSingleAppModeError:(id)arg1 ;
-(id)unavailableCommandsDuringBuddy;
-(id)unavailableCommandsWhileInMDMLostMode;
-(id)_invalidRequestTypeInMDMLostModeError:(id)arg1 ;
-(id)_notNetworkTetheredError;
-(id)_deviceInformationWithRequest:(id)arg1 allowedQueries:(id)arg2 ;
-(id)_deviceInformationWithRequest:(id)arg1 accessRights:(int)arg2 ;
-(void)_processRequest:(id)arg1 accessRights:(int)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_notAuthorizedError;
-(id)_deviceLock:(id)arg1 ;
-(id)_restartDevice:(id)arg1 ;
-(id)_shutDownDevice:(id)arg1 ;
-(void)_enableLostMode:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_playLostModeSound:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_disableLostMode:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_deviceLocation:(id)arg1 ;
-(id)_clearPasscode:(id)arg1 ;
-(id)_requestUnlockToken:(id)arg1 ;
-(id)_eraseDevice:(id)arg1 ;
-(id)_certificateList:(id)arg1 ;
-(id)_provisioningProfileList:(id)arg1 ;
-(id)_installProvisioningProfile:(id)arg1 ;
-(id)_removeProvisioningProfile:(id)arg1 ;
-(id)_installedApplicationList:(id)arg1 ;
-(id)_securityInfo:(id)arg1 ;
-(id)_settings:(id)arg1 accessRights:(int)arg2 ;
-(void)_installApplication:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_validateApplications:(id)arg1 ;
-(id)_applyRedemptionCode:(id)arg1 assertion:(id)arg2 ;
-(id)_managedApplicationList:(id)arg1 ;
-(id)_managedApplicationConfiguration:(id)arg1 ;
-(id)_managedApplicationAttributes:(id)arg1 ;
-(id)_managedApplicationFeedback:(id)arg1 ;
-(id)_removeApplication:(id)arg1 ;
-(void)_requestMirroringRequest:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_stopMirroringRequest:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_inviteToProgramRequest:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_activationLockBypassCodeRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_clearActivationLockBypassCodeRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_clearRestrictionsPasswordRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_installMedia:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_managedMediaList:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_removeMedia:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_deviceConfigured:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_scheduleOSUpdate:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_scheduleOSUpdateScan:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_availableOSUpdates:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_statusOfOSUpdates:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_userList:(id)arg1 ;
-(id)_logOutUser:(id)arg1 ;
-(id)_deleteUser:(id)arg1 ;
-(BOOL)_isTriggerDiagnosticsAllowed;
-(id)_triggerDiagnostics:(id)arg1 ;
-(id)_refreshCellularPlans:(id)arg1 ;
-(id)_deviceNotInMDMLostModeError;
-(id)_serviceSubscriptionPropertiesWithDMFKeysMappedToMCKeys:(id)arg1 ;
-(id)_serviceSubscriptionsWithDMFKeysMappedToMCKeys:(id)arg1 ;
-(BOOL)_isProvisioningProfileUUIDManaged:(id)arg1 ;
-(unsigned long long)_profileInstallationStyleForRequest:(id)arg1 ;
-(id)_removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 ;
-(BOOL)_isProfileIdentifierManaged:(id)arg1 ;
-(id)_allSettingsItems;
-(BOOL)_isManagedAppFromManagementInformation:(id)arg1 ;
-(BOOL)_isManagedApp:(id)arg1 ;
-(id)_notManagedErrorAppID:(id)arg1 ;
-(id)_handleSetAppManagementInfoRequest:(id)arg1 outAdditionalResponseKeys:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)_malformedRequestError;
-(id)_performSetResidentUserQuotaSize:(id)arg1 ;
-(id)_performSetResidentUsers:(id)arg1 ;
-(id)_performSetDeviceName:(id)arg1 ;
-(id)_performSetWallpaper:(id)arg1 ;
-(id)_performSetDataRoaming:(id)arg1 ;
-(id)_performSetVoiceRoaming:(id)arg1 ;
-(id)_performSetBluetooth:(id)arg1 ;
-(id)_performSetPersonalHotspot:(id)arg1 ;
-(id)_performSetAppConfig:(id)arg1 outAdditionalResponseKeys:(id*)arg2 ;
-(id)_performSetAppAttributes:(id)arg1 outAdditionalResponseKeys:(id*)arg2 ;
-(id)_performSetMaximumResidentUsers:(id)arg1 ;
-(id)_performSetDiagnosticSubmission:(id)arg1 ;
-(id)_performSetAppAnalytics:(id)arg1 ;
-(id)_performSetGracePeriod:(id)arg1 ;
-(id)_performSetOrganizationInfo:(id)arg1 ;
-(id)_performSetMDMOptions:(id)arg1 ;
-(id)_performSetTimezone:(id)arg1 ;
-(BOOL)_validateSetting:(id)arg1 accessRights:(int)arg2 outError:(id*)arg3 ;
-(id)_performSetting:(id)arg1 outAdditionalResponseKeys:(id*)arg2 outRestartAppleTVApp:(BOOL*)arg3 ;
-(void)_performInstallApplicationRequestWithManifestURL:(id)arg1 iTunesStoreIDObj:(id)arg2 bundleId:(id)arg3 flagsObj:(id)arg4 attributes:(id)arg5 configuration:(id)arg6 manageChangeStr:(id)arg7 purchaseMethodValue:(int)arg8 personaID:(id)arg9 completionBlock:(/*^block*/id)arg10 ;
-(id)_appAlreadyInstalledErrorWithiTunesStoreID:(id)arg1 ;
-(id)_appAlreadyInstalledErrorWithBundleID:(id)arg1 ;
-(id)_appAlreadyQueuedErrorWithiTunesStoreID:(id)arg1 ;
-(id)_appAlreadyQueuedErrorWithBundleID:(id)arg1 ;
-(id)_licenseNotFoundErrorWithiTunesStoreID:(id)arg1 underlyingError:(id)arg2 ;
-(id)_licenseNotFoundErrorWithBundleID:(id)arg1 underlyingError:(id)arg2 ;
-(id)_cannotValidateAppIDErrorUnderlyingError:(id)arg1 ;
-(id)_invalidManifestErrorWithURL:(id)arg1 underlyingError:(id)arg2 ;
-(BOOL)_identifiersIsStringArray:(id)arg1 ;
-(id)_handleFetchAppsRequest:(id)arg1 managedOnly:(BOOL)arg2 deleteFeedback:(BOOL)arg3 advanceTransientStates:(BOOL)arg4 propertyKeys:(id)arg5 block:(/*^block*/id)arg6 ;
-(id)_stringForBookState:(unsigned long long)arg1 ;
-(BOOL)_rejectSoftwareUpdateBecauseUserLoggedInCompletionBlock:(/*^block*/id)arg1 ;
-(void)_dmfScheduleOSUpdate:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_rejectSoftwareUpdateBecauseOfMalformedRequestCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithManagingProfileIdentifier:(id)arg1 ;
-(void)processRequest:(id)arg1 accessRights:(int)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_performSetSharedDeviceConfiguration:(id)arg1 ;
-(id)_setResidentUsersNumber:(id)arg1 ;
-(id)_appStoreDisabledError;
-(void)_mdmScheduleOSUpdate:(id)arg1 assertion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_responseForMalformedUpdateRequest;
-(id)_softwareUpdatesNotPermittedWithLoggedInUserError;
-(BOOL)isMDM;
-(void)setIsMDM:(BOOL)arg1 ;
@end

