/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GLKit/GLKit-Structs.h>
@class NSData, NSString;

@interface GLKTexture : NSObject {

	CGImageBlockSetRef _blockSet;
	CFDataRef _cfData;
	int _unpackAlignment;
	BOOL _requestIssuedForAlphaPremultiplication;
	BOOL _requestIssuedToReorientToGL;
	BOOL _requestIssuedToInterpretGrayAsAlpha;
	BOOL _requestIssuedForSRGB;
	unsigned _primarySurfaceLength;
	BOOL _requestIssuedForMipmapGeneration;
	BOOL _hasPremultipliedAlpha;
	BOOL _isPowerOfTwo;
	BOOL _isCubeMap;
	BOOL _isMipmapped;
	BOOL _isVerticalFlipped;
	BOOL _hasAlpha;
	BOOL _reOrient;
	unsigned _GLTextureName;
	unsigned _bindTarget;
	unsigned _textureTarget;
	unsigned _internalFormat;
	unsigned _format;
	unsigned _type;
	int _texelFormat;
	unsigned _width;
	unsigned _height;
	unsigned _orientation;
	unsigned _numMipMapLevels;
	unsigned _bitsPerPixel;
	unsigned _rowBytes;
	unsigned _nComponents;
	unsigned _nPrimarySurfaces;
	unsigned _nSurfaces;
	int _loadMode;
	int _dataCategory;
	unsigned _index;
	NSData* _imageData;
	NSString* _label;

}

@property (readonly) NSData * imageData;                                              //@synthesize imageData=_imageData - In the implementation block
@property (assign,getter=LTextureName,nonatomic) unsigned GLTextureName;              //@synthesize GLTextureName=_GLTextureName - In the implementation block
@property (assign,nonatomic) unsigned bindTarget;                                     //@synthesize bindTarget=_bindTarget - In the implementation block
@property (assign,nonatomic) unsigned textureTarget;                                  //@synthesize textureTarget=_textureTarget - In the implementation block
@property (assign,nonatomic) unsigned internalFormat;                                 //@synthesize internalFormat=_internalFormat - In the implementation block
@property (assign,nonatomic) unsigned format;                                         //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int texelFormat;                                         //@synthesize texelFormat=_texelFormat - In the implementation block
@property (assign,nonatomic) unsigned width;                                          //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned height;                                         //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned orientation;                                    //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) unsigned numMipMapLevels;                                //@synthesize numMipMapLevels=_numMipMapLevels - In the implementation block
@property (assign,nonatomic) unsigned bitsPerPixel;                                   //@synthesize bitsPerPixel=_bitsPerPixel - In the implementation block
@property (assign,nonatomic) unsigned rowBytes;                                       //@synthesize rowBytes=_rowBytes - In the implementation block
@property (assign,nonatomic) unsigned nComponents;                                    //@synthesize nComponents=_nComponents - In the implementation block
@property (assign,nonatomic) unsigned nPrimarySurfaces;                               //@synthesize nPrimarySurfaces=_nPrimarySurfaces - In the implementation block
@property (assign,nonatomic) unsigned nSurfaces;                                      //@synthesize nSurfaces=_nSurfaces - In the implementation block
@property (assign,nonatomic) int loadMode;                                            //@synthesize loadMode=_loadMode - In the implementation block
@property (assign,nonatomic) int dataCategory;                                        //@synthesize dataCategory=_dataCategory - In the implementation block
@property (assign,nonatomic) unsigned index;                                          //@synthesize index=_index - In the implementation block
@property (readonly) BOOL requestIssuedForMipmapGeneration;                           //@synthesize requestIssuedForMipmapGeneration=_requestIssuedForMipmapGeneration - In the implementation block
@property (readonly) BOOL hasPremultipliedAlpha;                                      //@synthesize hasPremultipliedAlpha=_hasPremultipliedAlpha - In the implementation block
@property (assign,nonatomic) BOOL isPowerOfTwo;                                       //@synthesize isPowerOfTwo=_isPowerOfTwo - In the implementation block
@property (assign,nonatomic) BOOL isCubeMap;                                          //@synthesize isCubeMap=_isCubeMap - In the implementation block
@property (assign,nonatomic) BOOL isMipmapped;                                        //@synthesize isMipmapped=_isMipmapped - In the implementation block
@property (assign,nonatomic) BOOL isVerticalFlipped;                                  //@synthesize isVerticalFlipped=_isVerticalFlipped - In the implementation block
@property (assign,nonatomic) BOOL hasAlpha;                                           //@synthesize hasAlpha=_hasAlpha - In the implementation block
@property (assign,nonatomic) BOOL reOrient;                                           //@synthesize reOrient=_reOrient - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(unsigned)index;
-(NSString *)label;
-(unsigned)width;
-(unsigned)height;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(unsigned)orientation;
-(void)setOrientation:(unsigned)arg1 ;
-(NSData *)imageData;
-(unsigned)rowBytes;
-(void)setRowBytes:(unsigned)arg1 ;
-(BOOL)uploadToGLTexture:(unsigned)arg1 error:(id*)arg2 ;
-(unsigned)GLTextureName;
-(void)setGLTextureName:(unsigned)arg1 ;
-(BOOL)hasAlpha;
-(void)setHasAlpha:(BOOL)arg1 ;
-(void)updateRequestedOperationsFromOptions:(id)arg1 ;
-(BOOL)loadWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)loadPVRTCData:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadCGImage:(CGImageRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(int)loadMode;
-(int)dataCategory;
-(BOOL)isCubeMap;
-(unsigned)bitsPerPixel;
-(unsigned)nComponents;
-(int)texelFormat;
-(unsigned)internalFormat;
-(BOOL)isPowerOfTwo;
-(BOOL)isVerticalFlipped;
-(unsigned)bindTarget;
-(unsigned)textureTarget;
-(BOOL)determinePVRFormat:(unsigned)arg1 ;
-(void*)alignmentFix:(unsigned)arg1 data:(const void*)arg2 ;
-(BOOL)shouldApplyReorientToGL;
-(BOOL)shouldApplyPremultiplication;
-(BOOL)determineCGImageBlockFormatWithComponentType:(int)arg1 andPixelSize:(unsigned long long)arg2 andColorModel:(int)arg3 ;
-(BOOL)decodeCGImageImageProvider:(CGImageRef)arg1 CGImageProvider:(CGImageProviderRef)arg2 ;
-(BOOL)decodeCGImageDataProvider:(CGImageRef)arg1 ;
-(BOOL)decodeCGImage:(CGImageRef)arg1 ;
-(BOOL)canHonorSRGBrequest;
-(BOOL)reorientToGL:(void*)arg1 source:(void*)arg2 withWidth:(unsigned)arg3 withHeight:(unsigned)arg4 withRowBytes:(unsigned)arg5 error:(id*)arg6 ;
-(BOOL)premultiplyWithAlpha:(void*)arg1 source:(void*)arg2 withWidth:(unsigned)arg3 withHeight:(unsigned)arg4 withRowBytes:(unsigned)arg5 error:(id*)arg6 ;
-(BOOL)_uploadToGLTexture:(unsigned)arg1 data:(id)arg2 width:(int)arg3 height:(int)arg4 dataCategory:(int)arg5 cubeMapIndex:(int)arg6 mipMapIndex:(int)arg7 error:(id*)arg8 ;
-(id)initWithData:(id)arg1 forceCubeMap:(BOOL)arg2 wasCubeMap:(BOOL*)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)initWithCGImage:(CGImageRef)arg1 forceCubeMap:(BOOL)arg2 wasCubeMap:(BOOL*)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)initWithDecodedData:(id)arg1 width:(unsigned)arg2 height:(unsigned)arg3 rowBytes:(unsigned)arg4 texture:(id)arg5 cubeMapIndex:(int)arg6 options:(id)arg7 error:(id*)arg8 ;
-(void)setBindTarget:(unsigned)arg1 ;
-(void)setTextureTarget:(unsigned)arg1 ;
-(void)setInternalFormat:(unsigned)arg1 ;
-(void)setTexelFormat:(int)arg1 ;
-(unsigned)numMipMapLevels;
-(void)setNumMipMapLevels:(unsigned)arg1 ;
-(void)setBitsPerPixel:(unsigned)arg1 ;
-(void)setNComponents:(unsigned)arg1 ;
-(unsigned)nPrimarySurfaces;
-(void)setNPrimarySurfaces:(unsigned)arg1 ;
-(unsigned)nSurfaces;
-(void)setNSurfaces:(unsigned)arg1 ;
-(void)setLoadMode:(int)arg1 ;
-(void)setDataCategory:(int)arg1 ;
-(BOOL)requestIssuedForMipmapGeneration;
-(BOOL)hasPremultipliedAlpha;
-(void)setIsPowerOfTwo:(BOOL)arg1 ;
-(void)setIsCubeMap:(BOOL)arg1 ;
-(BOOL)isMipmapped;
-(void)setIsMipmapped:(BOOL)arg1 ;
-(void)setIsVerticalFlipped:(BOOL)arg1 ;
-(BOOL)reOrient;
-(void)setReOrient:(BOOL)arg1 ;
@end

