/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFWorkflowStorage.h>

@class WFWorkflowReference, WFDatabase, NSString;

@interface WFDatabaseWorkflowStorage : NSObject <WFWorkflowStorage> {

	WFWorkflowReference* _descriptor;
	WFDatabase* _database;

}

@property (nonatomic,readonly) WFWorkflowReference * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) WFDatabase * database;                         //@synthesize database=_database - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFDatabase *)database;
-(WFWorkflowReference *)descriptor;
-(id)reference;
-(BOOL)saveRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)reloadRecord:(id)arg1 error:(id*)arg2 ;
-(id)initWithDescriptor:(id)arg1 database:(id)arg2 ;
@end

