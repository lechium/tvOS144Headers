/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@class AXFKAFocusRingBorderShapeLayer;

@interface AXFKAFocusRingShapeLayer : CAShapeLayer {

	AXFKAFocusRingBorderShapeLayer* _bottomBorderLayer;
	unsigned long long _kind;
	long long _interfaceStyle;

}

@property (nonatomic,retain) AXFKAFocusRingBorderShapeLayer * bottomBorderLayer;              //@synthesize bottomBorderLayer=_bottomBorderLayer - In the implementation block
@property (nonatomic,readonly) CGColorRef ringColorRef; 
@property (nonatomic,readonly) BOOL useLargeRing; 
@property (nonatomic,readonly) BOOL increaseContrast; 
@property (nonatomic,readonly) BOOL useDefaultRingColor; 
@property (assign,nonatomic) unsigned long long kind;                                         //@synthesize kind=_kind - In the implementation block
@property (assign,nonatomic) long long interfaceStyle;                                        //@synthesize interfaceStyle=_interfaceStyle - In the implementation block
+(id)layerWithStyle:(long long)arg1 kind:(unsigned long long)arg2 ;
+(id)focusLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)parentLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)selectedLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)selectedParentLayerForUserInterfaceStyle:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setPath:(CGPathRef)arg1 ;
-(unsigned long long)kind;
-(void)setKind:(unsigned long long)arg1 ;
-(BOOL)increaseContrast;
-(id)tintColor;
-(AXFKAFocusRingBorderShapeLayer *)bottomBorderLayer;
-(double)borderScale;
-(double)insetForFocusRingBorder:(id)arg1 ;
-(void)updateAppearance;
-(BOOL)useLargeRing;
-(CGColorRef)ringColorRef;
-(long long)interfaceStyle;
-(BOOL)useDefaultRingColor;
-(void)setInterfaceStyle:(long long)arg1 ;
-(void)setBottomBorderLayer:(AXFKAFocusRingBorderShapeLayer *)arg1 ;
-(void)_updateBottomLayerPath;
-(CGColorRef)strokeColorForBottomLayer;
-(double)lineWidthForBottomLayer;
-(id)fillColorForBottomLayer;
-(id)bottomFocusRingColorForTintColor:(id)arg1 ;
@end

