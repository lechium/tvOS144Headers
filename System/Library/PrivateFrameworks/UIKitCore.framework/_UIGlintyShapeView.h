/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIBezierPath, UIColor, CAShapeLayer;

@interface _UIGlintyShapeView : UIView {

	UIBezierPath* _path;
	UIColor* _fillColor;
	UIColor* _strokeColor;

}

@property (nonatomic,readonly) CAShapeLayer * shapeLayer; 
@property (nonatomic,readonly) UIBezierPath * path;                    //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) UIColor * fillColor;                    //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,readonly) UIColor * strokeColor;                  //@synthesize strokeColor=_strokeColor - In the implementation block
+(Class)layerClass;
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CAShapeLayer *)shapeLayer;
@end
