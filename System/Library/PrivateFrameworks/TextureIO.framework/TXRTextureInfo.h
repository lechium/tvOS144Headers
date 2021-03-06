/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError;

@interface TXRTextureInfo : NSObject {

	unsigned long long _pixelFormat;
	unsigned long long _alphaInfo;
	 _dimensions;
	unsigned long long _mipmapLevelCount;
	unsigned long long _arrayLength;
	BOOL _cubemap;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long alphaInfo;                     //@synthesize alphaInfo=_alphaInfo - In the implementation block
@property (assign,nonatomic) unsigned long long pixelFormat;                   //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic)  dimensions;                                      //@synthesize dimensions=_dimensions - In the implementation block
@property (assign,nonatomic) unsigned long long mipmapLevelCount;              //@synthesize mipmapLevelCount=_mipmapLevelCount - In the implementation block
@property (assign,nonatomic) unsigned long long arrayLength;                   //@synthesize arrayLength=_arrayLength - In the implementation block
@property (assign,nonatomic) BOOL cubemap;                                     //@synthesize cubemap=_cubemap - In the implementation block
@property (readonly) NSError * error;                                          //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(unsigned long long)pixelFormat;
-(unsigned long long)mipmapLevelCount;
-(unsigned long long)arrayLength;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(void)setMipmapLevelCount:(unsigned long long)arg1 ;
-()dimensions;
-(unsigned long long)alphaInfo;
-(BOOL)cubemap;
-(void)setAlphaInfo:(unsigned long long)arg1 ;
-(void)setDimensions:;
-(void)setCubemap:(BOOL)arg1 ;
@end

