/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, TVTimeRange, NSURL;

@interface TVHighlight : NSObject {

	NSString* _localizedName;
	NSString* _highlightDescription;
	TVTimeRange* _timeRange;
	NSURL* _imageURL;
	TVTimeRange* _dateRange;

}

@property (nonatomic,retain) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * highlightDescription;              //@synthesize highlightDescription=_highlightDescription - In the implementation block
@property (nonatomic,retain) TVTimeRange * timeRange;                      //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                             //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) TVTimeRange * dateRange;                      //@synthesize dateRange=_dateRange - In the implementation block
-(NSString *)localizedName;
-(void)setTimeRange:(TVTimeRange *)arg1 ;
-(TVTimeRange *)timeRange;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSURL *)imageURL;
-(void)setImageURL:(NSURL *)arg1 ;
-(void)setDateRange:(TVTimeRange *)arg1 ;
-(TVTimeRange *)dateRange;
-(NSString *)highlightDescription;
-(void)setHighlightDescription:(NSString *)arg1 ;
@end

