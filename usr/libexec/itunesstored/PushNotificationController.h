//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class AMSPushHandler, ISOperationQueue, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PushNotificationController : NSObject <APSConnectionDelegate>
{
    NSMutableDictionary *_connections;	// 8 = 0x8
    struct MGNotificationTokenStruct *_deviceNameChangedToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    double _lastRegisterAttemptTime;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 40 = 0x28
    ISOperationQueue *_operationQueue;	// 48 = 0x30
    long long _pushEnabledState;	// 56 = 0x38
    AMSPushHandler *_pushHandler;	// 64 = 0x40
    NSMutableArray *_registerBlocks;	// 72 = 0x48
    NSMutableArray *_tokenOperations;	// 80 = 0x50
}

+ (id)soundFilesDirectoryPath;	// IMP=0x00000001000958c4
+ (id)sharedInstance;	// IMP=0x0000000100095824
- (void).cxx_destruct;	// IMP=0x000000010009d714
- (void)_updatePushEnabledState;	// IMP=0x000000010009d154
- (void)_updateEnvironmentAfterTokenPost:(id)arg1;	// IMP=0x000000010009ce3c
- (_Bool)_shouldAggressivelySendToken;	// IMP=0x000000010009ce08
- (void)_setShouldAggressivelySendToken:(_Bool)arg1;	// IMP=0x000000010009cdb4
- (void)_resetLastRegisterAttemptTime;	// IMP=0x000000010009cd84
- (void)_reloadPushStateInContext:(id)arg1;	// IMP=0x000000010009c8c4
- (void)_reloadDaemonClientInContext:(id)arg1;	// IMP=0x000000010009c4ac
- (void)_reloadActiveEnvironmentInContext:(id)arg1;	// IMP=0x000000010009bd58
- (void)_postTokensInContext:(id)arg1 force:(_Bool)arg2;	// IMP=0x000000010009b57c
- (void)_postTokensIfNecessaryInContext:(id)arg1;	// IMP=0x000000010009b56c
- (void)_postTokenForEnvironment:(id)arg1;	// IMP=0x000000010009af94
- (void)_postNotificationsAvailableForClient:(id)arg1 inContext:(id)arg2;	// IMP=0x000000010009ac78
- (id)_portNameForEnvironmentName:(id)arg1;	// IMP=0x000000010009abf4
- (void)_openConnectionForEnvironment:(id)arg1;	// IMP=0x000000010009a8c0
- (long long)_numberOfClientsInContext:(id)arg1;	// IMP=0x000000010009a810
- (id)_newPostTokenOperationForEnvironment:(id)arg1 account:(id)arg2;	// IMP=0x000000010009a704
- (id)_newAPSConnectionWithEnvironment:(id)arg1;	// IMP=0x000000010009a5e8
- (void)_loadConnectionsInContext:(id)arg1;	// IMP=0x0000000100099f18
- (_Bool)_isValidEnvironment:(id)arg1;	// IMP=0x0000000100099e7c
- (_Bool)_isPushEnabled;	// IMP=0x0000000100099e6c
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100099c6c
- (void)_fireRegisterBlocksAfterOperation:(id)arg1;	// IMP=0x0000000100099740
- (id)_environmentNameForConnection:(id)arg1;	// IMP=0x00000001000995d4
- (id)_environmentForName:(id)arg1 createIfNeeded:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x0000000100099154
- (id)_enabledTopics;	// IMP=0x0000000100099104
- (void)_closeEnvironment:(id)arg1 inContext:(id)arg2;	// IMP=0x0000000100098d28
- (id)_clientForIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x00000001000988f0
- (id)_bag;	// IMP=0x000000010009884c
- (void)_addNotificationWithUserInfo:(id)arg1 client:(id)arg2 context:(id)arg3;	// IMP=0x0000000100098720
- (void)_urlBagDidLoadNotification:(id)arg1;	// IMP=0x00000001000985fc
- (void)_storeFrontChangedNotification:(id)arg1;	// IMP=0x0000000100098520
- (void)_networkTypeChanged:(id)arg1;	// IMP=0x00000001000983e0
- (void)_deviceNameChanged;	// IMP=0x00000001000981a4
- (void)_accountStoreChangedNotification:(id)arg1;	// IMP=0x00000001000980c8
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000100097888
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x00000001000974bc
- (void)unregisterNotificationClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100096fc0
- (void)showLocalNotificationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100096f08
- (void)registerNotificationClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100096b84
- (void)popRemoteNotificationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000967b8
- (void)observeXPCServer:(id)arg1;	// IMP=0x000000010009670c
- (void)registerTokenForEnvironmentName:(id)arg1 accountIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010009623c
- (void)postPushTokens;	// IMP=0x0000000100096000
- (void)postClientNotificationWithUserInfo:(id)arg1;	// IMP=0x0000000100095998
- (void)dealloc;	// IMP=0x00000001000955bc
- (id)init;	// IMP=0x0000000100095028

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

