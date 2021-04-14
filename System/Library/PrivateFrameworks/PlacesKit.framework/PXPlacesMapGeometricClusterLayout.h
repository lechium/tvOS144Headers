/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PlacesKit/PlacesKit-Structs.h>
#import <PlacesKit/PXPlacesMapLayout.h>

@interface PXPlacesMapGeometricClusterLayout : PXPlacesMapLayout {

	double _clusteringDistance;

}

@property (assign,nonatomic) double clusteringDistance;              //@synthesize clusteringDistance=_clusteringDistance - In the implementation block
-(id)init;
-(id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2 ;
-(id)_clusterGeotaggables:(id)arg1 forViewPort:(id)arg2 ;
-(id)_findClusterOverlappingGeotaggable:(id)arg1 fromClusters:(id)arg2 forViewPort:(id)arg3 ;
-(BOOL)_shapeAtCoordinate:(CLLocationCoordinate2D)arg1 overlapsShapeAtCoordinate:(CLLocationCoordinate2D)arg2 forViewPort:(id)arg3 ;
-(double)clusteringDistance;
-(void)setClusteringDistance:(double)arg1 ;
@end

