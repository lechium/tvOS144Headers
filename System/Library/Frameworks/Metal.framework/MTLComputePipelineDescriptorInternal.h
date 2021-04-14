/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineDescriptor.h>

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {

	MTLComputePipelineDescriptorPrivate _private;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)reset;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(BOOL)openGLModeEnabled;
-(void)setComputeFunction:(id)arg1 ;
-(void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg1 ;
-(void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1 ;
-(void)setSupportIndirectCommandBuffers:(BOOL)arg1 ;
-(void)setTextureWriteRoundingMode:(long long)arg1 ;
-(id)stageInputDescriptor;
-(void)setStageInputDescriptor:(id)arg1 ;
-(id)buffers;
-(id)insertLibraries;
-(id)computeFunction;
-(const MTLComputePipelineDescriptorPrivate*)_descriptorPrivate;
-(id)pluginData;
-(BOOL)forceResourceIndex;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(void)validateWithDevice:(id)arg1 ;
-(void)setPipelineLibrary:(id)arg1 ;
-(id)binaryArchives;
-(void)setBinaryArchives:(id)arg1 ;
-(void)setPluginData:(id)arg1 ;
-(void)setOpenGLModeEnabled:(BOOL)arg1 ;
-(void)setInsertLibraries:(id)arg1 ;
-(id)newSerializedComputeDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)setDriverCompilerOptions:(id)arg1 ;
-(id)driverCompilerOptions;
-(id)functionPointers;
-(void)setFunctionPointers:(id)arg1 ;
-(id)functionPointerGroups;
-(void)setFunctionPointerGroups:(id)arg1 ;
-(id)linkedFunctions;
-(void)setLinkedFunctions:(id)arg1 ;
-(id)binaryLibraries;
-(void)setBinaryLibraries:(id)arg1 ;
-(id)dynamicLibraries;
-(void)setDynamicLibraries:(id)arg1 ;
-(id)pipelineLibrary;
-(BOOL)threadGroupSizeIsMultipleOfThreadExecutionWidth;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(BOOL)supportIndirectCommandBuffers;
-(long long)textureWriteRoundingMode;
-(void)setTextureWriteFPRoundingMode:(long long)arg1 ;
-(long long)textureWriteFPRoundingMode;
-(BOOL)openCLModeEnabled;
-(void)setOpenCLModeEnabled:(BOOL)arg1 ;
-(BOOL)validateWithDevice:(id)arg1 error:(id*)arg2 ;
-(id)newSerializedComputeData;
@end

