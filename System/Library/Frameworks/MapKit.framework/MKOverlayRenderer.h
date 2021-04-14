/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MKOverlay, OS_dispatch_queue;
#import <MapKit/MapKit-Structs.h>
@class NSObject, MKMapView;

@interface MKOverlayRenderer : NSObject {

	id<MKOverlay> _overlay;
	SCD_Struct_MK1 _boundingMapRect;
	id _renderer;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	MKMapView* _mapView;
	double _contentScaleFactor;
	double _alpha;

}

@property (nonatomic,readonly) id<MKOverlay> overlay;              //@synthesize overlay=_overlay - In the implementation block
@property (assign) double alpha;                                   //@synthesize alpha=_alpha - In the implementation block
@property (readonly) double contentScaleFactor; 
-(id)init;
-(void)dealloc;
-(double)alpha;
-(void)setNeedsDisplay;
-(void)setAlpha:(double)arg1 ;
-(id<MKOverlay>)overlay;
-(id)_mapView;
-(double)contentScaleFactor;
-(void)setContentScaleFactor:(double)arg1 ;
-(id)_renderer;
-(BOOL)overlay:(id)arg1 canPossiblyDrawKey:(const SCD_Struct_MK48*)arg2 ;
-(BOOL)overlay:(id)arg1 canDrawKey:(const SCD_Struct_MK48*)arg2 ;
-(void)overlay:(id)arg1 drawKey:(const SCD_Struct_MK48*)arg2 inContext:(CGContextRef)arg3 ;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(void)_setMapView:(id)arg1 ;
-(void)drawMapRect:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(CGSize)_originMapPoint;
-(void)_updateRenderColors;
-(void)set_boundingMapRect:(SCD_Struct_MK1)arg1 ;
-(id)_mk_overlayLayer;
-(id)_mk_overlayView;
-(void)set_renderer:(id)arg1 ;
-(SCD_Struct_MK1)_boundingMapRect;
-(id)initWithOverlay:(id)arg1 ;
-(CGPoint)pointForMapPoint:(CGSize)arg1 ;
-(BOOL)canDrawMapRect:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 ;
-(BOOL)_mayExtendOutsideBounds;
-(void)_forEachMapRectForKey:(const SCD_Struct_MK48*)arg1 withContext:(CGContextRef)arg2 performBlock:(/*^block*/id)arg3 ;
-(CGRect)rectForMapRect:(SCD_Struct_MK1)arg1 ;
-(CGSize)mapPointForPoint:(CGPoint)arg1 ;
-(SCD_Struct_MK1)mapRectForRect:(CGRect)arg1 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK1)arg1 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 ;
@end
