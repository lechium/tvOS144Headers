//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADAcousticFingerprinterDelegate-Protocol.h"
#import "ADSpeechCapturing-Protocol.h"
#import "CSAudioSessionControllerDelegate-Protocol.h"
#import "CSEndpointAnalyzerDelegate-Protocol.h"
#import "CSLanguageDetectorDelegate-Protocol.h"
#import "CSSpeakerIdentificationDelegate-Protocol.h"
#import "CSSpeechControllerDelegate-Protocol.h"

@class ADAcousticFingerprinter, ADAudioActivationInfo, ADAudioFileWriter, ADSpeechCapturingContext, AFBluetoothWirelessSplitterSessionStateObserver, AFClientConfiguration, AFExperimentContext, AFSpeechSynthesisRecord, AFWatchdogTimer, CSAudioRecordDeviceInfo, CSEndpointerMetrics, CSSpeechController, NSArray, NSFileHandle, NSMutableDictionary, NSString, NSUUID, NSXPCConnection;
@protocol ADSpeechCapturingDelegate, CSEndpointAnalyzer, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface ADSpeechRecorder : NSObject <CSAudioSessionControllerDelegate, ADAcousticFingerprinterDelegate, CSSpeechControllerDelegate, CSEndpointAnalyzerDelegate, CSLanguageDetectorDelegate, CSSpeakerIdentificationDelegate, ADSpeechCapturing>
{
    id <ADSpeechCapturingDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CSSpeechController *_speechController;	// 24 = 0x18
    long long _packetCount;	// 32 = 0x20
    long long _speechCapturingMode;	// 40 = 0x28
    long long _recordingAlertsConfiguration;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_extendedEndpointTimer;	// 56 = 0x38
    id <CSEndpointAnalyzer> _endpointAnalyzer;	// 64 = 0x40
    ADSpeechCapturingContext *_context;	// 72 = 0x48
    ADAudioActivationInfo *_currentActivationInfo;	// 80 = 0x50
    ADAudioActivationInfo *_pendingActivationInfo;	// 88 = 0x58
    CSAudioRecordDeviceInfo *_currentRecordDeviceInfo;	// 96 = 0x60
    NSString *_currentPlaybackRoute;	// 104 = 0x68
    _Bool _fingerprintingEnabled;	// 112 = 0x70
    ADAcousticFingerprinter *_fingerprinter;	// 120 = 0x78
    long long _audioFileType;	// 128 = 0x80
    _Bool _needsAVVCLPCMCallbacks;	// 136 = 0x88
    _Bool _hasReceivedEmptyLPCMRecordBuffer;	// 137 = 0x89
    NSFileHandle *_audioFileHandle;	// 144 = 0x90
    ADAudioFileWriter *_audioFileWriter;	// 152 = 0x98
    ADAudioFileWriter *_audioLogggingFileWriter;	// 160 = 0xa0
    long long _startEvent;	// 168 = 0xa8
    long long _recordingState;	// 176 = 0xb0
    long long _endpointerOperationMode;	// 184 = 0xb8
    _Bool _didReceiveFirstBuffer;	// 192 = 0xc0
    _Bool _didReceiveLastBuffer;	// 193 = 0xc1
    _Bool _didDetectStartpoint;	// 194 = 0xc2
    _Bool _didDetectEndpoint;	// 195 = 0xc3
    _Bool _didEnterTwoShotMode;	// 196 = 0xc4
    _Bool _didFakeTwoShotWithAlert;	// 197 = 0xc5
    NSUUID *_fakeTwoShotTTSPromptUUID;	// 200 = 0xc8
    _Bool _serverDidRecognizeSpeech;	// 208 = 0xd0
    _Bool _fingerprintWasRecognized;	// 209 = 0xd1
    _Bool _serverDidEndpoint;	// 210 = 0xd2
    _Bool _didTimeout;	// 211 = 0xd3
    _Bool _wasCanceled;	// 212 = 0xd4
    _Bool _suppressRecordingStoppedAlert;	// 213 = 0xd5
    _Bool _isRecordingUsingBTRoute;	// 214 = 0xd6
    double _twoShotStartTime;	// 216 = 0xd8
    _Bool _didPerformTwoShotPrompt;	// 224 = 0xe0
    _Bool _forceSuccessAlertOnStop;	// 225 = 0xe1
    _Bool _isDriving;	// 226 = 0xe2
    double _startRecordingTimestamp;	// 232 = 0xe8
    double _firstBufferTimestamp;	// 240 = 0xf0
    unsigned long long _firstBufferHostTime;	// 248 = 0xf8
    unsigned long long _estimatedSpeechEndHostTime;	// 256 = 0x100
    double _lastPrepareTimestamp;	// 264 = 0x108
    double _accumulatedBufferDuration;	// 272 = 0x110
    NSObject<OS_dispatch_group> *_recordingWillStartGroup;	// 280 = 0x118
    struct OpaqueAudioConverter *_decoder;	// 288 = 0x120
    double _expectedFirstBufferTimestamp;	// 296 = 0x128
    _Bool _isOpus;	// 304 = 0x130
    NSString *_recordDevice;	// 312 = 0x138
    _Bool _audioDuckingEnabled;	// 320 = 0x140
    NSXPCConnection *_speechRecordingEventListenerConnection;	// 328 = 0x148
    AFWatchdogTimer *_fakeTwoShotTTSPromptWatchdogTimer;	// 336 = 0x150
    unsigned long long _lastAudioRecordBufferStartTime;	// 344 = 0x158
    unsigned long long _lastAudioRecordBufferReceiptTime;	// 352 = 0x160
    CSEndpointerMetrics *_lastEndpointerMetrics;	// 360 = 0x168
    double _lastEndpointHintDuration;	// 368 = 0x170
    NSArray *_lastEndpointHintFeatures;	// 376 = 0x178
    CDUnknownBlockType _lastEndpointHintCompletion;	// 384 = 0x180
    AFSpeechSynthesisRecord *_mostRecentSpeechSynthesisRecord;	// 392 = 0x188
    AFClientConfiguration *_currentClientConfiguration;	// 400 = 0x190
    NSObject<OS_dispatch_group> *_alertPlaybackGroup;	// 408 = 0x198
    NSMutableDictionary *_numberOfAVVCAlertPlaybacksByType;	// 416 = 0x1a0
    AFBluetoothWirelessSplitterSessionStateObserver *_bluetoothWirelessSplitterSessionStateObserver;	// 424 = 0x1a8
    AFExperimentContext *_experimentContext;	// 432 = 0x1b0
    _Bool _suppressInterruptionEndedNotifications;	// 440 = 0x1b8
}

- (void).cxx_destruct;	// IMP=0x000000010019b550
@property(nonatomic) _Bool suppressInterruptionEndedNotifications; // @synthesize suppressInterruptionEndedNotifications=_suppressInterruptionEndedNotifications;
- (void)_setAudioDuckingEnabled:(_Bool)arg1;	// IMP=0x000000010019b53c
- (void)_setDictationAudioModeEnabled:(_Bool)arg1;	// IMP=0x000000010019b538
- (unsigned int)_audioDeviceID;	// IMP=0x000000010019b530
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;	// IMP=0x000000010019b46c
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;	// IMP=0x000000010019b334
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x000000010019b270
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x000000010019b138
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x000000010019b074
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;	// IMP=0x000000010019aee8
- (void)speakerIdentificationDidDetectSpeakerWithScores:(id)arg1;	// IMP=0x000000010019ab6c
- (_Bool)_startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010019a794
- (void)acousticFingerprinter:(id)arg1 hasFingerprint:(id)arg2 duration:(double)arg3;	// IMP=0x000000010019a644
- (void)setEARLanguageDetectorSpeechRequestId:(id)arg1;	// IMP=0x000000010019a634
- (void)performBlockAfterAlerts:(CDUnknownBlockType)arg1 timeout:(double)arg2;	// IMP=0x000000010019a148
- (void)setEndpointerDelayedTrigger:(_Bool)arg1;	// IMP=0x000000010019a138
- (void)setEndpointerThreshold:(double)arg1;	// IMP=0x000000010019a124
- (void)enforcePreviousEndpointHint;	// IMP=0x000000010019a110
- (void)_enforceEndpointHint;	// IMP=0x000000010019a024
- (void)_clearEndpointHint;	// IMP=0x0000000100199fdc
- (void)_checkIfLastEndpointHintShouldBeAccepted;	// IMP=0x0000000100199d20
- (void)updateEndpointHintForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100199bc8
- (void)_handleFakeTwoShotPromptCallbackWithUUID:(id)arg1 timestamp:(double)arg2 duration:(double)arg3 error:(id)arg4;	// IMP=0x0000000100199a14
- (void)_handleFakeTwoShotPromptTimeoutWithUUID:(id)arg1;	// IMP=0x0000000100199934
- (void)_playPhaticWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001995e4
- (void)_performTwoShotPromptForType:(long long)arg1 atTime:(double)arg2;	// IMP=0x0000000100198e3c
- (void)_hardEndpointWasDetectedWithMetrics:(id)arg1 atTime:(double)arg2;	// IMP=0x0000000100198c20
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;	// IMP=0x00000001001986e8
- (void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x0000000100198474
- (void)speechControllerDidUpdateSmartSiriVolume:(id)arg1 forReason:(unsigned long long)arg2;	// IMP=0x0000000100198354
- (void)_speechControllerRequestsOperation:(unsigned long long)arg1 forReason:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100198118
- (void)speechControllerRequestsOperation:(unsigned long long)arg1 forReason:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100197fb8
- (void)speechControllerRequestsOperation:(unsigned long long)arg1 forReason:(unsigned long long)arg2;	// IMP=0x0000000100197e8c
- (void)suppressUtteranceGradingIfRequired;	// IMP=0x0000000100197c3c
- (void)speechControllerDidDetectVoiceTriggerTwoShot:(id)arg1 atTime:(double)arg2;	// IMP=0x0000000100197c2c
- (void)speechControllerDidDetectVoiceTriggerTwoShot:(id)arg1 atTime:(double)arg2 wantsAudibleFeedback:(_Bool)arg3;	// IMP=0x000000010019774c
- (void)languageDetectorDidDetectLanguageWithConfidence:(id)arg1 confidence:(id)arg2 isConfident:(_Bool)arg3;	// IMP=0x00000001001975b4
- (void)_playStopAlertIfNecessaryForReason:(long long)arg1 endpointMode:(long long)arg2 error:(id)arg3;	// IMP=0x0000000100197154
- (void)_setLanguageDetectorDelegateIfRequired;	// IMP=0x0000000100197150
- (void)speechControllerDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;	// IMP=0x0000000100196dbc
- (void)speechController:(id)arg1 didSetAudioSessionActive:(_Bool)arg2;	// IMP=0x0000000100196ca0
- (void)speechController:(id)arg1 willSetAudioSessionActive:(_Bool)arg2;	// IMP=0x0000000100196b84
- (void)speechControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;	// IMP=0x0000000100196ad0
- (void)speechControllerEndRecordInterruption:(id)arg1;	// IMP=0x00000001001969f0
- (void)speechControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;	// IMP=0x00000001001968e8
- (void)_speechControllerDidReceiveLastAudioRecordBuffer:(id)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3 isRecordingStopped:(_Bool)arg4;	// IMP=0x0000000100196674
- (void)speechControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2;	// IMP=0x00000001001963e4
- (id)convertVirtualAudioSubTypeToString:(unsigned int)arg1;	// IMP=0x0000000100196370
- (id)getAudioRouteInstrumentationWithRecordingInfo:(id)arg1;	// IMP=0x0000000100195d84
- (void)_speechControllerDidReceiveFirstAudioRecordBufferWithHostTime:(unsigned long long)arg1 atHostTime:(unsigned long long)arg2;	// IMP=0x0000000100195ad8
- (void)speechControllerRecordBufferAvailable:(id)arg1 buffers:(id)arg2 durationInSec:(float)arg3 recordedAt:(unsigned long long)arg4;	// IMP=0x0000000100195514
- (void)_decodeRecordBufferForSecureOfflineOnly:(id)arg1 isOpus:(_Bool)arg2;	// IMP=0x0000000100195040
- (struct OpaqueAudioConverter *)_opusDecoder;	// IMP=0x0000000100194fc0
- (struct OpaqueAudioConverter *)_speexDecoder;	// IMP=0x0000000100194f40
- (void)_speechControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3 errorCodeOverride:(long long)arg4 underlyingError:(id)arg5;	// IMP=0x0000000100194388
- (void)speechControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3;	// IMP=0x0000000100194054
- (void)speechControllerDidDeliverLastBuffer:(id)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3;	// IMP=0x0000000100193ed8
- (void)_speechControllerDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000001001936d8
- (void)speechControllerDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000001001934b8
- (id)_recordingInfoForEvent:(long long)arg1 audioAlertStyle:(long long)arg2 includeBTInfo:(_Bool)arg3 includeRecordDeviceInfo:(_Bool)arg4;	// IMP=0x0000000100193078
- (id)_currentRecordingInfo;	// IMP=0x000000010019301c
- (void)_updateRecordDeviceInfoAndPlaybackRouteForReason:(id)arg1 forcesUpdate:(_Bool)arg2;	// IMP=0x0000000100192b88
- (id)_currentPlaybackRoute;	// IMP=0x0000000100192b34
- (id)_currentRecordDeviceInfo;	// IMP=0x0000000100192ae0
- (id)_currentRecordRoute;	// IMP=0x0000000100192a84
- (void)updateServerEndpointFeatures:(id)arg1;	// IMP=0x0000000100192a18
- (void)playRecordingStartAlert;	// IMP=0x00000001001927f4
- (void)getLastStartpointTimestampAndCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x0000000100192754
- (void)setClientConfiguration:(id)arg1;	// IMP=0x000000010019263c
- (id)_speechRecordingEventListener;	// IMP=0x00000001001925cc
- (void)setSpeechRecordingEventListeningEndpoint:(id)arg1;	// IMP=0x0000000100192508
- (void)setIsDriving:(_Bool)arg1;	// IMP=0x0000000100192500
- (void)setAudioFileHandle:(id)arg1;	// IMP=0x00000001001924f4
- (void)setAudioFileType:(long long)arg1;	// IMP=0x00000001001924ec
- (void)forceSuccessAudioAlertOnStop;	// IMP=0x0000000100192434
- (void)setFingerprintingEnabled:(_Bool)arg1;	// IMP=0x00000001001923b8
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;	// IMP=0x00000001001922d4
- (void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(_Bool)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x000000010019216c
- (void)setFingerprintWasRecognized;	// IMP=0x00000001001920b4
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;	// IMP=0x0000000100191f3c
- (void)releaseAudioSession;	// IMP=0x0000000100191c70
- (void)setDelegate:(id)arg1;	// IMP=0x0000000100191c64
- (_Bool)_updateAudioContextWithPendingInfoForReason:(id)arg1;	// IMP=0x0000000100191ab8
- (_Bool)_updateAudioContextToPostVoiceForReason:(id)arg1;	// IMP=0x0000000100191980
- (_Bool)_setAudioContextWithInfo:(id)arg1 forReason:(id)arg2;	// IMP=0x00000001001916b4
- (void)_updateAudioContextWithInfo:(id)arg1 reason:(id)arg2;	// IMP=0x0000000100191554
- (void)setSpeechRequestOptions:(id)arg1;	// IMP=0x00000001001911a4
- (void)_logAudioMetrics:(id)arg1;	// IMP=0x0000000100190e34
- (void)_logVoiceTriggerInfo:(id)arg1;	// IMP=0x0000000100190c18
- (void)_logBluetoothState;	// IMP=0x00000001001909e4
- (void)_logFanState;	// IMP=0x00000001001909e0
- (id)fetchRecordingInfo;	// IMP=0x00000001001909d4
- (unsigned int)_audioSessionID;	// IMP=0x000000010019085c
- (unsigned int)fetchAudioSessionID;	// IMP=0x0000000100190850
- (void)updateSpeechSynthesisRecord:(id)arg1;	// IMP=0x0000000100190704
- (_Bool)startSpeechCaptureWithContext:(id)arg1 willStartHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x000000010018f52c
- (void)prepareForMode:(long long)arg1;	// IMP=0x000000010018f3d0
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;	// IMP=0x000000010018f3bc
- (id)currentVTSatScore;	// IMP=0x000000010018f26c
- (id)recordingInfoForPreheatWithEvent:(long long)arg1;	// IMP=0x000000010018f178
- (_Bool)prepareSpeechCaptureWithOptions:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010018f104
- (void)preheat;	// IMP=0x000000010018ec3c
- (void)eagerlyInitializeAudioRecording;	// IMP=0x000000010018eb80
- (void)_stopRecordingForEndpointReason:(CDUnion_e15ec660)arg1;	// IMP=0x000000010018ea90
- (void)_cancelExtendedEndpointTimer;	// IMP=0x000000010018ea54
- (void)_scheduleExtendedEndpointTimer;	// IMP=0x000000010018e904
- (void)_setEndpointStyle:(long long)arg1;	// IMP=0x000000010018e798
- (void)_setupAudioFileWritingForSpeechController:(id)arg1 info:(id)arg2 context:(id)arg3;	// IMP=0x000000010018dd2c
- (_Bool)_checkAudioLoggingLimits:(id)arg1;	// IMP=0x000000010018db34
- (void)_playAudioAlert:(long long)arg1;	// IMP=0x000000010018d8e4
- (int)_mapInstrumentationEndpointTypeFromStopRecordingReason:(CDUnion_e15ec660)arg1;	// IMP=0x000000010018d82c
- (_Bool)_shouldEmitInstrumentation;	// IMP=0x000000010018d7ec
- (void)_disableEndpointer;	// IMP=0x000000010018d714
- (void)_stopRecordingWithReason:(CDUnion_e15ec660)arg1 hostTime:(unsigned long long)arg2;	// IMP=0x000000010018d0c4
- (_Bool)_prepareSpeechControllerWithOptions:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010018cb90
- (id)_fingerprinter;	// IMP=0x000000010018cacc
- (void)_resetSpeechController;	// IMP=0x000000010018c9b8
- (id)_speechControllerWithError:(id *)arg1;	// IMP=0x000000010018c4c0
- (id)_speechController;	// IMP=0x000000010018c4b0
- (void)_updateRecordBufferDuration;	// IMP=0x000000010018c39c
- (void)_setAlertsIfNeeded;	// IMP=0x000000010018bc10
- (void)_setEndpointerOperationMode:(long long)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x000000010018b990
- (void)_setSpeechCapturingMode:(long long)arg1;	// IMP=0x000000010018b898
- (void)dealloc;	// IMP=0x000000010018b828
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010018b688

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

