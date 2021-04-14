//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PassType : SQLiteEntity
{
}

+ (id)anyInDatabase:(id)arg1 withPassTypeIdentifierHash:(id)arg2;	// IMP=0x0000000100163588
+ (id)anyInDatabase:(id)arg1 withPassTypeID:(id)arg2;	// IMP=0x00000001001634fc
+ (id)_passTypeIdentifierHashPredicate:(id)arg1;	// IMP=0x00000001001634dc
+ (id)_passTypeIDPredicate:(id)arg1;	// IMP=0x00000001001634bc
+ (id)insertPassTypeWithPassTypeID:(id)arg1 teamID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010016342c
+ (id)_insertionDictionaryWithPassTypeID:(id)arg1 teamID:(id)arg2;	// IMP=0x0000000100162fa0
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x0000000100162ec4
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100162e6c
+ (id)databaseTable;	// IMP=0x0000000100162e60
- (void)updateIdentifierHash;	// IMP=0x0000000100163364
- (void)updateFrequencyScore:(double)arg1;	// IMP=0x0000000100163308
- (void)updateLastUpdateDate:(id)arg1;	// IMP=0x00000001001632f4
- (void)updateLastPushDate:(id)arg1;	// IMP=0x00000001001632e0
- (id)identifierHash;	// IMP=0x00000001001632cc
- (id)teamID;	// IMP=0x00000001001632b8
- (id)passTypeID;	// IMP=0x00000001001632a4
- (double)frequencyScore;	// IMP=0x0000000100163248
- (id)lastUpdateDate;	// IMP=0x00000001001631f4
- (id)lastPushDate;	// IMP=0x00000001001631a0
- (id)initWithPassTypeID:(id)arg1 teamID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001630d8

@end
