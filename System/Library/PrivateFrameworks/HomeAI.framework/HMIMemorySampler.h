/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMFTimer, MovingAverage, NSString;

@interface HMIMemorySampler : HMFObject <HMFTimerDelegate, HMFLogging> {

	long long _highWaterMark;
	HMFTimer* _tick;
	MovingAverage* _average;

}

@property (readonly) HMFTimer * tick;                               //@synthesize tick=_tick - In the implementation block
@property (readonly) MovingAverage * average;                       //@synthesize average=_average - In the implementation block
@property (assign) long long highWaterMark;                         //@synthesize highWaterMark=_highWaterMark - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)logCategory;
-(id)init;
-(void)start;
-(void)stop;
-(MovingAverage *)average;
-(void)timerDidFire:(id)arg1 ;
-(HMFTimer *)tick;
-(long long)highWaterMark;
-(void)setHighWaterMark:(long long)arg1 ;
@end

