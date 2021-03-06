/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLRenderPipelineDescriptor, MTLRenderPipelineReflection;

@interface MTLDebugRenderPipelineState : MTLToolsRenderPipelineState {

	unsigned long long _maxVertexCount;
	unsigned long long _maxInstanceCount;
	unsigned long long _maxPatchCount;
	unsigned long long _rasterSampleCount;
	unsigned long long _colorPixelFormat[8];
	unsigned long long _depthPixelFormat;
	unsigned long long _stencilPixelFormat;
	unsigned long long _vertexDescriptorLayoutCount;
	NSRange _vertexDescriptorLayouts[31];
	unsigned long long _attachmentWriteMask;
	MTLRenderPipelineDescriptor* _descriptor;
	MTLRenderPipelineReflection* _reflection;

}

@property (nonatomic,readonly) BOOL rasterizationEnabled; 
@property (nonatomic,readonly) MTLRenderPipelineDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) MTLRenderPipelineReflection * reflection;              //@synthesize reflection=_reflection - In the implementation block
@property (nonatomic,readonly) unsigned long long attachmentWriteMask;                //@synthesize attachmentWriteMask=_attachmentWriteMask - In the implementation block
-(id)description;
-(void)dealloc;
-(MTLRenderPipelineDescriptor *)descriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4 ;
-(MTLRenderPipelineReflection *)reflection;
-(id)getParameter:(id)arg1 ;
-(unsigned long long)attachmentWriteMask;
-(BOOL)rasterizationEnabled;
-(void)_updateCachedPipelineState:(id)arg1 ;
@end

