//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSClientDataRegistrationKeyManager-Protocol.h"
#import "IMSystemMonitorListener-Protocol.h"

@class IDSKeychainWrapper, IDSNGMKeyLoadingErrorContainer, IDSRateLimiter, IDSRegistrationKeyConfig, IDSRegistrationKeyManagerIdentityDataSource, IMSystemMonitor, IMTimer, NSRecursiveLock;
@protocol IDSRegistrationKeyManagerKeyPairProvider;

@interface IDSRegistrationKeyManager : NSObject <IDSClientDataRegistrationKeyManager, IMSystemMonitorListener>
{
    NSRecursiveLock *_lock;	// 8 = 0x8
    _Bool _forceRoll;	// 16 = 0x10
    _Bool _loaded;	// 17 = 0x11
    _Bool _identityLoaded;	// 18 = 0x12
    _Bool _detectedMigrationNeeded;	// 19 = 0x13
    _Bool _needsReRegister;	// 20 = 0x14
    _Bool _pendingIdentityRegeneration;	// 21 = 0x15
    _Bool _hasCheckedMigrationThisLaunch;	// 22 = 0x16
    _Bool _failedToGeneratedPublicDataForNGMIdentity;	// 23 = 0x17
    IDSNGMKeyLoadingErrorContainer *_recentKeyLoadingErrors;	// 24 = 0x18
    IDSRegistrationKeyConfig *_config;	// 32 = 0x20
    IMTimer *_purgePreviousIdentityTimer;	// 40 = 0x28
    IMTimer *_regenerateIdentityTimer;	// 48 = 0x30
    IMSystemMonitor *_systemMonitor;	// 56 = 0x38
    IDSKeychainWrapper *_keychainWrapper;	// 64 = 0x40
    IDSRegistrationKeyManagerIdentityDataSource *_identityDataSource;	// 72 = 0x48
    IDSRateLimiter *_loadingRateLimiter;	// 80 = 0x50
    id <IDSRegistrationKeyManagerKeyPairProvider> _keyPairProvider;	// 88 = 0x58
    _Bool _allowPairingIdentities;	// 96 = 0x60
    _Bool _allowRegenerateRegisteredIdentity;	// 97 = 0x61
}

+ (_Bool)setupKeys;	// IMP=0x000000010002d77c
+ (id)sharedInstance;	// IMP=0x000000010002d5d0
- (void).cxx_destruct;	// IMP=0x0000000100043238
@property(retain, nonatomic) id <IDSRegistrationKeyManagerKeyPairProvider> keyPairProvider; // @synthesize keyPairProvider=_keyPairProvider;
@property(nonatomic) _Bool forceRoll; // @synthesize forceRoll=_forceRoll;
@property(retain, nonatomic) IDSRegistrationKeyConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool allowRegenerateRegisteredIdentity; // @synthesize allowRegenerateRegisteredIdentity=_allowRegenerateRegisteredIdentity;
@property(nonatomic) _Bool allowPairingIdentities; // @synthesize allowPairingIdentities=_allowPairingIdentities;
@property(retain, nonatomic) IDSRegistrationKeyManagerIdentityDataSource *identityDataSource; // @synthesize identityDataSource=_identityDataSource;
@property(retain, nonatomic) IDSRateLimiter *loadingRateLimiter; // @synthesize loadingRateLimiter=_loadingRateLimiter;
@property(retain, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(retain, nonatomic) IMSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
- (id)errorContainerToReport;	// IMP=0x0000000100042f70
- (double)_identityRegenerationDelay;	// IMP=0x0000000100042d6c
- (double)_purgePreviousIdentityDelay;	// IMP=0x0000000100042bb0
- (double)_notifyRegenerateDelay;	// IMP=0x0000000100042b94
- (void)_regenerateIdentityTimerFired;	// IMP=0x0000000100042924
- (void)_scheduleRegenerationOfRegisteredIdentityAfterDelay:(double)arg1;	// IMP=0x000000010004266c
- (void)_purgePreviousIdentityTimerFired;	// IMP=0x00000001000424ac
- (void)_schedulePurgeOfPreviousIdentityAfterDelay:(double)arg1;	// IMP=0x00000001000421f4
- (double)_randomizedIdentityRegenerationInterval;	// IMP=0x0000000100042098
- (_Bool)_shouldRegenerateRegisteredIdentity;	// IMP=0x0000000100041ef0
- (void)regenerateRegisteredIdentity;	// IMP=0x0000000100041c60
- (_Bool)_migrateIdentity:(id)arg1 toProtectionClass:(long long)arg2;	// IMP=0x00000001000419e0
- (_Bool)migrateToSecureStorageForClassC;	// IMP=0x00000001000418c4
- (_Bool)migrateToSecureStorageForClassA;	// IMP=0x00000001000417ac
- (_Bool)_isSecurelyStoringIdentity:(id)arg1 withExpectedProtectionClass:(long long)arg2;	// IMP=0x00000001000414fc
- (_Bool)isUsingSecureStorageForClassC;	// IMP=0x00000001000413e0
- (_Bool)isUsingSecureStorageForClassA;	// IMP=0x00000001000412c8
- (_Bool)requiresKeychainMigration;	// IMP=0x00000001000412a4
- (_Bool)isMigratedKeyPairSignature;	// IMP=0x0000000100041210
- (_Bool)needsPublicDataUpdated;	// IMP=0x0000000100040268
- (id)keyPairSignature;	// IMP=0x00000001000401e0
- (struct __SecKey *)identityPublicKey;	// IMP=0x0000000100040160
- (struct __SecKey *)identityPrivateKey;	// IMP=0x00000001000400e0
- (void)regeneratePairingIdentitiesIncludingClassD:(_Bool)arg1;	// IMP=0x000000010003f734
- (void)loadPairingIdentities:(_Bool)arg1;	// IMP=0x000000010003e7d0
- (void)_purgePreviousIdentityFromMemoryAndKeychain;	// IMP=0x000000010003e014
- (void)purgeMessageProtectionIdentity;	// IMP=0x000000010003d8e0
- (void)notePublicIdentityDidRegisterLegacyData:(id)arg1 ngmIdentityData:(id)arg2 ngmPrekeyData:(id)arg3;	// IMP=0x000000010003b798
- (id)accountSigningKeyReference;	// IMP=0x000000010003b698
- (id)fullMessageProtectionIdentityForDataProtectionClass:(unsigned int)arg1;	// IMP=0x000000010003b5d0
- (id)previousFullMessageProtectionIdentity;	// IMP=0x000000010003b4ac
- (id)fullMessageProtectionIdentity;	// IMP=0x000000010003b388
- (void)_notifyUnregisteredIdentityRegenerated;	// IMP=0x000000010003af64
- (_Bool)_migrateRegisteredIdentityFromClassDtoClassCIfNeeded;	// IMP=0x000000010003abf0
- (_Bool)_generateUnregisteredIdentityWithExistingLegacyIdentity:(id)arg1 existingNGMIdentity:(id)arg2;	// IMP=0x0000000100039f04
- (void)_ensureIdentity:(id *)arg1 savedIndentity:(id *)arg2 protectionClass:(long long)arg3 didSaveIdentity:(_Bool *)arg4;	// IMP=0x0000000100039e24
- (id)publicMessageProtectionData;	// IMP=0x0000000100039d3c
- (id)publicMessageProtectionDataToRegisterForClassD;	// IMP=0x0000000100039c44
- (id)publicMessageProtectionDataToRegisterForClassC;	// IMP=0x0000000100039b48
- (id)publicMessageProtectionDataToRegisterForClassA;	// IMP=0x0000000100039a50
- (id)latestMessageProtectionFullIdentityForDataProtectionClass:(unsigned int)arg1;	// IMP=0x0000000100039674
- (struct _SecMPFullIdentity *)copyPreviousMessageProtectionIdentity;	// IMP=0x00000001000394ac
- (struct _SecMPFullIdentity *)latestCopyMessageProtectionIdentityForDataProtectionClass:(unsigned int)arg1;	// IMP=0x0000000100039330
- (struct _SecMPFullIdentity *)copyMessageProtectionIdentity;	// IMP=0x0000000100039158
- (id)_getPublicMessageProtectionDataForIdentity:(id)arg1;	// IMP=0x0000000100038cec
- (id)_generateIdentityWithExistingIdentity:(id)arg1 identifier:(long long)arg2 dataProtectionClass:(long long)arg3;	// IMP=0x0000000100038960
- (id)publicMessageProtectionDeviceIdentityContainerToRegister:(id *)arg1;	// IMP=0x0000000100038294
- (id)keyTransparencyVersionNumberToRegisterForServiceType:(id)arg1;	// IMP=0x0000000100038210
- (id)publicMessageProtectionIdentityDataToRegisterWithError:(id *)arg1;	// IMP=0x0000000100036e28
- (id)previousFullDeviceIdentityContainer;	// IMP=0x0000000100036c38
- (id)fullDeviceIdentityContainerUsableForKeyType:(unsigned long long)arg1;	// IMP=0x00000001000366c8
- (id)fullDeviceIdentityContainer;	// IMP=0x000000010003668c
- (id)generateCSRForUserID:(id)arg1;	// IMP=0x00000001000360e4
- (void)dealloc;	// IMP=0x0000000100035e90
- (id)init;	// IMP=0x0000000100035c64
- (id)initWithSystemMonitor:(id)arg1 keychainWrapper:(id)arg2 loadingRateLimiter:(id)arg3 identityDataSource:(id)arg4 allowPairingIdentities:(_Bool)arg5 allowRegenerateRegisteredIdentity:(_Bool)arg6 keyPairProvider:(id)arg7;	// IMP=0x00000001000357e8
- (void)_loadIfNeeded:(_Bool)arg1;	// IMP=0x0000000100030a6c
- (_Bool)_loadClassDIdentityIfNeeded:(id *)arg1;	// IMP=0x0000000100030540
- (_Bool)_loadClassCIdentityIfNeeded:(id *)arg1;	// IMP=0x0000000100030014
- (_Bool)_loadClassAIdentityIfNeeded:(id *)arg1;	// IMP=0x000000010002fa90
- (id)_loadAndDeserializeBuildOfIdentityGenerationForItemName:(id)arg1;	// IMP=0x000000010002f768
- (void)_serializeAndPersistBuildOfIdentityGeneration:(id)arg1 itemName:(id)arg2;	// IMP=0x000000010002f348
- (_Bool)_serializeAndPersistIdentityContainer:(id)arg1 identityIdentifier:(long long)arg2 deleteIfNull:(_Bool)arg3;	// IMP=0x000000010002e9fc
- (_Bool)_save;	// IMP=0x000000010002e16c
- (void)_saveClassXIdentity:(id *)arg1 savedIdentity:(id *)arg2 protectionClass:(long long)arg3 savedUnsavedIdentity:(_Bool *)arg4;	// IMP=0x000000010002da40
- (void)systemDidLeaveDataProtectionLock;	// IMP=0x000000010002d988
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x000000010002d8ac
- (_Bool)_isUnderFirstDataProtectionLock;	// IMP=0x000000010002d840

@end

