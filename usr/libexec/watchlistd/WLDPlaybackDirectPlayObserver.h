//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSString, WLKTransactionScope;

__attribute__((visibility("hidden")))
@interface WLDPlaybackDirectPlayObserver : NSObject
{
    _Bool _appIsRunning;	// 8 = 0x8
    CDUnknownBlockType _updateHandler;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    BKSApplicationStateMonitor *_stateMonitor;	// 32 = 0x20
    WLKTransactionScope *_transaction;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001ca0c
@property(retain, nonatomic) WLKTransactionScope *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) _Bool appIsRunning; // @synthesize appIsRunning=_appIsRunning;
@property(retain, nonatomic) BKSApplicationStateMonitor *stateMonitor; // @synthesize stateMonitor=_stateMonitor;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (id)_identifier;	// IMP=0x000000010001c914
- (_Bool)_getAppRunningState;	// IMP=0x000000010001c88c
- (void)_stopObserving;	// IMP=0x000000010001c724
- (void)_startObserving;	// IMP=0x000000010001c490
- (void)dealloc;	// IMP=0x000000010001c444
- (id)initWithBundleID:(id)arg1;	// IMP=0x000000010001c3ac

@end

