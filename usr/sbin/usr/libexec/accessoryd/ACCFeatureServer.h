//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSCountedSet, NSString, NSXPCListener;

@interface ACCFeatureServer : NSObject <NSXPCListenerDelegate>
{
    NSString *_xpcServiceName;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    const char *_notification;	// 24 = 0x18
    int _notificationToken;	// 32 = 0x20
    _Bool _isServerStarted;	// 36 = 0x24
    int _featureUserCount;	// 40 = 0x28
    NSCountedSet *_subFeatureSubscribers;	// 48 = 0x30
}

+ (id)sharedServer;	// IMP=0x0000000100077adc
- (void).cxx_destruct;	// IMP=0x0000000100077b18
@property(retain, nonatomic) NSCountedSet *subFeatureSubscribers; // @synthesize subFeatureSubscribers=_subFeatureSubscribers;
@property(nonatomic) int featureUserCount; // @synthesize featureUserCount=_featureUserCount;
@property(nonatomic) _Bool isServerStarted; // @synthesize isServerStarted=_isServerStarted;
- (void)sendUpdatedSubscriberList;	// IMP=0x0000000100077a40
- (void)removeSubscriber:(id)arg1;	// IMP=0x000000010007789c
- (void)addSubscriber:(id)arg1;	// IMP=0x00000001000776f8
- (void)decrementUserCount;	// IMP=0x000000010007763c
- (void)incrementUserCount;	// IMP=0x00000001000775a8
- (void)suspendServer;	// IMP=0x0000000100077458
- (void)startServer;	// IMP=0x0000000100077308
- (void)dealloc;	// IMP=0x00000001000772bc
- (id)initWithXPCServiceName:(id)arg1 andFeatureNotification:(const char *)arg2;	// IMP=0x00000001000771c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

