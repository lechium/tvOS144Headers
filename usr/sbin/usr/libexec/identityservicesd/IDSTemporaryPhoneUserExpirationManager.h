//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSUserStoreListener-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol IDSTemporaryPhoneUserExpirationManagerDelegate;

@interface IDSTemporaryPhoneUserExpirationManager : NSObject <IDSUserStoreListener>
{
    struct os_unfair_lock_s _usersToTimersLock;	// 8 = 0x8
    id <IDSTemporaryPhoneUserExpirationManagerDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_usersToTimers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010013a734
@property(retain, nonatomic) NSMutableDictionary *usersToTimers; // @synthesize usersToTimers=_usersToTimers;
@property(nonatomic) struct os_unfair_lock_s usersToTimersLock; // @synthesize usersToTimersLock=_usersToTimersLock;
@property(nonatomic) __weak id <IDSTemporaryPhoneUserExpirationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)userStore:(id)arg1 didRemoveAuthenticationCertificateForUser:(id)arg2;	// IMP=0x000000010013a5c0
- (void)userStore:(id)arg1 didRemoveUser:(id)arg2 withAuthenticationCertificate:(id)arg3;	// IMP=0x000000010013a504
- (void)userStore:(id)arg1 didUpdateUser:(id)arg2;	// IMP=0x000000010013a474
- (void)userStore:(id)arg1 didAddUser:(id)arg2;	// IMP=0x000000010013a3e4
- (void)_expireTimer:(id)arg1;	// IMP=0x0000000100139ff8
- (void)_cancelExpirationTimerForUser:(id)arg1;	// IMP=0x0000000100139dc8
- (void)_kickoffExpirationTimerForInfo:(id)arg1;	// IMP=0x0000000100139900
- (void)_attemptToKickoffExpirationTimerForUser:(id)arg1;	// IMP=0x00000001001397ec
- (id)initWithUserStore:(id)arg1 delegate:(id)arg2;	// IMP=0x00000001001394e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
