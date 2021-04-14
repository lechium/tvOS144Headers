/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDTextureAsset, TDTextureMipLevel, TDThemeCompressionType, TDTextureRenditionSpec;

@interface TDTextureImageRenditionSpec : TDRenditionSpec

@property (assign,nonatomic) BOOL flipped; 
@property (nonatomic,retain) TDTextureAsset * asset; 
@property (nonatomic,retain) TDTextureMipLevel * textureLevelAssignment; 
@property (nonatomic,retain) TDThemeCompressionType * compressionType; 
@property (nonatomic,readonly) TDTextureRenditionSpec * texture; 
@property (nonatomic,readonly) long long textureFormat; 
-(TDTextureRenditionSpec *)texture;
-(long long)textureFormat;
-(BOOL)isCubeMap;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)updatePackingPropertiesWithDocument:(id)arg1 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(id)associatedFileModificationDateWithDocument:(id)arg1 ;
-(int)_pixelFormatOfCGImage:(CGImageRef)arg1 ;
-(CGImageRef)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned*)arg3 ;
-(id)textureFacesWithDocument:(id)arg1 ;
@end

