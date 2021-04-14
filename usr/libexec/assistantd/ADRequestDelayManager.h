//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADSessionManagerIntercepting-Protocol.h"

@class ADOpportuneSpeakingModuleEdgeDetector, AFQueue, AFWatchdogTimer, NSString;
@protocol ADRequestDelayManagerDelegate, OS_dispatch_queue;

@interface ADRequestDelayManager : NSObject <ADSessionManagerIntercepting>
{
    AFQueue *_delayedCommandHandlers;	// 8 = 0x8
    AFQueue *_delayedcontextCommandHandlers;	// 16 = 0x10
    long long _delayType;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    ADOpportuneSpeakingModuleEdgeDetector *_detector;	// 40 = 0x28
    CDUnknownBlockType _stopListeningCompletion;	// 48 = 0x30
    AFWatchdogTimer *_currentContextCommandsTimer;	// 56 = 0x38
    _Bool _isDelaying;	// 64 = 0x40
    id <ADRequestDelayManagerDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000da6c8
@property _Bool isDelaying; // @synthesize isDelaying=_isDelaying;
@property(nonatomic) __weak id <ADRequestDelayManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)interceptCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000da2d8
- (_Bool)isInterceptingCommands;	// IMP=0x00000001000da2cc
- (void)_delayForBoronWithSuccess:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d9b74
- (void)beginTimerForContextCommands;	// IMP=0x00000001000d9890
- (void)releaseStoredContextCommandsAndSendCommands:(_Bool)arg1;	// IMP=0x00000001000d96a4
- (void)dequeueDelayedCommandsAndSend:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d9588
- (void)_resetDetectorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d93a0
- (void)stopDelayingAndSendCommands:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d9144
- (void)sendMockInterruptedWithTypeSignal;	// IMP=0x00000001000d9104
- (void)startDelayingWithType:(long long)arg1 success:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d8e44
- (id)_detector;	// IMP=0x00000001000d8d9c
- (id)_delayedcontextCommandHandlers;	// IMP=0x00000001000d8d58
- (id)_delayedCommandHandlers;	// IMP=0x00000001000d8d14
- (id)initWithQueue:(id)arg1;	// IMP=0x00000001000d8c9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

