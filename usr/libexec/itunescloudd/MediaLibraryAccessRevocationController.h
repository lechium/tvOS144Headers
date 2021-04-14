//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICMediaLibraryAccessPermissionsHelper-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MediaLibraryAccessRevocationController : NSObject <ICMediaLibraryAccessPermissionsHelper, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSNumber *_activeAccountDSID;	// 16 = 0x10
    NSDictionary *_cookieHeadersForRevokingMusicUserTokens;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_notificationCoalescingTimer;	// 32 = 0x20
    _Bool _isObservingNotificationsForDataNeededUponSignOut;	// 40 = 0x28
    NSDictionary *_identifiersOfApplicationsWithGrantedAccessToMediaLibraryIncludingTCCAcceptanceDates;	// 48 = 0x30
    int _tccAccessChangedNotificationToken;	// 56 = 0x38
    _Bool _isObservingTCCAccessChangedNotification;	// 60 = 0x3c
    NSXPCListener *_listener;	// 64 = 0x40
    NSMutableDictionary *_replyBlocksForPID;	// 72 = 0x48
}

+ (id)_identifiersOfApplicationsWithGrantedAccessToMediaLibrary;	// IMP=0x000000010009ef8c
+ (id)sharedController;	// IMP=0x000000010009dba4
- (void).cxx_destruct;	// IMP=0x00000001000a15cc
- (id)_storeRequestContextWithIdentity:(id)arg1 clientInfo:(id)arg2;	// IMP=0x00000001000a13b8
- (void)_updateDataNeededUponSignOut;	// IMP=0x00000001000a09d4
- (void)_stopObservingRevocations;	// IMP=0x00000001000a08f4
- (void)_startObservingRevocations;	// IMP=0x00000001000a0638
- (void)_notificationCoalescingTimerDidExpire;	// IMP=0x00000001000a059c
- (void)_scheduleUpdateOfDataNeededUponSignOut;	// IMP=0x00000001000a0400
- (void)_registerFailureToRevokeMusicUserTokensForApplicationsWithIdentifiers:(id)arg1 error:(id)arg2;	// IMP=0x00000001000a0318
- (void)_revokeMusicUserTokensForApplicationWithIdentifier:(id)arg1 revokeMusicUserTokenURL:(id)arg2 identity:(id)arg3 explicitDSID:(id)arg4 explicitCookieHeaders:(id)arg5;	// IMP=0x000000010009fd18
- (void)_revokeMusicUserTokensForApplicationsWithIdentifiers:(id)arg1;	// IMP=0x000000010009f8f4
- (void)_displayNotificationForBuilder:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010009f794
- (void)_checkForRecentRevocations;	// IMP=0x000000010009f424
- (id)_identifiersOfApplicationsWithExpiredAccessToMediaLibrary;	// IMP=0x000000010009f1c0
- (void)validateExpirationForBundleIdentifier:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010009e1cc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010009de70
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x000000010009de64
- (void)stopObservingRevocations;	// IMP=0x000000010009ddfc
- (void)startObservingRevocations;	// IMP=0x000000010009dd94
- (void)dealloc;	// IMP=0x000000010009dd08
- (id)_init;	// IMP=0x000000010009dc1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
