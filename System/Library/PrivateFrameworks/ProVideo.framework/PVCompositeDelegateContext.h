/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PVInstructionGraphSourceNode, PVColorSpace;

@interface PVCompositeDelegateContext : NSObject {

	PVInstructionGraphSourceNode* _sourceNode;
	id _preprocessData;
	PVColorSpace* _renderingColorSpace;

}

@property (nonatomic,__weak,readonly) PVInstructionGraphSourceNode * sourceNode;              //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,readonly) id preprocessData;                                             //@synthesize preprocessData=_preprocessData - In the implementation block
@property (nonatomic,readonly) PVColorSpace * renderingColorSpace;                            //@synthesize renderingColorSpace=_renderingColorSpace - In the implementation block
-(id)initWithNode:(id)arg1 ;
-(void)setPreprocessData:(id)arg1 ;
-(void)setRenderColorSpace:(id)arg1 ;
-(PVInstructionGraphSourceNode *)sourceNode;
-(id)preprocessData;
-(PVColorSpace *)renderingColorSpace;
@end

