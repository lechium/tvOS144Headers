//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, GKThreadsafeDictionary;

@interface GKPlayerCredentialController : NSObject
{
    long long _loginCancelledCount;	// 8 = 0x8
    ACAccountStore *_store;	// 16 = 0x10
    GKThreadsafeDictionary *_allCredentialsCache;	// 24 = 0x18
}

+ (void)migrateOldAccountInformation;	// IMP=0x000000010008a798
+ (id)sharedController;	// IMP=0x000000010008a6f4
+ (id)accessQueue;	// IMP=0x000000010008a670
@property(retain, nonatomic) GKThreadsafeDictionary *allCredentialsCache; // @synthesize allCredentialsCache=_allCredentialsCache;
@property(retain, nonatomic) ACAccountStore *store; // @synthesize store=_store;
@property long long loginCancelledCount; // @synthesize loginCancelledCount=_loginCancelledCount;
@property(readonly) _Bool loginDisabled;
- (id)suggestedUsername;	// IMP=0x000000010008d424
- (id)primaryCredentialForEnvironment:(long long)arg1 conformsToMultiUserRestrictions:(_Bool)arg2;	// IMP=0x000000010008d384
- (id)primaryCredentialForEnvironment:(long long)arg1;	// IMP=0x000000010008d27c
- (id)pushCredentialForEnvironment:(long long)arg1;	// IMP=0x000000010008d1e4
- (id)allCredentialsForEnvironment:(long long)arg1;	// IMP=0x000000010008cf8c
- (id)credentialForAltDSID:(id)arg1 environment:(long long)arg2;	// IMP=0x000000010008ceec
- (id)credentialForUsername:(id)arg1 environment:(long long)arg2;	// IMP=0x000000010008ce4c
- (id)credentialForPlayer:(id)arg1 environment:(long long)arg2;	// IMP=0x000000010008ccdc
- (unsigned long long)loginStatusForCredential:(id)arg1;	// IMP=0x000000010008cb74
- (void)replaceCredential:(id)arg1 withCredential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010008c650
- (void)removeCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008c2dc
- (void)removeAllCredentialsForEnvironment:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008c018
- (void)getAltDSIDFromIDMSForCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008bd80
- (void)setPrimaryCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008b2ec
- (void)setCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010008af90
- (void)accountStoreEmailDidChange:(id)arg1;	// IMP=0x000000010008ae40
- (void)accountStoreDidChange:(id)arg1;	// IMP=0x000000010008acb0
- (void)invalidateCredentialCaches;	// IMP=0x000000010008ac8c
- (void)_transact:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x000000010008aa54
- (id)_transactAndWait:(CDUnknownBlockType)arg1;	// IMP=0x000000010008a7d0
- (id)accessQueue;	// IMP=0x000000010008a6d8
- (void)dealloc;	// IMP=0x000000010008a5fc
- (id)init;	// IMP=0x000000010008a504

@end
