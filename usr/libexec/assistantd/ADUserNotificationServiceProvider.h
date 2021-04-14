//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFUserNotificationService-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class FBSDisplayLayoutMonitor, NSMutableDictionary, NSString, NSXPCConnection, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface ADUserNotificationServiceProvider : NSObject <UNUserNotificationCenterDelegate, AFUserNotificationService>
{
    UNUserNotificationCenter *_notificationCenter;	// 8 = 0x8
    NSMutableDictionary *_responseHandlersByNotificationID;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSMutableDictionary *_notificationsToBeSnoozed;	// 32 = 0x20
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

+ (id)sharedProviderInDaemon;	// IMP=0x0000000100249cf0
- (void).cxx_destruct;	// IMP=0x000000010024a0b0
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100249d68
- (void)_clearNotificationWithIdentifier:(id)arg1;	// IMP=0x0000000100249c5c
- (void)_snoozeNotifications;	// IMP=0x00000001002499d4
- (void)_stopMonitoringUnlockActivity;	// IMP=0x00000001002499a0
- (void)_startMonitoringUnlockActivity;	// IMP=0x0000000100249650
- (_Bool)_isMonitoringUnlockActivity;	// IMP=0x0000000100249640
- (void)withdrawNotificationRequestWithIdentifier:(id)arg1;	// IMP=0x00000001002494e8
- (void)postNotificationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100249498
- (void)postNotificationRequest:(id)arg1 options:(unsigned long long)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010024908c
- (id)_init;	// IMP=0x0000000100248f70
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100248f0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

