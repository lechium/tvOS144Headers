/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TXRTexture, NSString;

@interface GLKTextureTXR : NSObject {

	unsigned _loadTarget;
	TXRTexture* _texture;
	unsigned long long _API;
	BOOL _hasAlpha;
	BOOL _lossyCompressedSource;
	unsigned _GLTextureName;
	unsigned _target;
	unsigned _mipmapLevelCount;
	unsigned _arrayLength;
	unsigned _width;
	unsigned _height;
	unsigned _depth;
	NSString* _label;

}

@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,getter=LTextureName,nonatomic) unsigned GLTextureName;              //@synthesize GLTextureName=_GLTextureName - In the implementation block
@property (assign,nonatomic) unsigned target;                                         //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) unsigned mipmapLevelCount;                               //@synthesize mipmapLevelCount=_mipmapLevelCount - In the implementation block
@property (assign,nonatomic) unsigned arrayLength;                                    //@synthesize arrayLength=_arrayLength - In the implementation block
@property (assign,nonatomic) unsigned width;                                          //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned height;                                         //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned depth;                                          //@synthesize depth=_depth - In the implementation block
@property (assign,nonatomic) BOOL hasAlpha;                                           //@synthesize hasAlpha=_hasAlpha - In the implementation block
@property (assign,nonatomic) BOOL lossyCompressedSource;                              //@synthesize lossyCompressedSource=_lossyCompressedSource - In the implementation block
-(void)dealloc;
-(void)setTarget:(unsigned)arg1 ;
-(unsigned)target;
-(unsigned)depth;
-(NSString *)label;
-(unsigned)width;
-(unsigned)height;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned)mipmapLevelCount;
-(unsigned)arrayLength;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(void)setArrayLength:(unsigned)arg1 ;
-(void)setDepth:(unsigned)arg1 ;
-(void)setMipmapLevelCount:(unsigned)arg1 ;
-(id)initWithTexture:(id)arg1 API:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)uploadToGLTexture:(unsigned)arg1 error:(id*)arg2 ;
-(unsigned)GLTextureName;
-(void)setGLTextureName:(unsigned)arg1 ;
-(BOOL)hasAlpha;
-(void)setHasAlpha:(BOOL)arg1 ;
-(BOOL)lossyCompressedSource;
-(void)setLossyCompressedSource:(BOOL)arg1 ;
@end

