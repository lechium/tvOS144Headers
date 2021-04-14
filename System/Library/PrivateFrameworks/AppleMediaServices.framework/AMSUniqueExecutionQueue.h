/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, AMSPromise;

@interface AMSUniqueExecutionQueue : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _completionCallbacksQueue;
	NSObject*<OS_dispatch_queue> _executeBlockQueue;
	AMSPromise* _executionPromise;
	NSObject*<OS_dispatch_queue> _executionPromiseAccessQueue;

}

@property (nonatomic,copy) id block;                                                                  //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionCallbacksQueue;                   //@synthesize completionCallbacksQueue=_completionCallbacksQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> executeBlockQueue;                          //@synthesize executeBlockQueue=_executeBlockQueue - In the implementation block
@property (nonatomic,retain) AMSPromise * executionPromise;                                           //@synthesize executionPromise=_executionPromise - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> executionPromiseAccessQueue;              //@synthesize executionPromiseAccessQueue=_executionPromiseAccessQueue - In the implementation block
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)executeBlockQueue;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)setExecuteBlockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)executionPromiseAccessQueue;
-(AMSPromise *)executionPromise;
-(id)_createExecutionPromise;
-(void)_beginExecutingBlockWithPromise:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionCallbacksQueue;
-(void)setExecutionPromise:(AMSPromise *)arg1 ;
-(void)addCompletionBlockForSubsequentExecution:(/*^block*/id)arg1 ;
-(void)setCompletionCallbacksQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

