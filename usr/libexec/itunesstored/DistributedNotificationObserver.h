//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, SSXPCConnection;

@interface DistributedNotificationObserver : NSObject
{
    SSXPCConnection *_connection;	// 8 = 0x8
    NSMutableSet *_notificationNames;	// 16 = 0x10
}

- (void)removeObservedNotificationName:(id)arg1;	// IMP=0x000000010013a0ec
- (void)postNotificationName:(id)arg1 message:(id)arg2;	// IMP=0x000000010013a09c
@property(readonly, nonatomic) NSArray *observedNotificationNames;
- (void)addObservedNotificationNames:(id)arg1;	// IMP=0x000000010013a07c
- (void)addObservedNotificationName:(id)arg1;	// IMP=0x000000010013a06c
- (void)dealloc;	// IMP=0x000000010013a01c
- (id)initWithServiceName:(id)arg1;	// IMP=0x0000000100139fa0

@end

