/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOComposedRouteTrafficColorInfo : NSObject <NSSecureCoding> {

	unsigned long long _color;
	double _offsetMeters;
	SCD_Struct_GE83 _routeCoordinate;

}

@property (assign,nonatomic) unsigned long long color;                     //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double offsetMeters;                          //@synthesize offsetMeters=_offsetMeters - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE83 routeCoordinate;              //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)color;
-(void)setColor:(unsigned long long)arg1 ;
-(SCD_Struct_GE83)routeCoordinate;
-(void)setRouteCoordinate:(SCD_Struct_GE83)arg1 ;
-(void)setOffsetMeters:(double)arg1 ;
-(double)offsetMeters;
-(id)_stringForColor:(unsigned long long)arg1 ;
@end

