//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCMSQLiteDB, MCMUserIdentityCache;
@protocol MCMManagedPath, OS_dispatch_queue;

@interface MCMCodeSigningMapping : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    MCMSQLiteDB *_codeSigningMappingDB;	// 16 = 0x10
    MCMUserIdentityCache *_userIdentityCache;	// 24 = 0x18
    id <MCMManagedPath> _library;	// 32 = 0x20
}

+ (id)systemGroupIdentifiersForIdentifier:(id)arg1 entitlements:(id)arg2;	// IMP=0x000000010004ad68
+ (id)appGroupIdentifiersForIdentifier:(id)arg1 entitlements:(id)arg2;	// IMP=0x000000010004ad04
+ (id)copyGroupEntitlementForIdentifier:(id)arg1 entitlements:(id)arg2 groupKey:(id)arg3;	// IMP=0x000000010004a93c
+ (id)codeSignMappingWithError:(id *)arg1;	// IMP=0x000000010004a52c
- (void).cxx_destruct;	// IMP=0x00000001000481f0
@property(readonly, nonatomic) id <MCMManagedPath> library; // @synthesize library=_library;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(retain, nonatomic) MCMSQLiteDB *codeSigningMappingDB; // @synthesize codeSigningMappingDB=_codeSigningMappingDB;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_onQueue_registerKernelProvidedReferencesForIdentifier:(id)arg1 withAppGroupContainers:(id)arg2 systemGroupContainers:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0000000100047a04
- (_Bool)registerKernelProvidedReferencesForIdentifier:(id)arg1 withAppGroupContainers:(id)arg2 systemGroupContainers:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0000000100047888
- (_Bool)_onQueue_removeAllAdvanceCopiesWithError:(id *)arg1;	// IMP=0x0000000100047800
- (_Bool)removeAllAdvanceCopiesWithError:(id *)arg1;	// IMP=0x0000000100047728
- (void)_onQueue_removeGroupContainersIfNeededforUserIdentity:(id)arg1 groupContainerClass:(unsigned long long)arg2 identifiers:(id)arg3 referenceCounts:(id)arg4 commandQueue:(id)arg5;	// IMP=0x000000010004734c
- (void)_onQueue_removeReferenceForGroupIdentifiers:(id)arg1 ofType:(long long)arg2 commandQueue:(id)arg3;	// IMP=0x0000000100047008
- (void)_onQueue_handleChangeFromOldGroupContainerIds:(id)arg1 toNewGroupContainerIds:(id)arg2 ofType:(long long)arg3 commandQueue:(id)arg4;	// IMP=0x0000000100046eb0
- (id)_onQueue_copyReferenceCountSetOfType:(long long)arg1;	// IMP=0x0000000100046db8
- (id)copyReferenceCountSetOfType:(long long)arg1;	// IMP=0x0000000100046cbc
- (_Bool)invalidateCodeSigningInfoForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100046bac
- (_Bool)invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100046a60
- (id)_onQueue_identifiersWithError:(id *)arg1;	// IMP=0x00000001000469d0
- (id)identifiersWithError:(id *)arg1;	// IMP=0x000000010004687c
- (unsigned long long)invalidateCodeSigningInfoForAppsWithoutBundleContainer;	// IMP=0x0000000100045fc0
- (id)entitlementsForIdentifier:(id)arg1;	// IMP=0x0000000100045a34
- (id)getCodeSigningInfoForIdentifier:(id)arg1;	// IMP=0x00000001000458e0
- (unsigned long long)processCodeSigningInfo:(id)arg1 forIdentifier:(id)arg2 withOptions:(id)arg3 commandQueue:(id)arg4;	// IMP=0x00000001000456f4
- (unsigned long long)processCallerRegisteredEntitlements:(id)arg1 forIdentifier:(id)arg2 commandQueue:(id)arg3;	// IMP=0x0000000100045378
- (id)systemGroupIdentifiersForIdentifier:(id)arg1;	// IMP=0x00000001000452e8
- (id)appGroupIdentifiersForIdentifier:(id)arg1;	// IMP=0x0000000100045258
- (unsigned long long)dataContainerTypeForIdentifier:(id)arg1;	// IMP=0x0000000100045154
- (_Bool)identifierHasSystemContainer:(id)arg1;	// IMP=0x00000001000450fc
- (_Bool)identifierHasCallerRegisteredEntitlements:(id)arg1;	// IMP=0x0000000100044ff8
- (id)codeSigningEntryForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100044ec4
- (id)parentIdentifierForChildIdentifier:(id)arg1;	// IMP=0x0000000100044d9c
- (id)childBundleIdentifiersForParentIdentifier:(id)arg1;	// IMP=0x0000000100044c74
- (void)removeCodeSigningDictionariesForIdentifierAndItsChildren:(id)arg1 commandQueue:(id)arg2;	// IMP=0x0000000100044940
- (void)_onQueue_iterateGroupIdsWithKey:(id)arg1 fallBackKey:(id)arg2 forAllIdentifiersUsingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000446dc
- (_Bool)_onQueue_invalidateCodeSigningInfoForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100044634
- (id)_onQueue_invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1;	// IMP=0x000000010004457c
- (unsigned long long)_onQueue_processCodeSigningInfo:(id)arg1 forIdentifier:(id)arg2 withOptions:(id)arg3 oldEntitlements:(id)arg4 commandQueue:(id)arg5;	// IMP=0x000000010004330c
- (unsigned long long)_onQueue_dataContainerTypeForIdentifier:(id)arg1;	// IMP=0x00000001000430ac
- (_Bool)_entitlementsHasSystemContainer:(id)arg1;	// IMP=0x0000000100043054
- (_Bool)_onQueue_identifierHasCallerRegisteredEntitlements:(id)arg1;	// IMP=0x0000000100042df4
- (id)_onQueue_codeSigningEntryForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100042ba0
- (id)_entitlementsFromCodeSigningEntry:(id)arg1;	// IMP=0x0000000100042b40
- (id)_onQueue_entitlementsForIdentifier:(id)arg1;	// IMP=0x0000000100042a88
- (id)_codeSigningInfoForCodeSigningEntry:(id)arg1 externalRequest:(_Bool)arg2;	// IMP=0x00000001000429dc
- (id)_onQueue_codeSigningInfoForIdentifier:(id)arg1 externalRequest:(_Bool)arg2;	// IMP=0x0000000100042760
- (id)_onQueue_parentIdentifierForChildIdentifier:(id)arg1;	// IMP=0x0000000100042524
- (id)_onQueue_childBundleIdentifiersForParentIdentifier:(id)arg1;	// IMP=0x00000001000422e8
- (id)_onQueue_setCodeSigningDictionaryValues:(id)arg1 forIdentifiers:(id)arg2;	// IMP=0x0000000100041b28
- (id)_readCodeSigningMappingFromDiskAtURL:(id)arg1;	// IMP=0x000000010004175c
- (void)performAllCodeSigningMigrationAndReconciliationWithCommandQueue:(id)arg1;	// IMP=0x0000000100041628
- (void)_onQueue_reconcileSystemContainersWithCommandQueue:(id)arg1;	// IMP=0x0000000100040ed4
- (void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainersToMappingWithContainers:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x000000010004056c
- (void)migrateCachedCodeSigningInfoFromBundleContainersToMapping;	// IMP=0x0000000100040264
- (void)_onQueue_migrateDataFromLegacyEntitlementsFileToCodeSigningFile;	// IMP=0x000000010003fa6c
- (void)_onQueue_migrateAppGroupIdsFromDataContainersToFileUsingContainers:(id)arg1;	// IMP=0x000000010003f0f8
- (void)migrateAppGroupIdsFromDataContainersToFile;	// IMP=0x000000010003ea9c
- (void)_onQueue_migrateFromMappingFileToDBIfNecessary;	// IMP=0x000000010003e4b0
- (id)initWithUserIdentityCache:(id)arg1 queue:(id)arg2 mappingDB:(id)arg3 library:(id)arg4;	// IMP=0x000000010003e368

@end
