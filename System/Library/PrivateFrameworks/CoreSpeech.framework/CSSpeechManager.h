/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerAssetHandlerDelegate.h>
#import <libobjc.A.dylib/CSActivationEventNotificationHandlerDelegate.h>
#import <libobjc.A.dylib/CSAudioRecorderDelegate.h>
#import <libobjc.A.dylib/CSAudioProviderDelegate.h>
#import <libobjc.A.dylib/CSOpportuneSpeakEventMonitorDelegate.h>

@protocol OS_dispatch_queue, CSSpeechManagerDelegate, OS_dispatch_source;
@class NSObject, CSAudioRecorder, NSMutableDictionary, CSFallbackAudioSessionReleaseProvider, CSBuiltInVoiceTrigger, CSVoiceTriggerEventNotifier, CSVoiceTriggerFileLogger, CSSelfTriggerDetector, CSKeywordDetector, CSMyriadPHash, CSMyriadSelfTriggerCoordinator, CSVoiceTriggerFidesClient, CSVoiceTriggerFirstPassJarvis, CSVoiceTriggerFirstPassHearst, CSVoiceTriggerFirstPassHearstAP, CSVoiceTriggerFirstPassRemora, CSVoiceProfileRetrainManager, CSOpportuneSpeakListnerTestService, CSAdBlocker, CSContinuousAudioFingerprintProvider, CSPostBuildInstallService, CSSmartSiriVolumeManager, NSString;

@interface CSSpeechManager : NSObject <CSAudioServerCrashMonitorDelegate, CSVoiceTriggerAssetHandlerDelegate, CSActivationEventNotificationHandlerDelegate, CSAudioRecorderDelegate, CSAudioProviderDelegate, CSOpportuneSpeakEventMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _assetQueryQueue;
	CSAudioRecorder* _audioRecorder;
	NSMutableDictionary* _audioProviders;
	CSFallbackAudioSessionReleaseProvider* _fallbackAudioSessionReleaseProvider;
	id<CSSpeechManagerDelegate> _clientController;
	NSObject*<OS_dispatch_queue> _voiceTriggerQueue;
	CSBuiltInVoiceTrigger* _voiceTrigger;
	CSVoiceTriggerEventNotifier* _voiceTriggerEventNotifier;
	CSVoiceTriggerFileLogger* _voiceTriggerFileLogger;
	CSSelfTriggerDetector* _selfTriggerDetector;
	CSKeywordDetector* _keywordDetector;
	CSMyriadPHash* _myriad;
	CSMyriadSelfTriggerCoordinator* _myriadSelfTriggerCoordinator;
	CSVoiceTriggerFidesClient* _voiceTriggerFidesClient;
	CSVoiceTriggerFirstPassJarvis* _voiceTriggerFirstPassJarvis;
	CSVoiceTriggerFirstPassHearst* _voiceTriggerFirstPassHearst;
	CSVoiceTriggerFirstPassHearstAP* _voiceTriggerFirstPassHearstAP;
	CSVoiceTriggerFirstPassRemora* _voiceTriggerFirstPassRemora;
	CSVoiceProfileRetrainManager* _voiceTriggerRetrainer;
	NSObject*<OS_dispatch_source> _clearLoggingFileTimer;
	long long _clearLoggingFileTimerCount;
	CSOpportuneSpeakListnerTestService* _opportuneSpeakListnerTestService;
	CSAdBlocker* _adBlocker;
	CSContinuousAudioFingerprintProvider* _fingerprintProvider;
	CSPostBuildInstallService* _postBuildInstallService;
	CSSmartSiriVolumeManager* _ssvManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assetQueryQueue;                                             //@synthesize assetQueryQueue=_assetQueryQueue - In the implementation block
@property (nonatomic,retain) CSAudioRecorder * audioRecorder;                                                          //@synthesize audioRecorder=_audioRecorder - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * audioProviders;                                                     //@synthesize audioProviders=_audioProviders - In the implementation block
@property (nonatomic,retain) CSFallbackAudioSessionReleaseProvider * fallbackAudioSessionReleaseProvider;              //@synthesize fallbackAudioSessionReleaseProvider=_fallbackAudioSessionReleaseProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CSSpeechManagerDelegate> clientController;                                      //@synthesize clientController=_clientController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> voiceTriggerQueue;                                           //@synthesize voiceTriggerQueue=_voiceTriggerQueue - In the implementation block
@property (nonatomic,retain) CSBuiltInVoiceTrigger * voiceTrigger;                                                     //@synthesize voiceTrigger=_voiceTrigger - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerEventNotifier * voiceTriggerEventNotifier;                                  //@synthesize voiceTriggerEventNotifier=_voiceTriggerEventNotifier - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerFileLogger * voiceTriggerFileLogger;                                        //@synthesize voiceTriggerFileLogger=_voiceTriggerFileLogger - In the implementation block
@property (nonatomic,retain) CSSelfTriggerDetector * selfTriggerDetector;                                              //@synthesize selfTriggerDetector=_selfTriggerDetector - In the implementation block
@property (nonatomic,retain) CSKeywordDetector * keywordDetector;                                                      //@synthesize keywordDetector=_keywordDetector - In the implementation block
@property (nonatomic,retain) CSMyriadPHash * myriad;                                                                   //@synthesize myriad=_myriad - In the implementation block
@property (nonatomic,retain) CSMyriadSelfTriggerCoordinator * myriadSelfTriggerCoordinator;                            //@synthesize myriadSelfTriggerCoordinator=_myriadSelfTriggerCoordinator - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerFidesClient * voiceTriggerFidesClient;                                      //@synthesize voiceTriggerFidesClient=_voiceTriggerFidesClient - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerFirstPassJarvis * voiceTriggerFirstPassJarvis;                              //@synthesize voiceTriggerFirstPassJarvis=_voiceTriggerFirstPassJarvis - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerFirstPassHearst * voiceTriggerFirstPassHearst;                              //@synthesize voiceTriggerFirstPassHearst=_voiceTriggerFirstPassHearst - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerFirstPassHearstAP * voiceTriggerFirstPassHearstAP;                          //@synthesize voiceTriggerFirstPassHearstAP=_voiceTriggerFirstPassHearstAP - In the implementation block
@property (nonatomic,retain) CSVoiceTriggerFirstPassRemora * voiceTriggerFirstPassRemora;                              //@synthesize voiceTriggerFirstPassRemora=_voiceTriggerFirstPassRemora - In the implementation block
@property (nonatomic,retain) CSVoiceProfileRetrainManager * voiceTriggerRetrainer;                                     //@synthesize voiceTriggerRetrainer=_voiceTriggerRetrainer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> clearLoggingFileTimer;                                      //@synthesize clearLoggingFileTimer=_clearLoggingFileTimer - In the implementation block
@property (assign,nonatomic) long long clearLoggingFileTimerCount;                                                     //@synthesize clearLoggingFileTimerCount=_clearLoggingFileTimerCount - In the implementation block
@property (nonatomic,retain) CSOpportuneSpeakListnerTestService * opportuneSpeakListnerTestService;                    //@synthesize opportuneSpeakListnerTestService=_opportuneSpeakListnerTestService - In the implementation block
@property (nonatomic,retain) CSAdBlocker * adBlocker;                                                                  //@synthesize adBlocker=_adBlocker - In the implementation block
@property (nonatomic,retain) CSContinuousAudioFingerprintProvider * fingerprintProvider;                               //@synthesize fingerprintProvider=_fingerprintProvider - In the implementation block
@property (nonatomic,retain) CSPostBuildInstallService * postBuildInstallService;                                      //@synthesize postBuildInstallService=_postBuildInstallService - In the implementation block
@property (nonatomic,retain) CSSmartSiriVolumeManager * ssvManager;                                                    //@synthesize ssvManager=_ssvManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                       //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)sharedManagerForCoreSpeechDaemon;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)startManager;
-(NSObject*<OS_dispatch_queue>)assetQueryQueue;
-(void)setAssetQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)voiceTriggerAssetHandler:(id)arg1 didChangeCachedAsset:(id)arg2 ;
-(id)audioProviderWithContext:(id)arg1 error:(id*)arg2 ;
-(void)activationEventNotificationHandler:(id)arg1 event:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)CSAudioRouteChangeMonitor:(id)arg1 didReceiveAudioRouteChangeEvent:(long long)arg2 ;
-(void)audioRecorderWillBeDestroyed:(id)arg1 ;
-(void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 ;
-(void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 ;
-(void)_createClearLoggingFileTimer;
-(void)_startAllClients;
-(void)_setupVoiceTriggerWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupSpeakerRecognitionWithCompletion:(/*^block*/id)arg1 ;
-(void)_startClearLoggingFilesTimer;
-(id)_voiceTriggerEventNotifierCreateIfNeeded:(BOOL)arg1 ;
-(void)_startVoiceTrigger;
-(id)_voiceTriggerFileLoggerCreateIfNeeded:(BOOL)arg1 ;
-(id)_myriadSelfTriggerCoordinatorIfNeeded:(BOOL)arg1 ;
-(void)_setupForHearstIfNeededWithPrepareCompletion:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setupForJarvisIfNeededWithPrepareCompletion:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_getVoiceTriggerAssetIfNeeded:(/*^block*/id)arg1 ;
-(id)_getAudioRecorderWithError:(id*)arg1 ;
-(NSMutableDictionary *)audioProviders;
-(void)setAudioRecorder:(CSAudioRecorder *)arg1 ;
-(void)_reinitializeVoiceTriggerIfNeeded;
-(void)_reinitializeVoiceTriggerWithAsset:(id)arg1 ;
-(void)_reinitializeSmartSiriVolumeWithAsset:(id)arg1 ;
-(void)_setupForRemoraIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_teardownForBluetoothDevice;
-(void)_setupForBluetoothDeviceIfNeededWithDeviceType:(unsigned long long)arg1 prepareCompletion:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_prepareRemoraDeviceWithAsset:(id)arg1 ;
-(BOOL)_prepareForBluetoothDeviceWithDeviceType:(unsigned long long)arg1 ;
-(void)_startForBluetoothDeviceWithDeviceType:(unsigned long long)arg1 asset:(id)arg2 ;
-(void)opportuneSpeakEventMonitor:(id)arg1 didStreamStateChanged:(BOOL)arg2 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1 ;
-(void)audioProviderInvalidated:(id)arg1 streamHandleId:(unsigned long long)arg2 ;
-(CSVoiceTriggerEventNotifier *)voiceTriggerEventNotifier;
-(id)audioFingerprintProvider;
-(void)registerSpeechController:(id)arg1 ;
-(void)registerSiriClientProxy:(id)arg1 ;
-(id)audioProviderWithUUID:(id)arg1 ;
-(id)audioProviderWithStreamID:(unsigned long long)arg1 ;
-(id)fetchFallbackAudioSessionReleaseProvider;
-(CSAudioRecorder *)audioRecorder;
-(void)setAudioProviders:(NSMutableDictionary *)arg1 ;
-(CSFallbackAudioSessionReleaseProvider *)fallbackAudioSessionReleaseProvider;
-(void)setFallbackAudioSessionReleaseProvider:(CSFallbackAudioSessionReleaseProvider *)arg1 ;
-(id<CSSpeechManagerDelegate>)clientController;
-(void)setClientController:(id<CSSpeechManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)voiceTriggerQueue;
-(void)setVoiceTriggerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CSBuiltInVoiceTrigger *)voiceTrigger;
-(void)setVoiceTrigger:(CSBuiltInVoiceTrigger *)arg1 ;
-(void)setVoiceTriggerEventNotifier:(CSVoiceTriggerEventNotifier *)arg1 ;
-(CSVoiceTriggerFileLogger *)voiceTriggerFileLogger;
-(void)setVoiceTriggerFileLogger:(CSVoiceTriggerFileLogger *)arg1 ;
-(CSSelfTriggerDetector *)selfTriggerDetector;
-(void)setSelfTriggerDetector:(CSSelfTriggerDetector *)arg1 ;
-(CSKeywordDetector *)keywordDetector;
-(void)setKeywordDetector:(CSKeywordDetector *)arg1 ;
-(CSMyriadPHash *)myriad;
-(void)setMyriad:(CSMyriadPHash *)arg1 ;
-(CSMyriadSelfTriggerCoordinator *)myriadSelfTriggerCoordinator;
-(void)setMyriadSelfTriggerCoordinator:(CSMyriadSelfTriggerCoordinator *)arg1 ;
-(CSVoiceTriggerFidesClient *)voiceTriggerFidesClient;
-(void)setVoiceTriggerFidesClient:(CSVoiceTriggerFidesClient *)arg1 ;
-(CSVoiceTriggerFirstPassJarvis *)voiceTriggerFirstPassJarvis;
-(void)setVoiceTriggerFirstPassJarvis:(CSVoiceTriggerFirstPassJarvis *)arg1 ;
-(CSVoiceTriggerFirstPassHearst *)voiceTriggerFirstPassHearst;
-(void)setVoiceTriggerFirstPassHearst:(CSVoiceTriggerFirstPassHearst *)arg1 ;
-(CSVoiceTriggerFirstPassHearstAP *)voiceTriggerFirstPassHearstAP;
-(void)setVoiceTriggerFirstPassHearstAP:(CSVoiceTriggerFirstPassHearstAP *)arg1 ;
-(CSVoiceTriggerFirstPassRemora *)voiceTriggerFirstPassRemora;
-(void)setVoiceTriggerFirstPassRemora:(CSVoiceTriggerFirstPassRemora *)arg1 ;
-(CSVoiceProfileRetrainManager *)voiceTriggerRetrainer;
-(void)setVoiceTriggerRetrainer:(CSVoiceProfileRetrainManager *)arg1 ;
-(NSObject*<OS_dispatch_source>)clearLoggingFileTimer;
-(void)setClearLoggingFileTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(long long)clearLoggingFileTimerCount;
-(void)setClearLoggingFileTimerCount:(long long)arg1 ;
-(CSOpportuneSpeakListnerTestService *)opportuneSpeakListnerTestService;
-(void)setOpportuneSpeakListnerTestService:(CSOpportuneSpeakListnerTestService *)arg1 ;
-(CSAdBlocker *)adBlocker;
-(void)setAdBlocker:(CSAdBlocker *)arg1 ;
-(CSContinuousAudioFingerprintProvider *)fingerprintProvider;
-(void)setFingerprintProvider:(CSContinuousAudioFingerprintProvider *)arg1 ;
-(CSPostBuildInstallService *)postBuildInstallService;
-(void)setPostBuildInstallService:(CSPostBuildInstallService *)arg1 ;
-(CSSmartSiriVolumeManager *)ssvManager;
-(void)setSsvManager:(CSSmartSiriVolumeManager *)arg1 ;
@end

