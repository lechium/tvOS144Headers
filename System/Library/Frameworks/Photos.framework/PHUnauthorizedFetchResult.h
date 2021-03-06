/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHFetchResult.h>

@class PHFetchOptions, NSArray, NSOrderedSet, NSString;

@interface PHUnauthorizedFetchResult : PHFetchResult {

	/*^block*/id _fetchBlock;
	PHFetchOptions* _options;
	NSArray* _objects;
	NSOrderedSet* _objectIDs;
	NSString* _identifier;

}

@property (copy,readonly) id fetchBlock;                         //@synthesize fetchBlock=_fetchBlock - In the implementation block
@property (copy,readonly) PHFetchOptions * options;              //@synthesize options=_options - In the implementation block
@property (readonly) NSArray * objects;                          //@synthesize objects=_objects - In the implementation block
@property (readonly) NSOrderedSet * objectIDs;                   //@synthesize objectIDs=_objectIDs - In the implementation block
@property (readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(PHFetchOptions *)options;
-(id)fetchRequest;
-(id)containerIdentifier;
-(id)fetchedObjects;
-(NSArray *)objects;
-(id)photoLibrary;
-(NSOrderedSet *)objectIDs;
-(long long)collectionFetchType;
-(void)prefetchObjectsAtIndexes:(id)arg1 ;
-(id)copyWithOptions:(id)arg1 ;
-(id)changeHandlingKey;
-(id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3 ;
-(id)fetchSortDescriptors;
-(id)fetchedObjectIDs;
-(id)objectIDAtIndex:(unsigned long long)arg1 ;
-(void)updateRegistrationForChangeNotificationDeltas;
-(unsigned long long)possibleChangesForChange:(id)arg1 ;
-(id)fetchResultWithChangeHandlingValue:(id)arg1 ;
-(void)getMediaTypeCounts;
-(BOOL)isFullyBackedByObjectIDs;
-(id)initWithOptions:(id)arg1 status:(long long)arg2 fetchBlock:(/*^block*/id)arg3 ;
-(id)fetchBlock;
@end

