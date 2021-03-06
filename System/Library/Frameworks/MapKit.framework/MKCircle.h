/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSString;

@interface MKCircle : MKShape <MKOverlay> {

	CLLocationCoordinate2D _coordinate;
	double _radius;
	SCD_Struct_MK1 _boundingMapRect;

}

@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                  //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK1 boundingMapRect;                 //@synthesize boundingMapRect=_boundingMapRect - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)circleWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 ;
+(id)circleWithMapRect:(SCD_Struct_MK1)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(double)radius;
-(BOOL)intersectsMapRect:(SCD_Struct_MK1)arg1 ;
-(SCD_Struct_MK1)boundingMapRect;
-(id)_initWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 ;
@end

