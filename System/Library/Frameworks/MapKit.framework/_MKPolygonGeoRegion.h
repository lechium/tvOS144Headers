/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKGeoJSONCoverageRegion.h>

@class NSString;

@interface _MKPolygonGeoRegion : NSObject <MKGeoJSONCoverageRegion> {

	CLLocationCoordinate2D* _polygon;
	unsigned long long _vertexCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)coordinateLiesInRegion:(CLLocationCoordinate2D)arg1 ;
-(BOOL)_loadWithJSONObject:(id)arg1 error:(id*)arg2 ;
-(id)initWithJSONObject:(id)arg1 error:(id*)arg2 ;
@end

