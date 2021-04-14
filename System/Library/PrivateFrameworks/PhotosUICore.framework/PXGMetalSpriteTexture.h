/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PXGColorProgram;


@protocol PXGMetalSpriteTexture <PXGSpriteTexture>
@property (nonatomic,readonly) id<MTLTexture> texture; 
@property (nonatomic,readonly) id<MTLTexture> chromaTexture; 
@property (nonatomic,readonly) PXGColorProgram * colorProgram; 
@property (assign,nonatomic) long long renderPipelineIndex; 
@property (nonatomic,readonly) BOOL isAtlas; 
@property (nonatomic,readonly) BOOL isCaptureTexture; 
@property (nonatomic,readonly) int shaderFlags; 
@required
-(id<MTLTexture>)texture;
-(void)getTextureInfos:({?=}*)arg1 forSpriteIndexes:(unsigned*)arg2 geometries:(const SCD_Struct_PX11*)arg3 spriteStyles:(const SCD_Struct_PX83*)arg4 spriteInfos:(const SCD_Struct_PX15*)arg5 screenScale:(double)arg6 count:(unsigned)arg7;
-(int)shaderFlags;
-(void)prepareForRender:(long long)arg1;
-(void)cleanupAfterRender:(long long)arg1;
-(id<MTLTexture>)chromaTexture;
-(PXGColorProgram *)colorProgram;
-(long long)renderPipelineIndex;
-(void)setRenderPipelineIndex:(long long)arg1;
-(BOOL)isAtlas;
-(BOOL)isCaptureTexture;

@end

