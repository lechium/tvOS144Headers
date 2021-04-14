//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMTimer, NSArray, NSMutableArray, NSMutableDictionary, NSRecursiveLock;

@interface IDSRegistrationKeychainManager : NSObject
{
    NSMutableDictionary *_tempPhoneCredentials;	// 8 = 0x8
    NSMutableDictionary *_smsSignatures;	// 16 = 0x10
    NSMutableDictionary *_authenticationCerts;	// 24 = 0x18
    NSMutableArray *_registrationData;	// 32 = 0x20
    IMTimer *_purgeTimer;	// 40 = 0x28
    NSRecursiveLock *_lock;	// 48 = 0x30
    CDUnknownBlockType _purgeCancelBlock;	// 56 = 0x38
    CDUnknownBlockType _purgeEnqueueBlock;	// 64 = 0x40
    _Bool _loaded;	// 72 = 0x48
}

+ (id)keychainAccessGroupForVersion:(unsigned long long)arg1;	// IMP=0x0000000100305c8c
+ (id)keychainAccountForVersion:(unsigned long long)arg1;	// IMP=0x0000000100305bb4
+ (id)keychainServiceForVersion:(unsigned long long)arg1;	// IMP=0x0000000100305b2c
+ (id)sharedInstance;	// IMP=0x00000001003053a4
- (void).cxx_destruct;	// IMP=0x000000010030cdf8
- (void)setTempPhoneCredential:(id)arg1 forID:(id)arg2;	// IMP=0x000000010030cb48
- (id)tempPhoneCredentialForID:(id)arg1;	// IMP=0x000000010030c8d8
- (void)setSMSSignature:(id)arg1 mainID:(id)arg2;	// IMP=0x000000010030c558
- (id)smsIDs;	// IMP=0x000000010030c378
- (id)smsSignatureForID:(id)arg1;	// IMP=0x000000010030c048
- (void)setAuthenticationCert:(id)arg1 forID:(id)arg2;	// IMP=0x000000010030bd9c
- (id)authenticationCertForID:(id)arg1;	// IMP=0x000000010030bc84
- (_Bool)removeAllRegistrations;	// IMP=0x000000010030b0bc
- (_Bool)removeRegistration:(id)arg1;	// IMP=0x000000010030ace8
- (_Bool)addRegistration:(id)arg1;	// IMP=0x000000010030a98c
@property(readonly, copy, nonatomic) NSArray *registrations; // @dynamic registrations;
- (id)registrationWithServiceType:(id)arg1 registrationType:(int)arg2 value:(id)arg3;	// IMP=0x000000010030a310
- (void)reloadFromKeychain;	// IMP=0x00000001003089bc
- (void)_reloadFromDictionary:(id)arg1;	// IMP=0x0000000100307a3c
- (void)_loadIfNeeded;	// IMP=0x00000001003079ac
- (void)_setPurgeTimer;	// IMP=0x0000000100307960
- (void)_flush;	// IMP=0x0000000100307564
- (_Bool)saveToKeychain;	// IMP=0x0000000100307528
- (_Bool)_saveToKeychain;	// IMP=0x0000000100307404
- (_Bool)__saveToKeychain;	// IMP=0x0000000100305cb0
- (void)systemDidFinishMigration;	// IMP=0x0000000100305a1c
- (void)dealloc;	// IMP=0x0000000100305988
- (id)init;	// IMP=0x0000000100305550

@end
