/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _PLImageLoadingAsset <_PLThumbnailLoadingAsset,NSObject>
@required
-(double)duration;
-(short)kind;
-(id)uuid;
-(int)orientation;
-(BOOL)isVideo;
-(CGSize*)imageSize;
-(CGSize*)originalImageSize;
-(double)aspectRatio;
-(id)originalFilename;
-(short)savedAssetType;
-(id)pathForOriginalFile;
-(BOOL)hasAdjustments;
-(BOOL)isCloudSharedAsset;
-(BOOL)isRAW;
-(id)uniformTypeIdentifier;
-(id)pathForAdjustmentFile;
-(short)kindSubtype;
-(void)generateLargeThumbnailFileIfNecessary;
-(BOOL)isInFlight;
-(id)thumbnailIdentifier;
-(BOOL)isCloudPlaceholder;
-(id)assetsLibraryURL;
-(long long)originalImageOrientation;
-(id)debugFilename;
-(BOOL)isLoopingVideo;
-(BOOL)isJPEG;
-(BOOL)isPrimaryImageFormat;
-(BOOL)isPartOfBurst;
-(BOOL)isStreamedVideo;
-(id)pathForAdjustmentDataFile;
-(long long)cloudSharedAssetPlaceholderKind;
-(BOOL)isCloudPhotoLibraryAsset;
-(id)managedAssetForPhotoLibrary:(id)arg1;
-(BOOL)isTimelapsePlaceholder;
-(BOOL)isOriginalSRGB;
-(unsigned long long)localResourcesState;

@end

