/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LocationSupport/CLDispatchSilo.h>

@class NSMutableArray;

@interface CLTimeCoercibleDispatchSilo : CLDispatchSilo {

	NSMutableArray* _timerHolders;

}

@property (nonatomic,readonly) NSMutableArray * timerHolders;              //@synthesize timerHolders=_timerHolders - In the implementation block
-(id)initWithIdentifier:(id)arg1 ;
-(id)newTimer;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
-(void)updateLatchedAbsoluteTimestamp;
-(id)initWithUnderlyingQueue:(id)arg1 ;
-(void)setLatchedAbsoluteTimestamp:(double)arg1 ;
-(NSMutableArray *)timerHolders;
@end

