/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Stocks/Stocks-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class NSTimer, NSMutableSet, NSSet;

@interface StocksTapDragGestureRecognizer : UIGestureRecognizer {

	NSTimer* _touchDelayTimer;
	NSMutableSet* _touches;
	CGPoint _startingPosition;
	double _requiredPressDelay;
	unsigned long long _minimumNumberOfTouches;
	unsigned long long _maximumNumberOfTouches;
	CGRect _touchableBounds;

}

@property (nonatomic,readonly) NSSet * touches;                                      //@synthesize touches=_touches - In the implementation block
@property (assign,nonatomic) double requiredPressDelay;                              //@synthesize requiredPressDelay=_requiredPressDelay - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfTouches;              //@synthesize minimumNumberOfTouches=_minimumNumberOfTouches - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfTouches;              //@synthesize maximumNumberOfTouches=_maximumNumberOfTouches - In the implementation block
@property (assign,nonatomic) CGRect touchableBounds;                                 //@synthesize touchableBounds=_touchableBounds - In the implementation block
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setMinimumNumberOfTouches:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfTouches:(unsigned long long)arg1 ;
-(unsigned long long)minimumNumberOfTouches;
-(void)touchDelayTimerFired:(id)arg1 ;
-(NSSet *)touches;
-(double)requiredPressDelay;
-(void)setRequiredPressDelay:(double)arg1 ;
-(unsigned long long)maximumNumberOfTouches;
-(CGRect)touchableBounds;
-(void)setTouchableBounds:(CGRect)arg1 ;
@end

