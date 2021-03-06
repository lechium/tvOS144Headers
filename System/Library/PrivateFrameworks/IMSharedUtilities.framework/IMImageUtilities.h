/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@interface IMImageUtilities : NSObject
+(CGSize)imageRefPxSize:(CGImageRef)arg1 ;
+(double)scaleFactorForThumbnailWithSize:(CGSize)arg1 constraints:(IMPreviewConstraints)arg2 targetPxSize:(CGSize)arg3 shouldScaleUpPreview:(BOOL)arg4 maxUpScale:(double)arg5 ;
+(void)sampleImageEdges:(char*)arg1 usingRect:(CGRect)arg2 forMostlyWhitePixels:(unsigned long long*)arg3 otherPixels:(unsigned long long*)arg4 bytesPerRow:(long long)arg5 ;
+(BOOL)persistPreviewToDiskCache:(CGImageRef)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)persistCPBitmapWithImage:(CGImageRef)arg1 url:(id)arg2 ;
+(CGImageRef)newThumbnailForTargetSize:(CGSize)arg1 imageSize:(CGSize)arg2 imageSource:(CGImageSourceRef)arg3 atIndex:(unsigned long long)arg4 mode:(long long)arg5 scale:(double)arg6 ;
+(CGSize)imageSourcePxSize:(CGImageSourceRef)arg1 ;
+(CGImageRef)newThumbnailForTargetSize:(CGSize)arg1 imageSize:(CGSize)arg2 imageSource:(CGImageSourceRef)arg3 mode:(long long)arg4 scale:(double)arg5 ;
@end

