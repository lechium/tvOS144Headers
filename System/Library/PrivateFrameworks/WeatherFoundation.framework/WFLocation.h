/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation, NSString, NSTimeZone, NSDate;

@interface WFLocation : NSObject <NSSecureCoding, NSCopying> {

	CLLocation* _geoLocation;
	NSString* _weatherDisplayName;
	NSString* _weatherLocationName;
	NSString* _city;
	NSString* _county;
	NSString* _state;
	NSString* _stateAbbreviation;
	NSString* _country;
	NSString* _countryAbbreviation;
	NSTimeZone* _timeZone;
	NSDate* _creationDate;
	long long _archiveVersion;
	NSString* _locationID;
	NSString* _displayName;

}

@property (nonatomic,readonly) NSString * wf_weatherChannelGeocodeValue; 
@property (assign) long long archiveVersion;                                          //@synthesize archiveVersion=_archiveVersion - In the implementation block
@property (nonatomic,copy) CLLocation * geoLocation;                                  //@synthesize geoLocation=_geoLocation - In the implementation block
@property (nonatomic,copy) NSString * locationID;                                     //@synthesize locationID=_locationID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * weatherDisplayName;                             //@synthesize weatherDisplayName=_weatherDisplayName - In the implementation block
@property (nonatomic,copy) NSString * weatherLocationName;                            //@synthesize weatherLocationName=_weatherLocationName - In the implementation block
@property (nonatomic,copy) NSString * city;                                           //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSString * county;                                         //@synthesize county=_county - In the implementation block
@property (nonatomic,copy) NSString * state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * stateAbbreviation;                              //@synthesize stateAbbreviation=_stateAbbreviation - In the implementation block
@property (nonatomic,copy) NSString * country;                                        //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * countryAbbreviation;                            //@synthesize countryAbbreviation=_countryAbbreviation - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                   //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                   //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) BOOL shouldQueryForAirQualityData; 
@property (nonatomic,readonly) BOOL needsGeocoding; 
+(BOOL)supportsSecureCoding;
+(long long)currentArchiveVersion;
+(id)knownKeys;
+(id)locationsByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2 ;
+(id)locationsByConsolidatingDuplicatesInBucket:(id)arg1 ;
+(id)locationsByFilteringDuplicates:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(NSString *)displayName;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(NSString *)weatherDisplayName;
-(NSString *)country;
-(id)summary;
-(void)setCountry:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)city;
-(NSString *)weatherLocationName;
-(id)initWithPlacemark:(id)arg1 ;
-(void)setGeoLocation:(CLLocation *)arg1 ;
-(CLLocation *)geoLocation;
-(NSString *)locationID;
-(void)setLocationID:(NSString *)arg1 ;
-(NSString *)wf_weatherChannelGeocodeValue;
-(NSString *)countryAbbreviation;
-(void)sunrise:(id*)arg1 andSunset:(id*)arg2 forDate:(id)arg3 ;
-(id)initWithMapItem:(id)arg1 isCurrentLocation:(BOOL)arg2 ;
-(id)summaryThatIsCompact:(BOOL)arg1 ;
-(NSString *)county;
-(NSString *)stateAbbreviation;
-(long long)archiveVersion;
-(void)setCounty:(NSString *)arg1 ;
-(void)setStateAbbreviation:(NSString *)arg1 ;
-(void)setCountryAbbreviation:(NSString *)arg1 ;
-(void)setWeatherDisplayName:(NSString *)arg1 ;
-(void)setWeatherLocationName:(NSString *)arg1 ;
-(void)setArchiveVersion:(long long)arg1 ;
-(BOOL)isDayForDate:(id)arg1 ;
-(id)_sunAlmanacForDate:(id)arg1 ;
-(id)countriesSupportAQI;
-(id)initWithSearchResponse:(id)arg1 ;
-(BOOL)needsGeocoding;
-(BOOL)isDay;
-(id)sunriseForDate:(id)arg1 ;
-(id)sunsetForDate:(id)arg1 ;
-(BOOL)shouldQueryForAirQualityData;
-(id)localDataRepresentation;
-(id)initWithLocalDataRepresentation:(id)arg1 ;
-(id)cloudDictionaryRepresentation;
-(id)initWithCloudDictionaryRepresentation:(id)arg1 ;
@end

