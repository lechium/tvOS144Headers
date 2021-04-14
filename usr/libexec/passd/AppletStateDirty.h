//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AppletStateDirty : SQLiteEntity
{
}

+ (id)_predicateForPaymentApplications:(id)arg1;	// IMP=0x00000001002051a8
+ (id)_predicateForSetOfAppletStateDirtyPIDs:(id)arg1;	// IMP=0x0000000100205188
+ (id)_predicateForAppletStateDirtyPID:(long long)arg1;	// IMP=0x0000000100205114
+ (id)_predicateForPaymentApplication:(id)arg1;	// IMP=0x0000000100205088
+ (id)_predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000100205068
+ (id)_predicateForTransitAppletStatesDirty:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100204fd8
+ (id)_predicateForTransitAppletStateDirty:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100204ea8
+ (id)_propertySettersForAppletStateDirty;	// IMP=0x0000000100204cfc
+ (id)dirtyAppletStatesInDatabase:(id)arg1;	// IMP=0x0000000100204978
+ (id)dirtyAppletStatesInDatabase:(id)arg1 fromSetOfTransitAppletStatesDirty:(id)arg2;	// IMP=0x0000000100204764
+ (id)anyInDatabase:(id)arg1 forTransitAppletStateDirty:(id)arg2;	// IMP=0x00000001002046d4
+ (long long)countInDatabase:(id)arg1;	// IMP=0x00000001002046c4
+ (void)deleteEntitiesForAppletState:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010020460c
+ (void)deleteEntitiesForSetOfAppletStates:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100204554
+ (void)deleteEntitiesForSetOfAppletStateDirtyPIDs:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001002044a0
+ (void)deleteEntitiesForAppletStateDirtyPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100204400
+ (id)insertOrUpdateAppletStateDirtyForPassUniqueIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100204364
+ (id)insertAppletStateDirtyForPassUniqueIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001002042f0
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x0000000100204228
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001002041f0
+ (id)databaseTable;	// IMP=0x00000001002041e4
- (id)dirtyAppletState;	// IMP=0x0000000100204bc4
- (long long)paymentApplicationPID;	// IMP=0x0000000100204b70
- (id)passUniqueIdentifier;	// IMP=0x0000000100204b5c
- (id)initWithTransitAppletStateDirty:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100204030

@end

