/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IOGPU/IOGPU-Structs.h>
#import <IOGPU/IOGPUMetalCommandEncoder.h>

@interface IOGPUMetalRenderCommandEncoder : IOGPUMetalCommandEncoder
-(unsigned long long)getType;
-(void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(BOOL)arg3 ;
-(void)bindEmulationArguments;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)useHeap:(id)arg1 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)executeCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2 ;
-(void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(void)updateFence:(id)arg1 afterStages:(unsigned long long)arg2 ;
-(void)waitForFence:(id)arg1 beforeStages:(unsigned long long)arg2 ;
-(void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreAction:(unsigned long long)arg1 ;
-(void)setStencilStoreAction:(unsigned long long)arg1 ;
-(void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDepthStoreActionOptions:(unsigned long long)arg1 ;
-(void)setStencilStoreActionOptions:(unsigned long long)arg1 ;
-(BOOL)isMemorylessRender;
-(id)getRenderPipelineState;
-(void*)getVertexBufferContentsAtIndex:(unsigned long long)arg1 ;
-(void)setEmulationVertexBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setEmulationVertexTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setEmulationVertexSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void*)getFragmentBufferContentsAtIndex:(unsigned long long)arg1 ;
-(void)setEmulationFragmentBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setEmulationFragmentTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setEmulationFragmentSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)memoryBarrierWithScope:(unsigned long long)arg1 afterStages:(unsigned long long)arg2 beforeStages:(unsigned long long)arg3 ;
-(id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(void)textureBarrier;
-(void)setDepthClipModeSPI:(unsigned long long)arg1 ;
-(void)setDepthCleared;
-(void)setStencilCleared;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4 ;
-(void)useHeap:(id)arg1 stages:(unsigned long long)arg2 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 stages:(unsigned long long)arg3 ;
-(void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2 afterStages:(unsigned long long)arg3 beforeStages:(unsigned long long)arg4 ;
@end

