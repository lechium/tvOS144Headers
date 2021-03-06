/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface MTPeriodicQueue : NSObject {

	BOOL _flushTimerEnabled;
	double _flushTimeInterval;
	long long _maximumBatchSize;
	/*^block*/id _flushHandler;
	NSObject*<OS_dispatch_queue> _flushQueue;
	NSMutableArray* _mutableObjects;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_source> _timer;

}

@property (nonatomic,retain) NSMutableArray * mutableObjects;                                //@synthesize mutableObjects=_mutableObjects - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                         //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                            //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) double flushTimeInterval;                                       //@synthesize flushTimeInterval=_flushTimeInterval - In the implementation block
@property (assign,getter=isFlushTimerEnabled,nonatomic) BOOL flushTimerEnabled;              //@synthesize flushTimerEnabled=_flushTimerEnabled - In the implementation block
@property (assign,nonatomic) long long maximumBatchSize;                                     //@synthesize maximumBatchSize=_maximumBatchSize - In the implementation block
@property (nonatomic,copy) id flushHandler;                                                  //@synthesize flushHandler=_flushHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> flushQueue;                        //@synthesize flushQueue=_flushQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(void)appendObject:(id)arg1 ;
-(void)insertObject:(id)arg1 ;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(long long)maximumBatchSize;
-(void)setMaximumBatchSize:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)mutableObjects;
-(void)setMutableObjects:(NSMutableArray *)arg1 ;
-(void)setFlushTimerEnabled:(BOOL)arg1 ;
-(BOOL)isFlushTimerEnabled;
-(NSObject*<OS_dispatch_queue>)flushQueue;
-(void)setFlushQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFlushTimeInterval:(double)arg1 ;
-(void)setFlushHandler:(id)arg1 ;
-(void)insertObjects:(id)arg1 ;
-(void)flushObjects;
-(double)flushTimeInterval;
-(void)_beginFlushTimer;
-(void)__beginFlushTimer;
-(void)__endFlushTimer;
-(void)__flushObjects;
-(id)__clearObjects;
-(void)__flushObjects:(id)arg1 ;
-(void)__flushObjects:(id)arg1 maximumBatchSize:(long long)arg2 flushHandler:(/*^block*/id)arg3 ;
-(void)_endFlushTimer;
-(id)flushHandler;
@end

