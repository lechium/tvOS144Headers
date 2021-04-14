/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoFoundation/PFDispatchQueue.h>
#import <libobjc.A.dylib/PFDispatchQueueMethods.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface PFDispatchQueueBaseClass : PFDispatchQueue <PFDispatchQueueMethods> {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)description;
-(void)resume;
-(void)suspend;
-(unsigned)qualityOfService;
-(const char*)label;
-(id)initWithQueue:(id)arg1 ;
-(void)setTargetQueue:(id)arg1 ;
-(BOOL)assertOnQueue;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchGroup:(id)arg1 notify:(/*^block*/id)arg2 ;
-(BOOL)assertNotOnQueue;
-(void)dispatchAfterInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(id)_extensionManager;
-(void)dispatchAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)dispatchCancellable:(/*^block*/id)arg1 ;
-(id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)dispatchCancellableAfterInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(id)dispatchCancellableGroup:(id)arg1 notify:(/*^block*/id)arg2 ;
-(id)_extensionsForTargetingQueue;
-(id)extensionMatching:(/*^block*/id)arg1 ;
-(void)dispatchBarrierSync:(/*^block*/id)arg1 ;
-(void)dispatchBarrierAsync:(/*^block*/id)arg1 ;
-(void)dispatchGroup:(id)arg1 async:(/*^block*/id)arg2 ;
-(void)setSpecific:(void*)arg1 forKey:(void*)arg2 ;
-(void*)getSpecific:(void*)arg1 ;
-(id)_dispatchQueueForSetTargetQueue;
-(BOOL)assertQueueBarrier;
@end

