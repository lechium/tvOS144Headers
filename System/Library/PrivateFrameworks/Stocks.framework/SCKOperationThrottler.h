/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SCKOperationThrottler.h>

@protocol SCKOperationThrottler
@property (assign) BOOL suspended; 
@required
-(void)setSuspended:(BOOL)arg1;
-(BOOL)suspended;
-(void)tickle;
-(void)tickleWithCompletion:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface SCKOperationThrottler : NSObject <SCKOperationThrottler> {

	NSObject*<OS_dispatch_source> _dispatchSource;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_group> _handlerSynchronizationGroup;
	BOOL _suspended;

}

@property (assign) BOOL suspended;              //@synthesize suspended=_suspended - In the implementation block
-(void)dealloc;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)initWithDelegate:(id)arg1 ;
-(void)tickle;
-(id)initWithDelegate:(id)arg1 updateQueue:(id)arg2 ;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(void)addCompletionForCurrentOperation:(/*^block*/id)arg1 ;
@end

