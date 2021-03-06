/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSTimer;

@interface MSDaemon : NSObject {

	BOOL _stabilizedIsBusy;
	int _busyCount;
	int _UIBusyCount;
	NSObject*<OS_dispatch_queue> _idleCountQueue;
	NSTimer* _hysteresisTimer;

}

@property (assign,nonatomic) int busyCount;                                            //@synthesize busyCount=_busyCount - In the implementation block
@property (assign,nonatomic) int UIBusyCount;                                          //@synthesize UIBusyCount=_UIBusyCount - In the implementation block
@property (nonatomic,retain) NSTimer * hysteresisTimer;                                //@synthesize hysteresisTimer=_hysteresisTimer - In the implementation block
@property (assign,nonatomic) BOOL stabilizedIsBusy;                                    //@synthesize stabilizedIsBusy=_stabilizedIsBusy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> idleCountQueue;              //@synthesize idleCountQueue=_idleCountQueue - In the implementation block
-(id)init;
-(int)busyCount;
-(BOOL)isBusy;
-(void)releasePowerAssertion;
-(void)didIdle;
-(void)didUnidle;
-(void)setBusyCount:(int)arg1 ;
-(void)retainBusy;
-(void)releaseBusy;
-(void)retainUIBusy;
-(void)releaseUIBusy;
-(void)retainPowerAssertion;
-(void)_didChangeIdleBusyState:(BOOL)arg1 ;
-(void)_hysteresisTimerDidFire:(id)arg1 ;
-(void)stabilizedDidIdle;
-(void)stabilizedDidUnidle;
-(int)UIBusyCount;
-(void)setUIBusyCount:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)idleCountQueue;
-(void)setIdleCountQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSTimer *)hysteresisTimer;
-(void)setHysteresisTimer:(NSTimer *)arg1 ;
-(BOOL)stabilizedIsBusy;
-(void)setStabilizedIsBusy:(BOOL)arg1 ;
@end

