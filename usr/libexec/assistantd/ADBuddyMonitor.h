//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ADBuddyMonitor : NSObject
{
    _Bool _isPastBuddy;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00000001000e3d68
- (void).cxx_destruct;	// IMP=0x00000001000e430c
- (_Bool)isPastBuddy;	// IMP=0x00000001000e4304
- (_Bool)_checkBuddyState;	// IMP=0x00000001000e42e4
- (void)_updateBuddyState;	// IMP=0x00000001000e414c
- (void)dealloc;	// IMP=0x00000001000e408c
- (id)init;	// IMP=0x00000001000e3e0c

@end

