/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSSQLiteStatement, NSFetchRequest, NSBatchUpdateRequest;

@interface NSSQLBatchUpdateRequestContext : NSSQLStoreRequestContext {

	NSSQLiteStatement* _updateStatement;
	NSFetchRequest* _fetchRequest;

}

@property (nonatomic,readonly) NSBatchUpdateRequest * request; 
@property (nonatomic,readonly) NSSQLiteStatement * updateStatement; 
-(void)dealloc;
-(NSBatchUpdateRequest *)request;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)isWritingRequest;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(void)executePrologue;
-(id)tempTableName;
-(id)createObjectIDCaptureStatements;
-(id)dropObjectIDCaptureStatements;
-(id)fetchRequestDescribingObjectsToUpdate;
-(void)_createUpdateStatement;
-(NSSQLiteStatement *)updateStatement;
-(id)createFetchRequestContextForObjectsToUpdate;
@end

