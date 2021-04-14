//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDKeybagd-Protocol.h"
#import "RDServer-Protocol.h"

@class NSMutableDictionary, NSString;

@interface RDServer : NSObject <RDServer, BDKeybagd>
{
    int _switchState;	// 8 = 0x8
    NSMutableDictionary *_pidsToClients;	// 16 = 0x10
    NSMutableDictionary *_userToSwitchTo;	// 24 = 0x18
}

+ (id)sharedBubbleXPCInterface;	// IMP=0x000000010000f23c
+ (id)sharedXPCInterface;	// IMP=0x000000010000f1b8
+ (id)sharedServer;	// IMP=0x000000010000f100
- (void).cxx_destruct;	// IMP=0x000000010001709c
@property int switchState; // @synthesize switchState=_switchState;
@property(retain, nonatomic) NSMutableDictionary *userToSwitchTo; // @synthesize userToSwitchTo=_userToSwitchTo;
@property(retain, nonatomic) NSMutableDictionary *pidsToClients; // @synthesize pidsToClients=_pidsToClients;
- (void)provisionDevice:(id)arg1 forPid:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100016e10
- (int)asidForClient:(id)arg1 withAuid:(unsigned int *)arg2 withPid:(int)arg3;	// IMP=0x0000000100016dfc
- (void)registerUserPersonaObserverForPID:(int)arg1 withMachServiceName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100016b8c
- (void)registerUserPersonaStakeholderForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016990
- (_Bool)notifyNextPersonaObserver:(id)arg1 withUser:(unsigned int)arg2;	// IMP=0x00000001000166f0
- (void)_broadcastPersonaUpdates:(int)arg1 withAuid:(unsigned int)arg2;	// IMP=0x00000001000165c4
- (void)personaLogoutWithPid:(int)arg1 WithUserODuuid:(id)arg2 withUid:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100016528
- (void)personaLoginWithPid:(int)arg1 WithUserODuuid:(id)arg2 withUid:(unsigned int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010001648c
- (void)fetchMultiPersonaBundleIdentifiersforPid:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016270
- (void)setMultiPersonaBundlesIdentifiers:(id)arg1 forPid:(int)arg2 WithcompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100016010
- (void)fetchBundleIdentifiersForPersona:(id)arg1 forPid:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100015d60
- (void)setSinglePersonaBundlesIdentifiers:(id)arg1 forPersona:(id)arg2 forPid:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100015a84
- (void)fetchPersona:(id)arg1 forPid:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000157f4
- (void)fetchAsidMapforPid:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000155e0
- (void)fetchAllUsersPersonaListforPid:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000153cc
- (void)fetchPersonaListforPid:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000151b8
- (_Bool)remoteProcessHasBooleanEntitlement:(id)arg1;	// IMP=0x00000001000150f4
- (void)disablePersona:(id)arg1 forPid:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014e1c
- (void)deletePersona:(id)arg1 forPid:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014b44
- (void)createPersona:(id)arg1 passcodeData:(id)arg2 forPid:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100014768
- (void)reengageUserQuotaForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001467c
- (void)suspendUserQuotaForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100014580
- (void)removeUserSyncTask:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014348
- (void)addUserSyncTask:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000140e8
- (void)removeUserSyncTask:(id)arg1 forPID:(int)arg2;	// IMP=0x00000001000140d8
- (void)addUserSyncTask:(id)arg1 forPID:(int)arg2;	// IMP=0x00000001000140c8
- (id)fetchUserBlockTaskList;	// IMP=0x0000000100013fec
- (id)fetchUserSyncTaskList;	// IMP=0x0000000100013f10
- (void)fetchUserSwitchBlockingTaskListWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013d88
- (void)_broadcastDeviceLoginSessionStateDidUpdate;	// IMP=0x0000000100013d18
- (void)_broadcastUserSwitchTaskListDidUpdate;	// IMP=0x0000000100013ca8
- (void)removeUserSwitchBlockingTask:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100013a7c
- (void)addUserSwitchBlockingTask:(id)arg1 forPID:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001388c
- (void)removeUserSwitchBlockingTask:(id)arg1 forPID:(int)arg2;	// IMP=0x000000010001387c
- (void)addUserSwitchBlockingTask:(id)arg1 forPID:(int)arg2;	// IMP=0x000000010001386c
- (void)_reallySwitchUser:(_Bool)arg1;	// IMP=0x00000001000130a8
- (void)_checkIfWeShouldSwitchUser:(_Bool)arg1;	// IMP=0x0000000100012d94
- (_Bool)LogoutToUser:(id)arg1;	// IMP=0x0000000100012a2c
- (void)switchToUser:(id)arg1;	// IMP=0x0000000100012610
- (void)_broadcastBubbleDidPop;	// IMP=0x00000001000125b4
- (void)StopBubbleWithPID:(int)arg1 WithUID:(unsigned int)arg2 WithStatus:(unsigned long long)arg3;	// IMP=0x00000001000124e4
- (void)removeMachServiceName:(id)arg1 withPID:(int)arg2 WithUID:(unsigned int)arg3;	// IMP=0x00000001000123d8
- (void)fetchMachServiceNameswithPID:(int)arg1 WithUID:(unsigned int)arg2 WithCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001227c
- (void)resumeSyncBubbleForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100012108
- (void)terminateSyncBubbleForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011e78
- (void)loginUICheckinForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011c1c
- (void)loginComplete;	// IMP=0x0000000100011b2c
- (_Bool)inLoginSession;	// IMP=0x0000000100011aa0
- (void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 pid:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000119bc
- (void)logoutToLoginSessionWithPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011750
- (void)switchToLoginUserWithPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011534
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 pid:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100011498
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 pid:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100010ed8
- (id)_whitelistedPreferencesKeys;	// IMP=0x0000000100010e80
- (void)unregisterStakeholderForPID:(int)arg1 status:(unsigned long long)arg2 reason:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100010bf8
- (void)registerUserSyncStakeholderForPID:(int)arg1 machServiceName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100010880
- (_Bool)inLogoutProcess;	// IMP=0x0000000100010820
- (_Bool)anyBubblePopClients;	// IMP=0x0000000100010688
- (void)registerBubblePopStakeholderForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000103e4
- (void)registerCriticalUserSwitchStakeholderForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010190
- (void)registerUserSwitchStakeholderForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000ff58
- (id)bubbleStakeHolder;	// IMP=0x000000010000fdb4
- (id)criticalStakeHolder;	// IMP=0x000000010000fc10
- (void)_enumerateClientsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000fa8c
- (id)_clientForPID:(int)arg1;	// IMP=0x000000010000f9dc
- (void)removeBubbleClient:(id)arg1;	// IMP=0x000000010000f880
- (void)addBubbleClient:(id)arg1;	// IMP=0x000000010000f6f4
- (void)removeClient:(id)arg1;	// IMP=0x000000010000f500
- (void)addClient:(id)arg1;	// IMP=0x000000010000f324
- (id)init;	// IMP=0x000000010000f2c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
