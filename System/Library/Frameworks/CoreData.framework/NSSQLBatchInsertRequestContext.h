/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSBatchInsertRequest;

@interface NSSQLBatchInsertRequestContext : NSSQLStoreRequestContext

@property (nonatomic,readonly) NSBatchInsertRequest * request; 
-(NSBatchInsertRequest *)request;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)isWritingRequest;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(id)tempTableName;
-(id)createObjectIDCaptureStatements;
-(id)dropObjectIDCaptureStatements;
@end
