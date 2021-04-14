/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableArray;

@interface UISwipeGestureRecognizer : UIGestureRecognizer {

	double _maximumDuration;
	double _minimumPrimaryMovement;
	double _maximumPrimaryMovement;
	double _minimumSecondaryMovement;
	double _maximumSecondaryMovement;
	double _rateOfMinimumMovementDecay;
	double _rateOfMaximumMovementDecay;
	unsigned long long _numberOfTouchesRequired;
	NSMutableArray* _touches;
	unsigned long long _direction;
	CGPoint _startLocation;
	CGPoint* _startLocations;
	double _startTime;
	BOOL _failed;

}

@property (assign,nonatomic) double minimumPrimaryMovement;                           //@synthesize minimumPrimaryMovement=_minimumPrimaryMovement - In the implementation block
@property (assign,nonatomic) double maximumPrimaryMovement;                           //@synthesize maximumPrimaryMovement=_maximumPrimaryMovement - In the implementation block
@property (assign,nonatomic) double minimumSecondaryMovement;                         //@synthesize minimumSecondaryMovement=_minimumSecondaryMovement - In the implementation block
@property (assign,nonatomic) double maximumSecondaryMovement;                         //@synthesize maximumSecondaryMovement=_maximumSecondaryMovement - In the implementation block
@property (assign,nonatomic) double rateOfMinimumMovementDecay;                       //@synthesize rateOfMinimumMovementDecay=_rateOfMinimumMovementDecay - In the implementation block
@property (assign,nonatomic) double rateOfMaximumMovementDecay;                       //@synthesize rateOfMaximumMovementDecay=_rateOfMaximumMovementDecay - In the implementation block
@property (nonatomic,readonly) CGPoint startPoint; 
@property (assign,nonatomic) double maximumDuration;                                  //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;              //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) unsigned long long direction;                            //@synthesize direction=_direction - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_shouldDefaultToTouches;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)startPoint;
-(unsigned long long)direction;
-(void)setDirection:(unsigned long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)maximumDuration;
-(void)setMaximumDuration:(double)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(unsigned long long)numberOfTouchesRequired;
-(CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2 ;
-(double)minimumPrimaryMovement;
-(void)setMinimumPrimaryMovement:(double)arg1 ;
-(void)_resetGestureRecognizer;
-(void)setMaximumSecondaryMovement:(double)arg1 ;
-(unsigned long long)numberOfTouches;
-(BOOL)_isGestureType:(long long)arg1 ;
-(void)_appendSubclassDescription:(id)arg1 ;
-(BOOL)_checkForSwipeWithDelta:(CGPoint)arg1 time:(double)arg2 ;
-(double)maximumPrimaryMovement;
-(void)setMaximumPrimaryMovement:(double)arg1 ;
-(double)minimumSecondaryMovement;
-(void)setMinimumSecondaryMovement:(double)arg1 ;
-(double)maximumSecondaryMovement;
-(double)rateOfMinimumMovementDecay;
-(void)setRateOfMinimumMovementDecay:(double)arg1 ;
-(double)rateOfMaximumMovementDecay;
-(void)setRateOfMaximumMovementDecay:(double)arg1 ;
@end

