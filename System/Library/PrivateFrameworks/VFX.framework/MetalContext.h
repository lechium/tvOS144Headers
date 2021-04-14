/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDepthStencilState, MTLTexture;
#import <VFX/VFX-Structs.h>
@class FramebufferDescriptor, NSMutableDictionary, NSMutableArray, NSLock;

@interface MetalContext : NSObject {

	id<MTLDepthStencilState> _depthStencilState;
	FramebufferDescriptor* _framebufferDescriptor;
	NSMutableDictionary* _renderPipelineStateCache;
	id<MTLTexture> _fontTexture;
	NSMutableArray* _bufferCache;
	NSLock* _bufferCacheLock;
	double _lastBufferCachePurge;

}

@property (nonatomic,retain) id<MTLDepthStencilState> depthStencilState;                  //@synthesize depthStencilState=_depthStencilState - In the implementation block
@property (nonatomic,retain) FramebufferDescriptor * framebufferDescriptor;               //@synthesize framebufferDescriptor=_framebufferDescriptor - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * renderPipelineStateCache;              //@synthesize renderPipelineStateCache=_renderPipelineStateCache - In the implementation block
@property (nonatomic,retain) id<MTLTexture> fontTexture;                                  //@synthesize fontTexture=_fontTexture - In the implementation block
@property (nonatomic,retain) NSMutableArray * bufferCache;                                //@synthesize bufferCache=_bufferCache - In the implementation block
@property (nonatomic,retain) NSLock * bufferCacheLock;                                    //@synthesize bufferCacheLock=_bufferCacheLock - In the implementation block
@property (assign,nonatomic) double lastBufferCachePurge;                                 //@synthesize lastBufferCachePurge=_lastBufferCachePurge - In the implementation block
-(id)init;
-(void)setDepthStencilState:(id<MTLDepthStencilState>)arg1 ;
-(id<MTLDepthStencilState>)depthStencilState;
-(void)makeDeviceObjectsWithDevice:(id)arg1 ;
-(void)makeFontTextureWithDevice:(id)arg1 ;
-(id<MTLTexture>)fontTexture;
-(void)setFontTexture:(id<MTLTexture>)arg1 ;
-(void)emptyRenderPipelineStateCache;
-(void)setFramebufferDescriptor:(FramebufferDescriptor *)arg1 ;
-(void)renderDrawData:(ImDrawData*)arg1 commandBuffer:(id)arg2 commandEncoder:(id)arg3 ;
-(NSLock *)bufferCacheLock;
-(double)lastBufferCachePurge;
-(NSMutableArray *)bufferCache;
-(void)setBufferCache:(NSMutableArray *)arg1 ;
-(void)setLastBufferCachePurge:(double)arg1 ;
-(NSMutableDictionary *)renderPipelineStateCache;
-(FramebufferDescriptor *)framebufferDescriptor;
-(id)_renderPipelineStateForFramebufferDescriptor:(id)arg1 device:(id)arg2 ;
-(id)renderPipelineStateForFrameAndDevice:(id)arg1 ;
-(id)dequeueReusableBufferOfLength:(unsigned long long)arg1 device:(id)arg2 ;
-(void)setupRenderState:(ImDrawData*)arg1 commandBuffer:(id)arg2 commandEncoder:(id)arg3 renderPipelineState:(id)arg4 vertexBuffer:(id)arg5 vertexBufferOffset:(unsigned long long)arg6 ;
-(void)enqueueReusableBuffer:(id)arg1 ;
-(void)setRenderPipelineStateCache:(NSMutableDictionary *)arg1 ;
-(void)setBufferCacheLock:(NSLock *)arg1 ;
@end

