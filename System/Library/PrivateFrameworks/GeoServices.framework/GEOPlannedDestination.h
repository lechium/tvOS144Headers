/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSData;

@interface GEOPlannedDestination : NSObject <NSSecureCoding> {

	NSDate* _arrivalDate;
	NSDate* _expirationDate;
	int _transportType;
	NSData* _handle;

}

@property (nonatomic,retain) NSDate * arrivalDate;                 //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) int transportType;                    //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) NSData * handle;                    //@synthesize handle=_handle - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(NSData *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(NSDate *)arrivalDate;
-(void)setArrivalDate:(NSDate *)arg1 ;
-(id)initWithMapItemHandle:(id)arg1 ;
@end

