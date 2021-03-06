/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPCPlaybackEngineEventStreamCursor <NSObject>
@required
-(id)findPreviousEventWithType:(id)arg1 matchingPayload:(id)arg2;
-(id)findPreviousEventWithTypes:(id)arg1 matchingPayload:(id)arg2;
-(id)cursorUntilEvent:(id)arg1;
-(long long)countOfPreviousEventsWithType:(id)arg1 matchingPayload:(id)arg2;
-(void)enumeratePreviousEventsWithTypes:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(id)cursorFromEvent:(id)arg1 untilEvent:(id)arg2;
-(void)enumeratePreviousEventsWithType:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)enumeratePreviousEventsWithTypes:(id)arg1 matchingPayload:(id)arg2 usingBlock:(/*^block*/id)arg3;
-(long long)countOfPreviousEventsWithTypes:(id)arg1 matchingPayload:(id)arg2;
-(void)enumeratePreviousEventsWithType:(id)arg1 matchingPayload:(id)arg2 usingBlock:(/*^block*/id)arg3;

@end

