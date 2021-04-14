/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSTimer, NSDate, NSMutableSet;

@interface LSProgressNotificationTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSTimer* _timer;
	NSDate* _lastFiredDate;
	NSMutableSet* _applications;
	double _minInterval;
	double _latency;
	SEL _appObserverSelector;

}

@property (nonatomic,retain) NSTimer * timer;                          //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSDate * lastFiredDate;                   //@synthesize lastFiredDate=_lastFiredDate - In the implementation block
@property (nonatomic,retain) NSMutableSet * applications;              //@synthesize applications=_applications - In the implementation block
@property (nonatomic,readonly) double minInterval;                     //@synthesize minInterval=_minInterval - In the implementation block
@property (nonatomic,readonly) double latency;                         //@synthesize latency=_latency - In the implementation block
@property (assign) SEL appObserverSelector;                            //@synthesize appObserverSelector=_appObserverSelector - In the implementation block
-(id)description;
-(void)dealloc;
-(void)sendMessage:(id)arg1 ;
-(void)clear;
-(id)initWithQueue:(id)arg1 ;
-(double)latency;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(NSMutableSet *)applications;
-(void)setApplications:(NSMutableSet *)arg1 ;
-(void)stopTimer;
-(void)addApplication:(id)arg1 ;
-(NSDate *)lastFiredDate;
-(double)minInterval;
-(void)setLastFiredDate:(NSDate *)arg1 ;
-(void)removeApplication:(id)arg1 ;
-(void)notifyObservers:(id)arg1 withApplications:(id)arg2 ;
-(SEL)appObserverSelector;
-(void)setAppObserverSelector:(SEL)arg1 ;
@end

