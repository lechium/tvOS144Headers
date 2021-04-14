/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLTexture;
#import <MetalTools/MetalTools-Structs.h>
@interface MTLDebugRenderTargetAttachmentInfo : NSObject {

	id<MTLTexture> _attachmentTexture;
	id<MTLTexture> _baseResolveTexture;
	id<MTLTexture> _baseTexture;
	unsigned long long _renderTargetArrayLength;
	unsigned long long _baseLevelOffset;
	unsigned long long _resolveLevelOffset;
	NSRange _baseSliceRangeOffset;
	NSRange _resolveSliceRangeOffset;

}

@property (nonatomic,readonly) id<MTLTexture> attachmentTexture;                        //@synthesize attachmentTexture=_attachmentTexture - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> baseResolveTexture;                       //@synthesize baseResolveTexture=_baseResolveTexture - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> baseTexture;                              //@synthesize baseTexture=_baseTexture - In the implementation block
@property (nonatomic,readonly) unsigned long long renderTargetArrayLength;              //@synthesize renderTargetArrayLength=_renderTargetArrayLength - In the implementation block
@property (nonatomic,readonly) unsigned long long baseLevelOffset;                      //@synthesize baseLevelOffset=_baseLevelOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long resolveLevelOffset;                   //@synthesize resolveLevelOffset=_resolveLevelOffset - In the implementation block
@property (nonatomic,readonly) NSRange baseSliceRangeOffset;                            //@synthesize baseSliceRangeOffset=_baseSliceRangeOffset - In the implementation block
@property (nonatomic,readonly) NSRange resolveSliceRangeOffset;                         //@synthesize resolveSliceRangeOffset=_resolveSliceRangeOffset - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)renderTargetArrayLength;
-(id<MTLTexture>)baseTexture;
-(unsigned long long)baseLevelOffset;
-(NSRange)baseSliceRangeOffset;
-(id<MTLTexture>)baseResolveTexture;
-(unsigned long long)resolveLevelOffset;
-(NSRange)resolveSliceRangeOffset;
-(id)initWithDesc:(const MTLRenderPassAttachmentDescriptorPrivate*)arg1 renderTargetArrayLength:(unsigned long long)arg2 ;
-(unsigned long long)intersectsTexture:(id)arg1 ;
-(id<MTLTexture>)attachmentTexture;
@end

