/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSPredicate, NSEntityDescription, NSString;

@interface NSFetchRequest : NSPersistentStoreRequest <NSSecureCoding, NSCoding> {

	NSArray* _groupByProperties;
	NSPredicate* _havingPredicate;
	id* _additionalPrivateIvars;
	NSArray* _valuesToFetch;
	NSEntityDescription* _entity;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	unsigned long long _batchSize;
	unsigned long long _fetchLimit;
	unsigned long long _allocationSize;
	NSArray* _relationshipKeyPathsForPrefetching;
	struct {
		unsigned distinctValuesOnly : 1;
		unsigned includesSubentities : 1;
		unsigned includesPropertyValues : 1;
		unsigned resultType : 3;
		unsigned returnsObjectsAsFaults : 1;
		unsigned excludePendingChanges : 1;
		unsigned isInUse : 1;
		unsigned entityIsName : 1;
		unsigned refreshesRefetched : 1;
		unsigned propertiesValidated : 1;
		unsigned expressionsValidated : 1;
		unsigned disableCaching : 1;
		unsigned allocationType : 3;
		unsigned batchLRUEntries : 4;
		unsigned asyncRequest : 1;
		unsigned _RESERVED : 10;
	}  _flags;

}

@property (nonatomic,retain) NSEntityDescription * entity; 
@property (nonatomic,readonly) NSString * entityName; 
@property (nonatomic,retain) NSPredicate * predicate; 
@property (nonatomic,retain) NSArray * sortDescriptors; 
@property (assign,nonatomic) unsigned long long fetchLimit; 
@property (nonatomic,retain) NSArray * affectedStores; 
@property (assign,nonatomic) unsigned long long resultType; 
@property (assign,nonatomic) BOOL includesSubentities; 
@property (assign,nonatomic) BOOL includesPropertyValues; 
@property (assign,nonatomic) BOOL returnsObjectsAsFaults; 
@property (nonatomic,copy) NSArray * relationshipKeyPathsForPrefetching; 
@property (assign,nonatomic) BOOL includesPendingChanges; 
@property (assign,nonatomic) BOOL returnsDistinctResults; 
@property (nonatomic,copy) NSArray * propertiesToFetch; 
@property (assign,nonatomic) unsigned long long fetchOffset; 
@property (assign,nonatomic) unsigned long long fetchBatchSize; 
@property (assign,nonatomic) BOOL shouldRefreshRefetchedObjects; 
@property (nonatomic,copy) NSArray * propertiesToGroupBy; 
@property (nonatomic,retain) NSPredicate * havingPredicate; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(BOOL)accessInstanceVariablesDirectly;
+(id)fetchRequestWithEntityName:(id)arg1 ;
+(id)_newDenormalizedFetchProperties:(id)arg1 ;
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(unsigned long long)resultType;
-(unsigned long long)allocationSize;
-(void)setHavingPredicate:(NSPredicate *)arg1 ;
-(void)setRelationshipKeyPathsForPrefetching:(NSArray *)arg1 ;
-(void)setFetchOffset:(unsigned long long)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(void)setFetchBatchSize:(unsigned long long)arg1 ;
-(void)setPropertiesToFetch:(NSArray *)arg1 ;
-(void)setPropertiesToGroupBy:(NSArray *)arg1 ;
-(NSString *)entityName;
-(NSPredicate *)havingPredicate;
-(NSArray *)relationshipKeyPathsForPrefetching;
-(unsigned long long)fetchOffset;
-(unsigned long long)fetchLimit;
-(unsigned long long)fetchBatchSize;
-(NSArray *)propertiesToFetch;
-(NSArray *)propertiesToGroupBy;
-(id)encodeForXPC;
-(void)setResultType:(unsigned long long)arg1 ;
-(BOOL)includesSubentities;
-(id)initWithEntityName:(id)arg1 ;
-(void)setIncludesSubentities:(BOOL)arg1 ;
-(NSEntityDescription *)entity;
-(void)setEntity:(NSEntityDescription *)arg1 ;
-(unsigned long long)allocationType;
-(void)setAllocationType:(unsigned long long)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(unsigned long long)requestType;
-(void)setIncludesPropertyValues:(BOOL)arg1 ;
-(void)setShouldRefreshRefetchedObjects:(BOOL)arg1 ;
-(void)setIncludesPendingChanges:(BOOL)arg1 ;
-(BOOL)includesPropertyValues;
-(BOOL)returnsDistinctResults;
-(void)setAffectedStores:(NSArray *)arg1 ;
-(void)setReturnsObjectsAsFaults:(BOOL)arg1 ;
-(NSArray *)affectedStores;
-(BOOL)returnsObjectsAsFaults;
-(void)setReturnsDistinctResults:(BOOL)arg1 ;
-(BOOL)shouldRefreshRefetchedObjects;
-(unsigned long long)_fetchBatchLRUEntriesLimit;
-(void)_setAsyncResultHandle:(id)arg1 ;
-(void)_throwIfNotEditable;
-(BOOL)_isEditable;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7 ;
-(BOOL)includesPendingChanges;
-(id)execute:(id*)arg1 ;
-(void)setAllocationSize:(unsigned long long)arg1 ;
-(BOOL)_isCachingFetchRequest;
-(id)_asyncResultHandle;
-(BOOL)_isAsyncRequest;
-(void)_setFetchBatchLRUEntriesLimit:(unsigned long long)arg1 ;
-(id)_copyForDirtyContext;
-(void)_incrementInUseCounter;
@end

