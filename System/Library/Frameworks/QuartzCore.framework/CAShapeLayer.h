/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString, NSArray;

@interface CAShapeLayer : CALayer

@property (assign) const CGPathRef path; 
@property (assign) CGColorRef fillColor; 
@property (copy) NSString * fillRule; 
@property (assign) CGColorRef strokeColor; 
@property (assign) double strokeStart; 
@property (assign) double strokeEnd; 
@property (assign) double lineWidth; 
@property (assign) double miterLimit; 
@property (copy) NSString * lineCap; 
@property (copy) NSString * lineJoin; 
@property (assign) double lineDashPhase; 
@property (copy) NSArray * lineDashPattern; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(const CGPathRef)path;
-(void)setPath:(const CGPathRef)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(CGColorRef)fillColor;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)_renderForegroundInContext:(CGContextRef)arg1 ;
-(CGColorRef)strokeColor;
-(double)strokeStart;
-(double)strokeEnd;
-(NSString *)fillRule;
-(void)setFillRule:(NSString *)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(void)setStrokeStart:(double)arg1 ;
-(void)setStrokeEnd:(double)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(NSString *)lineJoin;
-(void)setLineJoin:(NSString *)arg1 ;
-(NSString *)lineCap;
-(void)setLineCap:(NSString *)arg1 ;
-(NSArray *)lineDashPattern;
-(void)setLineDashPattern:(NSArray *)arg1 ;
-(double)lineDashPhase;
-(void)setLineDashPhase:(double)arg1 ;
@end
