/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HKCodableQuantitySeriesDatum : PBCodable <NSCopying> {

	double _timeInterval;
	double _value;
	float _duration;
	SCD_Struct_HK21 _has;

}

@property (assign,nonatomic) BOOL hasTimeInterval; 
@property (assign,nonatomic) double timeInterval;               //@synthesize timeInterval=_timeInterval - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) double value;                      //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) float duration;                    //@synthesize duration=_duration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)timeInterval;
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)dictionaryRepresentation;
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasValue:(BOOL)arg1 ;
-(BOOL)hasValue;
-(void)setTimeInterval:(double)arg1 ;
-(void)setHasTimeInterval:(BOOL)arg1 ;
-(BOOL)hasTimeInterval;
@end

