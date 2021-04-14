//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface Beacon : SQLiteEntity
{
}

+ (id)_propertySettersForBeacon;	// IMP=0x00000001001f7f50
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001f7e9c
+ (id)beaconsInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x00000001001f7e0c
+ (id)beaconsInDatabase:(id)arg1 forPass:(id)arg2;	// IMP=0x00000001001f7d80
+ (id)_predicateForPass:(id)arg1;	// IMP=0x00000001001f7d44
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x00000001001f7cd0
+ (id)_beaconsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00000001001f7ad0
+ (void)insertBeacons:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001f7958
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001001f76c4
+ (id)databaseTable;	// IMP=0x00000001001f76b8
- (id)initWithBeacon:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001f76fc

@end

