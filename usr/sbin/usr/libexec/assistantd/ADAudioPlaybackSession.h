//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"

@class AFAudioPlaybackRequest, AVAudioPlayer, AVAudioSession, NSString;
@protocol OS_dispatch_queue;

@interface ADAudioPlaybackSession : NSObject <AVAudioPlayerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AVAudioPlayer *_player;	// 16 = 0x10
    AVAudioSession *_audioSession;	// 24 = 0x18
    AFAudioPlaybackRequest *_request;	// 32 = 0x20
    _Bool _isActive;	// 40 = 0x28
    _Bool _isPrepared;	// 41 = 0x29
    CDUnknownBlockType _completion;	// 48 = 0x30
    unsigned long long _options;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000a7bf4
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) AFAudioPlaybackRequest *request; // @synthesize request=_request;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;	// IMP=0x00000001000a7ab4
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x00000001000a7950
- (void)_finalizeWithError:(id)arg1;	// IMP=0x00000001000a7828
- (void)_didStopWithError:(id)arg1;	// IMP=0x00000001000a7694
- (void)_didNotStartWithError:(id)arg1;	// IMP=0x00000001000a7608
- (void)_endInterruption:(_Bool)arg1;	// IMP=0x00000001000a74a0
- (void)_beginInterruption;	// IMP=0x00000001000a7364
- (void)_stop:(_Bool)arg1;	// IMP=0x00000001000a700c
- (void)_startWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 preparationHandler:(CDUnknownBlockType)arg3 executionHandler:(CDUnknownBlockType)arg4 finalizationHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000a6b6c
- (_Bool)_prepareWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000a65c0
- (void)endInterruption:(_Bool)arg1;	// IMP=0x00000001000a654c
- (void)beginInterruption;	// IMP=0x00000001000a64e4
- (void)stop:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a6408
- (void)startWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 preparationHandler:(CDUnknownBlockType)arg3 executionHandler:(CDUnknownBlockType)arg4 finalizationHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000a6254
- (void)prepareWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a6114
- (id)initWithQueue:(id)arg1 request:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00000001000a6054
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
