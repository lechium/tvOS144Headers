/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXDisplayAsset.h>

@class NSDate, NSString, NSNumber, NSDictionary;

@interface PXMockDisplayAsset : NSObject <PXDisplayAsset> {

	NSDictionary* _backingDictionary;

}

@property (nonatomic,readonly) NSDictionary * backingDictionary;                     //@synthesize backingDictionary=_backingDictionary - In the implementation block
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
+(id)propertiesForImageWithSize:(CGSize)arg1 ;
+(id)propertiesForLivePhotoWithSize:(CGSize)arg1 ;
+(id)propertiesForVideoWithSize:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithProperties:(id)arg1 ;
-(NSDate *)creationDate;
-(double)duration;
-(NSString *)uuid;
-(long long)mediaType;
-(BOOL)isFavorite;
-(unsigned long long)pixelHeight;
-(unsigned long long)pixelWidth;
-(id)_stringValueForKey:(id)arg1 ;
-(long long)_integerValueForKey:(id)arg1 ;
-(BOOL)_boolValueForKey:(id)arg1 ;
-(NSDate *)localCreationDate;
-(NSDictionary *)backingDictionary;
-(long long)playbackStyle;
-(unsigned long long)mediaSubtypes;
-(long long)playbackVariation;
-(BOOL)isInCloud;
-(unsigned long long)thumbnailIndex;
-(BOOL)representsBurst;
-(long long)isContentEqualTo:(id)arg1 ;
-(BOOL)isEligibleForAutoPlayback;
-(Class)defaultImageProviderClass;
-(unsigned long long)_unsignedIntegerValueForKey:(id)arg1 ;
-(double)_doubleValueForKey:(id)arg1 ;
-(id)_dateValueForKey:(id)arg1 ;
@end

