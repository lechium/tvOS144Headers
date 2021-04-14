/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDWiFiDPSAWDLSnapshot, AWDWiFiDPSBTSnapshot, AWDWiFiDPSPerACTxCompletionSnapshot;

@interface AWDWiFiDPSSnapshot : PBCodable <NSCopying> {

	AWDWiFiDPSAWDLSnapshot* _awdlSnapshot;
	AWDWiFiDPSBTSnapshot* _btSnapshot;
	AWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotBE;
	AWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotBK;
	AWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotVI;
	AWDWiFiDPSPerACTxCompletionSnapshot* _txCompletionSnapshotVO;

}

@property (nonatomic,readonly) BOOL hasTxCompletionSnapshotBE; 
@property (nonatomic,retain) AWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotBE;              //@synthesize txCompletionSnapshotBE=_txCompletionSnapshotBE - In the implementation block
@property (nonatomic,readonly) BOOL hasTxCompletionSnapshotBK; 
@property (nonatomic,retain) AWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotBK;              //@synthesize txCompletionSnapshotBK=_txCompletionSnapshotBK - In the implementation block
@property (nonatomic,readonly) BOOL hasTxCompletionSnapshotVO; 
@property (nonatomic,retain) AWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotVO;              //@synthesize txCompletionSnapshotVO=_txCompletionSnapshotVO - In the implementation block
@property (nonatomic,readonly) BOOL hasTxCompletionSnapshotVI; 
@property (nonatomic,retain) AWDWiFiDPSPerACTxCompletionSnapshot * txCompletionSnapshotVI;              //@synthesize txCompletionSnapshotVI=_txCompletionSnapshotVI - In the implementation block
@property (nonatomic,readonly) BOOL hasBtSnapshot; 
@property (nonatomic,retain) AWDWiFiDPSBTSnapshot * btSnapshot;                                         //@synthesize btSnapshot=_btSnapshot - In the implementation block
@property (nonatomic,readonly) BOOL hasAwdlSnapshot; 
@property (nonatomic,retain) AWDWiFiDPSAWDLSnapshot * awdlSnapshot;                                     //@synthesize awdlSnapshot=_awdlSnapshot - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTxCompletionSnapshotBE:(AWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setTxCompletionSnapshotBK:(AWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setTxCompletionSnapshotVO:(AWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setTxCompletionSnapshotVI:(AWDWiFiDPSPerACTxCompletionSnapshot *)arg1 ;
-(void)setBtSnapshot:(AWDWiFiDPSBTSnapshot *)arg1 ;
-(void)setAwdlSnapshot:(AWDWiFiDPSAWDLSnapshot *)arg1 ;
-(BOOL)hasTxCompletionSnapshotBE;
-(BOOL)hasTxCompletionSnapshotBK;
-(BOOL)hasTxCompletionSnapshotVO;
-(BOOL)hasTxCompletionSnapshotVI;
-(BOOL)hasBtSnapshot;
-(BOOL)hasAwdlSnapshot;
-(AWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotBE;
-(AWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotBK;
-(AWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotVO;
-(AWDWiFiDPSPerACTxCompletionSnapshot *)txCompletionSnapshotVI;
-(AWDWiFiDPSBTSnapshot *)btSnapshot;
-(AWDWiFiDPSAWDLSnapshot *)awdlSnapshot;
@end

