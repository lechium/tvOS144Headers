/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIIntervalAnimating.h>

@protocol UIVectorOperatable;
@class NSString;

@interface UIViewInstaneouslyStableAnimation : NSObject <UIIntervalAnimating> {

	id<UIVectorOperatable> _velocity;
	id<UIVectorOperatable> _targetValue;

}

@property (nonatomic,retain) id<UIVectorOperatable> targetValue;              //@synthesize targetValue=_targetValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)value;
-(id)velocity;
-(void)setVelocity:(id)arg1 ;
-(id<UIVectorOperatable>)targetValue;
-(void)setTargetValue:(id<UIVectorOperatable>)arg1 ;
-(BOOL)isStable;
-(id)stepWithDelta:(double)arg1 ;
-(id)initWithTargetValue:(id)arg1 velocity:(id)arg2 ;
@end

