/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface PLCameraPreviewWellAssetChange : NSObject {

	BOOL _allowed;
	BOOL _shouldRefreshPreviewWellWithFetchRequest;
	NSString* _assetUUID;
	NSDate* _addedDate;
	double _sortToken;
	NSString* _thumbnailIdentifier;
	unsigned long long _effectiveThumbnailIndex;

}

@property (assign,getter=isAllowed,nonatomic) BOOL allowed;                              //@synthesize allowed=_allowed - In the implementation block
@property (nonatomic,copy) NSString * assetUUID;                                         //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,copy) NSDate * addedDate;                                           //@synthesize addedDate=_addedDate - In the implementation block
@property (assign,nonatomic) double sortToken;                                           //@synthesize sortToken=_sortToken - In the implementation block
@property (nonatomic,copy) NSString * thumbnailIdentifier;                               //@synthesize thumbnailIdentifier=_thumbnailIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long effectiveThumbnailIndex;                 //@synthesize effectiveThumbnailIndex=_effectiveThumbnailIndex - In the implementation block
@property (assign,nonatomic) BOOL shouldRefreshPreviewWellWithFetchRequest;              //@synthesize shouldRefreshPreviewWellWithFetchRequest=_shouldRefreshPreviewWellWithFetchRequest - In the implementation block
+(id)cameraPreviewWellAssetChangeToForceRefetch;
-(long long)compare:(id)arg1 ;
-(void)setAddedDate:(NSDate *)arg1 ;
-(NSDate *)addedDate;
-(void)setAllowed:(BOOL)arg1 ;
-(unsigned long long)effectiveThumbnailIndex;
-(NSString *)assetUUID;
-(void)setSortToken:(double)arg1 ;
-(void)setAssetUUID:(NSString *)arg1 ;
-(double)sortToken;
-(void)setEffectiveThumbnailIndex:(unsigned long long)arg1 ;
-(NSString *)thumbnailIdentifier;
-(id)initWithManagedAsset:(id)arg1 ;
-(long long)compareToDate:(id)arg1 sortToken:(double)arg2 ;
-(BOOL)isAllowed;
-(void)setThumbnailIdentifier:(NSString *)arg1 ;
-(BOOL)shouldRefreshPreviewWellWithFetchRequest;
-(void)setShouldRefreshPreviewWellWithFetchRequest:(BOOL)arg1 ;
@end

