//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

#import "CPLEngineStorageImplementation-Protocol.h"

@class CPLPrequeliteTable, NSString;

@interface CPLPrequeliteStorage : CPLPlatformObject <CPLEngineStorageImplementation>
{
    CPLPrequeliteTable *_nameTable;	// 8 = 0x8
    CPLPrequeliteTable *_mainTable;	// 16 = 0x10
    CPLPrequeliteTable *_tempTable;	// 24 = 0x18
    _Bool _initializingStorage;	// 32 = 0x20
    _Bool _initializeSuperWasCalled;	// 33 = 0x21
    _Bool _superWasCalled;	// 34 = 0x22
    _Bool _shouldUpgradeSchema;	// 35 = 0x23
}

- (void).cxx_destruct;	// IMP=0x000000010002b734
@property(readonly, nonatomic) _Bool shouldUpgradeSchema; // @synthesize shouldUpgradeSchema=_shouldUpgradeSchema;
- (_Bool)recreateMainTableWithCopyInstructions:(id)arg1 oldFields:(id)arg2 error:(id *)arg3;	// IMP=0x000000010002add8
- (_Bool)isCloudScopeIndexValid:(long long)arg1;	// IMP=0x000000010002ad5c
- (_Bool)isLocalScopeIndexValid:(long long)arg1;	// IMP=0x000000010002ace0
- (id)scopedIdentifierForCloudIdentifier:(id)arg1 scopeIndex:(long long)arg2;	// IMP=0x000000010002ac18
- (id)scopedIdentifierForLocalIdentifier:(id)arg1 scopeIndex:(long long)arg2;	// IMP=0x000000010002ab50
- (id)filterForExcludedScopeIdentifiers:(id)arg1;	// IMP=0x000000010002aad0
- (id)filterForIncludedScopeIdentifiers:(id)arg1;	// IMP=0x000000010002aa50
- (long long)stableScopeIndexForScopeIdentifier:(id)arg1;	// IMP=0x000000010002a9d8
- (long long)cloudScopeIndexForScopeIdentifier:(id)arg1;	// IMP=0x000000010002a960
- (long long)localScopeIndexForScopeIdentifier:(id)arg1;	// IMP=0x000000010002a8e8
- (long long)scopeIndexForCloudScopedIdentifier:(id)arg1;	// IMP=0x000000010002a840
- (long long)scopeIndexForLocalScopedIdentifier:(id)arg1;	// IMP=0x000000010002a798
- (id)_scopes;	// IMP=0x000000010002a71c
- (_Bool)_checkSuperWasCalled;	// IMP=0x000000010002a704
- (id)statusPerScopeIndexWithGroupProperty:(id)arg1 valueDescription:(CDUnknownBlockType)arg2;	// IMP=0x000000010002a440
- (id)statusPerScopeIndex;	// IMP=0x000000010002a434
- (id)_statusPerScopeIndex;	// IMP=0x000000010002a1f0
- (id)additionalStatusForScopeWithIndex:(long long)arg1 baseRecordCount:(long long)arg2;	// IMP=0x000000010002a1e8
- (id)scopeIndexColumnName;	// IMP=0x000000010002a1dc
- (id)statusDictionary;	// IMP=0x000000010002a0bc
- (id)status;	// IMP=0x0000000100029fdc
- (id)recordsDesignation;	// IMP=0x0000000100029fd0
@property(readonly, nonatomic) _Bool isEmpty;
- (void)transactionDidFinish;	// IMP=0x0000000100029f38
- (void)writeTransactionDidSucceed;	// IMP=0x0000000100029f24
- (void)writeTransactionDidFail;	// IMP=0x0000000100029f10
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x0000000100029ef8
- (_Bool)openWithError:(id *)arg1;	// IMP=0x0000000100029ee0
- (_Bool)resetValueForVariable:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100029d7c
- (id)valueForVariable:(id)arg1;	// IMP=0x0000000100029c18
- (_Bool)setValue:(id)arg1 forVariable:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100029a90
- (_Bool)createVariable:(id)arg1 defaultValue:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000296a8
- (id)variableWithName:(id)arg1 defaultValue:(id)arg2 type:(id)arg3;	// IMP=0x0000000100029530
- (id)variableWithName:(id)arg1 type:(id)arg2;	// IMP=0x00000001000294c8
- (_Bool)dropIndexWithName:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000292d0
- (_Bool)createIndexOnColumn:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100029220
- (_Bool)createIndexWithName:(id)arg1 withDefinition:(id)arg2 unique:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000100029134
- (_Bool)createIndexOnColumnVariable:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000290ac
- (_Bool)createIndex:(id)arg1 withDefinition:(id)arg2 unique:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000100028cc4
- (_Bool)addColumnVariableGroup:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100028b78
- (_Bool)addColumnVariable:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100028784
- (id)columnVariableWithName:(id)arg1 defaultValue:(id)arg2 type:(id)arg3;	// IMP=0x0000000100028704
- (id)columnVariableWithName:(id)arg1 type:(id)arg2;	// IMP=0x00000001000286a8
- (_Bool)createMainTableWithDefinition:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000284a0
- (_Bool)createMainTableWithColumnVariables:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000282a8
- (id)mainTable;	// IMP=0x0000000100028298
- (_Bool)fixStorageAfterAnyVersionChange;	// IMP=0x0000000100028290
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00000001000281d0
- (_Bool)initializeStorage;	// IMP=0x0000000100027fc4
- (_Bool)createStorage;	// IMP=0x0000000100027f74
- (void)_afterInitializeStorage;	// IMP=0x0000000100027e64
- (void)_beforeInitializeStorage;	// IMP=0x0000000100027e50
- (id)engineLibrary;	// IMP=0x0000000100027dd4
- (id)pqStore;	// IMP=0x0000000100027d58
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0000000100027c68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

