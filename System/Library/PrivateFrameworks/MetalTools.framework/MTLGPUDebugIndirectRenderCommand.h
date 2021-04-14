/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MTLToolsIndirectRenderCommand.h>

@interface MTLGPUDebugIndirectRenderCommand : MTLToolsIndirectRenderCommand {

	unsigned long long _commandIndex;

}
-(void)dealloc;
-(void)setRenderPipelineState:(id)arg1 ;
-(void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(id)initWithIndirectRenderCommand:(id)arg1 commandIndex:(unsigned long long)arg2 indirectCommandBuffer:(id)arg3 ;
@end

