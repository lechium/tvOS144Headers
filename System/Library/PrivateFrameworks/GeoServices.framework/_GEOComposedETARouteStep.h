/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOTimeCheckpoints;

@interface _GEOComposedETARouteStep : NSObject <NSSecureCoding> {

	unsigned long long _stepID;
	double _travelDuration;
	double _length;
	GEOTimeCheckpoints* _timeCheckpoints;

}

@property (assign,nonatomic) unsigned long long stepID;                         //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) double travelDuration;                             //@synthesize travelDuration=_travelDuration - In the implementation block
@property (assign,nonatomic) double length;                                     //@synthesize length=_length - In the implementation block
@property (nonatomic,retain) GEOTimeCheckpoints * timeCheckpoints;              //@synthesize timeCheckpoints=_timeCheckpoints - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(double)length;
-(void)setLength:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)stepID;
-(void)setTravelDuration:(double)arg1 ;
-(double)travelDuration;
-(void)setStepID:(unsigned long long)arg1 ;
-(GEOTimeCheckpoints *)timeCheckpoints;
-(void)setTimeCheckpoints:(GEOTimeCheckpoints *)arg1 ;
-(id)descriptionWithPrecision:(unsigned long long)arg1 ;
@end

