//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLPrequeliteStorage.h"

#import "CPLEngineQuarantinedRecordsImplementation-Protocol.h"

@class NSString;

@interface CPLPrequeliteQuarantinedRecords : CPLPrequeliteStorage <CPLEngineQuarantinedRecordsImplementation>
{
}

- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x0000000100060a98
- (unsigned long long)countOfQuarantinedRecordsInScopeWithIdentifier:(id)arg1;	// IMP=0x00000001000609ac
- (unsigned long long)countOfQuarantinedRecords;	// IMP=0x0000000100060928
- (Class)classForQuarantinedRecordWithScopedIdentifier:(id)arg1;	// IMP=0x00000001000607c4
- (_Bool)isRecordWithScopedIdentifierQuarantined:(id)arg1;	// IMP=0x000000010006068c
- (_Bool)removeQuarantinedRecordWithScopedIdentifier:(id)arg1 removed:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x00000001000604d8
- (_Bool)addQuarantinedRecordWithScopedIdentifier:(id)arg1 recordClass:(Class)arg2 reason:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000602ec
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x000000010005febc
- (_Bool)initializeStorage;	// IMP=0x000000010005fe30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly) Class superclass;

@end

