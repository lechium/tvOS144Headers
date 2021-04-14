/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NRPBDeviceCollectionDiff;

@interface NRPBDeviceCollectionHistoryEntry : PBCodable <NSCopying> {

	double _date;
	long long _index;
	NRPBDeviceCollectionDiff* _diff;
	SCD_Struct_NR4 _has;

}

@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) long long index;                              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL hasDiff; 
@property (nonatomic,retain) NRPBDeviceCollectionDiff * diff;              //@synthesize diff=_diff - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)date;
-(long long)index;
-(id)dictionaryRepresentation;
-(void)setIndex:(long long)arg1 ;
-(void)setDate:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDate;
-(void)setHasIndex:(BOOL)arg1 ;
-(BOOL)hasIndex;
-(NRPBDeviceCollectionDiff *)diff;
-(void)setDiff:(NRPBDeviceCollectionDiff *)arg1 ;
-(void)setHasDate:(BOOL)arg1 ;
-(BOOL)hasDiff;
@end

