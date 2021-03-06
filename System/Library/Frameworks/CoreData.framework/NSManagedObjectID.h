/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSFetchRequestResult.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSEntityDescription, NSPersistentStore;

@interface NSManagedObjectID : NSObject <NSFetchRequestResult, NSCopying>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSEntityDescription * entity; 
@property (__weak,readonly) NSPersistentStore * persistentStore; 
@property (getter=isTemporaryID,readonly) BOOL temporaryID; 
+(void)initialize;
+(long long)version;
+(BOOL)accessInstanceVariablesDirectly;
+(id)_newArchiveForScalarObjectIDs:(id)arg1 ;
+(id)unarchivedScalarObjectIDsFromData:(id)arg1 withCoordinator:(id)arg2 ;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPersistentStore *)persistentStore;
-(id)entityName;
-(NSEntityDescription *)entity;
-(id)URIRepresentation;
-(id)_storeInfo1;
-(long long)_referenceData64;
-(BOOL)isTemporaryID;
-(id)_referenceData;
-(BOOL)_isPersistentStoreAlive;
-(id)_retainedURIString;
-(id)_storeIdentifier;
-(BOOL)_preferReferenceData64;
-(int)_temporaryIDCounter;
-(long long)_compareArbitraryValue:(id)arg1 toValue:(id)arg2 ;
@end

