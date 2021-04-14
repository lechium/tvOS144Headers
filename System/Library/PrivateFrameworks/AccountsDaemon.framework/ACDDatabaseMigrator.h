/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSURL, NSDictionary;

@interface ACDDatabaseMigrator : NSObject {

	NSManagedObjectContext* _migrationContext;
	NSPersistentStoreCoordinator* _privateCoordinator;
	NSURL* _databaseURL;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSDictionary* _storeOptions;

}

@property (nonatomic,readonly) NSURL * databaseURL;                                                    //@synthesize databaseURL=_databaseURL - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * storeOptions;                                       //@synthesize storeOptions=_storeOptions - In the implementation block
+(id)new;
-(id)init;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(NSURL *)databaseURL;
-(id)initForDatabaseAtURL:(id)arg1 persistentStoreCoordinator:(id)arg2 storeOptions:(id)arg3 ;
-(BOOL)runReturningError:(id*)arg1 ;
-(id)_setUpContextForMigration;
-(long long)_versionForModel:(id)arg1 ;
-(void)_migrateAccessAuthorizationsToTCCFromModelVersion:(long long)arg1 ;
-(void)_migrateNameAttributeOfDataclassEntities;
-(void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(long long)arg1 ;
-(void)_postProcessMigrationFromVersion:(long long)arg1 migrationData:(id)arg2 ;
-(id)_fetchAllAuthorizationEntitiesForModelVersion:(long long)arg1 ;
-(id)_fetchAllDataclassEntitles;
-(id)_compatibleModelForStoreAtURL:(id)arg1 ;
-(NSDictionary *)storeOptions;
@end

