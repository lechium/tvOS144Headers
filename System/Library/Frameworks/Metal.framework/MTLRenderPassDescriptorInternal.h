/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassDescriptor.h>

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {

	MTLRenderPassDescriptorPrivate _private;

}
+(id)renderPassDescriptor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)openGLModeEnabled;
-(id)colorAttachments;
-(const MTLRenderPassDescriptorPrivate*)_descriptorPrivate;
-(id)sampleBufferAttachments;
-(void)setSamplePositions:(const SCD_Struct_MT77*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)getSamplePositions:(SCD_Struct_MT77*)arg1 count:(unsigned long long)arg2 ;
-(void)setDepthAttachment:(id)arg1 ;
-(id)depthAttachment;
-(void)setStencilAttachment:(id)arg1 ;
-(id)stencilAttachment;
-(void)setVisibilityResultBuffer:(id)arg1 ;
-(id)visibilityResultBuffer;
-(void)setRenderTargetWidth:(unsigned long long)arg1 ;
-(unsigned long long)renderTargetWidth;
-(void)setRenderTargetHeight:(unsigned long long)arg1 ;
-(unsigned long long)renderTargetHeight;
-(void)setFineGrainedBackgroundVisibilityEnabled:(BOOL)arg1 ;
-(BOOL)fineGrainedBackgroundVisibilityEnabled;
-(void)setDitherEnabled:(BOOL)arg1 ;
-(BOOL)isDitherEnabled;
-(void)setOpenGLModeEnabled:(BOOL)arg1 ;
-(void)setPointCoordYFlipEnabled:(BOOL)arg1 ;
-(BOOL)pointCoordYFlipEnabled;
-(BOOL)validate:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3 ;
@end

