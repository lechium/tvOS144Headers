/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AFUIDisambiguationAnalyticsManagerDataSource, AFDisambiguationAssistance;
@class NSArray;

@interface AFUIDisambiguationAnalyticsManager : NSObject {

	id<AFUIDisambiguationAnalyticsManagerDataSource> _dataSource;
	NSArray* _listItems;
	id<AFDisambiguationAssistance> _disambiguationAssistance;

}

@property (assign,nonatomic,__weak) id<AFUIDisambiguationAnalyticsManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSArray * listItems;                                                             //@synthesize listItems=_listItems - In the implementation block
@property (nonatomic,retain) id<AFDisambiguationAssistance> disambiguationAssistance;                         //@synthesize disambiguationAssistance=_disambiguationAssistance - In the implementation block
+(id)sharedManager;
-(id<AFUIDisambiguationAnalyticsManagerDataSource>)dataSource;
-(void)setDataSource:(id<AFUIDisambiguationAnalyticsManagerDataSource>)arg1 ;
-(id)_listItemMatchingAceId:(id)arg1 ;
-(id<AFDisambiguationAssistance>)disambiguationAssistance;
-(void)_logDisambiguationSelectedEventWithListItem:(id)arg1 ;
-(id)_allListItems;
-(void)_recordSASMetrics:(id)arg1 withSelectedBundleId:(id)arg2 originalCommandId:(id)arg3 ;
-(NSArray *)listItems;
-(void)logDisambiguationItemSelected:(id)arg1 ;
-(void)logDisambiguationDismissedEvent;
-(void)setListItems:(NSArray *)arg1 ;
-(void)setDisambiguationAssistance:(id<AFDisambiguationAssistance>)arg1 ;
@end

