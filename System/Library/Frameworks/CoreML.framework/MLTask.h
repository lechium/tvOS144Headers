/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSError, NSObject;

@interface MLTask : NSObject {

	NSString* _taskIdentifier;
	long long _state;
	NSError* _error;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (assign) long long state;                                                 //@synthesize state=_state - In the implementation block
@property (copy) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * taskIdentifier;                      //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
-(NSError *)error;
-(void)cancel;
-(long long)state;
-(void)resume;
-(void)setState:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSString *)taskIdentifier;
-(id)initWithState:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(BOOL)_canResume;
-(BOOL)_canCancel;
-(BOOL)_canSuspend;
-(BOOL)_canComplete;
-(BOOL)_canFail;
-(void)_resumeWithTaskContext:(id)arg1 ;
-(void)resumeWithTaskContext:(id)arg1 ;
-(void)suspendWithTaskContext:(id)arg1 ;
-(void)completeWithTaskContext:(id)arg1 ;
-(void)failWithError:(id)arg1 taskContext:(id)arg2 ;
-(id)taskStatesToString:(long long)arg1 ;
@end

