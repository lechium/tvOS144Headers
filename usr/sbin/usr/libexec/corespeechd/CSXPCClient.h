//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAudioAlertProviding-Protocol.h"
#import "CSAudioMeterProviding-Protocol.h"
#import "CSAudioMetricProviding-Protocol.h"
#import "CSAudioSessionInfoProviding-Protocol.h"
#import "CSAudioSessionProviding-Protocol.h"
#import "CSAudioStreamProviding-Protocol.h"
#import "CSAudioTimeConversionProviding-Protocol.h"
#import "CSFallbackAudioSessionReleaseProviding-Protocol.h"
#import "CSTriggerInfoProviding-Protocol.h"

@class CSAudioStream, NSHashTable, NSMutableSet, NSString;
@protocol CSAudioAlertProvidingDelegate, CSAudioSessionProvidingDelegate, CSAudioStreamProvidingDelegate, CSXPCClientDelegate, OS_xpc_object;

@interface CSXPCClient : NSObject <CSAudioSessionProviding, CSFallbackAudioSessionReleaseProviding, CSAudioStreamProviding, CSAudioAlertProviding, CSAudioSessionInfoProviding, CSAudioMeterProviding, CSAudioMetricProviding, CSAudioTimeConversionProviding, CSTriggerInfoProviding>
{
    id <CSAudioSessionProvidingDelegate> _audioSessionProvidingDelegate;	// 8 = 0x8
    id <CSAudioStreamProvidingDelegate> _audioStreamProvidingDelegate;	// 16 = 0x10
    id <CSAudioAlertProvidingDelegate> _audioAlertProvidingDelegate;	// 24 = 0x18
    id <CSXPCClientDelegate> _delegate;	// 32 = 0x20
    NSString *_UUID;	// 40 = 0x28
    NSObject<OS_xpc_object> *_xpcConnection;	// 48 = 0x30
    CSAudioStream *_audioStream;	// 56 = 0x38
    NSMutableSet *_activationAssertions;	// 64 = 0x40
    NSHashTable *_audioSessionInfoObservers;	// 72 = 0x48
    unsigned long long _xpcClientType;	// 80 = 0x50
}

+ (id)createStopAudioStreamMessage;	// IMP=0x000000010002a2c0
+ (id)createStartAudioStreamMessageWithOption:(id)arg1;	// IMP=0x000000010002a01c
+ (id)createPrepareAudioStreamMessageWithRequest:(id)arg1;	// IMP=0x0000000100029c74
+ (id)createAudioStreamMessageWithRequest:(id)arg1;	// IMP=0x00000001000293c0
- (void).cxx_destruct;	// IMP=0x000000010002db28
@property(nonatomic) unsigned long long xpcClientType; // @synthesize xpcClientType=_xpcClientType;
@property(retain, nonatomic) NSHashTable *audioSessionInfoObservers; // @synthesize audioSessionInfoObservers=_audioSessionInfoObservers;
@property(retain, nonatomic) NSMutableSet *activationAssertions; // @synthesize activationAssertions=_activationAssertions;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak id <CSXPCClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CSAudioAlertProvidingDelegate> audioAlertProvidingDelegate; // @synthesize audioAlertProvidingDelegate=_audioAlertProvidingDelegate;
@property(nonatomic) __weak id <CSAudioStreamProvidingDelegate> audioStreamProvidingDelegate; // @synthesize audioStreamProvidingDelegate=_audioStreamProvidingDelegate;
@property(nonatomic) __weak id <CSAudioSessionProvidingDelegate> audioSessionProvidingDelegate; // @synthesize audioSessionProvidingDelegate=_audioSessionProvidingDelegate;
- (void)_handleStreamProvidingDelegateHardwareConfigChange:(id)arg1;	// IMP=0x000000010002d970
- (void)_handleStreamProvidingDelegateChunkForTVAvailable:(id)arg1;	// IMP=0x000000010002d880
- (void)_handleStreamProvidingDelegateChunkAvailable:(id)arg1;	// IMP=0x000000010002d790
- (void)_handleStreamProvidingDelegateDidStopUnexpectly:(id)arg1;	// IMP=0x000000010002d6d0
- (void)_handleStreamProvidingDelegateMessageBody:(id)arg1;	// IMP=0x000000010002d600
- (void)_handleSessionInfoProvidingDelegateMediaServicesWereResetNotification:(id)arg1;	// IMP=0x000000010002d470
- (void)_handleSessionInfoProvidingDelegateMediaServicesWereLostNotification:(id)arg1;	// IMP=0x000000010002d2e0
- (void)_handleSessionInfoProvidingDelegateRouteChangeNotification:(id)arg1;	// IMP=0x000000010002d0a8
- (void)_handleSessionInfoProvidingDelegateInterruptionNotification:(id)arg1;	// IMP=0x000000010002ce70
- (void)_handleSessionInfoProvidingDelegateMessageBody:(id)arg1;	// IMP=0x000000010002cd08
- (void)_handleSessionProvidingDelegateDidChangeContext:(id)arg1;	// IMP=0x000000010002cc48
- (void)_handleSessionProvidingDelegateStreamHandleIdInvalidation:(id)arg1;	// IMP=0x000000010002cb88
- (void)_handleSessionProvidingDelegateDidSetAudioSession:(id)arg1;	// IMP=0x000000010002cac8
- (void)_handleSessionProvidingDelegateWillSetAudioSession:(id)arg1;	// IMP=0x000000010002ca08
- (void)_handleSessionProvidingDelegateEndInterruption:(id)arg1;	// IMP=0x000000010002c964
- (void)_handleSessionProvidingDelegateBeginInterruptionWithContext:(id)arg1;	// IMP=0x000000010002c798
- (void)_handleSessionProvidingDelegateBeginInterruption:(id)arg1;	// IMP=0x000000010002c6f4
- (void)_handleSessionProvidingDelegateMessageBody:(id)arg1;	// IMP=0x000000010002c568
- (void)_handleAlertProvidingDelegateDidFinishAlertPlayback:(id)arg1;	// IMP=0x000000010002c3f4
- (void)_handleAlertProvidingDelegateMessageBody:(id)arg1;	// IMP=0x000000010002c2c8
- (void)_handleListenerDisconnectedError:(id)arg1;	// IMP=0x000000010002c1c0
- (void)_handleListenerError:(id)arg1;	// IMP=0x000000010002c058
- (void)_handleListenerMessage:(id)arg1;	// IMP=0x000000010002bf34
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x000000010002be68
- (_Bool)_sendMessageAndReplySync:(id)arg1 connection:(id)arg2 error:(id *)arg3;	// IMP=0x000000010002bd24
- (id)_decodeError:(id)arg1;	// IMP=0x000000010002bc50
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002ba54
- (_Bool)fallbackDeactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010002b904
- (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1;	// IMP=0x000000010002b750
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1;	// IMP=0x000000010002b59c
- (unsigned int)audioSessionID;	// IMP=0x000000010002b418
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000010002b400
- (void)registerObserver:(id)arg1;	// IMP=0x000000010002b3e8
- (_Bool)isRecording;	// IMP=0x000000010002b3a4
- (void)cancelAudioStreamHold:(id)arg1;	// IMP=0x000000010002b364
- (id)holdAudioStreamWithDescription:(id)arg1 timeout:(double)arg2;	// IMP=0x000000010002b320
- (void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(id)arg2;	// IMP=0x000000010002b2e0
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;	// IMP=0x000000010002b2a0
- (id)audioChunkToEndFrom:(unsigned long long)arg1 channelIdx:(unsigned long long)arg2;	// IMP=0x000000010002b25c
- (id)audioChunkToEndFrom:(unsigned long long)arg1;	// IMP=0x000000010002b218
- (id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x000000010002b1d4
- (id)playbackRoute;	// IMP=0x000000010002b050
- (_Bool)isNarrowBand;	// IMP=0x000000010002af14
- (id)recordSettings;	// IMP=0x000000010002ad5c
- (id)recordDeviceInfo;	// IMP=0x000000010002abc0
- (id)recordRoute;	// IMP=0x000000010002aa3c
- (void)triggerInfoForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002a4ec
- (void)stopAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002a3b0
- (void)startAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002a15c
- (void)prepareAudioStream:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100029db4
- (_Bool)prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100029958
- (void)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100029500
- (id)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100029064
- (_Bool)setCurrentContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100028e20
- (id)audioMetric;	// IMP=0x0000000100028b5c
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x0000000100028948
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x0000000100028734
- (void)updateMeters;	// IMP=0x0000000100028618
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x00000001000284d4
- (void)configureAlertBehavior:(id)arg1;	// IMP=0x0000000100028370
- (unsigned long long)alertStartTime;	// IMP=0x000000010002818c
- (_Bool)playRecordStartingAlertAndResetEndpointer;	// IMP=0x0000000100028070
- (_Bool)playAlertSoundForType:(long long)arg1;	// IMP=0x0000000100027f24
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;	// IMP=0x0000000100027d54
- (void)setAudioAlertDelegate:(id)arg1;	// IMP=0x0000000100027d48
- (void)setAudioSessionDelegate:(id)arg1;	// IMP=0x0000000100027d3c
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x0000000100027c00
- (void)enableSmartRoutingConsideration:(_Bool)arg1;	// IMP=0x0000000100027ac4
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x0000000100027988
- (_Bool)duckOthersOption;	// IMP=0x000000010002786c
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010002771c
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 dynamicAttribute:(unsigned long long)arg2 bundleID:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100027560
- (_Bool)prewarmAudioSessionWithError:(id *)arg1;	// IMP=0x0000000100027438
- (void)pingpong:(CDUnknownBlockType)arg1;	// IMP=0x0000000100027310
- (_Bool)prepareAudioProviderWithContext:(id)arg1 clientType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100027124
- (void)sendXPCClientType;	// IMP=0x0000000100026fa8
- (void)dealloc;	// IMP=0x0000000100026f5c
- (void)disconnect;	// IMP=0x0000000100026f20
- (void)connect;	// IMP=0x0000000100026e00
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x0000000100026ce4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

