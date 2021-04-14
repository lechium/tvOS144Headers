/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class NSString;

@interface GeoIpLookupResult : NSObject {

	NSString* _ipAddress;
	GEOCoarseLocationLatLng _latLong;
	NSString* _countryCode;
	NSString* _timeZone;

}

@property (nonatomic,readonly) NSString * ipAddress;                         //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,readonly) GEOCoarseLocationLatLng latLong;              //@synthesize latLong=_latLong - In the implementation block
@property (nonatomic,readonly) NSString * countryCode;                       //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) NSString * timeZone;                          //@synthesize timeZone=_timeZone - In the implementation block
-(NSString *)timeZone;
-(NSString *)countryCode;
-(NSString *)ipAddress;
-(id)initWithGEOPDPlaceResponse:(id)arg1 ;
-(GEOCoarseLocationLatLng)latLong;
@end

