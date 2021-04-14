/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <GeoServices/GeoServices-Structs.h>
@class GEOLocation, GEOAddress, GEOMapRegion, GEOLatLng, NSString;

@interface GEOMapItemBuilder : NSObject {

	SCD_Struct_GE118 _has;
	GEOLocation* _location;
	int _referenceFrame;
	GEOAddress* _address;
	GEOMapRegion* _mapRegion;
	GEOLatLng* _latlng;
	NSString* _name;

}

@property (nonatomic,retain) GEOLocation * location;                //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) int referenceFrame;                    //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (nonatomic,retain) GEOAddress * address;                  //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) GEOMapRegion * mapRegion;              //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,retain) GEOLatLng * latlng;                    //@synthesize latlng=_latlng - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
+(id)buildWithSetterBlock:(/*^block*/id)arg1 ;
-(NSString *)name;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(GEOAddress *)address;
-(id)build;
-(int)referenceFrame;
-(void)setReferenceFrame:(int)arg1 ;
-(void)setAddress:(GEOAddress *)arg1 ;
-(GEOLocation *)location;
-(void)setLocation:(GEOLocation *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setLatlng:(GEOLatLng *)arg1 ;
-(GEOLatLng *)latlng;
@end

