/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIPanGestureRecognizer.h>
#import <UIKitCore/_UISEGestureFeatureDelegate.h>

@class _UISEGestureFeatureSettings, _UISEMuxGestureFeature, NSString;

@interface UIScreenEdgePanGestureRecognizer : UIPanGestureRecognizer <_UISEGestureFeatureDelegate> {

	_UISEGestureFeatureSettings* _settings;
	/*^block*/id _createFeatureBlock;
	_UISEMuxGestureFeature* _rootFeature;
	unsigned long long _touchedEdges;
	unsigned long long _edges;

}

@property (assign,nonatomic) unsigned long long edges;              //@synthesize edges=_edges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)_shouldDefaultToTouches;
+(BOOL)_shouldSupportStylusTouches;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(unsigned long long)edges;
-(void)setEdges:(unsigned long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id)debugDictionary;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setMinimumNumberOfTouches:(unsigned long long)arg1 ;
-(void)_setHysteresis:(double)arg1 ;
-(unsigned long long)touchedEdges;
-(void)featureDidChangeState:(id)arg1 ;
-(double)_bottomEdgeAngleWindow;
-(double)_bottomEdgeRegionSize;
-(double)_edgeRegionSize;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(long long)_touchInterfaceOrientation;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4 ;
-(void)_setBottomEdgeAngleWindow:(double)arg1 ;
-(void)_setBottomEdgeRegionSize:(double)arg1 ;
-(void)_setEdgeRegionSize:(double)arg1 ;
@end
