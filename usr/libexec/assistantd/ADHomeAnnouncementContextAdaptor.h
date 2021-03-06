//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFHomeAnnouncementListening-Protocol.h"
#import "AFInvalidating-Protocol.h"

@class AFHomeAnnouncementSnapshot, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADHomeAnnouncementContextAdaptor : NSObject <AFHomeAnnouncementListening, AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    AFHomeAnnouncementSnapshot *_snapshot;	// 24 = 0x18
    CDUnknownBlockType _snapshotUpdater;	// 32 = 0x20
    double _expirationDuration;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100213e88
- (void)_setSnapshot:(id)arg1;	// IMP=0x0000000100213d4c
- (void)_processAndEvaluateSnapshot:(id)arg1;	// IMP=0x00000001002134d4
- (void)_invalidate;	// IMP=0x000000010021343c
- (void)homeAnnouncementObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3;	// IMP=0x00000001002133a4
- (void)homeAnnouncementObserver:(id)arg1 stateDidUpdateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x00000001002133a0
- (void)invalidate;	// IMP=0x0000000100213338
- (void)getSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100213224
- (void)unregisterSnapshotUpdater;	// IMP=0x0000000100213114
- (void)registerSnapshotUpdater:(CDUnknownBlockType)arg1;	// IMP=0x0000000100212ea4
- (id)init;	// IMP=0x0000000100212dc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

