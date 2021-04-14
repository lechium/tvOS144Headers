/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class MKUserLocationInternal, CLLocation, CLHeading, NSString;

@interface MKUserLocation : NSObject <MKAnnotation> {

	MKUserLocationInternal* _internal;
	double _expectedCoordinateUpdateInterval;
	double _expectedHeadingUpdateInterval;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) double headingDegrees; 
@property (nonatomic,readonly) double accuracy; 
@property (assign,getter=isUpdating,nonatomic) BOOL updating; 
@property (nonatomic,retain) CLLocation * location; 
@property (nonatomic,retain) CLHeading * heading; 
@property (nonatomic,retain) CLLocation * fixedLocation; 
@property (nonatomic,retain) CLLocation * predictedLocation; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) NSString * shortDescription; 
@property (assign,nonatomic) double expectedCoordinateUpdateInterval;              //@synthesize expectedCoordinateUpdateInterval=_expectedCoordinateUpdateInterval - In the implementation block
@property (assign,nonatomic) double expectedHeadingUpdateInterval;                 //@synthesize expectedHeadingUpdateInterval=_expectedHeadingUpdateInterval - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
+(void)_setAnnotationClass:(Class)arg1 ;
+(id)keyPathsForValuesAffectingSubtitle;
-(id)init;
-(void)dealloc;
-(void)reset;
-(double)timestamp;
-(CLLocationCoordinate2D)coordinate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)shortDescription;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setTimestamp:(double)arg1 ;
-(id)annotation;
-(CLLocation *)location;
-(CLHeading *)heading;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setCourse:(double)arg1 ;
-(double)course;
-(void)setHeading:(CLHeading *)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(double)accuracy;
-(void)setUpdating:(BOOL)arg1 ;
-(BOOL)isUpdating;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(BOOL)hasValidHeading;
-(double)headingDegrees;
-(double)expectedCoordinateUpdateInterval;
-(double)expectedHeadingUpdateInterval;
-(void)setFixedLocation:(CLLocation *)arg1 ;
-(CLLocation *)predictedLocation;
-(void)setPredictedLocation:(CLLocation *)arg1 ;
-(void)setExpectedCoordinateUpdateInterval:(double)arg1 ;
-(void)setExpectedHeadingUpdateInterval:(double)arg1 ;
-(CLLocation *)fixedLocation;
-(void)_updateCoordinate;
@end

