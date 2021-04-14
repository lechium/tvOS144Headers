/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXDisplayAsset.h>
#import <libobjc.A.dylib/PXLayoutItemInput.h>
#import <libobjc.A.dylib/PXMetadataAsset.h>

@class NSDate, CLLocation, _PXFileBackedAssetMetadata, PXFileBackedAssetDescription, NSString, NSURL, NSNumber;

@interface PXFileBackedAsset : NSObject <PXDisplayAsset, PXLayoutItemInput, PXMetadataAsset> {

	_PXFileBackedAssetMetadata* _metadata;
	PXFileBackedAssetDescription* _description;
	NSString* _fileBackedUUID;
	NSURL* _url;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,copy,readonly) NSURL * url;                                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * uniformTypeIdentifier;                     //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isAnimatedImage; 
@property (nonatomic,readonly) BOOL canPlayPhotoIris; 
@property (nonatomic,readonly) BOOL canPlayLoopingVideo; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * localCreationDate; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) BOOL representsBurst; 
@property (nonatomic,readonly) BOOL isInCloud; 
@property (nonatomic,readonly) BOOL isEligibleForAutoPlayback; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) Class defaultImageProviderClass; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) long long playbackStyle; 
@property (nonatomic,readonly) long long playbackVariation; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) unsigned long long thumbnailVersion; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSNumber * hdrGain; 
@property (nonatomic,readonly) unsigned long long burstSelectionTypes; 
@property (nonatomic,readonly) NSString * localizedGeoDescription; 
@property (nonatomic,readonly) NSDate * importDate; 
@property (nonatomic,readonly) BOOL isAutoPlaybackEligibilityEstimated; 
@property (nonatomic,readonly) unsigned long long thumbnailIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double weight; 
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) CGPoint positionOffset; 
@property (nonatomic,readonly) CGRect preferredCropRect; 
@property (nonatomic,readonly) CGRect acceptableCropRect; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) BOOL cloudIsDeletable; 
+(id)_locationFromImageProperties:(id)arg1 ;
+(id)_creationDateFromImageProperties:(id)arg1 ;
+(id)_globalCache;
+(id)_exifDateFormatter;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(CGSize)size;
-(id)initWithURL:(id)arg1 ;
-(NSDate *)creationDate;
-(NSURL *)url;
-(CGAffineTransform)transform;
-(NSString *)uuid;
-(double)weight;
-(CLLocation *)location;
-(double)aspectRatio;
-(long long)mediaType;
-(BOOL)isFavorite;
-(unsigned long long)pixelHeight;
-(unsigned long long)pixelWidth;
-(NSDate *)localCreationDate;
-(long long)playbackStyle;
-(unsigned long long)mediaSubtypes;
-(long long)playbackVariation;
-(NSString *)uniformTypeIdentifier;
-(BOOL)isInCloud;
-(unsigned long long)thumbnailIndex;
-(BOOL)canPlayPhotoIris;
-(BOOL)representsBurst;
-(BOOL)canPlayLoopingVideo;
-(CGRect)preferredCropRect;
-(CGRect)acceptableCropRect;
-(id)initWithDescription:(id)arg1 ;
-(BOOL)isAnimatedImage;
-(double)weightUsingCriterion:(long long)arg1 ;
-(CGPoint)positionOffset;
-(CGRect)bestCropRectForAspectRatio:(double)arg1 ;
-(long long)isContentEqualTo:(id)arg1 ;
-(BOOL)isEligibleForAutoPlayback;
-(Class)defaultImageProviderClass;
-(BOOL)isEqualToFileBackedAsset:(id)arg1 ;
-(void)_loadFileMetadataIfNeeded;
@end

