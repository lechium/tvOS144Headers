//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLPrequeliteStorage.h"

#import "CPLEngineIDMappingImplementation-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface CPLPrequeliteIDMapping : CPLPrequeliteStorage <CPLEngineIDMappingImplementation>
{
    NSMutableDictionary *_localToCloudScopedIdentifiersCache;	// 8 = 0x8
    NSMutableDictionary *_cloudToLocalScopedIdentifiersCache;	// 16 = 0x10
    NSMutableSet *_nonFinalLocalScopedIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000481bc
- (void)transactionDidFinish;	// IMP=0x000000010004816c
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x0000000100048044
- (id)scopeIndexColumnName;	// IMP=0x0000000100048038
- (id)status;	// IMP=0x0000000100047edc
- (_Bool)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100047d60
- (_Bool)removeMappingForLocalScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100047b10
- (_Bool)addAddEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100047838
- (_Bool)addDeleteEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000010004765c
- (_Bool)removeMappingForCloudScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004740c
- (_Bool)hasPendingIdentifiers;	// IMP=0x0000000100047320
- (_Bool)markAllPendingIdentifiersForScopeWithIdentifier:(id)arg1 asFinalWithError:(id *)arg2;	// IMP=0x000000010004719c
- (_Bool)setFinalCloudScopedIdentifier:(id)arg1 forPendingCloudScopedIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100046f1c
- (_Bool)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(_Bool)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x00000001000468e8
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;	// IMP=0x00000001000465dc
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;	// IMP=0x00000001000462d0
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x0000000100046084
- (_Bool)initializeStorage;	// IMP=0x0000000100045fac
- (void)_cacheLocalScopedIdentifier:(id)arg1 cloudScopedIdentifier:(id)arg2 isFinal:(_Bool)arg3;	// IMP=0x0000000100045ee0
- (void)_clearScopedIdentifiersCache;	// IMP=0x0000000100045e84
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0000000100045dd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly) Class superclass;

@end
