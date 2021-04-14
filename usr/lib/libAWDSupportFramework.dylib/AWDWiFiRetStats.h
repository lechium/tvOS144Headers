/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiRetStats : PBCodable <NSCopying> {

	unsigned long long _retDuration;
	unsigned long long _rxDuration;
	unsigned long long _timestamp;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRetDuration; 
@property (assign,nonatomic) unsigned long long retDuration;              //@synthesize retDuration=_retDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRxDuration; 
@property (assign,nonatomic) unsigned long long rxDuration;               //@synthesize rxDuration=_rxDuration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setRetDuration:(unsigned long long)arg1 ;
-(void)setHasRetDuration:(BOOL)arg1 ;
-(BOOL)hasRetDuration;
-(void)setRxDuration:(unsigned long long)arg1 ;
-(void)setHasRxDuration:(BOOL)arg1 ;
-(BOOL)hasRxDuration;
-(unsigned long long)retDuration;
-(unsigned long long)rxDuration;
@end

