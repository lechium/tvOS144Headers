/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>
#import <libobjc.A.dylib/MKGeoJSONObject.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSArray, NSString;

@interface MKMultiPolyline : MKShape <MKGeoJSONObject, MKOverlay> {

	NSArray* _polylines;
	SCD_Struct_MK1 _boundingMapRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * polylines;                       //@synthesize polylines=_polylines - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) SCD_Struct_MK1 boundingMapRect;                 //@synthesize boundingMapRect=_boundingMapRect - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(id)init;
-(CLLocationCoordinate2D)coordinate;
-(NSArray *)polylines;
-(id)initWithPolylines:(id)arg1 ;
-(id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2 ;
-(SCD_Struct_MK1)boundingMapRect;
@end

