/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/CKDPCSTestOverrideProvider.h>
#import <libobjc.A.dylib/CKDProtocolTranslatorIdentityDelegate.h>

@protocol CKDContainerScopedUserIDProvider, OS_dispatch_source, OS_dispatch_queue;
@class CKDAccount, CKContainerID, NSString, CKDPCSIdentityManager, NSDate, NSMutableSet, NSData, NSObject, NSMutableDictionary;

@interface CKDPCSManager : NSObject <CKDPCSTestOverrideProvider, CKDProtocolTranslatorIdentityDelegate> {

	BOOL _isSiloed;
	BOOL _forceEnableReadOnlyManatee;
	BOOL _useZoneWidePCS;
	CKDAccount* _account;
	id<CKDContainerScopedUserIDProvider> _containerScopedUserIDProvider;
	CKContainerID* _containerID;
	NSString* _responsibleBundleID;
	unsigned long long _mmcsEncryptionSupport;
	CKDPCSIdentityManager* _identityManager;
	NSDate* _lastMissingManateeIdentityErrorDateForCurrentService;
	NSMutableSet* _missingIdentityPublicKeys;
	NSMutableSet* _servicesWithMissingIdentities;
	NSMutableSet* _undecryptablePCSDataHashes;
	NSData* _boundaryKeyData;
	NSObject*<OS_dispatch_source> _pcsUpdateSource;
	NSObject*<OS_dispatch_queue> _synchronizeQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableDictionary* _pcsTestOverrides;

}

@property (retain) CKDAccount * account;                                                                               //@synthesize account=_account - In the implementation block
@property (nonatomic,__weak,readonly) id<CKDContainerScopedUserIDProvider> containerScopedUserIDProvider;              //@synthesize containerScopedUserIDProvider=_containerScopedUserIDProvider - In the implementation block
@property (nonatomic,readonly) CKContainerID * containerID;                                                            //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) BOOL isSiloed;                                                                          //@synthesize isSiloed=_isSiloed - In the implementation block
@property (nonatomic,readonly) NSString * responsibleBundleID;                                                         //@synthesize responsibleBundleID=_responsibleBundleID - In the implementation block
@property (nonatomic,readonly) BOOL forceEnableReadOnlyManatee;                                                        //@synthesize forceEnableReadOnlyManatee=_forceEnableReadOnlyManatee - In the implementation block
@property (nonatomic,readonly) unsigned long long mmcsEncryptionSupport;                                               //@synthesize mmcsEncryptionSupport=_mmcsEncryptionSupport - In the implementation block
@property (nonatomic,readonly) BOOL useZoneWidePCS;                                                                    //@synthesize useZoneWidePCS=_useZoneWidePCS - In the implementation block
@property (nonatomic,readonly) CKDPCSIdentityManager * identityManager;                                                //@synthesize identityManager=_identityManager - In the implementation block
@property (nonatomic,retain) NSDate * lastMissingManateeIdentityErrorDateForCurrentService;                            //@synthesize lastMissingManateeIdentityErrorDateForCurrentService=_lastMissingManateeIdentityErrorDateForCurrentService - In the implementation block
@property (nonatomic,retain) NSMutableSet * missingIdentityPublicKeys;                                                 //@synthesize missingIdentityPublicKeys=_missingIdentityPublicKeys - In the implementation block
@property (nonatomic,retain) NSMutableSet * servicesWithMissingIdentities;                                             //@synthesize servicesWithMissingIdentities=_servicesWithMissingIdentities - In the implementation block
@property (nonatomic,retain) NSMutableSet * undecryptablePCSDataHashes;                                                //@synthesize undecryptablePCSDataHashes=_undecryptablePCSDataHashes - In the implementation block
@property (nonatomic,retain) NSData * boundaryKeyData;                                                                 //@synthesize boundaryKeyData=_boundaryKeyData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> pcsUpdateSource;                                            //@synthesize pcsUpdateSource=_pcsUpdateSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> synchronizeQueue;                                            //@synthesize synchronizeQueue=_synchronizeQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                                               //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pcsTestOverrides;                                                   //@synthesize pcsTestOverrides=_pcsTestOverrides - In the implementation block
@property (nonatomic,readonly) NSString * pcsServiceName; 
@property (nonatomic,readonly) BOOL currentServiceIsManatee; 
@property (nonatomic,readonly) unsigned long long serviceTypeForSharing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_legacyServiceNameForContainerID:(id)arg1 ;
+(id)noMatchingIdentityErrorForPCSError:(CFErrorRef)arg1 withErrorCode:(long long)arg2 description:(id)arg3 ;
+(id)pcsOverrideKeys;
+(id)publicKeyIDFromIdentity:(OpaquePCSShareProtectionRef)arg1 ;
+(id)protectionIdentifierFromShareProtection:(OpaquePCSShareProtectionRef)arg1 ;
+(id)allProtectionIdentifiersFromShareProtection:(OpaquePCSShareProtectionRef)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(CKContainerID *)containerID;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CKDAccount *)account;
-(void)setAccount:(CKDAccount *)arg1 ;
-(BOOL)useZoneWidePCS;
-(unsigned long long)mmcsEncryptionSupport;
-(BOOL)forceEnableReadOnlyManatee;
-(void)createIngestedPPPCSDataFromInvitationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)serviceTypeForSharing;
-(BOOL)currentServiceIsManatee;
-(BOOL)removePublicKeys:(id)arg1 fromPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(BOOL)decryptSharedZonePCSData:(id)arg1 withInvitedPCS:(OpaquePCSShareProtectionRef)arg2 error:(id*)arg3 ;
-(void)pcsDataFromFetchedShare:(id)arg1 withPublicSharingKey:(id)arg2 withServiceType:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)wrapEncryptedData:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 inContext:(id)arg3 ;
-(id)unwrapEncryptedData:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 inContext:(id)arg3 ;
-(PCSIdentityDataRef)createRandomSharingIdentityWithError:(id*)arg1 ;
-(id)dataFromSharingIdentity:(PCSIdentityDataRef)arg1 error:(id*)arg2 ;
-(void)boundaryKeyDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateAccount:(id)arg1 clearPCSCacheHandler:(/*^block*/id)arg2 ;
-(id)initWithAccount:(id)arg1 containerScopedUserIDProvider:(id)arg2 serviceName:(id)arg3 appContainerTuple:(id)arg4 ;
-(void)addEntriesForUnitTestOverrides:(id)arg1 ;
-(id)dataFromZonePCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(id)dataFromRecordPCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(id)etagFromPCSData:(id)arg1 ;
-(OpaquePCSShareProtectionRef)createZonePCSWithError:(id*)arg1 ;
-(OpaquePCSShareProtectionRef)createRecordPCSWithZonePCS:(OpaquePCSShareProtectionRef)arg1 sharePCS:(OpaquePCSShareProtectionRef)arg2 createLite:(BOOL)arg3 error:(id*)arg4 ;
-(OpaquePCSShareProtectionRef)createZonePCSFromData:(id)arg1 usingServiceIdentityWithType:(unsigned long long)arg2 error:(id*)arg3 ;
-(OpaquePCSShareProtectionRef)createPCSObjectFromData:(id)arg1 ofType:(unsigned long long)arg2 sharedToPCS:(OpaquePCSShareProtectionRef)arg3 error:(id*)arg4 ;
-(void)createZonePCSFromData:(id)arg1 usingServiceIdentityWithType:(unsigned long long)arg2 zonePCSModificationDate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)synchronizeQueue;
-(CKDPCSIdentityManager *)identityManager;
-(void)setBoundaryKeyData:(NSData *)arg1 ;
-(NSMutableSet *)missingIdentityPublicKeys;
-(NSMutableSet *)undecryptablePCSDataHashes;
-(NSMutableSet *)servicesWithMissingIdentities;
-(NSObject*<OS_dispatch_source>)pcsUpdateSource;
-(PCSIdentityDataRef)debugSharingIdentity;
-(void)_onSynchronizeQueue:(/*^block*/id)arg1 ;
-(id)copyPublicKeyForService:(unsigned long long)arg1 withError:(id*)arg2 ;
-(id)copyAllPublicKeysForService:(unsigned long long)arg1 withError:(id*)arg2 ;
-(id<CKDContainerScopedUserIDProvider>)containerScopedUserIDProvider;
-(id)copyDiversifiedPublicKeyForService:(unsigned long long)arg1 withError:(id*)arg2 ;
-(PCSIdentityDataRef)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)arg1 publicSharingIdentity:(id)arg2 ;
-(OpaquePCSShareProtectionRef)createSharePCSFromData:(id)arg1 sharingIdentity:(PCSIdentityDataRef)arg2 error:(id*)arg3 ;
-(PCSPublicIdentityDataRef)createPublicSharingIdentityFromPublicKey:(id)arg1 error:(id*)arg2 ;
-(id)addPublicIdentity:(PCSPublicIdentityDataRef)arg1 toSharePCS:(OpaquePCSShareProtectionRef)arg2 permission:(unsigned long long)arg3 ;
-(id)removeSharingIdentity:(PCSIdentityDataRef)arg1 fromSharePCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)dataFromSharePCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(OpaquePCSShareProtectionRef)createSharePCSFromData:(id)arg1 ofType:(unsigned long long)arg2 withService:(unsigned long long)arg3 error:(id*)arg4 ;
-(PCSIdentityDataRef)createSharingIdentityFromData:(id)arg1 error:(id*)arg2 ;
-(id)_addIdentity:(PCSIdentitySetDataRef)arg1 withService:(unsigned long long)arg2 toPCS:(OpaquePCSShareProtectionRef)arg3 ;
-(BOOL)_checkAndClearPCSTestOverrideForKey:(id)arg1 ;
-(void)sendCoreAnalyticsEventForKeySync:(id)arg1 ;
-(void)_locked_createZonePCSWithSyncKeyRegistryRetry:(BOOL)arg1 keySyncAnalytics:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)synchronizeUserKeyRegistryForServiceType:(unsigned long long)arg1 shouldThrottle:(BOOL)arg2 context:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)createZonePCSWithSyncKeyRegistryRetry:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_pcsObjectKindForCKDPCSBlobType:(unsigned long long)arg1 ;
-(BOOL)isPreviouslyUndecryptablePCS:(id)arg1 ;
-(NSString *)responsibleBundleID;
-(BOOL)_checkUnitTestOverridesForDecryptionFailuresWithState:(BOOL)arg1 shouldRetry:(BOOL*)arg2 error:(id*)arg3 ;
-(void)_locked_markMissingIdentitiesFromFailedDecryptError:(CFErrorRef)arg1 serviceName:(id)arg2 ;
-(void)_locked_createPCSFromData:(id)arg1 ofType:(unsigned long long)arg2 usingPCSServiceType:(unsigned long long)arg3 withSyncKeyRegistryRetry:(BOOL)arg4 zonePCSModificationDate:(id)arg5 keySyncAnalytics:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)markUndecryptablePCS:(id)arg1 ;
-(BOOL)serviceTypeIsManatee:(unsigned long long)arg1 ;
-(void)_createPCSFromData:(id)arg1 ofType:(unsigned long long)arg2 usingPCSServiceType:(unsigned long long)arg3 withSyncKeyRegistryRetry:(BOOL)arg4 zonePCSModificationDate:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_locked_preflightIdentitiesForService:(unsigned long long)arg1 withSyncKeyRegistryRetry:(BOOL)arg2 keySyncAnalytics:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(OpaquePCSShareProtectionRef)_copyShareProtectionFromExportedData:(id)arg1 ofType:(unsigned long long)arg2 identities:(PCSIdentitySetDataRef)arg3 error:(_CFError*)arg4 ;
-(BOOL)zonePCSNeedsKeyRolled:(OpaquePCSShareProtectionRef)arg1 bypassWhitelistedContainers:(BOOL)arg2 ;
-(BOOL)_isKeyRollingUnitTestContainerID:(id)arg1 ;
-(BOOL)_isWhitelistedKeyRollingContainerID:(id)arg1 ;
-(id)addIdentityForService:(unsigned long long)arg1 toPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)rollMasterKeyForRecordPCS:(OpaquePCSShareProtectionRef)arg1 bypassWhitelistedContainers:(BOOL)arg2 ;
-(BOOL)canRollShareKeys;
-(BOOL)removeSharePCS:(OpaquePCSShareProtectionRef)arg1 fromRecordPCS:(OpaquePCSShareProtectionRef)arg2 error:(id*)arg3 ;
-(id)rollIdentityForSharePCS:(OpaquePCSShareProtectionRef)arg1 removeAllExistingPrivateKeys:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)addSharePCS:(OpaquePCSShareProtectionRef)arg1 toRecordPCS:(OpaquePCSShareProtectionRef)arg2 error:(id*)arg3 ;
-(id)updateZoneIdentityForPCS:(OpaquePCSShareProtectionRef)arg1 usingZonePCS:(OpaquePCSShareProtectionRef)arg2 bypassWhitelistedContainers:(BOOL)arg3 ;
-(id)removePrivateKeysForKeyIDs:(id)arg1 fromPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(OpaquePCSShareProtectionRef)createPCSObjectFromData:(id)arg1 ofType:(unsigned long long)arg2 sharedToPCS:(OpaquePCSShareProtectionRef)arg3 logFailure:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)addSharePCS:(OpaquePCSShareProtectionRef)arg1 toRecordPCS:(OpaquePCSShareProtectionRef)arg2 permission:(unsigned long long)arg3 error:(id*)arg4 ;
-(OpaquePCSShareProtectionRef)createEmptySharePCSOfType:(unsigned long long)arg1 error:(id*)arg2 ;
-(OpaquePCSShareProtectionRef)_addPublicIdentityForService:(unsigned long long)arg1 toSharePCS:(OpaquePCSShareProtectionRef)arg2 withError:(id*)arg3 ;
-(OpaquePCSShareProtectionRef)createSharePCSFromData:(id)arg1 sharingIdentity:(PCSIdentityDataRef)arg2 logFailure:(BOOL)arg3 error:(id*)arg4 ;
-(OpaquePCSShareProtectionRef)createSharePCSFromData:(id)arg1 ofType:(unsigned long long)arg2 withService:(unsigned long long)arg3 logFailure:(BOOL)arg4 error:(id*)arg5 ;
-(void)_locked_decryptPCSDataOnSharePCS:(id)arg1 withPublicSharingKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(OpaquePCSShareProtectionRef)createSharePCSFromData:(id)arg1 sharePrivateKey:(id)arg2 error:(id*)arg3 ;
-(void)_locked_decryptCurrentPerParticipantPCSDataOnSharePCS:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pcsDataFromFetchedShare:(id)arg1 withServiceType:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_locked_pcsDataFromFetchedShare:(id)arg1 withPublicSharingKey:(id)arg2 withServiceType:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(OpaquePCSShareProtectionRef)createSharePCSOfType:(unsigned long long)arg1 forPCSServiceType:(unsigned long long)arg2 error:(id*)arg3 ;
-(OpaquePCSShareProtectionRef)createEmptySignedSharePCSOfType:(unsigned long long)arg1 forPCSServiceType:(unsigned long long)arg2 withError:(id*)arg3 ;
-(id)addSharingIdentity:(PCSIdentityDataRef)arg1 toSharePCS:(OpaquePCSShareProtectionRef)arg2 permission:(unsigned long long)arg3 ;
-(OpaquePCSShareProtectionRef)createSharePublicPCSWithIdentity:(PCSIdentityDataRef)arg1 error:(id*)arg2 ;
-(id)removePublicIdentity:(PCSPublicIdentityDataRef)arg1 fromSharePCS:(OpaquePCSShareProtectionRef)arg2 ;
-(OpaquePCSShareProtectionRef)createSharePCSFromEncryptedData:(id)arg1 error:(id*)arg2 ;
-(BOOL)containerSupportsEnhancedContext;
-(id)referenceIdentifierStringFromAssetKey:(id)arg1 ;
-(id)referenceSignatureFromAssetKey:(id)arg1 ;
-(id)unwrapEncryptedData:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 withContextString:(id)arg3 ;
-(void)triggerAutoSysdiagnoseIfNecessaryForError:(id)arg1 encryptedData:(id)arg2 pcs:(OpaquePCSShareProtectionRef)arg3 ;
-(id)_unwrapEncryptedData:(id)arg1 usingKeyID:(id)arg2 forPCS:(OpaquePCSShareProtectionRef)arg3 withContextString:(id)arg4 ;
-(id)wrapEncryptedData:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 withContextString:(id)arg3 ;
-(NSData *)boundaryKeyData;
-(void)_lockedBoundaryKeyDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)pcsTestOverrides;
-(void)setPcsTestOverrides:(NSMutableDictionary *)arg1 ;
-(BOOL)isSiloed;
-(BOOL)_checkPCSTestOverrideForKey:(id)arg1 ;
-(id)_pcsTestOverrideForKey:(id)arg1 ;
-(BOOL)sharingFingerprintsContainPublicKeyWithData:(id)arg1 error:(id*)arg2 ;
-(NSDate *)lastMissingManateeIdentityErrorDateForCurrentService;
-(unsigned long long)publicKeyVersionForServiceType:(unsigned long long)arg1 ;
-(NSString *)pcsServiceName;
-(PCSPublicIdentityDataRef)copyDiversifiedIdentityForService:(unsigned long long)arg1 withError:(id*)arg2 ;
-(id)participantPublicKeyForServiceType:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)createProtectionInfoFromOONPrivateKey:(id)arg1 privateToken:(id)arg2 OONProtectionInfo:(id)arg3 error:(id*)arg4 ;
-(BOOL)canDecryptInvitedProtectionData:(id)arg1 participantProtectionInfo:(id)arg2 serviceType:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)createZonePCSWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)availableIdentityForService:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)preflightIdentitiesForService:(unsigned long long)arg1 withSyncKeyRegistryRetry:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)etagFromZonePCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(id)repairZonePCSData:(id)arg1 error:(id*)arg2 ;
-(BOOL)zonePCSNeedsKeyRolled:(OpaquePCSShareProtectionRef)arg1 ;
-(BOOL)zonePCSNeedsUpdate:(OpaquePCSShareProtectionRef)arg1 ;
-(id)updateServiceIdentityOnZonePCS:(OpaquePCSShareProtectionRef)arg1 ;
-(id)rollMasterKeyForRecordPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(id)updateIdentityAndRollKeyForZonePCS:(OpaquePCSShareProtectionRef)arg1 usingServiceIdentityWithType:(unsigned long long)arg2 ;
-(id)keyRollForZoneWideShareWithZonePCS:(id)arg1 sharePCS:(id)arg2 ;
-(id)keyRollIfNeededForPerRecordPCS:(id)arg1 ;
-(id)keyRollForZoneWideShareRecordPCS:(id)arg1 sharedZonePCS:(id)arg2 sharePCS:(id)arg3 ;
-(OpaquePCSShareProtectionRef)createRecordPCSWithEncryptedZonePCS:(CFDataRef)arg1 sharePCS:(OpaquePCSShareProtectionRef)arg2 createLite:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)updateSigningIdentityOnPCS:(OpaquePCSShareProtectionRef)arg1 usingSignedPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)etagFromRecordPCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(void)setOwnerIdentity:(PCSPublicIdentityDataRef)arg1 onPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(OpaquePCSShareProtectionRef)createChainPCSWithError:(id*)arg1 ;
-(id)publicKeyDataFromPCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(void)decryptPCSDataOnSharePCS:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pcsDataFromFetchedShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(PCSPublicIdentityDataRef)copyPublicAuthorshipIdentityFromPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(id)createNewSharePCSDataForShareWithID:(id)arg1 withPublicSharingKey:(id)arg2 addDebugIdentity:(BOOL)arg3 error:(id*)arg4 ;
-(id)etagFromSharePCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(id)addIdentityBackToPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(id)removeEncryptedPCS:(id)arg1 fromSharePCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)removePublicKeyID:(id)arg1 fromPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)sharingIdentityDataFromPCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(id)decryptChainPCSForRecordPCS:(id)arg1 ;
-(id)unwrapAssetKey:(id)arg1 withRecordPCS:(OpaquePCSShareProtectionRef)arg2 inContext:(id)arg3 withError:(id*)arg4 ;
-(id)wrapAssetKey:(id)arg1 withRecordPCS:(OpaquePCSShareProtectionRef)arg2 inContext:(id)arg3 withError:(id*)arg4 ;
-(id)newAssetKeyWithType:(unsigned long long)arg1 withError:(id*)arg2 ;
-(void)setLastMissingManateeIdentityErrorDateForCurrentService:(NSDate *)arg1 ;
-(void)setMissingIdentityPublicKeys:(NSMutableSet *)arg1 ;
-(void)setServicesWithMissingIdentities:(NSMutableSet *)arg1 ;
-(void)setUndecryptablePCSDataHashes:(NSMutableSet *)arg1 ;
-(void)setPcsUpdateSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setSynchronizeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

