/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface VUIMetricsPageEventData : NSObject {

	NSString* _pageId;
	NSString* _pageType;
	NSDictionary* _eventData;

}

@property (nonatomic,retain) NSString * pageId;                     //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,retain) NSString * pageType;                   //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,retain) NSDictionary * eventData;              //@synthesize eventData=_eventData - In the implementation block
+(id)createWithPageId:(id)arg1 andPageType:(id)arg2 andEventData:(id)arg3 ;
+(id)createWithPageType:(id)arg1 ;
+(id)createWithMetricsData:(id)arg1 ;
-(NSDictionary *)eventData;
-(NSString *)pageType;
-(void)setPageType:(NSString *)arg1 ;
-(void)setEventData:(NSDictionary *)arg1 ;
-(void)setPageId:(NSString *)arg1 ;
-(NSString *)pageId;
-(id)generateMetricsDataDictionary;
@end

