/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate, NSURL;

@interface StockNewsItem : NSObject {

	NSString* _headline;
	NSString* _summary;
	NSString* _source;
	NSDate* _date;
	NSURL* _link;
	NSString* _localizedDateString;

}

@property (nonatomic,retain) NSString * headline;                                  //@synthesize headline=_headline - In the implementation block
@property (nonatomic,retain) NSString * summary;                                   //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * source;                                    //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSURL * link;                                         //@synthesize link=_link - In the implementation block
@property (nonatomic,retain,readonly) NSString * localizedDateString; 
+(id)localizedStringForDate:(id)arg1 ;
-(id)description;
-(NSDate *)date;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)summary;
-(void)setHeadline:(NSString *)arg1 ;
-(NSString *)headline;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(id)initWithArchiveDictionary:(id)arg1 ;
-(id)archiveDictionary;
-(void)resetLocale;
-(long long)chronologicalComparisonWithNewsItem:(id)arg1 ;
-(NSString *)localizedDateString;
@end

