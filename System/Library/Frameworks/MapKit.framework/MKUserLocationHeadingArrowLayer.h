/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CAShapeLayer.h>
#import <libobjc.A.dylib/MKUserLocationHeadingIndicator.h>
#import <libobjc.A.dylib/MKUserLocationHeadingAnimatableIndicator.h>

@class UITraitCollection, _MKPuckAnnotationView, NSString;

@interface MKUserLocationHeadingArrowLayer : CAShapeLayer <MKUserLocationHeadingIndicator, MKUserLocationHeadingAnimatableIndicator> {

	double _maxUncertaintyAngleToShowArrow;
	double _baseRadius;
	double _tipRadius;
	double _baseHalfAngle;
	UITraitCollection* _traitCollection;
	double _minimumAccuracyRadius;
	unsigned long long _mapType;
	_MKPuckAnnotationView* _userLocationView;
	double _headingRadians;

}

@property (nonatomic,__weak,readonly) _MKPuckAnnotationView * userLocationView;              //@synthesize userLocationView=_userLocationView - In the implementation block
@property (assign,nonatomic) double headingRadians;                                          //@synthesize headingRadians=_headingRadians - In the implementation block
@property (assign,nonatomic) double minimumAccuracyRadius;                                   //@synthesize minimumAccuracyRadius=_minimumAccuracyRadius - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                            //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;                                     //@synthesize mapType=_mapType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMapType:(unsigned long long)arg1 ;
-(unsigned long long)mapType;
-(UITraitCollection *)traitCollection;
-(_MKPuckAnnotationView *)userLocationView;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)updateTintColor:(id)arg1 ;
-(void)setAccuracyRadius:(double)arg1 duration:(double)arg2 ;
-(void)setMinimumAccuracyRadius:(double)arg1 ;
-(void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2 ;
-(void)animateToSetVisible:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateHeading:(double)arg1 ;
-(id)initWithUserLocationView:(id)arg1 ;
-(CGPoint)_positionWhenVisible:(BOOL)arg1 ;
-(CGPathRef)_pathWhenVisible:(BOOL)arg1 ;
-(void)setHeadingRadians:(double)arg1 ;
-(BOOL)_shouldBeVisibleForAccuracy:(double)arg1 ;
-(id)_animationToSetVisible:(BOOL)arg1 ;
-(double)_baseRadiusWhenVisible:(BOOL)arg1 ;
-(double)_tipRadiusWhenVisible:(BOOL)arg1 ;
-(id)_bezierPathWithBaseRadius:(double)arg1 tipRadius:(double)arg2 baseHalfAngle:(double)arg3 ;
-(double)minimumAccuracyRadius;
-(double)headingRadians;
@end

