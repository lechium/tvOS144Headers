/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsBuffer.h>

@interface MTLGPUDebugBuffer : MTLToolsBuffer {

	unsigned long long bufferIndex;
	unsigned long long _offset;
	unsigned long long _length;
	GPUDebugBufferDescriptorHeap* _descriptorHeap;

}

@property (nonatomic,readonly) unsigned long long offset; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
-(void)dealloc;
-(unsigned long long)length;
-(void*)contents;
-(unsigned long long)gpuAddress;
-(unsigned long long)offset;
-(unsigned long long)handleForOffset:(unsigned long long)arg1 ;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 track:(BOOL)arg5 ;
-(id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5 track:(BOOL)arg6 ;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 ;
-(id)initWithBuffer:(id)arg1 device:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 ;
-(id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 ;
@end

