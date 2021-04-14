/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIAccessibility/AXFKAFocusRingShapeLayer.h>

@class AXFKAFocusRingBorderShapeLayer;

@interface AXFKAFocusDoubleRingShapeLayer : AXFKAFocusRingShapeLayer {

	AXFKAFocusRingBorderShapeLayer* _topBorderLayer;

}

@property (nonatomic,retain) AXFKAFocusRingBorderShapeLayer * topBorderLayer;              //@synthesize topBorderLayer=_topBorderLayer - In the implementation block
-(id)init;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setTopBorderLayer:(AXFKAFocusRingBorderShapeLayer *)arg1 ;
-(AXFKAFocusRingBorderShapeLayer *)topBorderLayer;
-(void)_updateTopLayerPath;
-(void)updateAppearance;
-(double)lineWidthForTopLayer;
-(CGColorRef)strokeColorForTopLayer;
-(id)topLayerFocusRingColorForTintColor:(id)arg1 ;
@end

