//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "SecureBackupConcurrentProtocol-Protocol.h"
#import "SecureBackupProtocol-Protocol.h"

@class NSData, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface SecureBackupDaemon : NSObject <SecureBackupProtocol, SecureBackupConcurrentProtocol, NSXPCListenerDelegate>
{
    _Bool _needInitialBackup;	// 8 = 0x8
    _Bool _pendingNotification;	// 9 = 0x9
    int _cachedPassphraseFD;	// 12 = 0xc
    int _cachedRecordIDPassphraseFD;	// 16 = 0x10
    int _cachedRecoveryKeyFD;	// 20 = 0x14
    NSURL *_cacheDirURL;	// 24 = 0x18
    NSData *_iCDPKeybag;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_backupQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_kvsQueue;	// 56 = 0x38
    NSString *_cachedRecordID;	// 64 = 0x40
    NSString *_iCloudEnvironment;	// 72 = 0x48
    NSMutableDictionary *_ignoredNotifications;	// 80 = 0x50
    NSMutableDictionary *_handledNotifications;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000001000430f4
@property(retain, nonatomic) NSMutableDictionary *handledNotifications; // @synthesize handledNotifications=_handledNotifications;
@property(retain, nonatomic) NSMutableDictionary *ignoredNotifications; // @synthesize ignoredNotifications=_ignoredNotifications;
@property _Bool pendingNotification; // @synthesize pendingNotification=_pendingNotification;
@property(copy, nonatomic) NSString *iCloudEnvironment; // @synthesize iCloudEnvironment=_iCloudEnvironment;
@property int cachedRecoveryKeyFD; // @synthesize cachedRecoveryKeyFD=_cachedRecoveryKeyFD;
@property int cachedRecordIDPassphraseFD; // @synthesize cachedRecordIDPassphraseFD=_cachedRecordIDPassphraseFD;
@property int cachedPassphraseFD; // @synthesize cachedPassphraseFD=_cachedPassphraseFD;
@property(copy, nonatomic) NSString *cachedRecordID; // @synthesize cachedRecordID=_cachedRecordID;
@property _Bool needInitialBackup; // @synthesize needInitialBackup=_needInitialBackup;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *kvsQueue; // @synthesize kvsQueue=_kvsQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *backupQueue; // @synthesize backupQueue=_backupQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(readonly, nonatomic) NSData *iCDPKeybag; // @synthesize iCDPKeybag=_iCDPKeybag;
@property(retain, nonatomic) NSURL *cacheDirURL; // @synthesize cacheDirURL=_cacheDirURL;
- (void)getAcceptedTermsForAltDSID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042c70
- (void)saveTermsAcceptance:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042534
- (void)getCertificatesWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000422e0
- (void)daemonPasscodeRequestOpinion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100041f74
- (id)fetchPRK:(id *)arg1;	// IMP=0x0000000100041e64
- (void)prepareHSA2EscrowRecordContents:(id)arg1 usesComplexPassphrase:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100041128
- (int)getPasscodeRequestFlag:(unsigned long long *)arg1;	// IMP=0x00000001000410d0
- (int)setPasscodeRequestFlag:(unsigned long long)arg1;	// IMP=0x0000000100041078
- (void)clearNotifyToken;	// IMP=0x0000000100041014
- (int)notifyToken;	// IMP=0x0000000100040eec
- (void)beginHSA2PasscodeRequest:(id)arg1 desirePasscodeImmediately:(_Bool)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000409a8
- (id)getPendingEscrowRequest:(id *)arg1;	// IMP=0x0000000100040934
- (void)stateCaptureWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000408c0
- (void)notificationInfoWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010004077c
- (void)changeSMSTargetWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003fc6c
- (void)getCountrySMSCodesWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003f644
- (void)startSMSChallengeWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003ef9c
- (void)uncachePassphraseWithRequestAsync:(id)arg1;	// IMP=0x000000010003ef8c
- (void)uncacheRecoveryKeyWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003ecdc
- (void)cacheRecoveryKeyWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003ea3c
- (void)uncachePassphraseWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003e78c
- (void)cachePassphraseWithRequestAsync:(id)arg1;	// IMP=0x000000010003e77c
- (void)cachePassphraseWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003e4dc
- (void)uncacheRecordIDPassphrase;	// IMP=0x000000010003e384
- (id)cachedRecoveryKey;	// IMP=0x000000010003e34c
@property(copy, nonatomic) NSString *cachedRecordIDPassphrase;
@property(copy, nonatomic) NSString *cachedPassphrase;
- (id)cachedPassphraseForFD:(int)arg1;	// IMP=0x000000010003dfbc
- (void)setCachedRecoveryKey:(id)arg1;	// IMP=0x000000010003df84
- (int)storeCachedPassphrase:(id)arg1;	// IMP=0x000000010003da24
- (void)updateMetadataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003cf28
- (void)disableWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003c6f0
- (void)setBackOffDateWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003bf70
- (void)backOffDateWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003bbd8
- (void)deleteAlliCDPRecordsWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003b4c4
- (void)createICDPRecordWithRequest:(id)arg1 recordContents:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003ab30
- (void)recoverRecordContentsWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003a75c
- (void)restoreKeychainAsyncWithPasswordInDaemon:(id)arg1 keybagDigest:(id)arg2 haveBottledPeer:(_Bool)arg3 viewsNotToBeRestored:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010003a524
- (void)recoverSilentWithCDPContextInDaemon:(id)arg1 allRecords:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003a380
- (void)recoverWithCDPContextInDaemon:(id)arg1 escrowRecord:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003a1dc
- (void)recoverWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003a054
- (void)_recoverWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003785c
- (void)_restoreKeychainAsyncWithPassword:(id)arg1 keybagDigest:(id)arg2 haveBottledPeer:(_Bool)arg3 viewsNotToBeRestored:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010003749c
- (void)_recoverWithCDPContext:(id)arg1 escrowRecord:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100036e80
- (void)_recoverSilentWithCDPContext:(id)arg1 allRecords:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100035b94
- (void)sortForMatchingPassphraseLengthAndPlatform:(id)arg1 secureBackups:(id)arg2 passphraseLength:(unsigned long long)arg3 platform:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010003528c
- (long long)compare:(id)arg1 with:(id)arg2 backups:(id)arg3;	// IMP=0x0000000100034bf8
- (id)keysOfEntriesContainingObject:(id)arg1 backups:(id)arg2;	// IMP=0x0000000100034b20
- (void)recoverEscrowWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003366c
- (void)recoverStingrayWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032e7c
- (id)restoreEMCSBackup:(id)arg1 withPassword:(id)arg2;	// IMP=0x0000000100032984
- (id)restoreEMCSBackup:(id)arg1 keybag:(id)arg2 password:(id)arg3;	// IMP=0x0000000100032764
- (void)recordIDAndMetadataForSilentAttempt:(id)arg1 passphraseLength:(unsigned long long)arg2 platform:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100032188
- (id)secureBackups;	// IMP=0x0000000100031ec8
- (id)_restoreKeychainWithBackupBag:(id)arg1 password:(id)arg2 keybagDigest:(id)arg3 haveBottledPeer:(_Bool)arg4;	// IMP=0x00000001000311d8
- (void)_restoreKeychainAsyncWithBackupBag:(id)arg1 password:(id)arg2 keybagDigest:(id)arg3 haveBottledPeer:(_Bool)arg4 restoredViews:(id)arg5 viewsNotToBeRestored:(id)arg6;	// IMP=0x00000001000308d4
- (_Bool)restoreView:(id)arg1 password:(id)arg2 keybagDigest:(id)arg3 restoredViews:(id)arg4;	// IMP=0x00000001000305c0
- (id)encodedStatsForViews:(id)arg1;	// IMP=0x0000000100030370
- (id)restoreBackup:(id)arg1 withName:(id)arg2 keybagDigest:(id)arg3 keybag:(id)arg4 password:(id)arg5;	// IMP=0x000000010002fc04
- (void)backupWithInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002fbb0
- (void)backupWithInfo:(id)arg1 garbageCollect:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010002fac4
@property(nonatomic) _Bool backupAllowed;
- (void)handleEscrowStoreResults:(id)arg1 escrowError:(id)arg2 request:(id)arg3 sosPeerID:(id)arg4 newRecordMetadata:(id)arg5 backupKeybag:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x000000010002f5d0
- (void)enableWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002d5e0
- (void)stashRecoveryDataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002d47c
- (void)_stashRecoveryDataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002d1b4
- (id)massageOutgoingMetadataFromRequest:(id)arg1;	// IMP=0x000000010002cfdc
- (void)getAccountInfoWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010002cc30
- (void)synchronizeKVSWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002c6a4
- (void)doSynchronize;	// IMP=0x000000010002c4b4
- (id)sortRecordsByBottleID:(id)arg1;	// IMP=0x000000010002b8d4
- (id)tagStaleBottleRecords:(id)arg1 suggestedBottles:(id)arg2;	// IMP=0x000000010002b5d4
- (void)_getAccountInfoWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000295b4
- (id)_recordIDFromLabel:(id)arg1 withPrefix:(id)arg2 suffix:(id)arg3;	// IMP=0x00000001000294ac
- (void)getStingrayMetadataWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100028ec0
- (_Bool)hasRecoveryKey;	// IMP=0x0000000100028c28
- (id)filteriCDPRecords:(id)arg1;	// IMP=0x0000000100028614
- (id)massageIncomingMetadataFromInfo:(id)arg1;	// IMP=0x000000010002830c
- (void)notificationOccurred:(id)arg1;	// IMP=0x0000000100027f34
- (void)handleNotification:(id)arg1;	// IMP=0x0000000100027b84
- (void)recordNotification:(id)arg1 handled:(_Bool)arg2;	// IMP=0x0000000100027a9c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000276ec
@property(readonly, nonatomic) _Bool forceICDP;
@property(readonly, retain, nonatomic) NSURL *cachedManifestURL;
@property(readonly, retain, nonatomic) NSURL *cachedKeychainURL;
- (struct os_state_data_s *)_stateCapture;	// IMP=0x00000001000271c4
- (id)copyKVSState;	// IMP=0x0000000100026c34
- (void)setupNotifyEvents;	// IMP=0x0000000100026a94
- (id)init;	// IMP=0x0000000100026834
- (id)normalizeSMSTarget:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000265c4
- (id)_gestaltValueForKey:(struct __CFString *)arg1;	// IMP=0x0000000100026450
- (void)unregisterForNotifyEvent:(id)arg1;	// IMP=0x00000001000263f0
- (void)registerForNotifyEvent:(id)arg1;	// IMP=0x0000000100026364
- (void)disableiCDPBackup;	// IMP=0x0000000100026318
- (void)_disableBackup;	// IMP=0x000000010002628c
- (id)_consumeBackupJournal;	// IMP=0x00000001000252cc
- (id)_consumeFullBackupForRecordID:(id)arg1;	// IMP=0x0000000100024f34
- (id)_consumeViewBackup:(id)arg1 recordID:(id)arg2;	// IMP=0x0000000100023e94
- (void)_backupCloudIdentityKeychainViewAndPushToKVS;	// IMP=0x00000001000238f8
- (void)_backupKeychainFully:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100023374
- (void)_backupKeychain;	// IMP=0x0000000100023360
- (void)_backupFullKeychain;	// IMP=0x000000010002334c
- (void)_backupFullKeychainWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100023338
- (void)_setAutobackupEnabled;	// IMP=0x0000000100023328
- (void)_setAutobackupEnabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000232b8
- (int)_checkEscrowTrust;	// IMP=0x0000000100022f40
- (void)_removeKVSKeybag;	// IMP=0x0000000100022df4
- (void)garbageCollectEMCSBackupsExcluding:(id)arg1;	// IMP=0x0000000100022bbc
- (id)_EMCSBackupDictForKeybagDigest:(id)arg1;	// IMP=0x0000000100022794
- (id)_EMCSBackup;	// IMP=0x0000000100022738
- (void)_setEMCSBackup:(id)arg1 keybag:(id)arg2;	// IMP=0x0000000100022430
- (id)_KVSKeybag;	// IMP=0x00000001000223d4
- (void)_setKVSKeybag:(id)arg1;	// IMP=0x00000001000221ec
- (void)_removeMetadata;	// IMP=0x00000001000220b4
- (id)_metadata;	// IMP=0x0000000100022054
- (void)_setMetadata:(id)arg1;	// IMP=0x0000000100021ef4
- (void)_removeUsesEscrow;	// IMP=0x0000000100021e98
- (_Bool)_usesEscrow;	// IMP=0x0000000100021e44
- (void)_setUsesEscrow:(_Bool)arg1;	// IMP=0x0000000100021d24
- (_Bool)_iCDPBackupEnabled;	// IMP=0x0000000100021cd0
- (_Bool)_backupEnabled;	// IMP=0x0000000100021c58
- (void)_setBackupEnabled:(_Bool)arg1 iCDP:(_Bool)arg2;	// IMP=0x0000000100021acc
- (id)_getLastBackupTimestamp;	// IMP=0x0000000100021a40
- (id)_getDERBackupFromKVS;	// IMP=0x00000001000218f0
- (void)_removeVeeTwoBackup;	// IMP=0x000000010002179c
- (void)_enumerateICDPBackupsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100021470
- (id)_getICDPBackupFromKVSForView:(id)arg1;	// IMP=0x00000001000213ac
- (id)_getProtectedKeychainAndKeybagDigestFromKVS:(id *)arg1;	// IMP=0x0000000100021224
- (void)_removeProtectedKeychain;	// IMP=0x00000001000210c0
- (id)_pushCachedKeychainToKVS;	// IMP=0x0000000100020b30
- (id)_pushCachedKeychainToKVSForView:(id)arg1 recordID:(id)arg2;	// IMP=0x0000000100020648
- (void)storeDERBackupInKVS:(id)arg1;	// IMP=0x000000010002044c
- (id)derDataFromDict:(id)arg1;	// IMP=0x0000000100020248
- (void)_removeCachedKeychain;	// IMP=0x00000001000200dc
- (void)_storeVeeTwoBackupInKVS:(id)arg1 forViewName:(id)arg2 withKeyStore:(id)arg3 manifestDigest:(id)arg4 keybagDigest:(id)arg5;	// IMP=0x000000010001fc3c
- (void)_storeProtectedKeychainInKVS:(id)arg1 keybagDigest:(id)arg2;	// IMP=0x000000010001fa0c
- (id)_getKeychainItemForKey:(id)arg1 status:(int *)arg2;	// IMP=0x000000010001f868
- (void)_removeKeychainItemForKey:(id)arg1;	// IMP=0x000000010001f6fc
- (void)_saveKeychainItem:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010001f540
- (id)_createBackupKeybagWithPassword:(id)arg1;	// IMP=0x000000010001f394
- (id)createiCloudRecoveryPasswordWithError:(id *)arg1;	// IMP=0x0000000100050a6c
- (id)createPlistFromDERData:(id)arg1;	// IMP=0x00000001000509f0
- (id)createDERDataFromPlist:(id)arg1;	// IMP=0x0000000100050974
- (_Bool)backupSliceKeybagHasRecoveryKey:(id)arg1;	// IMP=0x000000010005091c
- (id)createEncodedDirectBackupSliceKeybagFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005075c
- (id)circleChangedNotification;	// IMP=0x000000010005073c
- (id)currentViews;	// IMP=0x00000001000506d0
- (id)allViews;	// IMP=0x0000000100050658
- (id)copyOSVersion:(id)arg1;	// IMP=0x0000000100050624
- (id)copySerialNumber:(id)arg1;	// IMP=0x0000000100050610
- (id)createPeerInfoFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000505c0
- (_Bool)registerRecoveryPublicKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100050570
- (_Bool)registerSingleRecoverySecret:(id)arg1 iCDP:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010005051c
- (id)copyEncodedData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000504c8
- (id)copyMyPeerWithNewDeviceRecoverySecret:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100050478
- (id)copyBackupKeyForNewDeviceRecoverySecret:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100050428
- (id)copyBackupKey:(id)arg1;	// IMP=0x0000000100050420
- (id)copyMyPeerIDWithError:(id *)arg1;	// IMP=0x0000000100050384
- (id)copyMyPeerID;	// IMP=0x00000001000502c4
- (id)copyPeerID:(id)arg1;	// IMP=0x0000000100050298
- (id)copyMyPeerInfo:(id *)arg1;	// IMP=0x000000010005024c
- (_Bool)backupWithChanges:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010005017c
- (_Bool)backupSetConfirmedManifest:(id)arg1 digest:(id)arg2 manifest:(id)arg3 error:(id *)arg4;	// IMP=0x000000010004ffd0
- (_Bool)backupWithRegisteredBackupViewWithError:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004fe90
- (_Bool)backupWithRegisteredBackupsWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010004fddc
- (void)restoreBackupName:(id)arg1 peerID:(id)arg2 keybag:(id)arg3 password:(id)arg4 backup:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000010004fcbc
- (id)kvs;	// IMP=0x000000010004fc40
- (id)makeRecordCandidate:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000528f0
- (void)setPasscodeMetadata:(id)arg1 passphraseType:(int)arg2;	// IMP=0x0000000100052770
- (void)doEnableEscrowMultiICSCWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100050d18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

