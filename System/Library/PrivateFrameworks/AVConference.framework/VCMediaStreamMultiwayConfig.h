/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class NSString, NSArray;

@interface VCMediaStreamMultiwayConfig : NSObject {

	NSString* _sessionId;
	NSString* _participantId;
	unsigned long long _remoteIDSParticipantID;
	unsigned _ssrc;
	unsigned _maxNetworkBitrate;
	unsigned _maxMediaBitrate;
	float _maxPacketsPerSecond;
	unsigned short _idsStreamID;
	unsigned _qualityIndex;
	unsigned _maxIDSStreamIdCount;
	unsigned short _repairedStreamID;
	unsigned _repairedMaxNetworkBitrate;
	BOOL _startOnDemand;
	BOOL _isOneToOne;
	SCD_Struct_VC177 _has;

}

@property (nonatomic,retain) NSString * sessionId;                                   //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,retain) NSString * participantId;                               //@synthesize participantId=_participantId - In the implementation block
@property (assign,nonatomic) unsigned long long remoteIDSParticipantID;              //@synthesize remoteIDSParticipantID=_remoteIDSParticipantID - In the implementation block
@property (assign,nonatomic) unsigned ssrc;                                          //@synthesize ssrc=_ssrc - In the implementation block
@property (assign,nonatomic) unsigned maxNetworkBitrate;                             //@synthesize maxNetworkBitrate=_maxNetworkBitrate - In the implementation block
@property (nonatomic,readonly) BOOL hasMaxNetworkBitrate; 
@property (assign,nonatomic) unsigned maxMediaBitrate;                               //@synthesize maxMediaBitrate=_maxMediaBitrate - In the implementation block
@property (nonatomic,readonly) BOOL hasMaxMediaBitrate; 
@property (assign,nonatomic) float maxPacketsPerSecond;                              //@synthesize maxPacketsPerSecond=_maxPacketsPerSecond - In the implementation block
@property (nonatomic,readonly) BOOL hasMaxPacketsPerSecond; 
@property (assign,nonatomic) unsigned short idsStreamID;                             //@synthesize idsStreamID=_idsStreamID - In the implementation block
@property (nonatomic,readonly) BOOL hasIdsStreamID; 
@property (assign,nonatomic) unsigned qualityIndex;                                  //@synthesize qualityIndex=_qualityIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasQualityIndex; 
@property (assign,nonatomic) unsigned maxIDSStreamIdCount;                           //@synthesize maxIDSStreamIdCount=_maxIDSStreamIdCount - In the implementation block
@property (nonatomic,readonly) BOOL hasMaxIDSStreamIdCount; 
@property (assign,nonatomic) unsigned short repairedStreamID;                        //@synthesize repairedStreamID=_repairedStreamID - In the implementation block
@property (nonatomic,readonly) BOOL hasRepairedStreamID; 
@property (assign,nonatomic) unsigned repairedMaxNetworkBitrate;                     //@synthesize repairedMaxNetworkBitrate=_repairedMaxNetworkBitrate - In the implementation block
@property (nonatomic,readonly) BOOL hasRepairedMaxNetworkBitrate; 
@property (assign,nonatomic) BOOL startOnDemand;                                     //@synthesize startOnDemand=_startOnDemand - In the implementation block
@property (nonatomic,readonly) NSArray * streamIds; 
@property (assign,nonatomic) BOOL isOneToOne;                                        //@synthesize isOneToOne=_isOneToOne - In the implementation block
-(void)dealloc;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(NSArray *)streamIds;
-(void)setMaxNetworkBitrate:(unsigned)arg1 ;
-(BOOL)hasMaxNetworkBitrate;
-(void)setMaxMediaBitrate:(unsigned)arg1 ;
-(BOOL)hasMaxMediaBitrate;
-(void)setMaxPacketsPerSecond:(float)arg1 ;
-(BOOL)hasMaxPacketsPerSecond;
-(void)setRepairedStreamID:(unsigned short)arg1 ;
-(BOOL)hasRepairedStreamID;
-(void)setRepairedMaxNetworkBitrate:(unsigned)arg1 ;
-(BOOL)hasRepairedMaxNetworkBitrate;
-(unsigned)ssrc;
-(void)setSsrc:(unsigned)arg1 ;
-(unsigned)maxNetworkBitrate;
-(unsigned)qualityIndex;
-(void)setQualityIndex:(unsigned)arg1 ;
-(unsigned)maxMediaBitrate;
-(float)maxPacketsPerSecond;
-(unsigned short)repairedStreamID;
-(unsigned)repairedMaxNetworkBitrate;
-(unsigned short)idsStreamID;
-(BOOL)hasIdsStreamID;
-(BOOL)isOneToOne;
-(NSString *)participantId;
-(unsigned)maxIDSStreamIdCount;
-(void)setMaxIDSStreamIdCount:(unsigned)arg1 ;
-(unsigned long long)remoteIDSParticipantID;
-(void)setRemoteIDSParticipantID:(unsigned long long)arg1 ;
-(BOOL)hasQualityIndex;
-(void)setIdsStreamID:(unsigned short)arg1 ;
-(BOOL)startOnDemand;
-(void)setStartOnDemand:(BOOL)arg1 ;
-(BOOL)hasMaxIDSStreamIdCount;
-(void)setParticipantId:(NSString *)arg1 ;
-(void)setIsOneToOne:(BOOL)arg1 ;
@end

