/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Photos/Photos-Structs.h>
@interface PHValidator : NSObject
+(id)supportedTypes;
+(BOOL)extension:(id)arg1 conformsToUTTypes:(id)arg2 ;
+(id)supportedMovieTypes;
+(id)supportedImageTypes;
+(BOOL)uti:(id)arg1 conformsToUTTypes:(id)arg2 ;
+(BOOL)url:(id)arg1 conformsToUTTypes:(id)arg2 ;
+(id)supportedAudioTypes;
+(unsigned char)mediaTypeForUTI:(id)arg1 ;
+(unsigned char)mediaTypeForURL:(id)arg1 ;
+(BOOL)isSupportedAudioUTI:(id)arg1 ;
+(BOOL)isSupportedMovieUTI:(id)arg1 ;
+(BOOL)isSupportedImageUTI:(id)arg1 ;
+(BOOL)isSupportedAudio:(id)arg1 ;
+(BOOL)isSupportedMovie:(id)arg1 ;
+(BOOL)isSupportedImage:(id)arg1 ;
-(BOOL)getLivePhotoVideoMetadataFromURL:(id)arg1 pairingIdentifier:(id*)arg2 videoDuration:(SCD_Struct_PH9*)arg3 imageDisplayTime:(SCD_Struct_PH9*)arg4 error:(id*)arg5 ;
-(BOOL)validateURL:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)validateURLs:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)validateData:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)isValidImagePathExtension:(id)arg1 ;
-(BOOL)isValidVideoPathExtension:(id)arg1 ;
-(BOOL)_pathExtension:(id)arg1 conformsToType:(CFStringRef)arg2 ;
-(BOOL)_validateImageSource:(CGImageSourceRef)arg1 error:(id*)arg2 ;
-(BOOL)_validateVideoURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateLivePhotoResourceURLs:(id)arg1 error:(id*)arg2 ;
-(void)getLivePhotoImageMetadataFromURL:(id)arg1 pairingIdentifier:(id*)arg2 ;
@end

