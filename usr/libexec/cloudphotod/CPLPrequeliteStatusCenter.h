//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLPrequeliteStorage.h"

#import "CPLEngineStatusCenterImplementation-Protocol.h"

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteStatusCenter : CPLPrequeliteStorage <CPLEngineStatusCenterImplementation>
{
    CPLPrequeliteVariable *_generationVar;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100062288
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x0000000100062170
- (id)status;	// IMP=0x0000000100061dc8
- (_Bool)discardNotificationForRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100061c40
- (_Bool)acknowledgeChangedStatus:(id)arg1 hasBeenDeleted:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000100061a1c
- (id)statusChangesMaximumCount:(unsigned long long)arg1;	// IMP=0x00000001000618a0
- (id)statusForRecordWithScopedIdentifier:(id)arg1;	// IMP=0x00000001000616d8
- (_Bool)addStatus:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000614cc
- (_Bool)getNewGeneration:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000100061408
@property(readonly, nonatomic) _Bool hasStatusChanges;
- (_Bool)openWithError:(id *)arg1;	// IMP=0x0000000100061350
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x0000000100060f90
- (_Bool)initializeStorage;	// IMP=0x0000000100060e98
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0000000100060dec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly) Class superclass;

@end

