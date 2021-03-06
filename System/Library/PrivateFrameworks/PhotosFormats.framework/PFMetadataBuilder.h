/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PFMetadataBuilder.h>
@class NSString, NSArray, CLLocation, NSDate, NSTimeZone;


@protocol PFMetadataBuilder <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * caption; 
@property (nonatomic,copy) NSArray * keywords; 
@property (nonatomic,copy) NSString * accessibilityDescription; 
@property (nonatomic,copy) NSArray * peopleNames; 
@property (nonatomic,copy) CLLocation * location; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSTimeZone * creationTimeZone; 
@required
-(NSDate *)creationDate;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(NSArray *)keywords;
-(void)setKeywords:(id)arg1;
-(CLLocation *)location;
-(void)setLocation:(id)arg1;
-(NSString *)caption;
-(void)setCaption:(id)arg1;
-(void)setCreationDate:(id)arg1 timeZone:(id)arg2;
-(NSString *)accessibilityDescription;
-(void)setAccessibilityDescription:(id)arg1;
-(NSArray *)peopleNames;
-(void)setPeopleNames:(id)arg1;
-(NSTimeZone *)creationTimeZone;

@end


@class NSString, NSArray, CLLocation, NSDate, NSTimeZone;

@interface PFMetadataBuilder : NSObject <PFMetadataBuilder> {

	NSDate* _creationDate;
	NSTimeZone* _creationTimeZone;
	NSString* _caption;
	NSString* _title;
	NSArray* _keywords;
	NSString* _accessibilityDescription;
	NSArray* _peopleNames;
	CLLocation* _location;

}

@property (nonatomic,retain) NSDate * creationDate;                          //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * creationTimeZone;                  //@synthesize creationTimeZone=_creationTimeZone - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * caption;                               //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSArray * keywords;                               //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,copy) NSString * accessibilityDescription;              //@synthesize accessibilityDescription=_accessibilityDescription - In the implementation block
@property (nonatomic,copy) NSArray * peopleNames;                            //@synthesize peopleNames=_peopleNames - In the implementation block
@property (nonatomic,copy) CLLocation * location;                            //@synthesize location=_location - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSDate *)creationDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)keywords;
-(void)setKeywords:(NSArray *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)setCreationDate:(id)arg1 timeZone:(id)arg2 ;
-(NSString *)accessibilityDescription;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(NSArray *)peopleNames;
-(void)setPeopleNames:(NSArray *)arg1 ;
-(NSTimeZone *)creationTimeZone;
-(id)combinedKeywordsAndPeople;
-(void)setCreationTimeZone:(NSTimeZone *)arg1 ;
@end

