//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKAlternateSystemAppDelegate-Protocol.h"

@class BKAlternateSystemApp, NSString;
@protocol OS_dispatch_queue;

@interface BKAlternateSystemAppManager : NSObject <BKAlternateSystemAppDelegate>
{
    _Bool _blockingSystemApp;	// 8 = 0x8
    BKAlternateSystemApp *_alternateSystemApp;	// 16 = 0x10
    NSString *_openBundleId;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CDUnknownBlockType _pendingOpenResultBlock;	// 40 = 0x28
    CDUnknownBlockType _pendingExitBlock;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000100039f68
- (void).cxx_destruct;	// IMP=0x0000000100039bd4
@property(copy, nonatomic) CDUnknownBlockType pendingExitBlock; // @synthesize pendingExitBlock=_pendingExitBlock;
@property(copy, nonatomic) CDUnknownBlockType pendingOpenResultBlock; // @synthesize pendingOpenResultBlock=_pendingOpenResultBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *openBundleId; // @synthesize openBundleId=_openBundleId;
@property(retain, nonatomic) BKAlternateSystemApp *alternateSystemApp; // @synthesize alternateSystemApp=_alternateSystemApp;
@property(nonatomic, getter=isBlockingSystemApp, setter=_setBlockingSystemApp:) _Bool blockingSystemApp; // @synthesize blockingSystemApp=_blockingSystemApp;
- (void)alternateSystemAppExited:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000100039a10
- (void)alternateSystemAppDidLaunch:(id)arg1;	// IMP=0x00000001000398f8
- (void)alternateSystemAppDidFailToLaunch:(id)arg1;	// IMP=0x00000001000397e0
- (void)_queue_cleanupAfterApp;	// IMP=0x00000001000396f8
- (void)unblockSystemAppForAlternateSystemAppWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100039614
- (void)terminateAnyAlternateSystemApp;	// IMP=0x000000010003953c
- (void)terminateAlternateSystemApp:(id)arg1 forReason:(int)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010003941c
- (void)openAlternateSystemApp:(id)arg1 options:(id)arg2 withResult:(CDUnknownBlockType)arg3 andExitBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000392f0
- (void)blockSystemAppForAlternateSystemAppWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010003920c
- (void)dealloc;	// IMP=0x0000000100039108
- (id)init;	// IMP=0x00000001000390a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

