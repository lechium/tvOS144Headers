/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKResizingLayer.h>

@class CALayer, UIColor;

@interface _MKCalloutLayer : _MKResizingLayer {

	CGImageRef _contentImage;
	CALayer* _leftLayer;
	CALayer* _rightLayer;
	SCD_Struct_MK17 _metrics;
	long long _arrowPosition;
	double _arrowOffset;
	UIColor* _fillColor;
	UIColor* _strokeColor;

}

@property (assign,nonatomic) long long arrowPosition;              //@synthesize arrowPosition=_arrowPosition - In the implementation block
@property (assign,nonatomic) double arrowOffset;                   //@synthesize arrowOffset=_arrowOffset - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                  //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK21 metrics;              //@synthesize metrics=_metrics - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setMetrics:(SCD_Struct_MK21)arg1 ;
-(SCD_Struct_MK21)metrics;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(void)layoutSublayers;
-(UIColor *)strokeColor;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(CGSize)_contentSize;
-(void)setArrowOffset:(double)arg1 ;
-(void)setArrowPosition:(long long)arg1 ;
-(double)arrowOffset;
-(CGImageRef)_newContentImage;
-(long long)arrowPosition;
@end

