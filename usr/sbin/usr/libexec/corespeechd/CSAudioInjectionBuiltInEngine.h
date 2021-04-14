//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSAudioInjectionEngine.h"

#import "CSAudioInjectionEngineDelegate-Protocol.h"

@class CSAudioCircularBuffer, CSAudioInjectionDevice, CSKeywordAnalyzerNDEAPI, NSMutableArray, NSObject, NSString, NSUUID;
@protocol CSAudioInjectionEngineDelegate, OS_dispatch_queue;

@interface CSAudioInjectionBuiltInEngine : CSAudioInjectionEngine <CSAudioInjectionEngineDelegate>
{
    _Bool _voiceTriggerEnabled;	// 8 = 0x8
    _Bool _isForwarding;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSAudioInjectionEngineDelegate> _delegate;	// 24 = 0x18
    CSKeywordAnalyzerNDEAPI *_keywordAnalyzer;	// 32 = 0x20
    CSAudioCircularBuffer *_circularBuffer;	// 40 = 0x28
    unsigned long long _lastForwardedSampleCount;	// 48 = 0x30
    NSMutableArray *_hostTimeBuffer;	// 56 = 0x38
    NSUUID *_uuid;	// 64 = 0x40
    CSAudioInjectionDevice *_connectedDevice;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000786dc
@property(nonatomic) _Bool isForwarding; // @synthesize isForwarding=_isForwarding;
@property(nonatomic) __weak CSAudioInjectionDevice *connectedDevice; // @synthesize connectedDevice=_connectedDevice;
@property(nonatomic) _Bool voiceTriggerEnabled; // @synthesize voiceTriggerEnabled=_voiceTriggerEnabled;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSMutableArray *hostTimeBuffer; // @synthesize hostTimeBuffer=_hostTimeBuffer;
@property(nonatomic) unsigned long long lastForwardedSampleCount; // @synthesize lastForwardedSampleCount=_lastForwardedSampleCount;
@property(retain, nonatomic) CSAudioCircularBuffer *circularBuffer; // @synthesize circularBuffer=_circularBuffer;
@property(retain, nonatomic) CSKeywordAnalyzerNDEAPI *keywordAnalyzer; // @synthesize keywordAnalyzer=_keywordAnalyzer;
@property(nonatomic) __weak id <CSAudioInjectionEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x0000000100078570
- (void)audioEngineBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5;	// IMP=0x0000000100077ea8
- (void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3;	// IMP=0x0000000100077ea4
- (void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000100077ea0
- (void)stopAudioStream;	// IMP=0x0000000100077d78
- (void)startAudioStreamWithOption:(id)arg1;	// IMP=0x00000001000779a4
- (_Bool)isRecording;	// IMP=0x00000001000778f0
- (_Bool)injectAudio:(id)arg1 withScaleFactor:(float)arg2 playbackStarted:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100077854
- (_Bool)injectAudio:(id)arg1;	// IMP=0x0000000100077820
- (void)stop;	// IMP=0x0000000100077744
- (void)start;	// IMP=0x00000001000774b0
- (void)dealloc;	// IMP=0x00000001000773d4
- (void)attachDevice:(id)arg1;	// IMP=0x00000001000772c8
- (_Bool)alwaysOnVoiceTriggerEnabled;	// IMP=0x0000000100077214
- (void)setAlwaysOnVoiceTriggerEnabled:(_Bool)arg1;	// IMP=0x0000000100077184
- (_Bool)isAlwaysOnVoiceTriggerAvailable;	// IMP=0x0000000100077180
- (id)initWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x0000000100077028

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
