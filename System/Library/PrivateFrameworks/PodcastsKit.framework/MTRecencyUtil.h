/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MTRecencyUtil : NSObject
+(id)upNextForPodcastUuid:(id)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 ctx:(id)arg4 ;
+(id)_upNextForPodcast:(id)arg1 serial:(BOOL)arg2 excludeExplicit:(long long)arg3 excludeStreaming:(long long)arg4 ctx:(id)arg5 ;
+(id)_nextEpisodeForUnplayedPodcast:(id)arg1 serial:(BOOL)arg2 restrictToLibrary:(BOOL)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 ctx:(id)arg6 ;
+(double)_lastDatePlayedIfNotFutureDate:(double)arg1 podcast:(id)arg2 ;
+(id)upNextForPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)episodesForListenNowWithContext:(id)arg1 limit:(long long)arg2 ;
@end

