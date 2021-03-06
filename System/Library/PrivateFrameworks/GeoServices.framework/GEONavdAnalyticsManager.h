/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEONavdAnalyticsReporter;
@interface GEONavdAnalyticsManager : NSObject {

	id<GEONavdAnalyticsReporter> _analyticsReporter;

}

@property (nonatomic,retain) id<GEONavdAnalyticsReporter> analyticsReporter;              //@synthesize analyticsReporter=_analyticsReporter - In the implementation block
+(id)sharedManager;
-(id<GEONavdAnalyticsReporter>)analyticsReporter;
-(void)setAnalyticsReporter:(id<GEONavdAnalyticsReporter>)arg1 ;
@end

