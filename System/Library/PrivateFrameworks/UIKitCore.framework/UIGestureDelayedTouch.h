/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UIGestureDelaying.h>

@class UITouch, UIEvent, NSString;

@interface UIGestureDelayedTouch : NSObject <NSCopying, _UIGestureDelaying> {

	UITouch* _touch;
	UITouch* _stateWhenDelayed;
	UITouch* _stateWhenDelivered;
	UIEvent* _event;
	long long _delayCount;
	BOOL _cloneForSecondDelivery;

}

@property (nonatomic,retain) UITouch * touch;                           //@synthesize touch=_touch - In the implementation block
@property (nonatomic,retain) UITouch * stateWhenDelayed;                //@synthesize stateWhenDelayed=_stateWhenDelayed - In the implementation block
@property (nonatomic,retain) UITouch * stateWhenDelivered;              //@synthesize stateWhenDelivered=_stateWhenDelivered - In the implementation block
@property (nonatomic,retain) UIEvent * event;                           //@synthesize event=_event - In the implementation block
@property (assign) BOOL cloneForSecondDelivery;                         //@synthesize cloneForSecondDelivery=_cloneForSecondDelivery - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(UIEvent *)event;
-(void)setEvent:(UIEvent *)arg1 ;
-(UITouch *)touch;
-(void)setTouch:(UITouch *)arg1 ;
-(long long)delayCount;
-(UITouch *)stateWhenDelayed;
-(void)incrementDelayCount;
-(long long)decrementDelayCount;
-(void)setStateWhenDelayed:(UITouch *)arg1 ;
-(BOOL)cloneForSecondDelivery;
-(double)timestampForDelivery;
-(long long)phaseForDelivery;
-(void)saveCurrentTouchState;
-(UITouch *)stateWhenDelivered;
-(void)setStateWhenDelivered:(UITouch *)arg1 ;
-(void)setCloneForSecondDelivery:(BOOL)arg1 ;
@end

