/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebGLLayer : CALayer {

	WebGLLayerBuffer* _contentsBuffer;
	WebGLLayerBuffer* _spareBuffer;
	BOOL _preparedForDisplay;

}
-(void)display;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setTransform:(CATransform3D)arg1 ;
-(id)initWithDevicePixelRatio:(float)arg1 contentsOpaque:(BOOL)arg2 ;
-(WebGLLayerBuffer*)recycleBuffer;
-(void*)detachClient;
-(void)prepareForDisplayWithContents:(WebGLLayerBuffer*)arg1 ;
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)arg1 ;
@end

