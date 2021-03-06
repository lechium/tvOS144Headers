/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CSSearchQuery, EKEventStore;

@interface EKSpotlightSearch : NSObject {

	CSSearchQuery* csQuery;
	EKEventStore* _eventStore;

}

@property (__weak) EKEventStore * eventStore;              //@synthesize eventStore=_eventStore - In the implementation block
+(id)queryStringForSearchTerm:(id)arg1 matchingTypes:(unsigned long long)arg2 fromStartDate:(id)arg3 toEndDate:(id)arg4 ;
+(id)_queryStringForPeopleMatchingSearchTerm:(id)arg1 ;
+(id)searchWithCSQuery:(id)arg1 inStore:(id)arg2 resultHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)queryStringForSearchTerm:(id)arg1 matchingTypes:(unsigned long long)arg2 ;
-(id)query;
-(void)cancel;
-(void)start;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(id)initWithSearchWithCSQuery:(id)arg1 inStore:(id)arg2 resultHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

