/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIKeyboardTaskQueue;

@interface UIKeyboardTaskExecutionContext : NSObject {

	UIKeyboardTaskExecutionContext* _parentExecutionContext;
	/*^block*/id _continuation;
	id _info;
	/*^block*/id _pendingCompletionBlock;
	UIKeyboardTaskQueue* _executionQueue;

}

@property (nonatomic,readonly) UIKeyboardTaskQueue * executionQueue;              //@synthesize executionQueue=_executionQueue - In the implementation block
@property (nonatomic,retain) id info;                                             //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id pendingCompletionBlock;                             //@synthesize pendingCompletionBlock=_pendingCompletionBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(id)info;
-(UIKeyboardTaskQueue *)executionQueue;
-(void)setInfo:(id)arg1 ;
-(void)returnExecutionToParent;
-(void)returnExecutionToParentWithInfo:(id)arg1 ;
-(id)childWithContinuation:(/*^block*/id)arg1 ;
-(void)transferExecutionToMainThreadWithTask:(/*^block*/id)arg1 ;
-(id)pendingCompletionBlock;
-(void)setPendingCompletionBlock:(id)arg1 ;
-(id)initWithParentContext:(id)arg1 continuation:(/*^block*/id)arg2 ;
-(id)initWithExecutionQueue:(id)arg1 ;
@end
