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

@class UIPress, UIPressesEvent, NSString;

@interface UIGestureDelayedPress : NSObject <NSCopying, _UIGestureDelaying> {

	long long _delayCount;
	BOOL _cloneForSecondDelivery;
	UIPress* _press;
	UIPress* _stateWhenDelayed;
	UIPress* _stateWhenDelivered;
	UIPressesEvent* _event;

}

@property (nonatomic,retain) UIPress * press;                           //@synthesize press=_press - In the implementation block
@property (nonatomic,retain) UIPress * stateWhenDelayed;                //@synthesize stateWhenDelayed=_stateWhenDelayed - In the implementation block
@property (nonatomic,retain) UIPress * stateWhenDelivered;              //@synthesize stateWhenDelivered=_stateWhenDelivered - In the implementation block
@property (nonatomic,retain) UIPressesEvent * event;                    //@synthesize event=_event - In the implementation block
@property (assign) BOOL cloneForSecondDelivery;                         //@synthesize cloneForSecondDelivery=_cloneForSecondDelivery - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(UIPressesEvent *)event;
-(void)setEvent:(UIPressesEvent *)arg1 ;
-(UIPress *)press;
-(long long)delayCount;
-(UIPress *)stateWhenDelayed;
-(void)incrementDelayCount;
-(void)setPress:(UIPress *)arg1 ;
-(long long)decrementDelayCount;
-(void)setStateWhenDelayed:(UIPress *)arg1 ;
-(BOOL)cloneForSecondDelivery;
-(double)timestampForDelivery;
-(long long)phaseForDelivery;
-(UIPress *)stateWhenDelivered;
-(void)setStateWhenDelivered:(UIPress *)arg1 ;
-(void)setCloneForSecondDelivery:(BOOL)arg1 ;
-(void)saveCurrentPressState;
@end

