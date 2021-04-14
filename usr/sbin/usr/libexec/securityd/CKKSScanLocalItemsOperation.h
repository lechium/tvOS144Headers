//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSResultOperation.h"

#import "OctagonStateTransitionOperationProtocol-Protocol.h"

@class CKKSKeychainView, CKKSOperationDependencies, CKOperationGroup, NSString;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface CKKSScanLocalItemsOperation : CKKSResultOperation <OctagonStateTransitionOperationProtocol>
{
    _Bool _newCKKSEntries;	// 8 = 0x8
    NSString<OctagonStateString> *_nextState;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
    CKOperationGroup *_ckoperationGroup;	// 32 = 0x20
    CKKSOperationDependencies *_deps;	// 40 = 0x28
    CKKSKeychainView *_ckks;	// 48 = 0x30
    unsigned long long _recordsFound;	// 56 = 0x38
    unsigned long long _recordsAdded;	// 64 = 0x40
    unsigned long long _missingLocalItemsFound;	// 72 = 0x48
    unsigned long long _processedItems;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000a36a8
@property _Bool newCKKSEntries; // @synthesize newCKKSEntries=_newCKKSEntries;
@property unsigned long long processedItems; // @synthesize processedItems=_processedItems;
@property unsigned long long missingLocalItemsFound; // @synthesize missingLocalItemsFound=_missingLocalItemsFound;
@property unsigned long long recordsAdded; // @synthesize recordsAdded=_recordsAdded;
@property unsigned long long recordsFound; // @synthesize recordsFound=_recordsFound;
@property __weak CKKSKeychainView *ckks; // @synthesize ckks=_ckks;
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) CKOperationGroup *ckoperationGroup; // @synthesize ckoperationGroup=_ckoperationGroup;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (_Bool)areEquivalent:(struct SecDbItem *)arg1 ckksItem:(id)arg2;	// IMP=0x00000001000a3100
- (void)main;	// IMP=0x00000001000a28e8
- (void)retriggerMissingMirrorEntires:(id)arg1 ckks:(id)arg2 databaseProvider:(id)arg3;	// IMP=0x00000001000a2728
- (void)fixUUIDlessItemsWithPrimaryKeys:(id)arg1 databaseProvider:(id)arg2;	// IMP=0x00000001000a2554
- (void)onboardItemsWithUUIDs:(id)arg1 itemClass:(id)arg2 databaseProvider:(id)arg3;	// IMP=0x00000001000a22b4
- (_Bool)onboardItemToCKKS:(struct SecDbItem *)arg1 error:(id *)arg2;	// IMP=0x00000001000a1edc
- (_Bool)executeQuery:(id)arg1 readWrite:(_Bool)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000001000a1b20
- (id)queryPredicatesForViewMapping;	// IMP=0x00000001000a0f90
- (id)initWithDependencies:(id)arg1 ckks:(id)arg2 intending:(id)arg3 errorState:(id)arg4 ckoperationGroup:(id)arg5;	// IMP=0x00000001000a0e30
- (id)init;	// IMP=0x00000001000a0e18

@end

