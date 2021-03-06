/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFCloudKitAsyncOperation.h>

@class WFCloudKitItemRequest, NSArray, CKOperationGroup, CKFetchRecordsOperation, WFCloudKitItemTask;

@interface WFCloudKitResolveReferencesOperation : WFCloudKitAsyncOperation {

	WFCloudKitItemRequest* _request;
	NSArray* _records;
	CKOperationGroup* _operationGroup;
	CKFetchRecordsOperation* _currentOperation;
	WFCloudKitItemTask* _task;

}

@property (nonatomic,__weak,readonly) WFCloudKitItemRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSArray * records;                                     //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) CKOperationGroup * operationGroup;                     //@synthesize operationGroup=_operationGroup - In the implementation block
@property (nonatomic,retain) CKFetchRecordsOperation * currentOperation;              //@synthesize currentOperation=_currentOperation - In the implementation block
@property (nonatomic,retain) WFCloudKitItemTask * task;                               //@synthesize task=_task - In the implementation block
-(WFCloudKitItemRequest *)request;
-(void)cancel;
-(void)start;
-(CKFetchRecordsOperation *)currentOperation;
-(NSArray *)records;
-(WFCloudKitItemTask *)task;
-(void)setTask:(WFCloudKitItemTask *)arg1 ;
-(CKOperationGroup *)operationGroup;
-(void)setCurrentOperation:(CKFetchRecordsOperation *)arg1 ;
-(id)initWithRequest:(id)arg1 records:(id)arg2 operationGroup:(id)arg3 task:(id)arg4 ;
@end

