/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UICoordinateSpace;
#import <UIKitCore/UIKitCore-Structs.h>
@class UITextSelectionWindowAveragedValue, UITextMagnifierTimeWeightedPoint, NSObject;

@interface UITextGestureTuning : NSObject {

	BOOL _didBreakLineThresholdBelow;
	BOOL _didBreakLineThresholdAbove;
	double _visibilityOffset;
	double _initialOffset;
	double _initialOffsetFromTopOfCaret;
	UITextSelectionWindowAveragedValue* _averagedRadius;
	UITextMagnifierTimeWeightedPoint* _weightedPoint;
	long long _lastTouchType;
	BOOL _shouldUseLineThreshold;
	BOOL _shouldIncludeConstantOffset;
	BOOL _includeTipProjection;
	BOOL _strongerBiasAgainstUp;
	NSObject*<UICoordinateSpace> _coordinateSpace;

}

@property (assign,nonatomic,__weak) NSObject*<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (assign,nonatomic) BOOL shouldUseLineThreshold;                                      //@synthesize shouldUseLineThreshold=_shouldUseLineThreshold - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeConstantOffset;                                 //@synthesize shouldIncludeConstantOffset=_shouldIncludeConstantOffset - In the implementation block
@property (assign,nonatomic) BOOL includeTipProjection;                                        //@synthesize includeTipProjection=_includeTipProjection - In the implementation block
@property (assign,nonatomic) BOOL strongerBiasAgainstUp;                                       //@synthesize strongerBiasAgainstUp=_strongerBiasAgainstUp - In the implementation block
@property (nonatomic,readonly) double visibilityOffset;                                        //@synthesize visibilityOffset=_visibilityOffset - In the implementation block
-(id)init;
-(NSObject*<UICoordinateSpace>)coordinateSpace;
-(double)visibilityOffset;
-(void)updateWithTouches:(id)arg1 gestureState:(long long)arg2 ;
-(void)setShouldUseLineThreshold:(BOOL)arg1 ;
-(void)setShouldIncludeConstantOffset:(BOOL)arg1 ;
-(void)setStrongerBiasAgainstUp:(BOOL)arg1 ;
-(CGPoint)touchAlignedPointForPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(CGPoint)pointIfPlacedCarefully:(CGPoint)arg1 ;
-(void)updateVisibilityOffsetForGestureState:(long long)arg1 touchType:(long long)arg2 locationInSceneReferenceSpace:(CGPoint)arg3 majorRadius:(double)arg4 ;
-(void)assertInitialVerticalOffset:(double)arg1 fromTopOfCaret:(double)arg2 ;
-(BOOL)shouldUseLineThreshold;
-(void)setCoordinateSpace:(NSObject*<UICoordinateSpace>)arg1 ;
-(void)updateWeightedPointWithGestureState:(long long)arg1 location:(CGPoint)arg2 ;
-(BOOL)shouldIncludeConstantOffset;
-(BOOL)includeTipProjection;
-(BOOL)strongerBiasAgainstUp;
-(CGPoint)pointForGestureState:(long long)arg1 point:(CGPoint)arg2 translation:(CGPoint)arg3 ;
-(void)setIncludeTipProjection:(BOOL)arg1 ;
@end

