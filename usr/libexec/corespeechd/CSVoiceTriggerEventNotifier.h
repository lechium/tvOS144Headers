//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSVoiceTriggerDelegate-Protocol.h"

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerEventNotifier : NSObject <CSVoiceTriggerDelegate>
{
    NSHashTable *_observers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010009b73c
- (void)_notifyRaiseToSpeakTriggerEvent:(id)arg1;	// IMP=0x000000010009b738
- (void)_notifySuperVector:(id)arg1;	// IMP=0x000000010009b57c
- (void)_notifyKeywordDetect;	// IMP=0x000000010009b3f4
- (void)_notifyKeywordReject:(id)arg1;	// IMP=0x000000010009b238
- (void)_notifySpeakerReject:(id)arg1;	// IMP=0x000000010009b04c
- (void)_notifyNearMissEvent:(id)arg1;	// IMP=0x000000010009ae6c
- (void)_notifyTriggerEvent:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010009a5e0
- (id)_createVoiceTriggerEventInfoString:(id)arg1;	// IMP=0x000000010009a244
- (void)raiseToSpeakDetected:(id)arg1;	// IMP=0x000000010009a238
- (void)keywordDetectorDidDetectKeyword;	// IMP=0x000000010009a22c
- (void)voiceTriggerGotSuperVector:(id)arg1;	// IMP=0x000000010009a220
- (void)voiceTriggerDidRejected:(id)arg1;	// IMP=0x000000010009a214
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;	// IMP=0x000000010009a208
- (void)voiceTriggerDidDetectNearMiss:(id)arg1;	// IMP=0x000000010009a1fc
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010009a190
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;	// IMP=0x000000010009a13c
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000010009a09c
- (void)registerObserver:(id)arg1;	// IMP=0x0000000100099ffc
- (id)init;	// IMP=0x0000000100099f68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

