/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsComputeCommandEncoder.h>

@protocol MTLComputePipelineState;
@class MTLDebugCommandBuffer;

@interface MTLDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder {

	SCD_Struct_MT106 _buffers[31];
	SCD_Struct_MT106 _textures[31];
	SCD_Struct_MT106 _samplers[16];
	SCD_Struct_MT106 _threadgroupMemoryLengths[31];
	MTLDebugCommandBuffer* _commandBuffer;
	BOOL canDealloc;
	BOOL canEndEncoding;
	BOOL canSetComputePipelineState;
	BOOL hasEndEncoding;
	BOOL hasSetComputePipelineState;
	BOOL hasSetStageInRegion;
	SCD_Struct_MT108 stageInRegion;
	BOOL hasIndirectSetStageInRegion;
	BOOL allowsNullBufferBinds;
	deque<id, std::__1::allocator<id> >* updatedFences;
	id<MTLComputePipelineState> _computePipelineState;

}

@property (nonatomic,readonly) id<MTLComputePipelineState> computePipelineState;              //@synthesize computePipelineState=_computePipelineState - In the implementation block
-(id)description;
-(void)dealloc;
-(void)updateFence:(id)arg1 ;
-(void)waitForFence:(id)arg1 ;
-(void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(BOOL)arg3 ;
-(void)memoryBarrierWithScope:(unsigned long long)arg1 ;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)useHeap:(id)arg1 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)executeCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2 ;
-(void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)endEncoding;
-(void)setComputePipelineState:(id<MTLComputePipelineState>)arg1 ;
-(void)dispatchThreadgroups:(SCD_Struct_MT107)arg1 threadsPerThreadgroup:(SCD_Struct_MT107)arg2 ;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setStageInRegion:(SCD_Struct_MT108)arg1 ;
-(void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 ;
-(void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(SCD_Struct_MT107)arg3 ;
-(void)enableNullBufferBinds:(BOOL)arg1 ;
-(id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2 ;
-(void)_setDefaults;
-(void)_validateThreadsPerThreadgroup:(SCD_Struct_MT107)arg1 ;
-(void)validateStageInRegion:(SCD_Struct_MT107)arg1 ;
-(void)_validateAllFunctionArguments;
-(id<MTLComputePipelineState>)computePipelineState;
-(void)enumerateBuffersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateTexturesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateSamplersUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateThreadgroupMemoryLengthsUsingBlock:(/*^block*/id)arg1 ;
@end

