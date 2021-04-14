/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol OFNSOperationDelegate, OS_dispatch_source;
@class NSError, NSString, NSCondition, NSMutableArray, NSObject;

@interface OFNSOperation : NSOperation {

	BOOL _canBeCancelled;
	BOOL _isExecuting;
	BOOL _isFinishing;
	BOOL _isFinished;
	float _progress;
	id _userData;
	NSError* _error;
	NSString* _identifier;
	void* _context;
	double _startTime;
	/*^block*/id _executionBlock;
	/*^block*/id _cancelBlock;
	/*^block*/id _progressBlock;
	/*^block*/id _finishBlock;
	id<OFNSOperationDelegate> _finishDelegate;
	NSCondition* _finishingCondition;
	BOOL _isFinishingCondition;
	NSMutableArray* _subOperations;
	OFNSOperation* _mainOperation;
	NSObject*<OS_dispatch_source> _cancelTimer;
	BOOL _needsToRetry;
	unsigned long long _retryCount;

}

@property (assign) BOOL isExecuting;                                                //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) BOOL isFinishing;                                                //@synthesize isFinishing=_isFinishing - In the implementation block
@property (assign) BOOL isFinished;                                                 //@synthesize isFinished=_isFinished - In the implementation block
@property (copy) id executionBlock;                                                 //@synthesize executionBlock=_executionBlock - In the implementation block
@property (retain) NSMutableArray * subOperations;                                  //@synthesize subOperations=_subOperations - In the implementation block
@property (assign) OFNSOperation * mainOperation;                                   //@synthesize mainOperation=_mainOperation - In the implementation block
@property (assign) BOOL canBeCancelled;                                             //@synthesize canBeCancelled=_canBeCancelled - In the implementation block
@property (assign) float progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (retain) id userData;                                                     //@synthesize userData=_userData - In the implementation block
@property (copy) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (copy) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) void* context;                                         //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) id<OFNSOperationDelegate> finishDelegate;              //@synthesize finishDelegate=_finishDelegate - In the implementation block
@property (copy) id cancelBlock;                                                    //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (copy) id finishBlock;                                                    //@synthesize finishBlock=_finishBlock - In the implementation block
@property (copy) id progressBlock;                                                  //@synthesize progressBlock=_progressBlock - In the implementation block
@property (assign) BOOL needsToRetry;                                               //@synthesize needsToRetry=_needsToRetry - In the implementation block
@property (readonly) unsigned long long retryCount;                                 //@synthesize retryCount=_retryCount - In the implementation block
+(id)blockOperationWithExecutionBlock:(/*^block*/id)arg1 finishBlock:(/*^block*/id)arg2 andFinishDelegate:(id)arg3 ;
+(id)operationWithFinishBlock:(/*^block*/id)arg1 andFinishDelegate:(id)arg2 ;
+(id)blockOperationWithExecutionBlock:(/*^block*/id)arg1 ;
+(id)nullOperationWithFinishBlock:(/*^block*/id)arg1 andFinishDelegate:(id)arg2 ;
+(id)operationWithBlock:(/*^block*/id)arg1 progressBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(void)start;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)retryCount;
-(float)progress;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)shouldContinue;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(void)finish;
-(id)operationDescription;
-(void)setCancelBlock:(id)arg1 ;
-(id)cancelBlock;
-(void)setProgress:(float)arg1 ;
-(BOOL)performSynchronously;
-(double)elapsedTime;
-(BOOL)_finish:(BOOL)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setUserData:(id)arg1 ;
-(id)userData;
-(OFNSOperation *)mainOperation;
-(BOOL)canBeCancelled;
-(void)setCanBeCancelled:(BOOL)arg1 ;
-(void)cancelOperation;
-(BOOL)hasSucceeded;
-(NSMutableArray *)subOperations;
-(void)setSubOperations:(NSMutableArray *)arg1 ;
-(id)finishBlock;
-(void)setFinishBlock:(id)arg1 ;
-(void)setFinishDelegate:(id<OFNSOperationDelegate>)arg1 ;
-(void)setExecutionBlock:(id)arg1 ;
-(void)setIsFinishing:(BOOL)arg1 ;
-(unsigned long long)launchOperation;
-(void)_launchOperation;
-(BOOL)isFinishing;
-(void)finishOperation;
-(id<OFNSOperationDelegate>)finishDelegate;
-(void)cleanupOperation;
-(void)_updateProgressBlock;
-(void)setMainOperation:(OFNSOperation *)arg1 ;
-(BOOL)performSynchronously:(/*^block*/id)arg1 timeout:(unsigned long long)arg2 ;
-(void)performAsynchronously:(id)arg1 progressBlock:(/*^block*/id)arg2 timeout:(unsigned long long)arg3 ;
-(BOOL)performSubOperationSynchronously:(id)arg1 progressBlock:(/*^block*/id)arg2 timeout:(unsigned long long)arg3 ;
-(BOOL)performSynchronously:(/*^block*/id)arg1 ;
-(void)performAsynchronously:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)performAsynchronously:(id)arg1 ;
-(id)executionBlock;
-(BOOL)needsToRetry;
-(void)setNeedsToRetry:(BOOL)arg1 ;
@end

