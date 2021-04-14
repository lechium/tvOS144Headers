/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSPersistentStore.h>

@class NSPersistentStoreMap, NSSet;

@interface NSMappedObjectStore : NSPersistentStore {

	NSPersistentStoreMap* _theMap;
	NSSet* _entitiesToFetch;

}
+(id)metadataForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)init;
-(void)dealloc;
-(id)identifier;
-(id)dataForKey:(id)arg1 ;
-(id)metadata;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)_rawMetadata__;
-(void)setMetadata:(id)arg1 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 withContext:(id)arg2 ;
-(id)executeSaveChangesRequest:(id)arg1 withContext:(id)arg2 ;
-(id)executeCountRequest:(id)arg1 withContext:(id)arg2 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(void)_setMap:(id)arg1 ;
-(id)_theMap;
-(void)saveDocumentToPath:(id)arg1 ;
-(id)getNewIDForObject:(id)arg1 ;
-(void)_addObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)_removeObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)_updateObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)save;
-(id)_pathFromURI:(id)arg1 ;
@end

