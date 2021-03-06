//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _DASDataProtectionMaster : NSObject
{
    _Bool _deviceFormatedForContentProtection;	// 8 = 0x8
    _Bool _notifyEnabled;	// 9 = 0x9
    int _notifyToken;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_stateQueue;	// 16 = 0x10
    NSMutableDictionary *_handlers;	// 24 = 0x18
    NSMutableDictionary *_availableState;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000100017080
- (void).cxx_destruct;	// IMP=0x0000000100018150
@property(readonly, nonatomic) _Bool notifyEnabled; // @synthesize notifyEnabled=_notifyEnabled;
@property(readonly, nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(readonly, nonatomic) NSMutableDictionary *availableState; // @synthesize availableState=_availableState;
@property(readonly, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(readonly, nonatomic) _Bool deviceFormatedForContentProtection; // @synthesize deviceFormatedForContentProtection=_deviceFormatedForContentProtection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
- (void)deregisterStateChangeHandler:(id)arg1;	// IMP=0x0000000100018084
- (id)registerStateChangeHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100017f18
- (_Bool)isDataAvailableFor:(id)arg1;	// IMP=0x0000000100017dcc
- (_Bool)isDataAvailableForClassA;	// IMP=0x0000000100017d84
- (_Bool)isDataAvailableForClassC;	// IMP=0x0000000100017d3c
- (_Bool)deviceIsLocked;	// IMP=0x0000000100017cf0
- (_Bool)deviceIsPasswordConfigured;	// IMP=0x0000000100017ca4
- (_Bool)deviceHasBeenUnlockedSinceBoot;	// IMP=0x0000000100017c88
- (void)handleKeyBagLockNotification;	// IMP=0x0000000100017508
- (id)init;	// IMP=0x000000010001711c

@end

