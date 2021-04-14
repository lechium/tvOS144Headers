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

@class NSMutableArray, NRPBSwitchRecordCollection;

@interface NRPBDeviceCollectionHistory : PBCodable <NSCopying> {

	long long _startIndex;
	NSMutableArray* _historys;
	NRPBSwitchRecordCollection* _switchRecords;
	SCD_Struct_NR2 _has;

}

@property (assign,nonatomic) BOOL hasStartIndex; 
@property (assign,nonatomic) long long startIndex;                                    //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * historys;                               //@synthesize historys=_historys - In the implementation block
@property (nonatomic,readonly) BOOL hasSwitchRecords; 
@property (nonatomic,retain) NRPBSwitchRecordCollection * switchRecords;              //@synthesize switchRecords=_switchRecords - In the implementation block
+(Class)historyType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStartIndex:(long long)arg1 ;
-(long long)startIndex;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(BOOL)hasStartIndex;
-(void)addHistory:(id)arg1 ;
-(unsigned long long)historysCount;
-(void)clearHistorys;
-(id)historyAtIndex:(unsigned long long)arg1 ;
-(void)setSwitchRecords:(NRPBSwitchRecordCollection *)arg1 ;
-(BOOL)hasSwitchRecords;
-(NSMutableArray *)historys;
-(void)setHistorys:(NSMutableArray *)arg1 ;
-(NRPBSwitchRecordCollection *)switchRecords;
@end

