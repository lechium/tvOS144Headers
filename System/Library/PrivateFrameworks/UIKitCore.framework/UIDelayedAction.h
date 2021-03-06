/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSTimer, NSString, NSDate;

@interface UIDelayedAction : NSObject {

	id m_target;
	SEL m_action;
	id m_userInfo;
	double m_delay;
	NSTimer* m_timer;
	BOOL m_canceled;
	NSString* m_runLoopMode;
	NSDate* m_startDate;

}

@property (readonly) NSDate * _startDate; 
@property (readonly) BOOL _canceled; 
@property (retain) id target; 
@property (retain) id userInfo; 
-(id)init;
-(void)dealloc;
-(id)userInfo;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)cancel;
-(BOOL)_canceled;
-(void)setUserInfo:(id)arg1 ;
-(double)delay;
-(NSDate *)_startDate;
-(BOOL)scheduled;
-(void)timerFired:(id)arg1 ;
-(void)touch;
-(void)unschedule;
-(void)touchWithDelay:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 mode:(id)arg5 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 ;
@end

