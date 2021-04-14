//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADCommandCenterSyncDelegate-Protocol.h"
#import "AFSettingsService-Protocol.h"

@class NSString, NSXPCConnection, SiriCoreLocalSpeechRecognizer;

@interface ADSettingsClient : NSObject <AFSettingsService, ADCommandCenterSyncDelegate>
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    SiriCoreLocalSpeechRecognizer *_localSpeechRecognizer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001002918d0
- (void)adSyncVerificationServerReport:(id)arg1;	// IMP=0x0000000100291864
- (void)adSyncVerificationPartialResult:(id)arg1;	// IMP=0x00000001002917f8
- (oneway void)pushMyriadAdvertisementContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010029176c
- (oneway void)getRecordedAudioDirectoryPathsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002916fc
- (oneway void)trimRecordedAudioWithIdentifier:(id)arg1 offset:(double)arg2 duration:(double)arg3 outputFileType:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100291648
- (oneway void)accessRecordedAudioWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002915bc
- (oneway void)siriDesignModeIsEnabled:(CDUnknownBlockType)arg1;	// IMP=0x000000010029157c
- (oneway void)setSiriDesignModeEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100291538
- (void)_postWatchNotificationWithContext:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100291400
- (oneway void)setOnDeviceDictationAvailableAlertPresented:(_Bool)arg1;	// IMP=0x00000001002913b0
- (oneway void)deleteSiriHistoryWithContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100290950
- (oneway void)shouldSuppressSiriDataSharingOptInAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100290910
- (oneway void)setSiriDataSharingOptInAlertPresented:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002908cc
- (oneway void)getSiriDataSharingOptInStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002907c0
- (oneway void)setSiriDataSharingOptInStatus:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010029050c
- (oneway void)clearOpportuneSpeakingEdgeDetectorSignalOverride;	// IMP=0x0000000100290508
- (oneway void)setOpportuneSpeakingEdgeDetectorSignalOverride:(long long)arg1;	// IMP=0x0000000100290500
- (oneway void)setSpokenNotificationProxCardSeen:(_Bool)arg1;	// IMP=0x00000001002904fc
- (oneway void)setSpokenNotificationShouldSkipTriggerlessReplies:(_Bool)arg1;	// IMP=0x00000001002904f4
- (oneway void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002904b4
- (oneway void)setSpokenNotificationShouldAlwaysSpeakNotifications:(_Bool)arg1;	// IMP=0x00000001002904ac
- (oneway void)getSpokenNotificationShouldAlwaysSpeakNotificationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010029046c
- (oneway void)setSpokenNotificationTemporarilyDisabledForApp:(id)arg1 until:(id)arg2;	// IMP=0x0000000100290434
- (oneway void)getSpokenNotificationTemporarilyDisabledEndDateForApp:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002903c0
- (oneway void)clearSpokenNotificationTemporarilyDisabledStatus;	// IMP=0x00000001002903bc
- (oneway void)setSpokenNotificationTemporarilyDisabledUntil:(id)arg1;	// IMP=0x00000001002903b4
- (oneway void)getSpokenNotificationTemporarilyDisabledEndDateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100290358
- (oneway void)stopObservingBluetoothWirelessSplitterSession;	// IMP=0x0000000100290310
- (oneway void)startObservingBluetoothWirelessSplitterSession;	// IMP=0x00000001002902c8
- (oneway void)getBluetoothWirelessSplitterSessionInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002901c0
- (oneway void)getPairedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002901b8
- (oneway void)getConnectedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028fd74
- (oneway void)getBluetoothDeviceInfoWithUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028fc64
- (oneway void)getBluetoothDeviceInfoWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028fb54
- (oneway void)setSiriOutputVolume:(float)arg1 forAudioRoute:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010028fa50
- (oneway void)getSiriOutputVolumeForAudioRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028f960
- (oneway void)fetchExperimentContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028f888
- (oneway void)fetchExperimentConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028f7b0
- (oneway void)sendMetricsToServerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028f6bc
- (oneway void)resetAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028f558
- (oneway void)purgeAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028f3f4
- (oneway void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028f278
- (oneway void)homeOnboardingFlowInvoked:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028f1f8
- (oneway void)fetchMultiUserVoiceIdentificationSetting:(CDUnknownBlockType)arg1;	// IMP=0x000000010028f174
- (oneway void)getSharedUserID:(CDUnknownBlockType)arg1;	// IMP=0x000000010028f0b0
- (oneway void)updateMultiUserWithSharedUserId:(id)arg1 companionId:(id)arg2 companionSpeechId:(id)arg3 idsIdentifier:(id)arg4 productPrefix:(id)arg5 aceHost:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000010028ef34
- (oneway void)getSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028ee60
- (oneway void)getHomeUserIdForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028ed8c
- (oneway void)updateVoiceIdScoreToUser:(id)arg1 score:(id)arg2 reset:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010028ecbc
- (oneway void)showPrimaryUserSharedUserIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028ec3c
- (oneway void)showMultiUsers:(CDUnknownBlockType)arg1;	// IMP=0x000000010028ebbc
- (oneway void)removeMultiUserUserWithSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028eae0
- (oneway void)removeMultiUserUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028ea04
- (oneway void)addMultiUserUser:(id)arg1 sharedId:(id)arg2 loggableSharedId:(id)arg3 enrollmentName:(id)arg4 isPrimary:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010028e8bc
- (oneway void)getSharedCompanionInfo:(CDUnknownBlockType)arg1;	// IMP=0x000000010028e7bc
- (oneway void)setNanoSiriDataSharingOptInStatus:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028e7a8
- (oneway void)setNanoCrownActivationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028e794
- (oneway void)setNanoLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028e780
- (oneway void)setNanoOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028e76c
- (oneway void)setNanoTTSSpeakerVolume:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028e758
- (oneway void)setNanoUseDeviceSpeakerForTTS:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028e744
- (oneway void)setNanoRaiseToSpeakEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028e730
- (oneway void)setNanoPhraseSpotterEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028e71c
- (oneway void)setNanoDictationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028e708
- (oneway void)setNanoAssistantEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028e6f4
- (oneway void)getStereoPairState:(CDUnknownBlockType)arg1;	// IMP=0x000000010028e640
- (oneway void)getStereoPartnerLastMyriadWinDate:(CDUnknownBlockType)arg1;	// IMP=0x000000010028e540
- (oneway void)getMeCard:(CDUnknownBlockType)arg1;	// IMP=0x000000010028e42c
- (oneway void)getSupplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010028e3a8
- (oneway void)getSupplementalLanguageDictionaryForProduct:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028e324
- (oneway void)getSupplementalLanguagesModificationDate:(CDUnknownBlockType)arg1;	// IMP=0x000000010028e2a0
- (oneway void)getSupplementalLanguagesDictionary:(CDUnknownBlockType)arg1;	// IMP=0x000000010028e21c
- (oneway void)setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010028e19c
- (oneway void)setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010028e11c
- (oneway void)stopAllAudioPlaybackRequests:(_Bool)arg1;	// IMP=0x000000010028e0c8
- (oneway void)stopAudioPlaybackRequest:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x000000010028e050
- (oneway void)startAudioPlaybackRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028dfc0
- (oneway void)getPeerIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x000000010028de00
- (oneway void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010028dbec
- (void)_createMockServerIfNeededAndSetActiveWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028d98c
- (oneway void)startUIMockServerRequestWithReplayFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028d5f0
- (oneway void)dismissUI;	// IMP=0x000000010028d5a8
- (oneway void)startUIRequestWithSpeechAudioFileURL:(id)arg1;	// IMP=0x000000010028d508
- (oneway void)startMultiUserUIRequestWithText:(id)arg1 expectedSpeakerSharedUserID:(id)arg2 expectedSpeakerConfidenceScore:(unsigned long long)arg3 nonspeakerConfidenceScores:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010028d22c
- (oneway void)startUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028d070
- (oneway void)startUIRequestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028cef0
- (oneway void)setOfflineDictationProfileOverridePath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028ce58
- (oneway void)createOfflineSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 JSONData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010028cd90
- (oneway void)updateOfflineSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010028cce4
- (oneway void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028cc74
- (id)_localSpeechRecognizer;	// IMP=0x000000010028cc18
- (oneway void)setLanguage:(id)arg1 outputVoice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010028cab4
- (oneway void)setLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028c95c
- (oneway void)setOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028c868
- (oneway void)getAvailableVoicesIncludingAssetInfo:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028c07c
- (oneway void)getAudioSessionCoordinationSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028bfe4
- (oneway void)getCurrentNWActivityIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028bf10
- (oneway void)setHardcodedBluetoothProximity:(id)arg1;	// IMP=0x000000010028bed8
- (oneway void)getContextCollectorsInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028bbfc
- (oneway void)getOriginDeviceInfoForContextIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028bb70
- (oneway void)getCrossDeviceContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028bb00
- (oneway void)getCurrentContextSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028ba90
- (oneway void)forceMultiUserSync:(_Bool)arg1 download:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010028b990
- (oneway void)getDevicesWithAvailablePHSAssetsOnDeviceCheck:(CDUnknownBlockType)arg1;	// IMP=0x000000010028b920
- (oneway void)getDevicesWithAvailablePHSAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028b87c
- (oneway void)disableAndDeleteCloudSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028b76c
- (oneway void)_runServiceMaintenance;	// IMP=0x000000010028b720
- (void)_setSyncVerificationNeededAndFullReportNeeded:(_Bool)arg1 shouldPostNotification:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010028b3f0
- (oneway void)_fetchPeerData:(CDUnknownBlockType)arg1;	// IMP=0x000000010028b37c
- (oneway void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(_Bool)arg2 reason:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010028af78
- (oneway void)_clearSyncNeededForKey:(id)arg1;	// IMP=0x000000010028aecc
- (oneway void)_setSyncNeededForReason:(id)arg1;	// IMP=0x000000010028aec4
- (oneway void)configOverrides:(CDUnknownBlockType)arg1;	// IMP=0x000000010028ae28
- (oneway void)setConfigOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028ad98
- (oneway void)barrierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010028ad8c
- (oneway void)_shutdownSessionIfIdle;	// IMP=0x000000010028acb4
- (oneway void)_killDaemon;	// IMP=0x000000010028abdc
- (oneway void)setEnableAssistantLogging:(_Bool)arg1;	// IMP=0x000000010028aa18
- (oneway void)setDictationEnabled:(_Bool)arg1;	// IMP=0x000000010028a5d8
- (oneway void)setAssistantEnabled:(_Bool)arg1;	// IMP=0x000000010028a588
- (oneway void)setActiveAccountIdentifier:(id)arg1;	// IMP=0x000000010028a518
- (oneway void)deleteAccountWithIdentifier:(id)arg1;	// IMP=0x000000010028a4a8
- (void)_saveAccount:(id)arg1 setActive:(_Bool)arg2;	// IMP=0x000000010028a3f8
- (oneway void)saveAccountWithMessageDictionary:(id)arg1 setActive:(_Bool)arg2;	// IMP=0x000000010028a0fc
- (oneway void)retrieveAccountMessageDictionariesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100289cfc
- (oneway void)fetchSupportedLanguagesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100289c0c
- (id)_serviceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100289bfc
- (id)_serviceDelegate;	// IMP=0x0000000100289bec
- (void)connectionDisconnected;	// IMP=0x0000000100289bac
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0000000100289b34
- (id)_appIdentifierfromConnection:(id)arg1;	// IMP=0x0000000100289a14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

