/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/TIUserModelDataStoring.h>

@protocol OS_dispatch_queue;
@class NSDate, NSString, NSObject;

@interface TIUserModelDataStore : NSObject <TIUserModelDataStoring> {

	NSString* _path;
	sqlite3Ref _user_model_db;
	BOOL _user_model_db_failed;
	NSObject*<OS_dispatch_queue> _database_queue;

}

@property (readonly) BOOL isValid; 
@property (readonly) int propertiesVersion; 
@property (readonly) int durableVersion; 
@property (readonly) int transientVersion; 
@property (readonly) NSDate * propertiesLastMigrationDate; 
@property (readonly) NSDate * durableLastMigrationDate; 
@property (readonly) NSDate * transientLastMigrationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)initializeDataStoreAtPath:(id)arg1 ;
-(void)dealloc;
-(BOOL)isValid;
-(id)initWithPath:(id)arg1 ;
-(id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3 ;
-(id)getAllValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3 ;
-(id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 fromDate:(id)arg3 toDate:(id)arg4 ;
-(BOOL)addValue:(id)arg1 andSecondaryValue:(id)arg2 andRealValue:(id)arg3 andProperties:(id)arg4 forKey:(id)arg5 forInputMode:(id)arg6 forDate:(id)arg7 ;
-(BOOL)purgeDataForKey:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3 ;
-(BOOL)purgeDataForKeyPrefix:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3 ;
-(id)getInputModesForKey:(id)arg1 ;
-(id)getAllKnownInputModes;
-(id)getAllKnownInputModesSinceDate:(id)arg1 ;
-(BOOL)updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3 ;
-(id)getDurableValueForKey:(id)arg1 ;
-(int)propertiesVersion;
-(int)durableVersion;
-(int)transientVersion;
-(NSDate *)propertiesLastMigrationDate;
-(NSDate *)durableLastMigrationDate;
-(NSDate *)transientLastMigrationDate;
-(BOOL)isDatabaseValid;
-(BOOL)createOrOpenDatabase;
-(BOOL)closeDatabase;
-(id)propertiesCreationSchema;
-(id)propertiesMigrationFromV1Schema;
-(id)durableResetSchema;
-(id)durableCreationSchema;
-(id)durableMigrationFromV2Schema;
-(id)durableMigrationFromV3Schema;
-(id)transientResetSchema;
-(id)transientCreationSchema;
-(int)propertiesVersionFromDatabase:(sqlite3Ref)arg1 ;
-(id)propertiesLastMigrationDateFromDatabase:(sqlite3Ref)arg1 ;
-(int)durableVersionFromDatabase:(sqlite3Ref)arg1 ;
-(id)durableLastMigrationDateFromDatabase:(sqlite3Ref)arg1 ;
-(int)transientVersionFromDatabase:(sqlite3Ref)arg1 ;
-(id)transientLastMigrationDateFromDatabase:(sqlite3Ref)arg1 ;
-(int)versionForKey:(id)arg1 fromDatabase:(sqlite3Ref)arg2 ;
-(id)lastMigrationDateForKey:(id)arg1 fromDatabase:(sqlite3Ref)arg2 ;
-(id)propertiesMigrationSchemaForDatabase:(sqlite3Ref)arg1 ;
-(id)durableMigrationSchemaForDatabase:(sqlite3Ref)arg1 ;
-(id)transientMigrationSchemaForDatabase:(sqlite3Ref)arg1 ;
-(BOOL)purgeDurableDataForKeyPrefix:(id)arg1 ;
@end
