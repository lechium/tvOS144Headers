//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSString, OS_dispatch_queue;

@interface _TtC10cloudpaird16CloudCoordinator : _TtCs12_SwiftObject
{
    MISSING_TYPE *$__lazy_storage_$_pushDelegateQueue;	// 16 = 0x10
    MISSING_TYPE *delegate;	// 24 = 0x18
    MISSING_TYPE *retryTimer;	// 40 = 0x28
    MISSING_TYPE *availableSemaphore;	// 48 = 0x30
    MISSING_TYPE *databaseAccessQueue;	// 56 = 0x38
    MISSING_TYPE *serialQueue;	// 64 = 0x40
    MISSING_TYPE *clientQueue;	// 72 = 0x48
    MISSING_TYPE *availableWaitQueue;	// 80 = 0x50
    MISSING_TYPE *currentAccountStatus;	// 88 = 0x58
    MISSING_TYPE *manateeAvailable;	// 96 = 0x60
    MISSING_TYPE *accountAvailable;	// 97 = 0x61
    MISSING_TYPE *privateSubscriptionId;	// 104 = 0x68
    MISSING_TYPE *configuration;	// 120 = 0x78
    MISSING_TYPE *identityFetchInProgress;	// 144 = 0x90
    MISSING_TYPE *$__lazy_storage_$_container;	// 152 = 0x98
    MISSING_TYPE *$__lazy_storage_$_cloudPushTriggeredGroup;	// 160 = 0xa0
    MISSING_TYPE *$__lazy_storage_$_cloudInitialSetupGroup;	// 168 = 0xa8
    MISSING_TYPE *$__lazy_storage_$_cloudUserActionExplicitGroup;	// 176 = 0xb0
    MISSING_TYPE *$__lazy_storage_$_multipleUpdatesGroup;	// 184 = 0xb8
    MISSING_TYPE *identityUpdateNotificationListener;	// 192 = 0xc0
    MISSING_TYPE *_available;	// 200 = 0xc8
}

- (void)accountDidChange:(id)arg1;	// IMP=0x0000000100087bc0
- (void)onIdentityUpdateNotification;	// IMP=0x0000000100085718
@property(nonatomic, retain) OS_dispatch_queue *pushDelegateQueue;
@property(nonatomic, readonly) NSString *debugDescription;
@property(nonatomic, readonly) NSString *description;
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000100053d04
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000100053cfc
- (_Bool)isMemberOfClass:(Class)arg1;	// IMP=0x0000000100053cf4
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000100053cec
- (_Bool)isProxy;	// IMP=0x0000000100053ce4
- (id *)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;	// IMP=0x0000000100053c08
- (id *)performSelector:(SEL)arg1 withObject:(id)arg2;	// IMP=0x0000000100053b78
- (id *)performSelector:(SEL)arg1;	// IMP=0x0000000100053b34
- (id)self;	// IMP=0x0000000100053b20
@property(nonatomic, readonly) Class superclass;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100053a28
- (void)didReceiveWithMessage:(id)arg1;	// IMP=0x000000010008f258
- (void)didReceiveWithToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;	// IMP=0x000000010008e020
- (void)didReceiveWithPublicToken:(id)arg1;	// IMP=0x000000010008deec
@property(nonatomic, readonly) NSString *cloudContainerIdentifier;

@end
