/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MTEpisodeLookupRequest : NSObject {

	NSString* _uuid;
	long long _storeTrackId;
	long long _persistentID;
	NSString* _episodeGuid;
	NSString* _podcastFeedUrl;
	NSString* _episodeTitle;
	NSString* _podcastTitle;
	NSString* _streamUrl;

}

@property (nonatomic,retain) NSString * uuid;                        //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long storeTrackId;                 //@synthesize storeTrackId=_storeTrackId - In the implementation block
@property (assign,nonatomic) long long persistentID;                 //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,retain) NSString * episodeGuid;                 //@synthesize episodeGuid=_episodeGuid - In the implementation block
@property (nonatomic,retain) NSString * podcastFeedUrl;              //@synthesize podcastFeedUrl=_podcastFeedUrl - In the implementation block
@property (nonatomic,retain) NSString * episodeTitle;                //@synthesize episodeTitle=_episodeTitle - In the implementation block
@property (nonatomic,retain) NSString * podcastTitle;                //@synthesize podcastTitle=_podcastTitle - In the implementation block
@property (nonatomic,retain) NSString * streamUrl;                   //@synthesize streamUrl=_streamUrl - In the implementation block
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(long long)persistentID;
-(void)setPersistentID:(long long)arg1 ;
-(NSString *)streamUrl;
-(void)setStreamUrl:(NSString *)arg1 ;
-(NSString *)podcastTitle;
-(NSString *)podcastFeedUrl;
-(void)setStoreTrackId:(long long)arg1 ;
-(long long)storeTrackId;
-(void)setEpisodeGuid:(NSString *)arg1 ;
-(void)setEpisodeTitle:(NSString *)arg1 ;
-(void)setPodcastTitle:(NSString *)arg1 ;
-(void)setPodcastFeedUrl:(NSString *)arg1 ;
-(NSString *)episodeGuid;
-(NSString *)episodeTitle;
@end

