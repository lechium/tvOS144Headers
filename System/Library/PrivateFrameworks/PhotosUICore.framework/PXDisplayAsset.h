/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, NSString, NSNumber;


@protocol PXDisplayAsset <PXDisplayThumbnailAsset>
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
@optional
-(double)duration;
-(NSString *)uuid;
-(double)aspectRatio;
-(long long)playbackStyle;
-(long long)playbackVariation;
-(NSDate *)importDate;
-(NSNumber *)hdrGain;
-(CGRect*)suggestedCropForTargetSize:(CGSize)arg1 withFocusRegion:(CGRect)arg2;
-(id)destinationAssetCopyProperties;
-(unsigned long long)burstSelectionTypes;
-(CGRect*)bestCropRectForAspectRatio:(double)arg1;
-(CGRect*)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
-(id)localizedDetailedGeoDescriptionForRTL:(BOOL)arg1;
-(unsigned long long)thumbnailVersion;
-(NSString *)localizedGeoDescription;
-(BOOL)isAutoPlaybackEligibilityEstimated;

@required
-(NSDate *)creationDate;
-(long long)mediaType;
-(BOOL)isFavorite;
-(unsigned long long)pixelHeight;
-(unsigned long long)pixelWidth;
-(NSDate *)localCreationDate;
-(unsigned long long)mediaSubtypes;
-(BOOL)isInCloud;
-(BOOL)representsBurst;
-(long long)isContentEqualTo:(id)arg1;
-(BOOL)isEligibleForAutoPlayback;
-(Class)defaultImageProviderClass;

@end

