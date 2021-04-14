/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPBaseMediaItem.h>

@class TVCKDataItem, SSVPlaybackLeaseResponse, SSVPlaybackLeaseAsset, TVCKMutableBookmark;

@interface TVCKFuseMediaItem : TVPBaseMediaItem {

	BOOL _isMusicVideo;
	BOOL _shouldBookmarkMusicVideo;
	long long _adamID;
	TVCKDataItem* _dataItem;
	SSVPlaybackLeaseResponse* _leaseResponse;
	unsigned long long _loadingContext;
	SSVPlaybackLeaseAsset* _currentLeaseAsset;
	TVCKMutableBookmark* _bookmark;

}

@property (assign,nonatomic) long long adamID;                                       //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,retain) SSVPlaybackLeaseResponse * leaseResponse;               //@synthesize leaseResponse=_leaseResponse - In the implementation block
@property (assign,nonatomic) unsigned long long loadingContext;                      //@synthesize loadingContext=_loadingContext - In the implementation block
@property (assign,nonatomic) BOOL isMusicVideo;                                      //@synthesize isMusicVideo=_isMusicVideo - In the implementation block
@property (nonatomic,retain) SSVPlaybackLeaseAsset * currentLeaseAsset;              //@synthesize currentLeaseAsset=_currentLeaseAsset - In the implementation block
@property (nonatomic,retain) TVCKMutableBookmark * bookmark;                         //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,retain) TVCKDataItem * dataItem;                                //@synthesize dataItem=_dataItem - In the implementation block
@property (assign,nonatomic) BOOL shouldBookmarkMusicVideo;                          //@synthesize shouldBookmarkMusicVideo=_shouldBookmarkMusicVideo - In the implementation block
+(double)_playedThresholdTimeForDuration:(double)arg1 ;
+(BOOL)isPendingStartLeaseSession;
+(void)setPendingStartLeaseSession:(BOOL)arg1 ;
+(id)_extractLeaseAssetFromLeaseResponse:(id)arg1 ;
-(void)setAdamID:(long long)arg1 ;
-(long long)adamID;
-(TVCKMutableBookmark *)bookmark;
-(void)setBookmark:(TVCKMutableBookmark *)arg1 ;
-(void)setDataItem:(TVCKDataItem *)arg1 ;
-(TVCKDataItem *)dataItem;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(BOOL)arg4 ;
-(id)mediaItemURL;
-(BOOL)hasTrait:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(void)prepareForLoadingWithCompletion:(/*^block*/id)arg1 ;
-(void)cleanUpMediaItem;
-(unsigned long long)loadingContext;
-(void)setLoadingContext:(unsigned long long)arg1 ;
-(id)initWithAdamID:(long long)arg1 ;
-(id)initWithAdamID:(long long)arg1 isMusicVideo:(BOOL)arg2 ;
-(void)setShouldBookmarkMusicVideo:(BOOL)arg1 ;
-(id)_propertyNameMappings;
-(SSVPlaybackLeaseAsset *)currentLeaseAsset;
-(BOOL)isMusicVideo;
-(id)_bookmarkNetTime;
-(BOOL)shouldBookmarkMusicVideo;
-(void)setLeaseResponse:(SSVPlaybackLeaseResponse *)arg1 ;
-(void)setCurrentLeaseAsset:(SSVPlaybackLeaseAsset *)arg1 ;
-(void)setIsMusicVideo:(BOOL)arg1 ;
-(SSVPlaybackLeaseResponse *)leaseResponse;
@end

