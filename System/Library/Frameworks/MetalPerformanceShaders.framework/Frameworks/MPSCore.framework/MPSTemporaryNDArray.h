/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSCore/MPSNDArray.h>

@protocol MTLCommandBuffer;
@interface MPSTemporaryNDArray : MPSNDArray {

	unsigned long long _readCount;
	id<MTLCommandBuffer> _commandBuffer;
	unsigned long long _childRefCount;

}

@property (assign,nonatomic) unsigned long long readCount;              //@synthesize readCount=_readCount - In the implementation block
+(id)defaultAllocator;
+(id)temporaryNDArrayWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(id)temporaryArrayViewWithCommandBuffer:(id)arg1 computeEncoder:(id)arg2 descriptor:(id)arg3 aliasing:(unsigned long long)arg4 ;
-(unsigned long long)readCount;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 descriptor:(id)arg2 buffer:(id)arg3 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(id)temporaryArrayViewWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3 ;
@end

