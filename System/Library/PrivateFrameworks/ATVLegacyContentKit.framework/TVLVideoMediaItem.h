/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPURLMediaItem.h>

@class TVPSecureKeyDeliveryCoordinator, TVLVideoAssetElement, TVLEventGroupUpdater, NSMutableArray, TVSDocumentLoader;

@interface TVLVideoMediaItem : TVPURLMediaItem {

	TVPSecureKeyDeliveryCoordinator* _secureKeyDeliveryCoordinator;
	TVLVideoAssetElement* _videoAssetElement;
	TVLEventGroupUpdater* _eventGroupUpdater;
	unsigned long long _loadingContext;
	NSMutableArray* _chapterCollectionRefreshTimers;
	TVSDocumentLoader* _webVTTStylesDocumentLoader;

}

@property (nonatomic,retain) TVLVideoAssetElement * videoAssetElement;                     //@synthesize videoAssetElement=_videoAssetElement - In the implementation block
@property (nonatomic,retain) TVLEventGroupUpdater * eventGroupUpdater;                     //@synthesize eventGroupUpdater=_eventGroupUpdater - In the implementation block
@property (assign,nonatomic) unsigned long long loadingContext;                            //@synthesize loadingContext=_loadingContext - In the implementation block
@property (nonatomic,retain) NSMutableArray * chapterCollectionRefreshTimers;              //@synthesize chapterCollectionRefreshTimers=_chapterCollectionRefreshTimers - In the implementation block
@property (nonatomic,retain) TVSDocumentLoader * webVTTStylesDocumentLoader;               //@synthesize webVTTStylesDocumentLoader=_webVTTStylesDocumentLoader - In the implementation block
-(id)initWithURL:(id)arg1 traits:(id)arg2 ;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(void)prepareForLoadingWithCompletion:(/*^block*/id)arg1 ;
-(void)loadStreamingKeyForRequest:(id)arg1 ;
-(void)cleanUpMediaItem;
-(TVLVideoAssetElement *)videoAssetElement;
-(void)setVideoAssetElement:(TVLVideoAssetElement *)arg1 ;
-(id)initWithVideoAssetElement:(id)arg1 ;
-(id)initWithVideoAssetElement:(id)arg1 traits:(id)arg2 ;
-(BOOL)_preparationCancelled:(unsigned long long)arg1 ;
-(void)_setupAutoRefreshForChapterCollection:(id)arg1 ;
-(void)setWebVTTStylesDocumentLoader:(TVSDocumentLoader *)arg1 ;
-(void)_chapterRefreshTimerFired:(id)arg1 ;
-(TVLEventGroupUpdater *)eventGroupUpdater;
-(void)setEventGroupUpdater:(TVLEventGroupUpdater *)arg1 ;
-(unsigned long long)loadingContext;
-(void)setLoadingContext:(unsigned long long)arg1 ;
-(NSMutableArray *)chapterCollectionRefreshTimers;
-(void)setChapterCollectionRefreshTimers:(NSMutableArray *)arg1 ;
-(TVSDocumentLoader *)webVTTStylesDocumentLoader;
@end

