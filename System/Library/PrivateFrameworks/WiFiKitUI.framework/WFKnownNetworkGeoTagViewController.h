/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class NSArray, MKMapView, NSMutableArray, NSDateFormatter, NSString;

@interface WFKnownNetworkGeoTagViewController : UIViewController <MKMapViewDelegate> {

	NSArray* _geoTags;
	MKMapView* _mapView;
	NSMutableArray* _annotations;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,retain) MKMapView * mapView;                          //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) NSMutableArray * annotations;                 //@synthesize annotations=_annotations - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSArray * geoTags;                            //@synthesize geoTags=_geoTags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSMutableArray *)annotations;
-(void)setAnnotations:(NSMutableArray *)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(NSArray *)geoTags;
-(void)setGeoTags:(NSArray *)arg1 ;
-(void)addMap;
-(void)addAnnotations;
-(void)setVisibleMapRegion;
-(void)showPinsOnMap;
-(void)addAnnotationForGeotag:(id)arg1 ;
@end

