//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface DeviceStateMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    int _deviceLockToken;	// 16 = 0x10
    _Bool _dataMigrationComplete;	// 20 = 0x14
    _Bool _deviceLocked;	// 21 = 0x15
    _Bool _setupComplete;	// 22 = 0x16
    _Bool _screenLocked;	// 23 = 0x17
}

+ (id)defaultMonitor;	// IMP=0x000000010028a55c
- (void).cxx_destruct;	// IMP=0x000000010028ad28
@property(readonly, getter=isScreenLocked) _Bool screenLocked; // @synthesize screenLocked=_screenLocked;
- (_Bool)_hasItemComplete:(id)arg1;	// IMP=0x000000010028ac3c
- (void)_addItemComplete:(id)arg1;	// IMP=0x000000010028ab74
- (void)_markHasBooted;	// IMP=0x000000010028aad8
- (_Bool)_checkIfFirstBoot;	// IMP=0x000000010028aaa0
- (void)_postStateDidChangeNotification;	// IMP=0x000000010028a9cc
- (void)markFsEntitlementsCompleteForBoot;	// IMP=0x000000010028a878
@property(readonly, getter=isSetupComplete) _Bool setupComplete; // @synthesize setupComplete=_setupComplete;
@property(readonly, getter=isFsEntitlementsCompleteForBoot) _Bool fsEntitlementsCompleteForBoot;
@property(readonly, getter=isDeviceLocked) _Bool deviceLocked; // @synthesize deviceLocked=_deviceLocked;
@property(readonly, getter=isDataMigrationComplete) _Bool dataMigrationComplete; // @synthesize dataMigrationComplete=_dataMigrationComplete;
- (id)init;	// IMP=0x000000010028a5c8

@end

