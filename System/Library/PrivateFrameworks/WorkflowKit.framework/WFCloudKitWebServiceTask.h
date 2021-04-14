/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFCloudKitTask.h>

@class NSURLSessionTask, NSOperationQueue;

@interface WFCloudKitWebServiceTask : WFCloudKitTask {

	NSURLSessionTask* _dataTask;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSURLSessionTask * dataTask;                    //@synthesize dataTask=_dataTask - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(id)init;
-(void)cancel;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setDataTask:(NSURLSessionTask *)arg1 ;
-(NSURLSessionTask *)dataTask;
@end

