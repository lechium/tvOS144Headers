/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiNWActivityTraffic : PBCodable <NSCopying> {

	unsigned long long _value;
	int _traffic;
	SCD_Struct_Wi7 _has;

}

@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned long long value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasTraffic; 
@property (assign,nonatomic) int traffic;                           //@synthesize traffic=_traffic - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)value;
-(void)setValue:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
-(BOOL)hasValue;
-(int)traffic;
-(void)setTraffic:(int)arg1 ;
-(void)setHasTraffic:(BOOL)arg1 ;
-(BOOL)hasTraffic;
-(id)trafficAsString:(int)arg1 ;
-(int)StringAsTraffic:(id)arg1 ;
@end

