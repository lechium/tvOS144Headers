/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PodcastsKit/PodcastsKit-Structs.h>
#import <Podcasts/MTSingleton.h>
#import <libobjc.A.dylib/MTPlaybackIdentifierComposing.h>

@interface MTPlaybackIdentifierUtil : MTSingleton <MTPlaybackIdentifierComposing>
+(id)__queryStringToQueryDictionary:(id)arg1 ;
+(id)__stringWithPercentEscape:(id)arg1 ;
+(id)__stringByRemovingPercentEscapes:(id)arg1 ;
-(id)universalPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeGuid:(id)arg2 episodeStoreId:(long long)arg3 podcastFeedUrl:(id)arg4 ;
-(id)playbackQueueIdentifierForEpisodeAdamId:(id)arg1 ;
-(id)_playbackRequestIdentifierWithHost:(id)arg1 queryKey:(id)arg2 value:(id)arg3 ;
-(id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 episodeUuid:(id)arg2 sampPlaybackOrder:(id)arg3 ;
-(id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 sampPlaybackOrder:(id)arg7 ;
-(id)_universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 context:(long long)arg7 contextSortType:(long long)arg8 sampPlaybackOrder:(id)arg9 ;
-(id)_playbackRequestIdentifierWithHost:(id)arg1 queryComponents:(id)arg2 ;
-(id)localPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeUuid:(id)arg2 ;
-(id)universalPlaybackQueueIdentifierForStationUuid:(id)arg1 episodeUuid:(id)arg2 episodeGuid:(id)arg3 episodeStoreId:(long long)arg4 podcastFeedUrl:(id)arg5 ;
-(MRSystemAppPlaybackQueueRef)playbackQueueWithDsid:(id)arg1 forIdentifiers:(id)arg2 ;
-(id)playbackQueueIdentifierForPlayMyPodcastsWithPlaybackOrder:(id)arg1 ;
-(id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg1 sampPlaybackOrder:(id)arg2 ;
-(id)universalPlaybackQueueIdentifierForPodcastFeedUrl:(id)arg1 podcastStoreId:(long long)arg2 episodeGuid:(id)arg3 episodeStoreId:(long long)arg4 sampPlaybackOrder:(id)arg5 ;
-(id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 ;
-(id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 sampPlaybackOrder:(id)arg4 ;
-(id)playbackQueueIdentifierForPodcastAdamId:(id)arg1 sampPlaybackOrder:(id)arg2 ;
-(id)playbackQueueIdentifierForSubscribeToPodcast:(id)arg1 ;
-(id)playbackQueueIdentifierForSubscribeToPodcastFeedUrl:(id)arg1 ;
-(id)localPlaybackQueueIdentifierForStationUuid:(id)arg1 ;
-(id)playbackRequestURLWithPlayReason:(unsigned long long)arg1 baseRequestURLString:(id)arg2 ;
-(id)playbackRequestURLWithDSID:(id)arg1 baseRequestURLString:(id)arg2 ;
-(BOOL)isLocalSetPlaybackQueueURLString:(id)arg1 ;
-(BOOL)isSubscribeCommandURLString:(id)arg1 ;
-(BOOL)isUniversalPlaybackIdentifierURLString:(id)arg1 ;
-(id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg1 podcastFeedUrl:(id)arg2 podcastStoreId:(long long)arg3 episodeUuid:(id)arg4 episodeGuid:(id)arg5 episodeStoreId:(long long)arg6 context:(long long)arg7 contextSortType:(long long)arg8 ;
-(MRSystemAppPlaybackQueueRef)playbackQueueWithAccountInfoForIdentifiers:(id)arg1 ;
-(unsigned long long)_playQueueTypeForRequestURL:(id)arg1 ;
-(long long)_episodeOrderFromString:(id)arg1 ;
-(unsigned long long)_playReasonFromString:(id)arg1 ;
-(long long)_episodeContextFromString:(id)arg1 ;
-(long long)_episodeContextSortFromString:(id)arg1 ;
@end

