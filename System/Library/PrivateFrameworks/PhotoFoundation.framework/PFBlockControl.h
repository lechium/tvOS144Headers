/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/PFBlockControlCanceling.h>
#import <libobjc.A.dylib/PFBlockControlQueueing.h>
#import <libobjc.A.dylib/PFBlockControlDirectExecution.h>

@protocol OS_dispatch_group;
@class PFDispatchQueue, NSObject, NSString;

@interface PFBlockControl : NSObject <PFBlockControlCanceling, PFBlockControlQueueing, PFBlockControlDirectExecution> {

	PFDispatchQueue* _queue;
	/*^block*/id _block;
	NSObject*<OS_dispatch_group> _workGroup;
	AQ _status;
	BOOL _executeOnDealloc;

}

@property (assign) BOOL executeOnDealloc;                           //@synthesize executeOnDealloc=_executeOnDealloc - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)enqueue;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)cancelBlock;
-(BOOL)dequeue;
-(BOOL)executeBlock;
-(void)_execute;
-(void)notifyOnQueue:(id)arg1 whenFinished:(/*^block*/id)arg2 ;
-(void)waitForBlock;
-(BOOL)blockHasStarted;
-(BOOL)blockHasFinished;
-(BOOL)blockWasCanceled;
-(BOOL)enqueueWithDelay:(unsigned long long)arg1 ;
-(BOOL)groupNotify:(id)arg1 ;
-(BOOL)tryCancelBlock;
-(void)invoke:(unsigned long long)arg1 ;
-(unsigned long long)_shouldEnqueue;
-(BOOL)executeOnDealloc;
-(void)setExecuteOnDealloc:(BOOL)arg1 ;
@end

