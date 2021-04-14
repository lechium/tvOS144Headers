/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@class CAShapeLayer;

@interface AXSFFocusRingShapeLayer : CAShapeLayer {

	CAShapeLayer* _innerBorder;
	CAShapeLayer* _outerBorder;

}

@property (nonatomic,retain) CAShapeLayer * innerBorder;              //@synthesize innerBorder=_innerBorder - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outerBorder;              //@synthesize outerBorder=_outerBorder - In the implementation block
+(id)layer;
+(id)focusLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)parentLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)selectedLayerForUserInterfaceStyle:(long long)arg1 ;
+(id)selectedParentLayerForUserInterfaceStyle:(long long)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setInnerBorder:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)innerBorder;
-(void)setOuterBorder:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)outerBorder;
@end

