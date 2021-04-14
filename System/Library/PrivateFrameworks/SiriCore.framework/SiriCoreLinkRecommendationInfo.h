/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SiriCoreLinkRecommendationInfo : NSObject {

	BOOL _btPreference;
	BOOL _wifiPreference;
	double _timeTaken;

}
-(id)initWithQueue:(id)arg1 ;
-(void)setTimeTaken:(double)arg1 ;
-(double)timeTaken;
-(id)initWithPreferences:(BOOL)arg1 wifiPreference:(BOOL)arg2 timeTaken:(double)arg3 metrics:(id)arg4 ;
-(BOOL)btPreference;
-(void)setBTPreference:(BOOL)arg1 ;
-(BOOL)wifiPreference;
-(void)setWiFiPreference:(BOOL)arg1 ;
-(void)setLinkMetrics:(id)arg1 ;
-(id)linkMetrics;
-(void)resetLinkMetrics;
-(void)fetchLinkMetrics:(/*^block*/id)arg1 ;
@end

