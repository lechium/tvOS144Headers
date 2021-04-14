/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMSedentaryTimer_Internal : NSObject {

	NSObject*<OS_dispatch_queue> fClientQueue;
	NSObject*<OS_dispatch_queue> fDaemonQueue;
	CLConnectionClient* fLocationdConnection;
	BOOL _timerArmed;

}

@property (assign,getter=isTimerArmed,nonatomic) BOOL timerArmed;              //@synthesize timerArmed=_timerArmed - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setTimerArmed:(BOOL)arg1 ;
-(BOOL)isTimerArmed;
-(void)_handleAlarmDataResponse:(shared_ptr<CLConnectionMessage>*)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_teardown;
-(BOOL)_isActive;
-(void)_handleStartStopTimerResponse:(shared_ptr<CLConnectionMessage>*)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_registerForAlarmsWithHandler:(/*^block*/id)arg1 ;
@end

