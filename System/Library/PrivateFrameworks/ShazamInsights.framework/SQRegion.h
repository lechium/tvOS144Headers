/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CLLocation;

@interface SQRegion : NSObject {

	long long _magnitude;
	NSString* _name;
	CLLocation* _location;
	NSString* _identifier;
	NSString* _countryCode;

}

@property (nonatomic,copy) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * countryCode;               //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long magnitude;              //@synthesize magnitude=_magnitude - In the implementation block
+(id)regionWithIdentifier:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)countryCode;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(long long)magnitude;
@end

