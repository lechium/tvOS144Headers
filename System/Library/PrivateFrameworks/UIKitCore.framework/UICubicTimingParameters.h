/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UITimingCurveProvider.h>

@class UISpringTimingParameters, _UIViewCubicTimingFunction;

@interface UICubicTimingParameters : NSObject <UITimingCurveProvider> {

	long long _timingCurveType;
	_UIViewCubicTimingFunction* _timingFunction;
	long long _animationCurve;
	UISpringTimingParameters* _springTimingParameters;

}

@property (nonatomic,readonly) _UIViewCubicTimingFunction * timingFunction;                  //@synthesize timingFunction=_timingFunction - In the implementation block
@property (nonatomic,retain) UISpringTimingParameters * springTimingParameters;              //@synthesize springTimingParameters=_springTimingParameters - In the implementation block
@property (nonatomic,readonly) long long animationCurve;                                     //@synthesize animationCurve=_animationCurve - In the implementation block
@property (nonatomic,readonly) CGPoint controlPoint1; 
@property (nonatomic,readonly) CGPoint controlPoint2; 
@property (nonatomic,readonly) long long timingCurveType;                                    //@synthesize timingCurveType=_timingCurveType - In the implementation block
@property (nonatomic,readonly) UICubicTimingParameters * cubicTimingParameters; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_UIViewCubicTimingFunction *)timingFunction;
-(UICubicTimingParameters *)cubicTimingParameters;
-(id)initWithControlPoint1:(CGPoint)arg1 controlPoint2:(CGPoint)arg2 ;
-(id)_mediaTimingFunction;
-(UISpringTimingParameters *)springTimingParameters;
-(long long)animationCurve;
-(id)initWithAnimationCurve:(long long)arg1 ;
-(long long)timingCurveType;
-(id)initWithCustomCurve:(id)arg1 ;
-(CGPoint)controlPoint1;
-(CGPoint)controlPoint2;
-(id)effectiveTimingFunction;
-(void)_setAnimationCurve:(long long)arg1 ;
-(void)setSpringTimingParameters:(UISpringTimingParameters *)arg1 ;
@end

