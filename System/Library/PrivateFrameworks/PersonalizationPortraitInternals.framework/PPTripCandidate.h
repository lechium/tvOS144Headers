/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class NSArray;

@interface PPTripCandidate : NSObject {

	NSArray* _flights;
	NSArray* _hotels;
	NSArray* _others;

}

@property (nonatomic,retain) NSArray * flights;              //@synthesize flights=_flights - In the implementation block
@property (nonatomic,retain) NSArray * hotels;               //@synthesize hotels=_hotels - In the implementation block
@property (nonatomic,retain) NSArray * others;               //@synthesize others=_others - In the implementation block
-(id)allEvents;
-(NSArray *)flights;
-(void)setFlights:(NSArray *)arg1 ;
-(id)initWithTripCandidateA:(id)arg1 andTripCandidateB:(id)arg2 ;
-(BOOL)canBeMergedWithTripCandidate:(id)arg1 ;
-(BOOL)shouldPromoteToTripEvent;
-(id)tripEventFromCandidate;
-(unsigned char)modeForEventCategory:(unsigned char)arg1 ;
-(double)timeIntervalBetweenEvent:(id)arg1 andEvent:(id)arg2 ;
-(id)partFromEvents:(id)arg1 tripMode:(unsigned char)arg2 takingLocationFromEvent:(id)arg3 ;
-(id)partFromEvents:(id)arg1 tripMode:(unsigned char)arg2 takingLocationFromEvent:(id)arg3 overradingStartDate:(id)arg4 endDate:(id)arg5 ;
-(NSRange)eventsTimeRange;
-(id)reverseGeocodedLocation:(id)arg1 ;
-(NSArray *)hotels;
-(void)setHotels:(NSArray *)arg1 ;
-(NSArray *)others;
-(void)setOthers:(NSArray *)arg1 ;
@end

