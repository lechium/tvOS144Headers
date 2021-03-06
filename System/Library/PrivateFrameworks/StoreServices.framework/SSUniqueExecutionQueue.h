/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, SSPromise;

@interface SSUniqueExecutionQueue : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _callBlockQueue;
	NSObject*<OS_dispatch_queue> _executeBlockQueue;
	SSPromise* _promise;
	NSObject*<OS_dispatch_queue> _promiseAccessQueue;

}

@property (nonatomic,copy) id block;                                                         //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callBlockQueue;                    //@synthesize callBlockQueue=_callBlockQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> executeBlockQueue;                 //@synthesize executeBlockQueue=_executeBlockQueue - In the implementation block
@property (nonatomic,retain) SSPromise * promise;                                            //@synthesize promise=_promise - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> promiseAccessQueue;              //@synthesize promiseAccessQueue=_promiseAccessQueue - In the implementation block
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(SSPromise *)promise;
-(void)setPromise:(SSPromise *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)promiseAccessQueue;
-(NSObject*<OS_dispatch_queue>)executeBlockQueue;
-(NSObject*<OS_dispatch_queue>)callBlockQueue;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)setCallBlockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setExecuteBlockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

