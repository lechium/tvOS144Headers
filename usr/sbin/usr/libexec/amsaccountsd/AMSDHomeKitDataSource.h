//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSDHomeManagerDataSource-Protocol.h"
#import "HMHomeDelegatePrivate-Protocol.h"
#import "HMHomeManagerDelegate-Protocol.h"
#import "HMHomeManagerDelegatePrivate-Protocol.h"
#import "HMSettingsDelegate-Protocol.h"
#import "HMUserCloudShareManagerDelegate-Protocol.h"
#import "HMUserDelegatePrivate-Protocol.h"

@class AMSBinaryPromise, AMSPromise, HMHomeManager, NSString;
@protocol AMSDHomeManagerDataSourceDelegate;

@interface AMSDHomeKitDataSource : NSObject <HMHomeDelegatePrivate, HMHomeManagerDelegate, HMHomeManagerDelegatePrivate, HMSettingsDelegate, HMUserCloudShareManagerDelegate, HMUserDelegatePrivate, AMSDHomeManagerDataSource>
{
    id <AMSDHomeManagerDataSourceDelegate> _delegate;	// 8 = 0x8
    HMHomeManager *_homeManager;	// 16 = 0x10
    AMSBinaryPromise *_homesUpdatedPromise;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100017ef0
@property(retain, nonatomic) AMSBinaryPromise *homesUpdatedPromise; // @synthesize homesUpdatedPromise=_homesUpdatedPromise;
@property(retain, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(nonatomic) __weak id <AMSDHomeManagerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_settingForKeyPath:(id)arg1 withSettings:(id)arg2;	// IMP=0x0000000100017a6c
- (id)_settingForKeyPath:(id)arg1 user:(id)arg2 home:(id)arg3;	// IMP=0x0000000100017868
- (id)_allHomeKitHomes;	// IMP=0x0000000100017210
- (void)user:(id)arg1 didUpdateMediaContentProfileAccessControl:(id)arg2 forHome:(id)arg3;	// IMP=0x00000001000171b0
- (void)shareManager:(id)arg1 didReceiveShareInvitation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100016f18
- (void)settingsDidUpdate:(id)arg1;	// IMP=0x0000000100016eb8
- (void)homeManager:(id)arg1 didUpdateMultiUserStatus:(long long)arg2 reason:(id)arg3;	// IMP=0x0000000100016d00
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x0000000100016c70
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;	// IMP=0x0000000100016c10
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;	// IMP=0x0000000100016bb0
- (void)home:(id)arg1 didRemoveUser:(id)arg2;	// IMP=0x0000000100016b50
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;	// IMP=0x0000000100016af0
- (void)home:(id)arg1 didAddUser:(id)arg2;	// IMP=0x0000000100016a90
- (void)homeDidEnableMultiUser:(id)arg1;	// IMP=0x0000000100016a30
- (void)home:(id)arg1 didAddAccessory:(id)arg2;	// IMP=0x00000001000169d0
- (id)settingForKeyPath:(id)arg1 user:(id)arg2 home:(id)arg3;	// IMP=0x00000001000167ac
- (id)settingForKeyPath:(id)arg1;	// IMP=0x00000001000165b4
- (id)sendCloudShare:(id)arg1 inContainer:(id)arg2 toOwnerOfHome:(id)arg3;	// IMP=0x0000000100015f50
- (id)sendCloudDataRepairRequestToHomeUser:(id)arg1 inContainer:(id)arg2;	// IMP=0x0000000100015838
- (void)registerToAcceptCloudSharesForContainers:(id)arg1;	// IMP=0x0000000100015368
- (unsigned long long)mediaProfileEnabledForUser:(id)arg1 home:(id)arg2;	// IMP=0x0000000100014f58
- (id)homeWithIdentifier:(id)arg1;	// IMP=0x0000000100014d08
- (id)currentDeviceIsAccessoryForHome:(id)arg1;	// IMP=0x00000001000149d4
- (id)allUsersInHome:(id)arg1;	// IMP=0x00000001000148c8
@property(readonly, nonatomic) AMSPromise *allHomes;
- (id)init;	// IMP=0x0000000100014530

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

