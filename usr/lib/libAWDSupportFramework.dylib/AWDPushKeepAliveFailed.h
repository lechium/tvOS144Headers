/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDPushKeepAliveFailed : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _currentGrowthStage;
	unsigned _dualChannelState;
	int _error;
	NSString* _guid;
	unsigned _keepAliveVersion;
	unsigned _lastKeepAliveInterval;
	int _linkQuality;
	unsigned _timeSinceConnected;
	unsigned _timeSinceLastSuccessfulKeepAlive;
	SCD_Struct_AW14 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                                        //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                                //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                                        //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) int error;                                              //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasDualChannelState; 
@property (assign,nonatomic) unsigned dualChannelState;                              //@synthesize dualChannelState=_dualChannelState - In the implementation block
@property (assign,nonatomic) BOOL hasKeepAliveVersion; 
@property (assign,nonatomic) unsigned keepAliveVersion;                              //@synthesize keepAliveVersion=_keepAliveVersion - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastSuccessfulKeepAlive; 
@property (assign,nonatomic) unsigned timeSinceLastSuccessfulKeepAlive;              //@synthesize timeSinceLastSuccessfulKeepAlive=_timeSinceLastSuccessfulKeepAlive - In the implementation block
@property (assign,nonatomic) BOOL hasLastKeepAliveInterval; 
@property (assign,nonatomic) unsigned lastKeepAliveInterval;                         //@synthesize lastKeepAliveInterval=_lastKeepAliveInterval - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceConnected; 
@property (assign,nonatomic) unsigned timeSinceConnected;                            //@synthesize timeSinceConnected=_timeSinceConnected - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentGrowthStage; 
@property (assign,nonatomic) unsigned currentGrowthStage;                            //@synthesize currentGrowthStage=_currentGrowthStage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(int)error;
-(void)setError:(int)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasError;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)linkQuality;
-(void)setLinkQuality:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)currentGrowthStage;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setConnectionType:(unsigned)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(unsigned)connectionType;
-(void)setHasError:(BOOL)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(BOOL)hasGuid;
-(NSString *)guid;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(void)setDualChannelState:(unsigned)arg1 ;
-(void)setHasDualChannelState:(BOOL)arg1 ;
-(BOOL)hasDualChannelState;
-(unsigned)dualChannelState;
-(void)setKeepAliveVersion:(unsigned)arg1 ;
-(void)setHasKeepAliveVersion:(BOOL)arg1 ;
-(BOOL)hasKeepAliveVersion;
-(void)setTimeSinceLastSuccessfulKeepAlive:(unsigned)arg1 ;
-(void)setHasTimeSinceLastSuccessfulKeepAlive:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastSuccessfulKeepAlive;
-(void)setLastKeepAliveInterval:(unsigned)arg1 ;
-(void)setHasLastKeepAliveInterval:(BOOL)arg1 ;
-(BOOL)hasLastKeepAliveInterval;
-(void)setTimeSinceConnected:(unsigned)arg1 ;
-(void)setHasTimeSinceConnected:(BOOL)arg1 ;
-(BOOL)hasTimeSinceConnected;
-(void)setCurrentGrowthStage:(unsigned)arg1 ;
-(void)setHasCurrentGrowthStage:(BOOL)arg1 ;
-(BOOL)hasCurrentGrowthStage;
-(unsigned)keepAliveVersion;
-(unsigned)timeSinceLastSuccessfulKeepAlive;
-(unsigned)lastKeepAliveInterval;
-(unsigned)timeSinceConnected;
@end

