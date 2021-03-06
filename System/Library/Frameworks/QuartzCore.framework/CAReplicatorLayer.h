/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CAReplicatorLayer : CALayer

@property (assign) long long instanceCount; 
@property (assign) BOOL preservesDepth; 
@property (assign) double instanceDelay; 
@property (assign) CATransform3D instanceTransform; 
@property (assign) CGColorRef instanceColor; 
@property (assign) float instanceRedOffset; 
@property (assign) float instanceGreenOffset; 
@property (assign) float instanceBlueOffset; 
@property (assign) float instanceAlphaOffset; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(id)init;
-(void)didChangeValueForKey:(id)arg1 ;
-(long long)instanceCount;
-(void)setInstanceCount:(long long)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(BOOL)preservesDepth;
-(void)setPreservesDepth:(BOOL)arg1 ;
-(void)_renderSublayersInContext:(CGContextRef)arg1 ;
-(double)instanceDelay;
-(void)setInstanceDelay:(double)arg1 ;
-(CATransform3D)instanceTransform;
-(void)setInstanceTransform:(CATransform3D)arg1 ;
-(CGColorRef)instanceColor;
-(void)setInstanceColor:(CGColorRef)arg1 ;
-(float)instanceRedOffset;
-(void)setInstanceRedOffset:(float)arg1 ;
-(float)instanceGreenOffset;
-(void)setInstanceGreenOffset:(float)arg1 ;
-(float)instanceBlueOffset;
-(void)setInstanceBlueOffset:(float)arg1 ;
-(float)instanceAlphaOffset;
-(void)setInstanceAlphaOffset:(float)arg1 ;
@end

