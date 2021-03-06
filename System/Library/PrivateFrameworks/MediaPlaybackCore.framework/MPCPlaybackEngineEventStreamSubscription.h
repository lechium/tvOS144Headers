/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPCPlaybackEngineEventStreamSubscription <NSObject>
@required
-(void)flushEventsWithCompletion:(/*^block*/id)arg1;
-(void)subscribeToEventType:(id)arg1 handler:(/*^block*/id)arg2;
-(void)subscribeToEventType:(id)arg1 options:(unsigned long long)arg2 handler:(/*^block*/id)arg3;
-(void)cancelSubscription;

@end

