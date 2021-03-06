/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCommandEncoder.h>

@class NSString, MTLToolsCommandBuffer;

@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder> {

	MTLToolsCommandBuffer* _commandBuffer;

}

@property (nonatomic,readonly) MTLToolsCommandBuffer * commandBuffer;              //@synthesize commandBuffer=_commandBuffer - In the implementation block
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)label;
-(unsigned long long)globalTraceObjectID;
-(void)setLabel:(NSString *)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)endEncoding;
-(MTLToolsCommandBuffer *)commandBuffer;
-(void)insertDebugSignpost:(id)arg1 ;
-(void)filterCounterRangeWithFirstBatch:(unsigned)arg1 lastBatch:(unsigned)arg2 filterIndex:(unsigned)arg3 ;
-(void)addRetainedObject:(id)arg1 ;
@end

