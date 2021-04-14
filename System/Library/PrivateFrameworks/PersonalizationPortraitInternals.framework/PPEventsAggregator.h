/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface PPEventsAggregator : NSObject {

	NSArray* _eventsPool;

}

@property (nonatomic,retain) NSArray * eventsPool;              //@synthesize eventsPool=_eventsPool - In the implementation block
-(id)initWithEventsPool:(id)arg1 ;
-(id)tripCandidatesFromEventsPool;
-(BOOL)isEvent:(id)arg1 dupeOfEvent:(id)arg2 ;
-(void)dedupeEventsInPool;
-(id)sortedEvents;
-(NSArray *)eventsPool;
-(void)setEventsPool:(NSArray *)arg1 ;
@end

