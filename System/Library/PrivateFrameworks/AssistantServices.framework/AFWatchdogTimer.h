/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface AFWatchdogTimer : NSObject <NSCopying> {

	double _interval;
	NSObject*<OS_dispatch_source> _timerSource;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _timeoutHandler;
	BOOL _isStopped;
	double _remainingInterval;
	double _startTime;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(void)stop;
-(BOOL)isStopped;
-(void)reset;
-(id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(/*^block*/id)arg2 ;
-(id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(/*^block*/id)arg3 ;
-(BOOL)cancelIfNotAlreadyCanceled;
@end

