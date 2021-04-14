/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDLinkedService, NSArray, NSTimeZone, NSString, GEOFeatureStyleAttributes;

@interface GEOLinkedService : NSObject {

	GEOPDLinkedService* _linkedService;
	NSArray* _cachedBusinessHours;
	BOOL _checkedForBusinessHoursAlready;
	NSTimeZone* _timeZone;
	NSArray* _businessHours;
	NSString* _localizedCategoryName;
	GEOFeatureStyleAttributes* _styleAttributes;

}

@property (nonatomic,retain) NSTimeZone * timeZone;                                    //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSArray * businessHours;                                  //@synthesize businessHours=_businessHours - In the implementation block
@property (nonatomic,retain) NSString * localizedCategoryName;                         //@synthesize localizedCategoryName=_localizedCategoryName - In the implementation block
@property (nonatomic,retain) GEOFeatureStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSArray *)businessHours;
-(void)setBusinessHours:(NSArray *)arg1 ;
-(GEOFeatureStyleAttributes *)styleAttributes;
-(id)initWithGEOPDLinkedService:(id)arg1 timeZone:(id)arg2 ;
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(void)setStyleAttributes:(GEOFeatureStyleAttributes *)arg1 ;
@end

