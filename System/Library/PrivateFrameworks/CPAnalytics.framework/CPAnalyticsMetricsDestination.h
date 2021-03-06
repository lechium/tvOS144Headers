/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CPAnalytics/CPAnalyticsDestination.h>

@class NSMapTable, NSString;

@interface CPAnalyticsMetricsDestination : NSObject <CPAnalyticsDestination> {

	NSMapTable* _eventRoutes;

}

@property (nonatomic,readonly) NSMapTable * eventRoutes;              //@synthesize eventRoutes=_eventRoutes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)processEvent:(id)arg1 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(void)_sendCoreAnalyticsEventWithCustomConfig:(id)arg1 eventRoute:(id)arg2 ;
-(id)_buildCustomCoreAnalyticsPayloadForEvent:(id)arg1 withPropertiesToInclude:(id)arg2 ;
-(void)_sendCoreAnalyticsEvent:(id)arg1 eventPayload:(id)arg2 ;
-(NSMapTable *)eventRoutes;
@end

