/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSManagedObjectID, NSFetchRequest;

@interface NSSQLObjectFaultRequestContext : NSSQLStoreRequestContext {

	NSManagedObjectID* _objectID;
	NSFetchRequest* _fetchRequest;
	BOOL _forConflictAnalysis;

}

@property (nonatomic,readonly) NSManagedObjectID * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) BOOL forConflictAnalysis;                    //@synthesize forConflictAnalysis=_forConflictAnalysis - In the implementation block
-(void)dealloc;
-(NSManagedObjectID *)objectID;
-(id)fetchRequest;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(id)initWithObjectID:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)forConflictAnalysis;
-(id)createFetchRequestContext;
-(void)setForConflictAnalysis:(BOOL)arg1 ;
@end

