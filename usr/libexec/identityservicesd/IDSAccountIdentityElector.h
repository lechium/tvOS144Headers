//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSCloudKitKeyElectionStore, IDSGroupServerKeyElectionStore, IDSKeychainKeyElectionStore;

@interface IDSAccountIdentityElector : NSObject
{
    IDSKeychainKeyElectionStore *_keychainElectionStore;	// 8 = 0x8
    IDSCloudKitKeyElectionStore *_cloudKitElectionStore;	// 16 = 0x10
    IDSGroupServerKeyElectionStore *_groupServerElectionStore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010002d064
@property(readonly, nonatomic) IDSGroupServerKeyElectionStore *groupServerElectionStore; // @synthesize groupServerElectionStore=_groupServerElectionStore;
@property(readonly, nonatomic) IDSCloudKitKeyElectionStore *cloudKitElectionStore; // @synthesize cloudKitElectionStore=_cloudKitElectionStore;
@property(readonly, nonatomic) IDSKeychainKeyElectionStore *keychainElectionStore; // @synthesize keychainElectionStore=_keychainElectionStore;
- (id)_fullClusterWithAccountIdentityClusterWithAccountIdentity:(id)arg1 fullAdminServiceIdentities:(id)arg2 fullSigningServiceIdentities:(id)arg3 error:(id *)arg4;	// IMP=0x000000010002cf18
- (id)_fullServiceIdentitySigningWithAccountIdentity:(id)arg1 type:(long long)arg2 error:(id *)arg3;	// IMP=0x000000010002ce74
- (id)_fullServiceIdentityAdminWithAccountIdentity:(id)arg1 type:(long long)arg2 error:(id *)arg3;	// IMP=0x000000010002cdd0
- (id)_fullAccountIdentityWithError:(id *)arg1;	// IMP=0x000000010002cd8c
- (void)_cleanupFailedElectionWithFullAccountIdentityCluster:(id)arg1;	// IMP=0x000000010002ca7c
- (void)_createAccountKeysWithFullAccountIdentity:(id)arg1 serviceTypeNames:(id)arg2 oldCluster:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010002922c
- (void)_rollAccountKeyWithFullCluster:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100028d7c
- (void)_getCurrentAccountClusterWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002868c
- (void)_getKeysForServiceTypeName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027a98
- (void)rollAccountKeyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000276ec
- (void)getKeysForServiceTypeName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000274a8
- (id)initWithKeychainElectionStore:(id)arg1 cloudKitElectionStore:(id)arg2 groupServerElectionStore:(id)arg3;	// IMP=0x0000000100027358

@end

