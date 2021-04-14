/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSArray, CIFilter, SKTextureCache, NSObject, SKTextureAtlas;

@interface SKTexture : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldGenerateMipmaps;
	BOOL _didGenerateMipmaps;
	BOOL _needsExtrusionWorkaround;
	BOOL _isPath;
	BOOL _isData;
	NSString* _imgName;
	NSArray* _searchPaths;
	CGRect _textRect;
	CGRect _textCoords;
	BOOL _disableAlpha;
	BOOL _isRotated;
	BOOL _isFlipped;
	CGPoint _cropScale;
	CGPoint _cropOffset;
	int _alignment;
	int _rowLength;
	CIFilter* _filter;
	SKTexture* _originalTexture;
	unsigned _textureTarget;
	NSString* _originalAtlasName;
	NSString* _subTextureName;
	SKTextureCache* _textureCache;
	NSObject*<OS_dispatch_queue> _textureSyncQueue;
	BOOL _performFullCapture;
	BOOL _isRepeatable;
	SKTextureAtlas* _rootAtlas;
	unsigned* _alphaMap;
	CGSize _alphaMapSize;

}

@property (nonatomic,readonly) CGSize pixelSize; 
@property (assign,nonatomic) unsigned textureTarget; 
@property (assign,nonatomic) BOOL isRotated; 
@property (assign,nonatomic) BOOL isFlipped; 
@property (nonatomic,readonly) BOOL hasAlpha; 
@property (assign,nonatomic) int wrapMode; 
@property (nonatomic,readonly) NSString * imageNameOrPath; 
@property (assign) BOOL performFullCapture;                                                               //@synthesize performFullCapture=_performFullCapture - In the implementation block
@property (nonatomic,readonly) BOOL isRepeatable;                                                         //@synthesize isRepeatable=_isRepeatable - In the implementation block
@property (assign,nonatomic) CGPoint cropScale;                                                           //@synthesize cropScale=_cropScale - In the implementation block
@property (assign,nonatomic) CGPoint cropOffset;                                                          //@synthesize cropOffset=_cropOffset - In the implementation block
@property (nonatomic,copy) NSString * originalAtlasName;                                                  //@synthesize originalAtlasName=_originalAtlasName - In the implementation block
@property (nonatomic,retain) SKTextureAtlas * rootAtlas;                                                  //@synthesize rootAtlas=_rootAtlas - In the implementation block
@property (nonatomic,copy) NSString * subTextureName;                                                     //@synthesize subTextureName=_subTextureName - In the implementation block
@property (nonatomic,readonly) unsigned* alphaMap;                                                        //@synthesize alphaMap=_alphaMap - In the implementation block
@property (nonatomic,readonly) CGSize alphaMapSize;                                                       //@synthesize alphaMapSize=_alphaMapSize - In the implementation block
@property (assign,getter=_needsExtrusionWorkaround,nonatomic) BOOL needsExtrusionWorkaround;              //@synthesize needsExtrusionWorkaround=_needsExtrusionWorkaround - In the implementation block
@property (assign,nonatomic) long long filteringMode; 
@property (assign,nonatomic) BOOL usesMipmaps; 
+(BOOL)supportsSecureCoding;
+(id)_textureByTransferingData:(char*)arg1 size:(CGSize)arg2 ;
+(id)_textureWithImageNamed:(id)arg1 ;
+(id)textureWithImageNamed:(id)arg1 ;
+(id)textureWithRect:(CGRect)arg1 inTexture:(id)arg2 ;
+(void)preloadTextures:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)preloadQueue;
+(id)lookupTextureCacheForName:(id)arg1 ;
+(void)registerTextureCache:(id)arg1 forName:(id)arg2 ;
+(id)textureWithCGImage:(CGImageRef)arg1 pointSize:(CGSize)arg2 ;
+(id)textureWithData:(id)arg1 size:(CGSize)arg2 ;
+(id)textureWithImageNamed:(id)arg1 rect:(CGRect)arg2 ;
+(id)textureVectorNoiseWithSmoothness:(double)arg1 size:(CGSize)arg2 ;
+(id)textureNoiseWithSmoothness:(double)arg1 size:(CGSize)arg2 grayscale:(BOOL)arg3 ;
+(id)textureWithCGImage:(CGImageRef)arg1 ;
+(id)textureWithImage:(id)arg1 ;
+(id)textureWithData:(id)arg1 size:(CGSize)arg2 flipped:(BOOL)arg3 ;
+(id)textureWithData:(id)arg1 size:(CGSize)arg2 rowLength:(unsigned)arg3 alignment:(unsigned)arg4 ;
+(void)_reloadTextureCacheForImageNamed:(id)arg1 ;
+(id)_cachedTextureNames;
+(id)compressedTextureWithData:(id)arg1 ;
+(id)compressedTextureWithData:(id)arg1 size:(CGSize)arg2 bitsPerPixel:(unsigned)arg3 hasAlpha:(BOOL)arg4 ;
+(id)textureWithImagePath:(id)arg1 ;
+(id)_textureByTransferingData:(char*)arg1 size:(CGSize)arg2 rowLength:(unsigned)arg3 alignment:(unsigned)arg4 ;
+(id)_textureWithGLTextureId:(unsigned)arg1 size:(CGSize)arg2 ;
+(id)textureWithIOSurfaceID:(unsigned)arg1 width:(unsigned)arg2 height:(unsigned)arg3 format:(unsigned)arg4 ;
+(id)textureWithMetalTexture:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(CGSize)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)pixelSize;
-(CGImageRef)CGImage;
-(BOOL)isFlipped;
-(id)metalTexture;
-(int)wrapMode;
-(void)commonInit;
-(BOOL)hasAlpha;
-(unsigned)textureTarget;
-(void)setTextureTarget:(unsigned)arg1 ;
-(void)setIsFlipped:(BOOL)arg1 ;
-(BOOL)isRotated;
-(long long)filteringMode;
-(BOOL)usesMipmaps;
-(int)glTextureId;
-(CGRect)textureRect;
-(id)_textureCache;
-(NSString *)imageNameOrPath;
-(shared_ptr<jet_texture>*)_backingTexture;
-(CGPoint)cropOffset;
-(CGPoint)cropScale;
-(void)setFilteringMode:(long long)arg1 ;
-(void)setWrapMode:(int)arg1 ;
-(id)imgName;
-(CGImageRef)_createCGImage;
-(id)textureByGeneratingNormalMapWithSmoothness:(double)arg1 contrast:(double)arg2 ;
-(id)_generateNormalMap:(double)arg1 contrast:(double)arg2 multiPass:(unsigned long long)arg3 ;
-(BOOL)loadImageDataFromPVRData:(id)arg1 ;
-(void)loadImageData;
-(void)initTextureCacheWithImageData;
-(void)_ensureImageData;
-(void)loadImageDataFromCGImage:(CGImageRef)arg1 pointsSize:(CGSize)arg2 ;
-(BOOL)loadImageDataFromPVRGZData:(id)arg1 ;
-(BOOL)performFullCapture;
-(id)_copyImageData;
-(id)initWithImageNamed:(id)arg1 ;
-(BOOL)_needsExtrusionWorkaround;
-(id)textureByGeneratingNormalMap;
-(void)setTextureDimension:(const CGSize*)arg1 withPixelSize:(const CGSize*)arg2 ;
-(void)preloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithImagePath:(id)arg1 ;
-(BOOL)isEqualToTexture:(id)arg1 ;
-(id)textureByApplyingCIFilter:(id)arg1 ;
-(void)setUsesMipmaps:(BOOL)arg1 ;
-(void)setCropScale:(CGPoint)arg1 ;
-(void)setCropOffset:(CGPoint)arg1 ;
-(NSString *)originalAtlasName;
-(void)setOriginalAtlasName:(NSString *)arg1 ;
-(NSString *)subTextureName;
-(void)setSubTextureName:(NSString *)arg1 ;
-(void)setPerformFullCapture:(BOOL)arg1 ;
-(BOOL)isRepeatable;
-(SKTextureAtlas *)rootAtlas;
-(void)setRootAtlas:(SKTextureAtlas *)arg1 ;
-(unsigned*)alphaMap;
-(CGSize)alphaMapSize;
-(void)setNeedsExtrusionWorkaround:(BOOL)arg1 ;
-(id)initWithBackingTetxure:(shared_ptr<jet_texture>*)arg1 logicalWidth:(float)arg2 height:(float)arg3 ;
-(id)initWithBackingTetxure:(shared_ptr<jet_texture>*)arg1 ;
-(void)setIsData:(BOOL)arg1 ;
-(id)_initWithGLTextureId:(unsigned)arg1 size:(CGSize)arg2 ;
-(CGImageRef)_newTextureFromGLCache;
-(int)_convert_jet_texture_format_to_ci_format:(unsigned)arg1 ;
-(void)_setImageName:(id)arg1 ;
-(void)setIsRotated:(BOOL)arg1 ;
-(void)_savePngFromGLCache:(id)arg1 ;
@end

