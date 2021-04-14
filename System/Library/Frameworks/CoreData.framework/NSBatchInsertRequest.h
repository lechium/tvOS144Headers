/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>

@class NSArray, NSString, NSEntityDescription;

@interface NSBatchInsertRequest : NSPersistentStoreRequest {

	id _entity;
	NSArray* _objectsToInsert;
	/*^block*/id _insertDictionaryHandler;
	/*^block*/id _insertManagedObjectHandler;
	struct {
		unsigned resultType : 2;
		unsigned entityIsName : 1;
		unsigned secureOperation : 1;
		unsigned _RESERVED : 28;
	}  _flags;

}

@property (copy,readonly) NSString * entityName; 
@property (readonly) NSEntityDescription * entity; 
@property (copy) NSArray * objectsToInsert;                     //@synthesize objectsToInsert=_objectsToInsert - In the implementation block
@property (copy) id dictionaryHandler; 
@property (copy) id managedObjectHandler; 
@property (assign) unsigned long long resultType; 
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
+(id)stringForResultType:(unsigned long long)arg1 ;
+(id)batchInsertRequestWithEntityName:(id)arg1 objects:(id)arg2 ;
+(id)batchInsertRequestWithEntityName:(id)arg1 dictionaryHandler:(/*^block*/id)arg2 ;
+(id)batchInsertRequestWithEntityName:(id)arg1 managedObjectHandler:(/*^block*/id)arg2 ;
+(id)shortStringForResultType:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)resultType;
-(NSString *)entityName;
-(id)encodeForXPC;
-(NSArray *)objectsToInsert;
-(BOOL)_secureOperation;
-(id)initWithEntityName:(id)arg1 objects:(id)arg2 ;
-(void)setResultType:(unsigned long long)arg1 ;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(NSEntityDescription *)entity;
-(void)_resolveEntityWithSQLCore:(id)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(unsigned long long)requestType;
-(id)initWithEntityName:(id)arg1 dictionaryHandler:(/*^block*/id)arg2 ;
-(id)initWithEntityName:(id)arg1 managedObjectHandler:(/*^block*/id)arg2 ;
-(id)initWithEntity:(id)arg1 objects:(id)arg2 ;
-(id)initWithEntity:(id)arg1 dictionaryHandler:(/*^block*/id)arg2 ;
-(id)initWithEntity:(id)arg1 managedObjectHandler:(/*^block*/id)arg2 ;
-(id)dictionaryHandler;
-(void)setDictionaryHandler:(id)arg1 ;
-(id)managedObjectHandler;
-(void)setManagedObjectHandler:(id)arg1 ;
-(void)setObjectsToInsert:(NSArray *)arg1 ;
@end

