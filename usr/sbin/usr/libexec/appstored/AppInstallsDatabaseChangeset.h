//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

@interface AppInstallsDatabaseChangeset : NSObject
{
    NSMutableDictionary *_appUpdatesToFinish;	// 8 = 0x8
    NSMutableSet *_cancelProgress;	// 16 = 0x10
    NSMutableSet *_coordinatorPause;	// 24 = 0x18
    NSMutableDictionary *_coordinatorReasons;	// 32 = 0x20
    NSMutableSet *_coordinatorResume;	// 40 = 0x28
    NSMutableSet *_failedTestFlightInstalls;	// 48 = 0x30
    NSMutableSet *_finishProgress;	// 56 = 0x38
    NSMutableSet *_legacyNotifications;	// 64 = 0x40
    NSMutableSet *_restoresToHydrate;	// 72 = 0x48
    NSMutableSet *_restoresToPrioritize;	// 80 = 0x50
    unsigned long long _schedulerPollReason;	// 88 = 0x58
    _Bool _restoresCompleted;	// 96 = 0x60
    _Bool _shouldPostAppsDone;	// 97 = 0x61
    _Bool _shouldPostUpdatesDone;	// 98 = 0x62
    _Bool _shouldRefreshApplicationBadge;	// 99 = 0x63
    _Bool _shouldPostProcessAutomaticUpdatesCompleted;	// 100 = 0x64
}

- (void).cxx_destruct;	// IMP=0x00000001001d15d8
@property(readonly, nonatomic) _Bool restoresCompleted; // @synthesize restoresCompleted=_restoresCompleted;
- (void)resumeCoordinator:(id)arg1;	// IMP=0x00000001001d1570
- (void)pauseCoordinator:(id)arg1;	// IMP=0x00000001001d1510
- (void)failCoordinator:(id)arg1 withReason:(id)arg2;	// IMP=0x00000001001d1488
- (void)enumerateCoordinatorResumesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d13e8
- (void)enumerateCoordinatorPausesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d1348
- (void)enumerateCoordinatorFailuresUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d1268
- (void)unionChangeset:(id)arg1;	// IMP=0x00000001001d0ce0
- (void)refreshApplicationBadge;	// IMP=0x00000001001d0cd4
- (void)postRestoreCompleted;	// IMP=0x00000001001d0cc8
- (void)postProcessAutomaticUpdatesCompleted;	// IMP=0x00000001001d0cbc
- (void)postUpdatesDone;	// IMP=0x00000001001d0cb0
- (void)postAppsDone;	// IMP=0x00000001001d0ca4
- (void)finishProgressForBundleID:(id)arg1;	// IMP=0x00000001001d0c44
- (void)cancelProgressForBundleID:(id)arg1;	// IMP=0x00000001001d0be4
- (void)addSchedulerPollReason:(unsigned long long)arg1;	// IMP=0x00000001001d0bd4
- (void)addRestoreToHydrate:(id)arg1;	// IMP=0x00000001001d0b70
- (void)addLegacyNotification:(id)arg1;	// IMP=0x00000001001d0b10
- (void)addFailedTestFlightInstallWithBundleID:(id)arg1 devicePairingID:(id)arg2 error:(id)arg3;	// IMP=0x00000001001d08d0
- (void)addAppUpdateToFinish:(id)arg1 withUpdateState:(long long)arg2;	// IMP=0x00000001001d07d4
@property(readonly, nonatomic) NSSet *restoresToHydrate;
- (_Bool)restoreCompleted;	// IMP=0x00000001001d07ac
@property(readonly, nonatomic) _Bool shouldRefreshApplicationBadge;
@property(readonly, nonatomic) _Bool shouldPostProcessAutomaticUpdatesCompleted;
@property(readonly, nonatomic) _Bool shouldPostUpdatesDone;
@property(readonly, nonatomic) _Bool shouldPostAppsDone;
@property(readonly, nonatomic) unsigned long long schedulerPollReason;
@property(readonly, nonatomic) NSSet *legacyNotifications;
@property(readonly, nonatomic) NSSet *finishProgress;
@property(readonly, nonatomic) NSSet *failedTestFlightInstalls;
@property(readonly, nonatomic) NSSet *coordinatorResume;
@property(readonly, nonatomic) NSDictionary *coordinatorReasons;
@property(readonly, nonatomic) NSSet *coordinatorPause;
@property(readonly, nonatomic) NSSet *cancelProgress;
@property(readonly, nonatomic) NSDictionary *appUpdatesToFinish;
- (id)init;	// IMP=0x00000001001d0650

@end
