//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "WLDClientConnectionDelegate-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener, WLDPlaybackManager, WLDPushNotificationController;

__attribute__((visibility("hidden")))
@interface WLDServer : NSObject <NSXPCListenerDelegate, WLDClientConnectionDelegate>
{
    NSMutableSet *_clients;	// 8 = 0x8
    NSXPCListener *_xpcListener;	// 16 = 0x10
    WLDPlaybackManager *_playbackManager;	// 24 = 0x18
    WLDPushNotificationController *_pushController;	// 32 = 0x20
}

+ (id)server;	// IMP=0x00000001000086bc
- (void).cxx_destruct;	// IMP=0x0000000100009028
- (void)_handleFamilyUpdateNotification:(id)arg1;	// IMP=0x0000000100009000
- (void)_invalidateWidgets;	// IMP=0x0000000100008fc8
- (void)_handleContinueWatchingNotification:(id)arg1;	// IMP=0x0000000100008fc4
- (void)_handleRestrictionsChangedNotification:(id)arg1;	// IMP=0x0000000100008f84
- (void)handleUNWidgetRegistration;	// IMP=0x0000000100008f80
- (void)handleVideosUIInvalidationNotification:(id)arg1;	// IMP=0x0000000100008f40
- (void)handleAMSDeviceOffer;	// IMP=0x0000000100008efc
- (void)handleSubscriptionRegistration;	// IMP=0x0000000100008ec8
- (void)start;	// IMP=0x0000000100008c2c
- (void)clientConnectionDidInvalidate:(id)arg1;	// IMP=0x0000000100008b9c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000088dc
- (id)_init;	// IMP=0x0000000100008844
- (void)dealloc;	// IMP=0x0000000100008780
- (id)init;	// IMP=0x0000000100008734

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

