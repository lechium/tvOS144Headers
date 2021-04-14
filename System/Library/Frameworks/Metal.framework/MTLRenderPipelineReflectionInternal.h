/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineReflection.h>

@class NSArray, NSDictionary, NSData;

@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection {

	SCD_Struct_MT33 _flags;
	NSArray* _vertexBuiltInArguments;
	unsigned long long _postVertexDumpStride;
	NSArray* _postVertexDumpOutputs;
	NSArray* _inferredInputs;
	NSArray* _vertexArguments;
	NSArray* _fragmentArguments;
	NSDictionary* _performanceStatistics;
	unsigned _traceBufferIndex;
	NSData* _vertexPluginReturnData;
	NSData* _fragmentPluginReturnData;
	NSArray* _constantSamplerUniqueIdentifiers;
	NSArray* _constantSamplerDescriptors;

}
-(id)description;
-(void)dealloc;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)performanceStatistics;
-(void)setPerformanceStatistics:(id)arg1 ;
-(SCD_Struct_MT33)usageFlags;
-(unsigned)traceBufferIndex;
-(id)constantSamplerUniqueIdentifiers;
-(id)constantSamplerDescriptors;
-(void)setConstantSamplerUniqueIdentifiers:(id)arg1 ;
-(void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(SCD_Struct_MT33)arg6 ;
-(id)vertexPluginReturnData;
-(id)fragmentPluginReturnData;
-(id)vertexBuiltInArguments;
-(unsigned long long)postVertexDumpStride;
-(id)postVertexDumpOutputs;
-(id)inferredInputs;
-(id)vertexArguments;
-(id)fragmentArguments;
@end

