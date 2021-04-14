/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NWAWDLibnetcoreMPTCPStatsReport : PBCodable <NSCopying> {

	unsigned long long _mptcpAggregateAllBytes;
	unsigned long long _mptcpAggregateAttempt;
	unsigned long long _mptcpAggregateCellBytes;
	unsigned long long _mptcpBackToWiFi;
	unsigned long long _mptcpCellDenied;
	unsigned long long _mptcpCellProxy;
	unsigned long long _mptcpFirstPartyAggregateAttempt;
	unsigned long long _mptcpFirstPartyHandoverAttempt;
	unsigned long long _mptcpFirstPartyInteractiveAttempt;
	unsigned long long _mptcpHandoverAllBytes;
	unsigned long long _mptcpHandoverAttempts;
	unsigned long long _mptcpHandoverCellBytes;
	unsigned long long _mptcpHandoverCellSubflowFromWiFi;
	unsigned long long _mptcpHandoverWiFiSubflowFromCell;
	unsigned long long _mptcpHandshakeAggregateSuccess;
	unsigned long long _mptcpHandshakeAggregateSuccessFirstParty;
	unsigned long long _mptcpHandshakeHandoverSuccessCell;
	unsigned long long _mptcpHandshakeHandoverSuccessCellFirstParty;
	unsigned long long _mptcpHandshakeHandoverSuccessWiFi;
	unsigned long long _mptcpHandshakeHandoverSuccessWiFiFirstParty;
	unsigned long long _mptcpHandshakeInteractiveSuccess;
	unsigned long long _mptcpHandshakeInteractiveSuccessFirstParty;
	unsigned long long _mptcpHeuristicFallback;
	unsigned long long _mptcpHeuristicFallbackFirstParty;
	unsigned long long _mptcpInteractiveAllBytes;
	unsigned long long _mptcpInteractiveAttempt;
	unsigned long long _mptcpInteractiveCellBytes;
	unsigned long long _mptcpInteractiveCellUsage;
	unsigned long long _mptcpTriggeredCell;
	unsigned long long _mptcpWiFiProxy;
	SCD_Struct_NW1 _has;

}

@property (assign,nonatomic) BOOL hasMptcpHandoverAttempts; 
@property (assign,nonatomic) unsigned long long mptcpHandoverAttempts;                                    //@synthesize mptcpHandoverAttempts=_mptcpHandoverAttempts - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpInteractiveAttempt; 
@property (assign,nonatomic) unsigned long long mptcpInteractiveAttempt;                                  //@synthesize mptcpInteractiveAttempt=_mptcpInteractiveAttempt - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpAggregateAttempt; 
@property (assign,nonatomic) unsigned long long mptcpAggregateAttempt;                                    //@synthesize mptcpAggregateAttempt=_mptcpAggregateAttempt - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpFirstPartyHandoverAttempt; 
@property (assign,nonatomic) unsigned long long mptcpFirstPartyHandoverAttempt;                           //@synthesize mptcpFirstPartyHandoverAttempt=_mptcpFirstPartyHandoverAttempt - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpFirstPartyInteractiveAttempt; 
@property (assign,nonatomic) unsigned long long mptcpFirstPartyInteractiveAttempt;                        //@synthesize mptcpFirstPartyInteractiveAttempt=_mptcpFirstPartyInteractiveAttempt - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpFirstPartyAggregateAttempt; 
@property (assign,nonatomic) unsigned long long mptcpFirstPartyAggregateAttempt;                          //@synthesize mptcpFirstPartyAggregateAttempt=_mptcpFirstPartyAggregateAttempt - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpHeuristicFallback; 
@property (assign,nonatomic) unsigned long long mptcpHeuristicFallback;                                   //@synthesize mptcpHeuristicFallback=_mptcpHeuristicFallback - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpHeuristicFallbackFirstParty; 
@property (assign,nonatomic) unsigned long long mptcpHeuristicFallbackFirstParty;                         //@synthesize mptcpHeuristicFallbackFirstParty=_mptcpHeuristicFallbackFirstParty - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpHandshakeHandoverSuccessWiFi; 
@property (assign,nonatomic) unsigned long long mptcpHandshakeHandoverSuccessWiFi;                        //@synthesize mptcpHandshakeHandoverSuccessWiFi=_mptcpHandshakeHandoverSuccessWiFi - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpHandshakeHandoverSuccessCell; 
@property (assign,nonatomic) unsigned long long mptcpHandshakeHandoverSuccessCell;                        //@synthesize mptcpHandshakeHandoverSuccessCell=_mptcpHandshakeHandoverSuccessCell - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpHandshakeInteractiveSuccess; 
@property (assign,nonatomic) unsigned long long mptcpHandshakeInteractiveSuccess;                         //@synthesize mptcpHandshakeInteractiveSuccess=_mptcpHandshakeInteractiveSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpHandshakeAggregateSuccess; 
@property (assign,nonatomic) unsigned long long mptcpHandshakeAggregateSuccess;                           //@synthesize mptcpHandshakeAggregateSuccess=_mptcpHandshakeAggregateSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpHandshakeHandoverSuccessWiFiFirstParty; 
@property (assign,nonatomic) unsigned long long mptcpHandshakeHandoverSuccessWiFiFirstParty;              //@synthesize mptcpHandshakeHandoverSuccessWiFiFirstParty=_mptcpHandshakeHandoverSuccessWiFiFirstParty - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpHandshakeHandoverSuccessCellFirstParty; 
@property (assign,nonatomic) unsigned long long mptcpHandshakeHandoverSuccessCellFirstParty;              //@synthesize mptcpHandshakeHandoverSuccessCellFirstParty=_mptcpHandshakeHandoverSuccessCellFirstParty - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpHandshakeInteractiveSuccessFirstParty; 
@property (assign,nonatomic) unsigned long long mptcpHandshakeInteractiveSuccessFirstParty;               //@synthesize mptcpHandshakeInteractiveSuccessFirstParty=_mptcpHandshakeInteractiveSuccessFirstParty - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpHandshakeAggregateSuccessFirstParty; 
@property (assign,nonatomic) unsigned long long mptcpHandshakeAggregateSuccessFirstParty;                 //@synthesize mptcpHandshakeAggregateSuccessFirstParty=_mptcpHandshakeAggregateSuccessFirstParty - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpHandoverCellSubflowFromWiFi; 
@property (assign,nonatomic) unsigned long long mptcpHandoverCellSubflowFromWiFi;                         //@synthesize mptcpHandoverCellSubflowFromWiFi=_mptcpHandoverCellSubflowFromWiFi - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpHandoverWiFiSubflowFromCell; 
@property (assign,nonatomic) unsigned long long mptcpHandoverWiFiSubflowFromCell;                         //@synthesize mptcpHandoverWiFiSubflowFromCell=_mptcpHandoverWiFiSubflowFromCell - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpInteractiveCellUsage; 
@property (assign,nonatomic) unsigned long long mptcpInteractiveCellUsage;                                //@synthesize mptcpInteractiveCellUsage=_mptcpInteractiveCellUsage - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpHandoverCellBytes; 
@property (assign,nonatomic) unsigned long long mptcpHandoverCellBytes;                                   //@synthesize mptcpHandoverCellBytes=_mptcpHandoverCellBytes - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpInteractiveCellBytes; 
@property (assign,nonatomic) unsigned long long mptcpInteractiveCellBytes;                                //@synthesize mptcpInteractiveCellBytes=_mptcpInteractiveCellBytes - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpAggregateCellBytes; 
@property (assign,nonatomic) unsigned long long mptcpAggregateCellBytes;                                  //@synthesize mptcpAggregateCellBytes=_mptcpAggregateCellBytes - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpHandoverAllBytes; 
@property (assign,nonatomic) unsigned long long mptcpHandoverAllBytes;                                    //@synthesize mptcpHandoverAllBytes=_mptcpHandoverAllBytes - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpInteractiveAllBytes; 
@property (assign,nonatomic) unsigned long long mptcpInteractiveAllBytes;                                 //@synthesize mptcpInteractiveAllBytes=_mptcpInteractiveAllBytes - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpAggregateAllBytes; 
@property (assign,nonatomic) unsigned long long mptcpAggregateAllBytes;                                   //@synthesize mptcpAggregateAllBytes=_mptcpAggregateAllBytes - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpBackToWiFi; 
@property (assign,nonatomic) unsigned long long mptcpBackToWiFi;                                          //@synthesize mptcpBackToWiFi=_mptcpBackToWiFi - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpCellDenied; 
@property (assign,nonatomic) unsigned long long mptcpCellDenied;                                          //@synthesize mptcpCellDenied=_mptcpCellDenied - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpCellProxy; 
@property (assign,nonatomic) unsigned long long mptcpCellProxy;                                           //@synthesize mptcpCellProxy=_mptcpCellProxy - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpWiFiProxy; 
@property (assign,nonatomic) unsigned long long mptcpWiFiProxy;                                           //@synthesize mptcpWiFiProxy=_mptcpWiFiProxy - In the implementation block
@property (assign,nonatomic) BOOL hasMptcpTriggeredCell; 
@property (assign,nonatomic) unsigned long long mptcpTriggeredCell;                                       //@synthesize mptcpTriggeredCell=_mptcpTriggeredCell - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMptcpHandoverAttempts:(unsigned long long)arg1 ;
-(void)setHasMptcpHandoverAttempts:(BOOL)arg1 ;
-(BOOL)hasMptcpHandoverAttempts;
-(void)setMptcpInteractiveAttempt:(unsigned long long)arg1 ;
-(void)setHasMptcpInteractiveAttempt:(BOOL)arg1 ;
-(BOOL)hasMptcpInteractiveAttempt;
-(void)setMptcpAggregateAttempt:(unsigned long long)arg1 ;
-(void)setHasMptcpAggregateAttempt:(BOOL)arg1 ;
-(BOOL)hasMptcpAggregateAttempt;
-(void)setMptcpFirstPartyHandoverAttempt:(unsigned long long)arg1 ;
-(void)setHasMptcpFirstPartyHandoverAttempt:(BOOL)arg1 ;
-(BOOL)hasMptcpFirstPartyHandoverAttempt;
-(void)setMptcpFirstPartyInteractiveAttempt:(unsigned long long)arg1 ;
-(void)setHasMptcpFirstPartyInteractiveAttempt:(BOOL)arg1 ;
-(BOOL)hasMptcpFirstPartyInteractiveAttempt;
-(void)setMptcpFirstPartyAggregateAttempt:(unsigned long long)arg1 ;
-(void)setHasMptcpFirstPartyAggregateAttempt:(BOOL)arg1 ;
-(BOOL)hasMptcpFirstPartyAggregateAttempt;
-(void)setMptcpHeuristicFallback:(unsigned long long)arg1 ;
-(void)setHasMptcpHeuristicFallback:(BOOL)arg1 ;
-(BOOL)hasMptcpHeuristicFallback;
-(void)setMptcpHeuristicFallbackFirstParty:(unsigned long long)arg1 ;
-(void)setHasMptcpHeuristicFallbackFirstParty:(BOOL)arg1 ;
-(BOOL)hasMptcpHeuristicFallbackFirstParty;
-(void)setMptcpHandshakeHandoverSuccessWiFi:(unsigned long long)arg1 ;
-(void)setHasMptcpHandshakeHandoverSuccessWiFi:(BOOL)arg1 ;
-(BOOL)hasMptcpHandshakeHandoverSuccessWiFi;
-(void)setMptcpHandshakeHandoverSuccessCell:(unsigned long long)arg1 ;
-(void)setHasMptcpHandshakeHandoverSuccessCell:(BOOL)arg1 ;
-(BOOL)hasMptcpHandshakeHandoverSuccessCell;
-(void)setMptcpHandshakeInteractiveSuccess:(unsigned long long)arg1 ;
-(void)setHasMptcpHandshakeInteractiveSuccess:(BOOL)arg1 ;
-(BOOL)hasMptcpHandshakeInteractiveSuccess;
-(void)setMptcpHandshakeAggregateSuccess:(unsigned long long)arg1 ;
-(void)setHasMptcpHandshakeAggregateSuccess:(BOOL)arg1 ;
-(BOOL)hasMptcpHandshakeAggregateSuccess;
-(void)setMptcpHandshakeHandoverSuccessWiFiFirstParty:(unsigned long long)arg1 ;
-(void)setHasMptcpHandshakeHandoverSuccessWiFiFirstParty:(BOOL)arg1 ;
-(BOOL)hasMptcpHandshakeHandoverSuccessWiFiFirstParty;
-(void)setMptcpHandshakeHandoverSuccessCellFirstParty:(unsigned long long)arg1 ;
-(void)setHasMptcpHandshakeHandoverSuccessCellFirstParty:(BOOL)arg1 ;
-(BOOL)hasMptcpHandshakeHandoverSuccessCellFirstParty;
-(void)setMptcpHandshakeInteractiveSuccessFirstParty:(unsigned long long)arg1 ;
-(void)setHasMptcpHandshakeInteractiveSuccessFirstParty:(BOOL)arg1 ;
-(BOOL)hasMptcpHandshakeInteractiveSuccessFirstParty;
-(void)setMptcpHandshakeAggregateSuccessFirstParty:(unsigned long long)arg1 ;
-(void)setHasMptcpHandshakeAggregateSuccessFirstParty:(BOOL)arg1 ;
-(BOOL)hasMptcpHandshakeAggregateSuccessFirstParty;
-(void)setMptcpHandoverCellSubflowFromWiFi:(unsigned long long)arg1 ;
-(void)setHasMptcpHandoverCellSubflowFromWiFi:(BOOL)arg1 ;
-(BOOL)hasMptcpHandoverCellSubflowFromWiFi;
-(void)setMptcpHandoverWiFiSubflowFromCell:(unsigned long long)arg1 ;
-(void)setHasMptcpHandoverWiFiSubflowFromCell:(BOOL)arg1 ;
-(BOOL)hasMptcpHandoverWiFiSubflowFromCell;
-(void)setMptcpInteractiveCellUsage:(unsigned long long)arg1 ;
-(void)setHasMptcpInteractiveCellUsage:(BOOL)arg1 ;
-(BOOL)hasMptcpInteractiveCellUsage;
-(void)setMptcpHandoverCellBytes:(unsigned long long)arg1 ;
-(void)setHasMptcpHandoverCellBytes:(BOOL)arg1 ;
-(BOOL)hasMptcpHandoverCellBytes;
-(void)setMptcpInteractiveCellBytes:(unsigned long long)arg1 ;
-(void)setHasMptcpInteractiveCellBytes:(BOOL)arg1 ;
-(BOOL)hasMptcpInteractiveCellBytes;
-(void)setMptcpAggregateCellBytes:(unsigned long long)arg1 ;
-(void)setHasMptcpAggregateCellBytes:(BOOL)arg1 ;
-(BOOL)hasMptcpAggregateCellBytes;
-(void)setMptcpHandoverAllBytes:(unsigned long long)arg1 ;
-(void)setHasMptcpHandoverAllBytes:(BOOL)arg1 ;
-(BOOL)hasMptcpHandoverAllBytes;
-(void)setMptcpInteractiveAllBytes:(unsigned long long)arg1 ;
-(void)setHasMptcpInteractiveAllBytes:(BOOL)arg1 ;
-(BOOL)hasMptcpInteractiveAllBytes;
-(void)setMptcpAggregateAllBytes:(unsigned long long)arg1 ;
-(void)setHasMptcpAggregateAllBytes:(BOOL)arg1 ;
-(BOOL)hasMptcpAggregateAllBytes;
-(void)setMptcpBackToWiFi:(unsigned long long)arg1 ;
-(void)setHasMptcpBackToWiFi:(BOOL)arg1 ;
-(BOOL)hasMptcpBackToWiFi;
-(void)setMptcpCellDenied:(unsigned long long)arg1 ;
-(void)setHasMptcpCellDenied:(BOOL)arg1 ;
-(BOOL)hasMptcpCellDenied;
-(void)setMptcpCellProxy:(unsigned long long)arg1 ;
-(void)setHasMptcpCellProxy:(BOOL)arg1 ;
-(BOOL)hasMptcpCellProxy;
-(void)setMptcpWiFiProxy:(unsigned long long)arg1 ;
-(void)setHasMptcpWiFiProxy:(BOOL)arg1 ;
-(BOOL)hasMptcpWiFiProxy;
-(void)setMptcpTriggeredCell:(unsigned long long)arg1 ;
-(void)setHasMptcpTriggeredCell:(BOOL)arg1 ;
-(BOOL)hasMptcpTriggeredCell;
-(unsigned long long)mptcpHandoverAttempts;
-(unsigned long long)mptcpInteractiveAttempt;
-(unsigned long long)mptcpAggregateAttempt;
-(unsigned long long)mptcpFirstPartyHandoverAttempt;
-(unsigned long long)mptcpFirstPartyInteractiveAttempt;
-(unsigned long long)mptcpFirstPartyAggregateAttempt;
-(unsigned long long)mptcpHeuristicFallback;
-(unsigned long long)mptcpHeuristicFallbackFirstParty;
-(unsigned long long)mptcpHandshakeHandoverSuccessWiFi;
-(unsigned long long)mptcpHandshakeHandoverSuccessCell;
-(unsigned long long)mptcpHandshakeInteractiveSuccess;
-(unsigned long long)mptcpHandshakeAggregateSuccess;
-(unsigned long long)mptcpHandshakeHandoverSuccessWiFiFirstParty;
-(unsigned long long)mptcpHandshakeHandoverSuccessCellFirstParty;
-(unsigned long long)mptcpHandshakeInteractiveSuccessFirstParty;
-(unsigned long long)mptcpHandshakeAggregateSuccessFirstParty;
-(unsigned long long)mptcpHandoverCellSubflowFromWiFi;
-(unsigned long long)mptcpHandoverWiFiSubflowFromCell;
-(unsigned long long)mptcpInteractiveCellUsage;
-(unsigned long long)mptcpHandoverCellBytes;
-(unsigned long long)mptcpInteractiveCellBytes;
-(unsigned long long)mptcpAggregateCellBytes;
-(unsigned long long)mptcpHandoverAllBytes;
-(unsigned long long)mptcpInteractiveAllBytes;
-(unsigned long long)mptcpAggregateAllBytes;
-(unsigned long long)mptcpBackToWiFi;
-(unsigned long long)mptcpCellDenied;
-(unsigned long long)mptcpCellProxy;
-(unsigned long long)mptcpWiFiProxy;
-(unsigned long long)mptcpTriggeredCell;
@end

