//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface CloudStoreZone : SQLiteEntity
{
}

+ (id)_propertySettersForCloudStoreZone;	// IMP=0x00000001001e4b58
+ (id)_cloudStoreZonesWithQuery:(id)arg1;	// IMP=0x00000001001e45c8
+ (id)cloudStoreZonesForContainerDatabase:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001e44e8
+ (id)fetchTimestampForCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001e43d4
+ (id)tokenDataForCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001e42d8
+ (id)_predicateForDatabasePID:(long long)arg1;	// IMP=0x00000001001e4264
+ (id)_predicateForZoneName:(id)arg1;	// IMP=0x00000001001e4244
+ (id)_predicateForZoneName:(id)arg1 forContainerDatabase:(id)arg2;	// IMP=0x00000001001e40ec
+ (void)deleteEntitiesForCloudStoreDatabase:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001e4024
+ (void)removeCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001e3ec4
+ (id)_cloudStoreZoneWithName:(id)arg1 containerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001e3dfc
+ (void)updateChangeToken:(id)arg1 fetchTimestamp:(id)arg2 forCloudStoreZone:(id)arg3 inContainerDatabase:(id)arg4 inDatabase:(id)arg5;	// IMP=0x00000001001e3a50
+ (id)insertOrUpdateCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001e3940
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001001e3908
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00000001001e38a0
+ (id)databaseTable;	// IMP=0x00000001001e3894
- (id)_commonDictionaryForCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2;	// IMP=0x00000001001e49c0
- (id)cloudStoreZone;	// IMP=0x00000001001e47cc
- (_Bool)deleteFromDatabase;	// IMP=0x00000001001e3f9c
- (void)updateWithShareParticipants:(id)arg1;	// IMP=0x00000001001e3d7c
- (void)updateWithCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2;	// IMP=0x00000001001e3cb4
- (id)initWithCloudStoreZone:(id)arg1 forContainerDatabase:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001e3ba4

@end

